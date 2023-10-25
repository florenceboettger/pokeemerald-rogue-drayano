﻿using RogueAssistantNET.Game.Commands.Connection;
using RogueAssistantNET.Game.Commands.Game;
using System;
using System.Buffers.Binary;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RogueAssistantNET.Game
{
	public enum GameAssistantState
	{
		None,
		TitleScreen,
		Overworld,
		Battle,
	}

	public enum GameAssistantSubstate
	{
		None,
		TitleScreen_Intro,
		TitleScreen_PressStart,
		TitleScreen_MainMenu,
		Overworld_Movement,
		Overworld_Locked,
		Battle_Init,
		Battle_ChooseAction,
		Battle_ChooseMove,
		Battle_ChooseItem,
		Battle_ChoosePokemon,
		Battle_TurnActions,
		Battle_End,
	}

	public enum GameRequestState
	{
		None,
		MultiplayerHost,
		MultiplayerJoin
	}

	public enum GameStateConstant
	{
		GameAssistantStateAddress,
		GameAssistantSubstateAddress,
		GameRequestStateAddress,

		SaveBlock1Ptr,
		SaveBlock2Ptr,
		NetPlayerCapacity,
		NetPlayerProfileAddress,
		NetPlayerProfileSize,
		NetPlayerStateAddress,
		NetPlayerStateSize,

		DebugMainAddress,
		DebugQueryUncollapsedBufferPtr,
		DebugQueryUncollapsedCapacity,
		DebugQueryCollapsedBufferPtr,
		DebugQueryCollapsedSizePtr,
	}

	public class GameState
	{
		private GameConnection m_Connection;
		private bool m_FirstUpdate = true;

		private ushort m_CommandTokenCounter = 0;
		private Dictionary<GameStateConstant, uint> m_CachedConstants = new Dictionary<GameStateConstant, uint>();
		private Dictionary<ushort, string> m_CachedSpeciesNames = new Dictionary<ushort, string>();
		private Dictionary<ushort, string> m_CachedItemNames = new Dictionary<ushort, string>();

		private byte[] m_PlayerNameData;
		private byte m_PlayerAvatar;
		private GameAssistantState m_AssistantState;
		private GameAssistantSubstate m_AssistantSubstate;
		private GameRequestState m_RequestState;

		public GameState(GameConnection connection)
		{
			m_Connection = connection;
			m_CommandTokenCounter = connection.ReadU16(connection.Header.RogueOutputBufferAddress);
		}

		public string PlayerNameStr
		{
			get => m_PlayerNameData != null ? GameString.ConvertBytes(m_PlayerNameData, 0, (uint)m_PlayerNameData.Length) : "";
		}
		public byte[] PlayerNameBytes
		{
			get => m_PlayerNameData;
		}

		public GameAssistantState AssistantState
		{
			get => m_AssistantState;
		}

		public GameAssistantSubstate AssistantSubstate
		{
			get => m_AssistantSubstate;
		}

		public GameRequestState RequestState
		{
			get => m_RequestState;
		}

		public byte PlayerAvatar
		{
			get => m_PlayerAvatar;
		}

		public void Update()
		{
			if(m_FirstUpdate)
			{
				m_FirstUpdate = false;
				RefreshInfrequentData();
			}

			m_AssistantState = (GameAssistantState)m_Connection.ReadU16(GetConstantValue(GameStateConstant.GameAssistantStateAddress));
			m_AssistantSubstate = (GameAssistantSubstate)m_Connection.ReadU16(GetConstantValue(GameStateConstant.GameAssistantSubstateAddress));
			m_RequestState = (GameRequestState)m_Connection.ReadU16(GetConstantValue(GameStateConstant.GameRequestStateAddress));

			// Always do a read to check we're still connection
			m_Connection.ReadU8(GameConstants.GFHeaderAddress);

        }

		public void RefreshInfrequentData()
		{
			uint saveBlock2PtrAddress = GetConstantValue(GameStateConstant.SaveBlock2Ptr);
			uint saveBlock2Address = m_Connection.ReadU32(saveBlock2PtrAddress);

			m_PlayerNameData = m_Connection.ReadBytes(saveBlock2Address + 0, GameConstants.PlayerNameLength + 1);
			m_PlayerAvatar = m_Connection.ReadU8(saveBlock2Address + 8);
		}

		public ushort NextCommandToken()
		{
			++m_CommandTokenCounter;

			// 0 reserved for NULL token
			if (m_CommandTokenCounter == 0)
				m_CommandTokenCounter = 1;

			return m_CommandTokenCounter;
		}

		public uint GetConstantValue(GameStateConstant constant)
		{
			uint value;
			if (m_CachedConstants.TryGetValue(constant, out value))
				return value;

			m_Connection.WriteU16(m_Connection.GameCommandArgAddress, (ushort)constant);
			uint readAddress = m_Connection.SendReliable(GameCommandCode.ReadConstant);

			value = m_Connection.ReadU32(readAddress);
			m_CachedConstants[constant] = value;
			return value;
		}

		public void ClearConstantValueCache(GameStateConstant constant)
		{
			m_CachedConstants.Remove(constant);
		}

		public string GetSpeciesName(ushort species)
		{
			if (m_CachedSpeciesNames.TryGetValue(species, out string value))
				return value;

			// add placeholder and then request from game
			value = "[???]";
			m_CachedSpeciesNames.Add(species, value);

			m_Connection.EnqueueCommand(new GetSpeciesNameCommand(species)).Then((GetSpeciesNameCommand result) =>
			{
				m_CachedSpeciesNames[species] = result.Result;
			});

			return value;
		}

		public string GetItemName(ushort item)
		{
			if (m_CachedItemNames.TryGetValue(item, out string value))
				return value;

			// add placeholder and then request from game
			value = "[???]";
			m_CachedItemNames.Add(item, value);

			m_Connection.EnqueueCommand(new GetItemNameCommand(item)).Then((GetItemNameCommand result) =>
			{
				m_CachedItemNames[item] = result.Result;
			});

			return value;
		}
	}
}