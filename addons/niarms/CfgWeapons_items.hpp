
class hlc_acc_TLR1: ItemCore
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="NIArms_SteamlightTLR1";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_TLR1_LW: hlc_acc_TLR1
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_SteamlightTLR1";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_TLR1_Side: hlc_acc_TLR1
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="NIArms_SteamlightTLR1_Side";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_TLR1_Side_LW: hlc_acc_TLR1_Side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_SteamlightTLR1_Side";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_DBALPL: ItemCore
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(flash,flash dir);
    };
};

class hlc_acc_DBALPL_V: hlc_acc_DBALPL
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(flash,flash dir);
    };
};

class hlc_acc_DBALPL_FL: ItemCore
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_DBALPL_LW: hlc_acc_DBALPL
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_DBALPL_VxLW: hlc_acc_DBALPL
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash,flash dir);
        RIFLE_LASER_VISIBLE_GREEN(flash,flash dir);
    };
};

class hlc_acc_DBALPL_VxL: hlc_acc_DBALPL
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash,flash dir);
        RIFLE_LASER_VISIBLE_GREEN(flash,flash dir);
    };
};

class hlc_acc_DBALPL_IRLW: hlc_acc_DBALPL
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_DBALPL_IRxIRILW: hlc_acc_DBALPL
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash,flash dir);
        RIFLE_LASER_IR(flash,flash dir);
    };
};

class hlc_acc_DBALPL_Side: hlc_acc_DBALPL
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL_Side";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(flash,flash dir);
    };
};

class hlc_acc_DBALPL_Side_V: hlc_acc_DBALPL_Side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL_Side";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(flash,flash dir);
    };
};

class hlc_acc_DBALPL_side_FL: hlc_acc_DBALPL_FL
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL_Side";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_DBALPL_Side_LW: hlc_acc_DBALPL_Side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL_Side";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_DBALPL_Side_VxLW: hlc_acc_DBALPL_Side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL_Side";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash,flash dir);
        RIFLE_LASER_VISIBLE_GREEN(flash,flash dir);
    };
};

class hlc_acc_DBALPL_Side_VxL: hlc_acc_DBALPL_Side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL_Side";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash,flash dir);
        RIFLE_LASER_VISIBLE_GREEN(flash,flash dir);
    };
};

class hlc_acc_DBALPL_Side_IRLW: hlc_acc_DBALPL_Side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL_Side";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_DBALPL_Side_IRxIRILW: hlc_acc_DBALPL_Side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_DBAL_PL_Side";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash,flash dir);
        RIFLE_LASER_IR(flash,flash dir);
    };
};

class hlc_acc_LS321G: hlc_acc_DBALPL_Side
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="NIArms_HolosunLS321G";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(flash,flash dir);
    };
};

class hlc_acc_LS321G_V: hlc_acc_LS321G
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_HolosunLS321G";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(flash,flash dir);
    };
};

class hlc_acc_LS321G_IRLW: hlc_acc_LS321G
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_HolosunLS321G";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_LS321G_IRxIRILW: hlc_acc_LS321G
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_HolosunLS321G";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash,flash dir);
        RIFLE_LASER_IR(flash,flash dir);
    };
};

class hlc_acc_LS321G_IRIL: hlc_acc_LS321G
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_HolosunLS321G";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash,flash dir);
        class Pointer {};
    };
};

class hlc_acc_LS321G_IRxIRIL: hlc_acc_LS321G
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="NIArms_HolosunLS321G";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash,flash dir);
        RIFLE_LASER_IR(flash,flash dir);
    };
};
