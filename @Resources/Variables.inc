[Variables]
; ---------------------------------------------
; TYPOGRAPHY STYLES
; ---------------------------------------------
TextHeaderFont=Segoe UI Light
TextHeaderSize=34

TextSubheaderFont=Segoe UI Light
TextSubheaderSize=26

TextSemilightFont=Segoe UI Semilight
TextSemilightSize=18

TextSubtitleFont=Segoe UI Regular
TextSubtitleSize=14.5

TextBaseFont=Segoe UI Semibold
TextBaseSize=10.5

TextBodyFont=Segoe UI Regular
TextBodySize=10.5

TextCaptionFont=Segoe UI Regular
TextCaptionSize=9

; ---------------------------------------------
; THEME STYLES
; ---------------------------------------------
LightThemeBackground=255,255,255,192
LightThemeSettingsBackground=255,255,255,255
LightThemeTextColour=0,0,0,255
LightThemeGreyHover=255,255,255,255
LightThemeGreyAccent=100,100,100,255
LightThemeImageType="-light"

DarkThemeBackground=0,0,0,192
DarkThemeSettingsBackground=0,0,0,255
DarkThemeTextColour=255,255,255,255
DarkThemeGreyHover=31,31,31,255
DarkThemeGreyAccent=100,100,100,255
DarkThemeImageType=""

CurrentThemeBackground=#DarkThemeBackground#
CurrentThemeSettingsBackground=#DarkThemeSettingsBackground#
CurrentThemeTextColour=#DarkThemeTextColour#
CurrentThemeGreyHover=#DarkThemeGreyHover#
CurrentThemeGreyAccent=#DarkThemeGreyAccent#
CurrentThemeImageType=#DarkThemeImageType#

; ---------------------------------------------
; CLOCK VARIABLES
; ---------------------------------------------
TimeFormat=%H:%M
DateFormat=%A %#d %B

; ---------------------------------------------
; CPU VARIABLES
; ---------------------------------------------
HWiNFO_CPUNameSensorID=0xf0000300
HWiNFO_CPUNameSensorInstance=0x0
HWiNFO_CPUUsage=0x7000005
HWiNFO_CPUCore0Clock=0x6000000

HWiNFO_CPUDTSSensorID=0xf0000400
HWiNFO_CPUDTSSensorInstance=0x0
HWiNFO_CPUTemperature=0x10000ff

; ---------------------------------------------
; DRIVE VARIABLES
; ---------------------------------------------
HWiNFO_Drive1_NameSensorID=0xf0000101
HWiNFO_Drive1_NameSensorInstance=0x0
HWiNFO_Drive1_TotalActivityID=0x7000002
HWiNFO_Drive1_ReadRateID=0x8000000
HWiNFO_Drive1_WriteRateID=0x8000001
HWiNFO_Drive1_ReadTotalID=0x8000002
HWiNFO_Drive1_WriteTotalID=0x8000003

HWiNFO_Drive2_NameSensorID=0xf0000101
HWiNFO_Drive2_NameSensorInstance=0x1
HWiNFO_Drive2_TotalActivityID=0x7000002
HWiNFO_Drive2_ReadRateID=0x8000000
HWiNFO_Drive2_WriteRateID=0x8000001
HWiNFO_Drive2_ReadTotalID=0x8000002
HWiNFO_Drive2_WriteTotalID=0x8000003

HWiNFO_Drive3_NameSensorID=0xf0000101
HWiNFO_Drive3_NameSensorInstance=0x0
HWiNFO_Drive3_TotalActivityID=0x7000002
HWiNFO_Drive3_ReadRateID=0x8000000
HWiNFO_Drive3_WriteRateID=0x8000001
HWiNFO_Drive3_ReadTotalID=0x8000002
HWiNFO_Drive3_WriteTotalID=0x8000003

; ---------------------------------------------
; GPU VARIABLES
; ---------------------------------------------
HWiNFO_GPU_NameSensorID=0xe0001800
HWiNFO_GPU_NameSensorInstance=0x20
HWiNFO_GPU_Utilisation=0x7000000
HWiNFO_GPU_D3DUsage=0x7000001
HWiNFO_GPU_D3DMemory=0x8000001
HWiNFO_GPU_ThermalDiode=0x1000000
GPU_Memory=3072

; ---------------------------------------------
; WEATHER VARIABLES
; ---------------------------------------------
WeatherDegrees=metric
WeatherAPIKey=bad671f9f963b25fdfe5d626eab04844

; ---------------------------------------------
; NEWS VARIABLES
; ---------------------------------------------
NewsRSSFeed0=http://feeds.skynews.com/feeds/rss/home.xml
NewsRSSFeed1=http://feeds.skynews.com/feeds/rss/world.xml
NewsRSSFeed2=http://feeds.marketwatch.com/marketwatch/topstories/
NewsRSSFeed3=https://www.techradar.com/uk/rss
NewsRSSFeed4=https://api.foxsports.com/v1/rss?partnerKey=zBaFxRyGKCfxBagJG9b8pqLyndmvo7UU

; ---------------------------------------------
; SETTINGS VARIABLES
; ---------------------------------------------
SelectedDrive=Drive1
WeatherCity=London