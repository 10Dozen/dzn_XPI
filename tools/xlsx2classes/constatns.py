ASDG_RIFLE_TYPE = 10
ASDG_PISTOL_TYPE = 20
ASDG_RHS_AK_BARREL = 100
ASDG_RHS_AK_ZENITCO_FULL = 101

CONFIG_ENTRY = '$item = 1;'
CONFIG_ENTRY_DISABLED = '$item = 0;'

# --- CfgWeapons tempaltes
CONFIG_CLASS_TEMPLATE = '''
class $class: $parent
{
    scope=$scope;
    scopeArsenal=$scopeArsenal;
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
ASDG_TO_FILE = {
    ASDG_RIFLE_TYPE: {
        "file": "asdg_rifle_rails.hpp",
        "modSpecific": None
    },
    ASDG_PISTOL_TYPE: {
        "file": "asdg_pistol_rails.hpp",
        "modSpecific": None
    },
    ASDG_RHS_AK_BARREL: {
        "file": "asdg_rhs_russian_ak_barrel_slot.hpp",
        "modSpecific": ["rhs_afrf"]
    },
    ASDG_RHS_AK_ZENITCO_FULL: {
        "file": "asdg_rhs_russian_ris_handguard_slot.hpp",
        "modSpecific": ["rhs_afrf"]
    },
}
