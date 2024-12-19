#define TITLE "dzn eXtended Pointer Interactions"
#define TITLE_PREFIX dzn eXtended Pointer Interactions
#define ADDON_TITLE TITLE_PREFIX - gADDON

#define Q(s) #s

#define gADDON main
#define gADDON_NAME PREFIX##_##gADDON

#define gADDON_PATH \MAINPREFIX\PREFIX\addons\gADDON

#define gICON_PATH(ICON) \MAINPREFIX\PREFIX\addons\gADDON\ui\##ICON##.paa
#define ICON_PATH(ICON) Q(gICON_PATH(ICON))

#define ICONS(ICON) \
	{ \
		Q(\MAINPREFIX\PREFIX\addons\gADDON\ui\##ICON##_OFF.paa), \
		Q(\MAINPREFIX\PREFIX\addons\gADDON\ui\##ICON##_ON.paa) \
	}
