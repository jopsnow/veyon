!define APP_NAME "Veyon"
!define COMP_NAME "Veyon Solutions"
!define WEB_SITE "https://veyon.io"
!define VERSION "4.1.8.2"
!define COPYRIGHT "2004-2019 Tobias Junghans / Veyon Solutions"
!define DESCRIPTION "Veyon Installer"
!define LICENSE_TXT "/home/jopper/veyon/COPYING"
!define INSTALLER_NAME "veyon-${VERSION}-win64-setup.exe"
!define MAIN_APP_EXE "veyon-master.exe"
!define INSTALL_TYPE "SetShellVarContext all"
!define REG_ROOT "HKLM"
!define REG_APP_PATH "Software\Microsoft\Windows\CurrentVersion\App Paths\${MAIN_APP_EXE}"
!define UNINSTALL_PATH "Software\Microsoft\Windows\CurrentVersion\Uninstall\${APP_NAME}"

######################################################################

VIProductVersion  "${VERSION}"
VIAddVersionKey "ProductName"  "${APP_NAME}"
VIAddVersionKey "CompanyName"  "${COMP_NAME}"
VIAddVersionKey "LegalCopyright"  "${COPYRIGHT}"
VIAddVersionKey "FileDescription"  "${DESCRIPTION}"
VIAddVersionKey "ProductVersion"  "${VERSION}"
VIAddVersionKey "FileVersion"  "${VERSION}"

######################################################################

SetCompressor /SOLID Lzma
Name "${APP_NAME}"
Caption "${APP_NAME} ${VERSION}"
OutFile "${INSTALLER_NAME}"
BrandingText "${APP_NAME} ${VERSION}"
XPStyle on
InstallDirRegKey "${REG_ROOT}" "${REG_APP_PATH}" ""
InstallDir "$PROGRAMFILES64\Veyon"
ShowInstDetails show
RequestExecutionLevel admin

######################################################################

!include "LogicLib.nsh"
!include "MUI2.nsh"
!include "FileFunc.nsh"

!define MUI_ABORTWARNING
!define MUI_UNABORTWARNING

!define MUI_WELCOMEFINISHPAGE_BITMAP "/home/jopper/veyon/nsis/welcome-page.bmp"
!define MUI_UNWELCOMEFINISHPAGE_BITMAP "/home/jopper/veyon/nsis/welcome-page.bmp" 

!define MUI_ICON "/home/jopper/veyon/nsis/installer.ico"
!define MUI_UNICON "/home/jopper/veyon/nsis/uninstaller.ico"
!define MUI_HEADERIMAGE
!define MUI_HEADERIMAGE_BITMAP "/home/jopper/veyon/nsis/header.bmp"
!define MUI_HEADERIMAGE_RIGHT

!define MUI_LANGDLL_REGISTRY_ROOT "${REG_ROOT}"
!define MUI_LANGDLL_REGISTRY_KEY "${UNINSTALL_PATH}"
!define MUI_LANGDLL_REGISTRY_VALUENAME "Installer Language"

!insertmacro MUI_PAGE_WELCOME

!insertmacro MUI_PAGE_LICENSE "${LICENSE_TXT}"

!insertmacro MUI_PAGE_DIRECTORY

!insertmacro MUI_PAGE_COMPONENTS

!insertmacro MUI_PAGE_INSTFILES

!define MUI_FINISHPAGE_RUN
!define MUI_FINISHPAGE_RUN_TEXT "Run Veyon Configurator now"
!define MUI_FINISHPAGE_RUN_FUNCTION "RunConfigurator"
!define MUI_FINISHPAGE_LINK "Support Veyon project with a donation"
!define MUI_FINISHPAGE_LINK_LOCATION "https://www.paypal.com/cgi-bin/webscr?item_name=Donation+to+Veyon+-+OpenSource+classroom+management&cmd=_donations&business=donate%40veyon.io"

!insertmacro MUI_PAGE_FINISH

!insertmacro MUI_UNPAGE_CONFIRM

!insertmacro MUI_UNPAGE_INSTFILES

!insertmacro MUI_UNPAGE_FINISH

!insertmacro MUI_LANGUAGE "English" ;first language is the default language
!insertmacro MUI_LANGUAGE "Afrikaans"
!insertmacro MUI_LANGUAGE "Albanian"
!insertmacro MUI_LANGUAGE "Arabic"
!insertmacro MUI_LANGUAGE "Basque"
!insertmacro MUI_LANGUAGE "Belarusian"
!insertmacro MUI_LANGUAGE "Bosnian"
!insertmacro MUI_LANGUAGE "Breton"
!insertmacro MUI_LANGUAGE "Bulgarian"
!insertmacro MUI_LANGUAGE "Catalan"
!insertmacro MUI_LANGUAGE "Croatian"
!insertmacro MUI_LANGUAGE "Czech"
!insertmacro MUI_LANGUAGE "Danish"
!insertmacro MUI_LANGUAGE "Dutch"
!insertmacro MUI_LANGUAGE "Esperanto"
!insertmacro MUI_LANGUAGE "Estonian"
!insertmacro MUI_LANGUAGE "Farsi"
!insertmacro MUI_LANGUAGE "Finnish"
!insertmacro MUI_LANGUAGE "French"
!insertmacro MUI_LANGUAGE "Galician"
!insertmacro MUI_LANGUAGE "German"
!insertmacro MUI_LANGUAGE "Greek"
!insertmacro MUI_LANGUAGE "Hebrew"
!insertmacro MUI_LANGUAGE "Hungarian"
!insertmacro MUI_LANGUAGE "Icelandic"
!insertmacro MUI_LANGUAGE "Indonesian"
!insertmacro MUI_LANGUAGE "Irish"
!insertmacro MUI_LANGUAGE "Italian"
!insertmacro MUI_LANGUAGE "Japanese"
!insertmacro MUI_LANGUAGE "Korean"
!insertmacro MUI_LANGUAGE "Kurdish"
!insertmacro MUI_LANGUAGE "Latvian"
!insertmacro MUI_LANGUAGE "Lithuanian"
!insertmacro MUI_LANGUAGE "Luxembourgish"
!insertmacro MUI_LANGUAGE "Macedonian"
!insertmacro MUI_LANGUAGE "Malay"
!insertmacro MUI_LANGUAGE "Mongolian"
!insertmacro MUI_LANGUAGE "Norwegian"
!insertmacro MUI_LANGUAGE "NorwegianNynorsk"
!insertmacro MUI_LANGUAGE "Polish"
!insertmacro MUI_LANGUAGE "Portuguese"
!insertmacro MUI_LANGUAGE "PortugueseBR"
!insertmacro MUI_LANGUAGE "Romanian"
!insertmacro MUI_LANGUAGE "Russian"
!insertmacro MUI_LANGUAGE "Serbian"
!insertmacro MUI_LANGUAGE "SerbianLatin"
!insertmacro MUI_LANGUAGE "SimpChinese"
!insertmacro MUI_LANGUAGE "Slovak"
!insertmacro MUI_LANGUAGE "Slovenian"
!insertmacro MUI_LANGUAGE "Spanish"
!insertmacro MUI_LANGUAGE "SpanishInternational"
!insertmacro MUI_LANGUAGE "Swedish"
!insertmacro MUI_LANGUAGE "Thai"
!insertmacro MUI_LANGUAGE "TradChinese"
!insertmacro MUI_LANGUAGE "Turkish"
!insertmacro MUI_LANGUAGE "Ukrainian"
!insertmacro MUI_LANGUAGE "Uzbek"
!insertmacro MUI_LANGUAGE "Welsh"

!insertmacro MUI_RESERVEFILE_LANGDLL

######################################################################

Section "Veyon Service"
SectionIn RO
${INSTALL_TYPE}
ExecWait '"$INSTDIR\veyon-ctl.exe" service unregister'
Delete "$INSTDIR\*.dll"
Delete "$INSTDIR\install-interception.exe"
Delete "$INSTDIR\plugins\*.dll"
RmDir /r "$INSTDIR\plugins"
SetOverwrite on
SetOutPath "$INSTDIR"
# core components
File "veyon-server.exe"
File "veyon-service.exe"
File "veyon-configurator.exe"
File "veyon-ctl.exe"
File "veyon-worker.exe"
File "*.dll"
File "LICENSE.TXT"
File "README.TXT"
# plugins
SetOutPath "$INSTDIR\plugins"
File "plugins/*.dll"
# translations
SetOutPath "$INSTDIR\translations"
File "translations/*.qm"
# QCA plugins
SetOutPath "$INSTDIR\crypto"
File "crypto/*.dll"
# Qt platform plugin
SetOutPath "$INSTDIR\platforms"
File "platforms/qwindows.dll"
# interception driver
SetOutPath "$INSTDIR\interception"
File "interception/*"
# configuration
ExecWait '"$INSTDIR\veyon-ctl.exe" service register'
ExecWait '"$INSTDIR\veyon-ctl.exe" config set Network/FirewallExceptionEnabled 1'
ExecWait '"$INSTDIR\veyon-ctl.exe" config set Service/SoftwareSASEnabled 1'
# disable forced guest logon as otherwise logon authentication fails
WriteRegDWORD ${REG_ROOT} "SYSTEM\CurrentControlSet\Control\Lsa"  "ForceGuest" "0"
${GetParameters} $R0
${GetOptions} $R0 "/ApplyConfig=" $R1
${If} $R1 != ""
  ClearErrors
  ExecWait '"$INSTDIR\veyon-ctl.exe" config import "$R1"' $0
  ${If} $0 != 0
	   MessageBox MB_OK|MB_ICONSTOP "Could not apply specified configuration file!"
  ${EndIf}
${EndIf}
ExecWait '"$INSTDIR\veyon-ctl.exe" service start'
SectionEnd

Section "Veyon Master" SEC_MASTER
${INSTALL_TYPE}
SetOutPath "$INSTDIR"
File "veyon-master.exe"

${GetParameters} $R0
${GetOptions} $R0 "/NoStartMenuFolder" $R1
${If} ${Errors}
CreateDirectory "$SMPROGRAMS\Veyon"
CreateShortCut "$SMPROGRAMS\Veyon\Veyon Master.lnk" "$INSTDIR\${MAIN_APP_EXE}"
${EndIf}
CreateShortCut "$DESKTOP\Veyon Master.lnk" "$INSTDIR\${MAIN_APP_EXE}"
SectionEnd

Function RunConfigurator
	Exec '"$INSTDIR\veyon-configurator.exe"'
FunctionEnd


######################################################################

Function .onInit
${GetParameters} $R0
${GetOptions} $R0 "/NoMaster" $R1
${IfNot} ${Errors}
  !insertmacro UnselectSection ${SEC_MASTER}
${EndIf}
UserInfo::GetAccountType
pop $0
${If} $0 != "admin"
	MessageBox mb_iconstop "Please run the installer with administrative rights!"
	SetErrorLevel 740 ;ERROR_ELEVATION_REQUIRED
	Quit
${EndIf}
FunctionEnd

######################################################################

Section -Icons_Reg
SetOutPath "$INSTDIR"
WriteUninstaller "$INSTDIR\uninstall.exe"

${GetParameters} $R0
${GetOptions} $R0 "/NoStartMenuFolder" $R1
${If} ${Errors}
CreateDirectory "$SMPROGRAMS\Veyon"
CreateShortCut "$SMPROGRAMS\Veyon\Veyon Configurator.lnk" "$INSTDIR\veyon-configurator.exe"
CreateShortCut "$SMPROGRAMS\Veyon\Uninstall Veyon.lnk" "$INSTDIR\uninstall.exe"
WriteIniStr "$INSTDIR\Veyon website.url" "InternetShortcut" "URL" "${WEB_SITE}"
CreateShortCut "$SMPROGRAMS\Veyon\Veyon Website.lnk" "$INSTDIR\Veyon website.url"
${EndIf}

WriteRegStr ${REG_ROOT} "${REG_APP_PATH}" "" "$INSTDIR\${MAIN_APP_EXE}"
WriteRegStr ${REG_ROOT} "${UNINSTALL_PATH}"  "DisplayName" "Veyon"
WriteRegStr ${REG_ROOT} "${UNINSTALL_PATH}"  "UninstallString" "$INSTDIR\uninstall.exe"
WriteRegStr ${REG_ROOT} "${UNINSTALL_PATH}"  "DisplayIcon" "$INSTDIR\${MAIN_APP_EXE}"
WriteRegStr ${REG_ROOT} "${UNINSTALL_PATH}"  "DisplayVersion" "${VERSION}"
WriteRegStr ${REG_ROOT} "${UNINSTALL_PATH}"  "Publisher" "${COMP_NAME}"
WriteRegStr ${REG_ROOT} "${UNINSTALL_PATH}"  "URLInfoAbout" "${WEB_SITE}"
SectionEnd

######################################################################

Section Uninstall
${INSTALL_TYPE}

ExecWait '"$INSTDIR\veyon-ctl.exe" config set Service/SoftwareSASEnabled 0'
ExecWait '"$INSTDIR\veyon-ctl.exe" config set Network/FirewallExceptionEnabled 0'
ExecWait '"$INSTDIR\veyon-ctl.exe" service unregister'
ExecWait '"$INSTDIR\interception\install-interception.exe" /uninstall'
# make sure the service is stopped and all file handles are released
Sleep 2000

${GetParameters} $R0
${GetOptions} $R0 "/ClearConfig" $R1
${IfNot} ${Errors}
	ExecWait '"$INSTDIR\veyon-ctl.exe" config clear'
${EndIf}

Delete "$INSTDIR\*.exe"
Delete "$INSTDIR\*.dll"
Delete "$INSTDIR\*.TXT"
Delete "$INSTDIR\*.url"
RmDir /r "$INSTDIR\crypto"
RmDir /r "$INSTDIR\plugins"
RmDir /r "$INSTDIR\platforms"
RmDir /r "$INSTDIR\translations"
RmDir /r "$INSTDIR\interception"

RmDir "$INSTDIR"

Delete "$SMPROGRAMS\Veyon\Veyon Master.lnk"
Delete "$SMPROGRAMS\Veyon\Veyon Configurator.lnk"
Delete "$SMPROGRAMS\Veyon\Uninstall Veyon.lnk"
Delete "$SMPROGRAMS\Veyon\Veyon Website.lnk"
RmDir "$SMPROGRAMS\Veyon"

Delete "$DESKTOP\Veyon Master.lnk"

DeleteRegKey ${REG_ROOT} "${REG_APP_PATH}"
DeleteRegKey ${REG_ROOT} "${UNINSTALL_PATH}"
SectionEnd

######################################################################

Function un.onInit
!insertmacro MUI_UNGETLANGUAGE
FunctionEnd

######################################################################

