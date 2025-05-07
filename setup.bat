@echo off

rem echo installing GNU Make...
rem winget install -e --id GnuWin32.Make
rem echo Installing CMake
rem winget install -e --id Kitware.CMake

echo Installing VS Code Extensions...

rem Force reinstall ms-vscode.cpptools-extension-pack
call code --install-extension ms-vscode.cpptools-extension-pack --force

rem Force reinstall platformio.platformio-ide
call code --install-extension platformio.platformio-ide --force

rem Force reinstall tal7aouy.icons
call code --install-extension tal7aouy.icons --force

echo Installation Complete.
pause
