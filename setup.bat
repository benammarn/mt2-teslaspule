@echo off

rem echo installing GNU Make...
rem winget install -e --id GnuWin32.Make
rem echo Installing CMake
rem winget install -e --id Kitware.CMake

echo Installing VS Code Extensions...

rem Install ms-vscode.cpptools-extension-pack
code --install-extension ms-vscode.cpptools-extension-pack

rem Install platformio.platformio-ide
code --install-extension platformio.platformio-ide

rem Install tal7aouy.icons
code --install-extension tal7aouy.icons

echo Installation Complete.
pause
