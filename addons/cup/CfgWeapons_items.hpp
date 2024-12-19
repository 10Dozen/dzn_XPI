
class CUP_acc_ANPEQ_15: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_V: CUP_acc_ANPEQ_15
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_IRILW: CUP_acc_ANPEQ_15
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_IRxIRILW: CUP_acc_ANPEQ_15
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_IRxIRIL: CUP_acc_ANPEQ_15
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_IRPIL: CUP_acc_ANPEQ_15
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Black: CUP_acc_ANPEQ_15
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Black_V: CUP_acc_ANPEQ_15_Black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Black_IRILW: CUP_acc_ANPEQ_15_Black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Black_IRxIRILW: CUP_acc_ANPEQ_15_Black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Black_IRxIRIL: CUP_acc_ANPEQ_15_Black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Black_IRPIL: CUP_acc_ANPEQ_15_Black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_OD: CUP_acc_ANPEQ_15
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_OD_V: CUP_acc_ANPEQ_15_OD
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_OD_IRILW: CUP_acc_ANPEQ_15_OD
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_OD_IRxIRILW: CUP_acc_ANPEQ_15_OD
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_OD_IRxIRIL: CUP_acc_ANPEQ_15_OD
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_OD_IRPIL: CUP_acc_ANPEQ_15_OD
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Tan_Top: CUP_acc_ANPEQ_15
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Tan_Top_V: CUP_acc_ANPEQ_15_Tan_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Tan_Top_IRILW: CUP_acc_ANPEQ_15_Tan_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Tan_Top_IRxIRILW: CUP_acc_ANPEQ_15_Tan_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Tan_Top_IRxIRIL: CUP_acc_ANPEQ_15_Tan_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Tan_Top_IRPIL: CUP_acc_ANPEQ_15_Tan_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Tan_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Black_Top: CUP_acc_ANPEQ_15_Black
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Black_Top_V: CUP_acc_ANPEQ_15_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Black_Top_IRILW: CUP_acc_ANPEQ_15_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Black_Top_IRxIRILW: CUP_acc_ANPEQ_15_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Black_Top_IRxIRIL: CUP_acc_ANPEQ_15_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Black_Top_IRPIL: CUP_acc_ANPEQ_15_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_OD_Top: CUP_acc_ANPEQ_15_OD
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_OD_Top_V: CUP_acc_ANPEQ_15_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_OD_Top_IRILW: CUP_acc_ANPEQ_15_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_OD_Top_IRxIRILW: CUP_acc_ANPEQ_15_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_OD_Top_IRxIRIL: CUP_acc_ANPEQ_15_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_OD_Top_IRPIL: CUP_acc_ANPEQ_15_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_camo: CUP_acc_ANPEQ_2
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Camo";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_camo_IRILW: CUP_acc_ANPEQ_2_camo
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Camo";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_camo_IRxIRIL: CUP_acc_ANPEQ_2_camo
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Camo";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_camo_IRxIRILW: CUP_acc_ANPEQ_2_camo
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Camo";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_camo_IRPIL: CUP_acc_ANPEQ_2_camo
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Camo";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_desert: CUP_acc_ANPEQ_2
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_desert_IRILW: CUP_acc_ANPEQ_2_desert
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_desert_IRxIRIL: CUP_acc_ANPEQ_2_desert
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_desert_IRxIRILW: CUP_acc_ANPEQ_2_desert
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_desert_IRPIL: CUP_acc_ANPEQ_2_desert
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_grey: CUP_acc_ANPEQ_2
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_grey";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_grey_IRILW: CUP_acc_ANPEQ_2_grey
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_grey";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_grey_IRxIRIL: CUP_acc_ANPEQ_2_grey
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_grey";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_grey_IRxIRILW: CUP_acc_ANPEQ_2_grey
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_grey";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_grey_IRPIL: CUP_acc_ANPEQ_2_grey
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_grey";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Black_Top: CUP_acc_ANPEQ_2
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Black_Top_IRILW: CUP_acc_ANPEQ_2_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Black_Top_IRxIRIL: CUP_acc_ANPEQ_2_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Black_Top_IRxIRILW: CUP_acc_ANPEQ_2_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Black_Top_IRPIL: CUP_acc_ANPEQ_2_Black_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_OD_Top: CUP_acc_ANPEQ_2
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_OD_Top_IRILW: CUP_acc_ANPEQ_2_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_OD_Top_IRxIRIL: CUP_acc_ANPEQ_2_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_OD_Top_IRxIRILW: CUP_acc_ANPEQ_2_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_OD_Top_IRPIL: CUP_acc_ANPEQ_2_OD_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_OD_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Coyote_Top: CUP_acc_ANPEQ_2
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Coyote_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Coyote_Top_IRILW: CUP_acc_ANPEQ_2_Coyote_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Coyote_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Coyote_Top_IRxIRIL: CUP_acc_ANPEQ_2_Coyote_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Coyote_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Coyote_Top_IRxIRILW: CUP_acc_ANPEQ_2_Coyote_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Coyote_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_LASER,DIR_LASER);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Coyote_Top_IRPIL: CUP_acc_ANPEQ_2_Coyote_Top
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2_Coyote_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_Flashlight: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_LW: CUP_acc_Flashlight
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_IRL: CUP_acc_Flashlight
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_IRLW: CUP_acc_Flashlight
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_wdl: CUP_acc_Flashlight
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952_wdl";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_wdl_LW: CUP_acc_Flashlight_wdl
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952_wdl";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_wdl_IRL: CUP_acc_Flashlight_wdl
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952_wdl";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_wdl_IRLW: CUP_acc_Flashlight_wdl
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952_wdl";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_desert: CUP_acc_Flashlight
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952_desert";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_desert_LW: CUP_acc_Flashlight_desert
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952_desert";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_desert_IRL: CUP_acc_Flashlight_desert
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_desert_IRLW: CUP_acc_Flashlight_desert
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_SurefireM952_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Flashlight_MP5: CUP_acc_Flashlight
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_MP5Flashlight";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_XM8_light_module: CUP_acc_Flashlight
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_XM8Flashlight";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_XM8_light_module_LW: CUP_acc_XM8_light_module
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_XM8Flashlight";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_L: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_LLM01";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_V: CUP_acc_LLM01_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_F: ItemCore
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_VxLW: CUP_acc_LLM01_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_IRILW: CUP_acc_LLM01_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_desert_L: CUP_acc_LLM01_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_LLM01_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_desert_V: CUP_acc_LLM01_V
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_desert";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_desert_F: CUP_acc_LLM01_F
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_desert";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_desert_VxLW: CUP_acc_LLM01_desert_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_desert";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_desert_IRILW: CUP_acc_LLM01_desert_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_desert";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_hex_L: CUP_acc_LLM01_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_LLM01_hex";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_hex_V: CUP_acc_LLM01_V
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_hex";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_hex_F: CUP_acc_LLM01_F
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_hex";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_hex_VxLW: CUP_acc_LLM01_hex_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_hex";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_hex_IRILW: CUP_acc_LLM01_hex_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_hex";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_od_L: CUP_acc_LLM01_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_LLM01_od";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_od_V: CUP_acc_LLM01_V
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_od";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_od_F: CUP_acc_LLM01_F
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_od";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_od_VxLW: CUP_acc_LLM01_od_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_od";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_od_IRILW: CUP_acc_LLM01_od_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_od";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_coyote_L: CUP_acc_LLM01_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_LLM01_coyote";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_coyote_V: CUP_acc_LLM01_V
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_coyote";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_coyote_F: CUP_acc_LLM01_F
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_coyote";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM01_coyote_VxLW: CUP_acc_LLM01_coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_coyote";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM01_coyote_IRILW: CUP_acc_LLM01_coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM01_coyote";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_LLM3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_V: CUP_acc_LLM
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_Flashlight: CUP_acc_LLM
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_LW: CUP_acc_LLM
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_VxLW: CUP_acc_LLM
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_IRLW: CUP_acc_LLM
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_IRxIRILW: CUP_acc_LLM
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_black: CUP_acc_LLM
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_LLM3_black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_black_V: CUP_acc_LLM_V
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_black_Flashlight: CUP_acc_LLM_Flashlight
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_black_LW: CUP_acc_LLM_black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_black_VxLW: CUP_acc_LLM_black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_black_IRLW: CUP_acc_LLM_black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_black_IRxIRILW: CUP_acc_LLM_black
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_od: CUP_acc_LLM
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_LLM3_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_od_V: CUP_acc_LLM_V
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_od_Flashlight: CUP_acc_LLM_Flashlight
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_od_LW: CUP_acc_LLM_od
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_od_VxLW: CUP_acc_LLM_od
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_GREEN(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_LLM_od_IRLW: CUP_acc_LLM_od
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_LLM_od_IRxIRILW: CUP_acc_LLM_od
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_LLM3_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_Zenit_2DS: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_Zenit_2DS";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_Zenit_2DS_LW: CUP_acc_Zenit_2DS
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_Zenit_2DS";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_L: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_V: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_F: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_LW: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_VxLW: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_VxL: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_IRLW: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_IRxIRILW: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_IRxIRIL: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Black_IRPIL: CUP_acc_ANPEQ_2_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_L: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_V: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_F: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_LW: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_VxLW: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_VxL: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_IRLW: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_IRxIRILW: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_IRxIRIL: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_Coyote_IRPIL: CUP_acc_ANPEQ_2_Flashlight_Coyote_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_Coyote";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_L: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_V: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_F: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_LW: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_VxLW: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_VxL: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_IRLW: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_IRxIRILW: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_IRxIRIL: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_2_Flashlight_OD_IRPIL: CUP_acc_ANPEQ_2_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ2xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_L: ItemCore
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_V: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_F: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_LW: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_VxLW: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_VxL: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_IRLW: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_IRxIRILW: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_IRxIRIL: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Tan_IRPIL: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_L: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_V: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_F: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_LW: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_VxLW: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_VxL: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_IRLW: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_IRxIRILW: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_IRxIRIL: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_OD_IRPIL: CUP_acc_ANPEQ_15_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_L: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_V: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_F: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_LW: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_VxLW: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_VxL: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_IRLW: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_IRxIRILW: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_IRxIRIL: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Flashlight_Black_IRPIL: CUP_acc_ANPEQ_15_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15xFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_V: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F_LW: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F_VxLW: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F_VxL: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F_IRLW: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F_IRxIRILW: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F_IRxIRIL: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Tan_F_IRPIL: CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Tan";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_L: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_V: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F_LW: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F_VxLW: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F_VxL: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F_IRLW: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F_IRxIRILW: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F_IRxIRIL: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_OD_F_IRPIL: CUP_acc_ANPEQ_15_Top_Flashlight_OD_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_OD";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_L: CUP_acc_ANPEQ_15_Flashlight_Tan_L
{
    scope=2;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_V: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_F: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_LW: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_VxLW: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_VxL: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_VISIBLE_RED(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_IRLW: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        class Pointer {};
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_IRxIRILW: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_IRxIRIL: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(POS_FLASHLIGHT,DIR_FLASHLIGHT);
        RIFLE_LASER_IR(POS_LASER,DIR_LASER);
    };
};

class CUP_acc_ANPEQ_15_Top_Flashlight_Black_IRPIL: CUP_acc_ANPEQ_15_Top_Flashlight_Black_L
{
    scope=1;
    class dzn_XPI
    {
        bundle="CUP_ANPEQ15_TOPxFlashlight_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(POS_LASER,DIR_LASER);
        class Pointer {};
    };
};
