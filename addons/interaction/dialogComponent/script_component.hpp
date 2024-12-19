#include "..\script_component.hpp"

#define DIALOG_NAME         "dzn_XPI_Menu"
#define DIALOG_ID           155010
#define START_CTRL_ID       10000
#define DIALOG_SHOW_TIME    0.15

#define LINE_HEIGHT_OFFSET  0.005
#define SAFEZONE_ASPECT_RATIO (safeZoneH / safeZoneW)
#define BUTTON_OFFSET 0.002

// Defaults
#define BG_COLOR_RGBA        [0,0,0,0.6]
#define HEADER_BG_COLOR_RGBA (["GUI", "BCG_RGB"] call BIS_fnc_displayColorGet)
#define ITEM_BG_COLOR_RGBA   [0,0,0,0.7]
#define NO_BG_COLOR_RGBA     [0,0,0,0]

#define TEXT_COLOR_RGBA     [1, 1, 1, 1]
#define TEXT_FONT           "PuristaMedium"
#define TEXT_FONT_SIZE      0.04

// Some tackles
//#define xDEBUG true
#ifdef xDEBUG
    #define LOG_PREFIX "(dzn_XPI_DialogComponent) "
    #define LOG_ diag_log parseText format [LOG_PREFIX +
    #define EOL ]
#else
    #define LOG_PREFIX
    #define LOG_ comment format [
    #define EOL ]
#endif

#undef FNC_SUBPATH
#define FNC_SUBPATH dialogComponent
#define A(NAME) Q(NAME)

// Attributes
#define L(X) toLowerANSI Q(X)
#define A_TYPE L(type)
#define A_FONT L(font)
#define A_SIZE L(size)
#define A_COLOR L(color)
#define A_COLOR_ACTIVE L(colorActive)
#define A_BG L(bg)
#define A_H L(h)
#define A_W L(w)
#define A_X L(x)
#define A_Y L(y)
#define A_ENABLED L(enabled)
#define A_TITLE L(title)
#define A_ICON L(icon)
#define A_ICON_COLOR L(iconColor)
#define A_ICON_COLOR_ACTIVE L(iconColorActive)
#define A_ICON_RIGHT L(iconRight)
#define A_ICON_RIGHT_COLOR L(iconRightColor)
#define A_ICON_RIGHT_COLOR_ACTIVE L(iconRightColorActive)
#define A_CALLBACK L(callback)
#define A_CALLBACK_ARGS L(callbackArgs)
#define A_TOOLTIP L(tooltip)
#define A_EVENTS L(events)
#define A_TAG L(tag)
#define A_TEXT_RIGHT L(textRight)
#define A_TEXT_RIGHT_COLOR L(textRightColor)
#define A_TEXT_RIGHT_COLOR_ACTIVE L(textRightColorActive)
#define A_CLOSE_BTN L(closeButton)

// Control classes
#define RSC_GROUP "RscControlsGroupNoScrollbars"
#define RSC_BUTTON_PICTURE "ctrlButtonPictureKeepAspect"
#define RSC_BG "RscText"
#define RSC_HEADER "RscStructuredText"
#define RSC_LABEL "RscStructuredText"
#define RSC_BUTTON "RscButtonMenuOK"


// Types registration/Parser/Render
#define PARSING_APPLY_ATTRIBUTES _cob call [F(MergeAttributes), [_item, _attrs]]


#define SET_POSITION(CTRL,ITEM,X,Y,W,H) \
    LOG_ "[render.Position] Auto: x=%1, y=%2, w=%3, h=%4", X, Y, W, H EOL; \
    LOG_ "[render.Position] By props: x=%1, y=%2, w=%3, h=%4", ITEM getOrDefault [A_X, X], ITEM getOrDefault [A_Y, Y], W, H  EOL; \
    CTRL ctrlSetPosition [ \
        ITEM getOrDefault [A_X, X], ITEM getOrDefault [A_Y, Y], \
        W, H \
    ]; \
    CTRL ctrlCommit 0

#define SET_ATTRIBURES(CTRL) \
    CTRL ctrlSetTextColor (_item get A_COLOR); \
    CTRL ctrlSetFont (_item get A_FONT); \
    CTRL ctrlSetFontHeight (_item get A_SIZE); \
    CTRL ctrlSetBackgroundColor (_item get A_BG); \
    CTRL ctrlSetTooltip (_item getOrDefault [A_TOOLTIP, ""])


#define REGISTER_AS_INPUT _ctrl setVariable [Q(isInput), true]

//
#define PICTURE_CLOSE "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa"
