@echo off
cd %~dp0../

echo == Launching mGBA ==

set MGBA_PATH=F:\Emulation\mGBA.exe
set ROM_PATH=%cd%\pokeemerald.gba

echo Launching: "%MGBA_PATH%" -g "%ROM_PATH%"
start "" "%MGBA_PATH%" "%ROM_PATH%"