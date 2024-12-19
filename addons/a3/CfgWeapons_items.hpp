
class acc_flashlight: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="RifleFlashlight";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class acc_flashlight_L: acc_flashlight
{
    scope=1;
    class dzn_XPI
    {
        bundle="RifleFlashlight";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class acc_flashlight_IRLW: acc_flashlight
{
    scope=1;
    class dzn_XPI
    {
        bundle="RifleFlashlight";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class acc_flashlight_IRL: acc_flashlight
{
    scope=1;
    class dzn_XPI
    {
        bundle="RifleFlashlight";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class acc_pointer_IR: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="RiflePointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class acc_pointer_V: acc_pointer_IR
{
    scope=1;
    class dzn_XPI
    {
        bundle="RiflePointer";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class acc_pointer_IRILW: acc_pointer_IR
{
    scope=1;
    class dzn_XPI
    {
        bundle="RiflePointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class acc_pointer_IRPIL: acc_pointer_IR
{
    scope=1;
    class dzn_XPI
    {
        bundle="RiflePointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class acc_pointer_IRIL: acc_pointer_IR
{
    scope=1;
    class dzn_XPI
    {
        bundle="RiflePointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class acc_pointer_IRxIRILW: acc_pointer_IR
{
    scope=1;
    class dzn_XPI
    {
        bundle="RiflePointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class acc_pointer_IRxIRIL: acc_pointer_IR
{
    scope=1;
    class dzn_XPI
    {
        bundle="RiflePointer";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};
