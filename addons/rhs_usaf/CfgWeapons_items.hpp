
class rhsusf_acc_anpeq15A: acc_pointer_IR
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15A_DBAL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15A_V: rhsusf_acc_anpeq15A
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15A_DBAL";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15A_IRILW: rhsusf_acc_anpeq15A
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15A_DBAL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15A_IRPIL: rhsusf_acc_anpeq15A
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15A_DBAL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15A_IRIL: rhsusf_acc_anpeq15A
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15A_DBAL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15A_IRxIRILW: rhsusf_acc_anpeq15A
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15A_DBAL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15A_IRxIRIL: rhsusf_acc_anpeq15A
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15A_DBAL";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15: acc_pointer_IR
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_V: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_LW: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_VxLW: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_VxL: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_IRLW: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_IRxIRILW: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_IRxIRIL: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_IRPIL: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk: rhsusf_acc_anpeq15
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_V: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_light: rhsusf_acc_anpeq15_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_LW: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_VxLW: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_VxL: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_IRLW: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_IRxIRILW: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_IRxIRIL: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_IRPIL: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_h: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_h_V: rhsusf_acc_anpeq15_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_light_h: rhsusf_acc_anpeq15_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_h_LW: rhsusf_acc_anpeq15_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_h_VxLW: rhsusf_acc_anpeq15_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_h_VxL: rhsusf_acc_anpeq15_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_h_IRLW: rhsusf_acc_anpeq15_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_h_IRxIRILW: rhsusf_acc_anpeq15_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_h_IRxIRIL: rhsusf_acc_anpeq15_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_h_IRPIL: rhsusf_acc_anpeq15_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_sc: rhsusf_acc_anpeq15
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_sc_V: rhsusf_acc_anpeq15_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_light_sc: rhsusf_acc_anpeq15_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_sc_LW: rhsusf_acc_anpeq15_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_sc_VxLW: rhsusf_acc_anpeq15_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_sc_VxL: rhsusf_acc_anpeq15_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_sc_IRLW: rhsusf_acc_anpeq15_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_sc_IRxIRILW: rhsusf_acc_anpeq15_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_sc_IRxIRIL: rhsusf_acc_anpeq15_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_sc_IRPIL: rhsusf_acc_anpeq15_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_h: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_h_V: rhsusf_acc_anpeq15_bk_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_light_h: rhsusf_acc_anpeq15_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_h_LW: rhsusf_acc_anpeq15_bk_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_h_VxLW: rhsusf_acc_anpeq15_bk_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_h_VxL: rhsusf_acc_anpeq15_bk_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_h_IRLW: rhsusf_acc_anpeq15_bk_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_h_IRxIRILW: rhsusf_acc_anpeq15_bk_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_h_IRxIRIL: rhsusf_acc_anpeq15_bk_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_h_IRPIL: rhsusf_acc_anpeq15_bk_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_sc: rhsusf_acc_anpeq15_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_sc_V: rhsusf_acc_anpeq15_bk_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_light_sc: rhsusf_acc_anpeq15_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_sc_LW: rhsusf_acc_anpeq15_bk_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_sc_VxLW: rhsusf_acc_anpeq15_bk_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_sc_VxL: rhsusf_acc_anpeq15_bk_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_sc_IRLW: rhsusf_acc_anpeq15_bk_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_sc_IRxIRILW: rhsusf_acc_anpeq15_bk_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_sc_IRxIRIL: rhsusf_acc_anpeq15_bk_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_sc_IRPIL: rhsusf_acc_anpeq15_bk_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xM952_Black_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx: rhsusf_acc_anpeq15
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_V: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_light: rhsusf_acc_anpeq15_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_LW: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_VxLW: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_VxL: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_IRLW: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_IRxIRILW: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_IRxIRIL: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_IRPIL: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_h: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_h_V: rhsusf_acc_anpeq15_wmx_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_light_h: rhsusf_acc_anpeq15_wmx_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_h_LW: rhsusf_acc_anpeq15_wmx_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_h_VxLW: rhsusf_acc_anpeq15_wmx_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_h_VxL: rhsusf_acc_anpeq15_wmx_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_h_IRLW: rhsusf_acc_anpeq15_wmx_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_h_IRxIRILW: rhsusf_acc_anpeq15_wmx_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_h_IRxIRIL: rhsusf_acc_anpeq15_wmx_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_h_IRPIL: rhsusf_acc_anpeq15_wmx_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_sc: rhsusf_acc_anpeq15_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_sc_V: rhsusf_acc_anpeq15_wmx_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_light_sc: rhsusf_acc_anpeq15_wmx_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_sc_LW: rhsusf_acc_anpeq15_wmx_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_sc_VxLW: rhsusf_acc_anpeq15_wmx_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_sc_VxL: rhsusf_acc_anpeq15_wmx_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_sc_IRLW: rhsusf_acc_anpeq15_wmx_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_wmx_sc_IRxIRILW: rhsusf_acc_anpeq15_wmx_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_sc_IRxIRIL: rhsusf_acc_anpeq15_wmx_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_wmx_sc_IRPIL: rhsusf_acc_anpeq15_wmx_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15xWMX_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_top: rhsusf_acc_anpeq15A
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_V: rhsusf_acc_anpeq15_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_IRILW: rhsusf_acc_anpeq15_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_top_IRxIRILW: rhsusf_acc_anpeq15_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_IRxIRIL: rhsusf_acc_anpeq15_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_IRPIL: rhsusf_acc_anpeq15_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_top_h: rhsusf_acc_anpeq15_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_h_V: rhsusf_acc_anpeq15_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_h_IRILW: rhsusf_acc_anpeq15_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_top_h_IRxIRILW: rhsusf_acc_anpeq15_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_h_IRxIRIL: rhsusf_acc_anpeq15_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_h_IRPIL: rhsusf_acc_anpeq15_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_top_sc: rhsusf_acc_anpeq15_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_sc_V: rhsusf_acc_anpeq15_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_sc_IRILW: rhsusf_acc_anpeq15_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_top_sc_IRxIRILW: rhsusf_acc_anpeq15_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_sc_IRxIRIL: rhsusf_acc_anpeq15_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_top_sc_IRPIL: rhsusf_acc_anpeq15_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15side: acc_pointer_IR
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15side_V: rhsusf_acc_anpeq15side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15side_IRILW: rhsusf_acc_anpeq15side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15side_IRxIRILW: rhsusf_acc_anpeq15side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15side_IRxIRIL: rhsusf_acc_anpeq15side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15side_IRPIL: rhsusf_acc_anpeq15side
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_top: rhsusf_acc_anpeq15_top
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_V: rhsusf_acc_anpeq15_bk_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_IRILW: rhsusf_acc_anpeq15_bk_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_top_IRxIRILW: rhsusf_acc_anpeq15_bk_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_IRxIRIL: rhsusf_acc_anpeq15_bk_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_IRPIL: rhsusf_acc_anpeq15_bk_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_top_h: rhsusf_acc_anpeq15_bk_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_h_V: rhsusf_acc_anpeq15_bk_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_h_IRILW: rhsusf_acc_anpeq15_bk_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_top_h_IRxIRILW: rhsusf_acc_anpeq15_bk_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_h_IRxIRIL: rhsusf_acc_anpeq15_bk_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_h_IRPIL: rhsusf_acc_anpeq15_bk_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_top_sc: rhsusf_acc_anpeq15_bk_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_sc_V: rhsusf_acc_anpeq15_bk_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_SC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_sc_IRILW: rhsusf_acc_anpeq15_bk_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15_bk_top_sc_IRxIRILW: rhsusf_acc_anpeq15_bk_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_sc_IRxIRIL: rhsusf_acc_anpeq15_bk_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15_bk_top_sc_IRPIL: rhsusf_acc_anpeq15_bk_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black_Top_SC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15side_bk: rhsusf_acc_anpeq15side
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15side_bk_V: rhsusf_acc_anpeq15side_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15side_bk_IRILW: rhsusf_acc_anpeq15side_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq15side_bk_IRxIRILW: rhsusf_acc_anpeq15side_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15side_bk_IRxIRIL: rhsusf_acc_anpeq15side_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq15side_bk_IRPIL: rhsusf_acc_anpeq15side_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ15_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a: rhsusf_acc_anpeq15
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_V: rhsusf_acc_anpeq16a
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_IRILW: rhsusf_acc_anpeq16a
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_IRPIL: rhsusf_acc_anpeq16a
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_IRIL: rhsusf_acc_anpeq16a
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_IRxIRILW: rhsusf_acc_anpeq16a
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_IRxIRIL: rhsusf_acc_anpeq16a
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_light: rhsusf_acc_anpeq15_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_LW: rhsusf_acc_anpeq16a_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_VxLW: rhsusf_acc_anpeq16a_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_VxL: rhsusf_acc_anpeq16a_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top: rhsusf_acc_anpeq16a
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_V: rhsusf_acc_anpeq16a_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_IRILW: rhsusf_acc_anpeq16a_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_IRPIL: rhsusf_acc_anpeq16a_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_IRIL: rhsusf_acc_anpeq16a_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_IRxIRILW: rhsusf_acc_anpeq16a_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_IRxIRIL: rhsusf_acc_anpeq16a_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_light_top: rhsusf_acc_anpeq16a_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_LW: rhsusf_acc_anpeq16a_light_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_VxLW: rhsusf_acc_anpeq16a_light_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_VxL: rhsusf_acc_anpeq16a_light_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_h: rhsusf_acc_anpeq16a_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_h_V: rhsusf_acc_anpeq16a_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_h_IRILW: rhsusf_acc_anpeq16a_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_h_IRPIL: rhsusf_acc_anpeq16a_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_h_IRIL: rhsusf_acc_anpeq16a_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_h_IRxIRILW: rhsusf_acc_anpeq16a_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_h_IRxIRIL: rhsusf_acc_anpeq16a_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_light_top_h: rhsusf_acc_anpeq16a_light_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_h_LW: rhsusf_acc_anpeq16a_light_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_h_VxLW: rhsusf_acc_anpeq16a_light_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_h_VxL: rhsusf_acc_anpeq16a_light_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopH";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_sc: rhsusf_acc_anpeq16a_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_sc_V: rhsusf_acc_anpeq16a_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_sc_IRILW: rhsusf_acc_anpeq16a_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_sc_IRPIL: rhsusf_acc_anpeq16a_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_sc_IRIL: rhsusf_acc_anpeq16a_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_sc_IRxIRILW: rhsusf_acc_anpeq16a_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_sc_IRxIRIL: rhsusf_acc_anpeq16a_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_light_top_sc: rhsusf_acc_anpeq16a_light_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_sc_LW: rhsusf_acc_anpeq16a_light_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_anpeq16a_top_sc_VxLW: rhsusf_acc_anpeq16a_light_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_anpeq16a_top_sc_VxL: rhsusf_acc_anpeq16a_light_top_sc
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_ANPEQ16A_TopSC";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        RIFLE_LASER_VISIBLE_RED(laser pos,laser dir);
    };
};

class rhsusf_acc_M952V: rhsusf_acc_anpeq15_light
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_SurefireM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_M952V_L: rhsusf_acc_M952V
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireM952";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_M952V_IRLW: rhsusf_acc_M952V
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_M952V_IRL: rhsusf_acc_M952V
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireM952";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_wmx: rhsusf_acc_M952V
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_SurefireWMX";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_wmx_L: rhsusf_acc_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireWMX";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_wmx_IRLW: rhsusf_acc_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireWMX";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_wmx_IRL: rhsusf_acc_wmx
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireWMX";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_wmx_bk: rhsusf_acc_M952V
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_SurefireWMX_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_wmx_bk_L: rhsusf_acc_wmx_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireWMX_Black";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_wmx_bk_IRLW: rhsusf_acc_wmx_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireWMX_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flash dir,flash);
        class Pointer {};
    };
};

class rhsusf_acc_wmx_bk_IRL: rhsusf_acc_wmx_bk
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_SurefireWMX_Black";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flash dir,flash);
        class Pointer {};
    };
};
