ASDG_RIFLE_TYPE = 10
ASDG_PISTOL_TYPE = 20

CONFIG_ENTRY = '$item = 1;'

# --- CfgWeapons tempaltes
CONFIG_CLASS_TEMPLATE = '''
class $class: $parent
{
    scope=$scope;
    $xpi
    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        $pointer
        $flashlight
    };
};
'''

XPI_TEMPLATE = '''class dzn_XPI
    {
        bundle="$xpi_bundle";
        type=Q($xpi_type);
        mode=Q($xpi_mode);
    };
'''

POINTER_TEMPLATE = "$pointer($pos,$dir);"
FLASHLIGHT_TEMPLATE = "$flashlight($pos,$dir);"

POINTER_DEFAULT = "class Pointer {};"
FLASHLIGHT_DEFAULT = "class FlashLight {};"


# --- CfgDznXPI classes
XPI_CFG_BUNDLE = '''
class $bundle
{
    $items
};
'''

# --- ASDG Rails classes

# --- Filesnames
FILE_CFG_PATCHES_ITEMLIST = "CfgPatches_weapons.hpp"
FILE_CFG_WEAPONS_CLASSES = "CfgWeapons_items.hpp"
FILE_CFG_DZN_XPI_BUNDLES = "CfgDznXPI_bundles.hpp"
FILE_ASDG_RIFLE_ITEMS = "asdg_rifle_rails.hpp"
FILE_ASDG_PISTOL_ITEMS = "asdg_pistol_rails.hpp"
