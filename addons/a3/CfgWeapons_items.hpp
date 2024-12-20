
class dzn_XPI_acc_flashlight_DualMode_LW: dzn_XPI_acc_flashlight_DualMode_base
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="dzn_XPI_Flashlight_DualMode";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class dzn_XPI_acc_flashlight_DualMode_L: dzn_XPI_acc_flashlight_DualMode_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_Flashlight_DualMode";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class dzn_XPI_acc_flashlight_DualMode_IRLW: dzn_XPI_acc_flashlight_DualMode_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_Flashlight_DualMode";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class dzn_XPI_acc_flashlight_DualMode_IRL: dzn_XPI_acc_flashlight_DualMode_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_Flashlight_DualMode";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class dzn_XPI_acc_flashlight_DualLense_LW: dzn_XPI_acc_flashlight_DualLense_base
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="dzn_XPI_Flashlight_DualLense";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class dzn_XPI_acc_flashlight_DualLense_L: dzn_XPI_acc_flashlight_DualLense_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_Flashlight_DualLense";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class dzn_XPI_acc_DBAL_A3: dzn_XPI_acc_DBAL_A3_base
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="dzn_XPI_DBAL_Pointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class dzn_XPI_acc_DBAL_A3_V: dzn_XPI_acc_DBAL_A3_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_DBAL_Pointer";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class dzn_XPI_acc_DBAL_A3_IRILW: dzn_XPI_acc_DBAL_A3_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_DBAL_Pointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class dzn_XPI_acc_DBAL_A3_IRPIL: dzn_XPI_acc_DBAL_A3_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_DBAL_Pointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class dzn_XPI_acc_DBAL_A3_IRIL: dzn_XPI_acc_DBAL_A3_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_DBAL_Pointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class dzn_XPI_acc_DBAL_A3_IRxIRILW: dzn_XPI_acc_DBAL_A3_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_DBAL_Pointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class dzn_XPI_acc_DBAL_A3_IRxIRIL: dzn_XPI_acc_DBAL_A3_base
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="dzn_XPI_DBAL_Pointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};
