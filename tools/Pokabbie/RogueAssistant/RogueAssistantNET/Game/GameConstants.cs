﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RogueAssistantNET.Game
{
	public class GameConstants
	{
		public const uint RomAddress = 0x08000000;

		public const uint GFHeaderAddress = RomAddress + 0x100;

		public const uint PlayerNameLength = 7; // TODO - Move into runtime

		public const uint PokemonNameLength = 10;

		public const uint ItemNameLength = 14;
	}

	public enum GameCommandCode
	{
		Echo,
		ReadConstant,
		BeginMultiplayerHost,
		BeginMultiplayerClient,
		EndMultiplayer,
		GetSpeciesName,
		GetItemName,
	}
}