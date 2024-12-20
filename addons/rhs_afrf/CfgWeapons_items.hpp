
class rhs_acc_2dpZenit: acc_flashlight
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_Zenith2DP";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_2dpZenit_LW: rhs_acc_2dpZenit
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Zenith2DP";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_2dpZenit_IRL: rhs_acc_2dpZenit
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Zenith2DP";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_2dpZenit_IRLW: rhs_acc_2dpZenit
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Zenith2DP";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_2dpZenit_ris: rhs_acc_2dpZenit
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_Zenith2DP_RIS";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_2dpZenit_ris_LW: rhs_acc_2dpZenit_ris
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Zenith2DP_RIS";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_2dpZenit_ris_IRL: rhs_acc_2dpZenit_ris
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Zenith2DP_RIS";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_2dpZenit_ris_IRLW: rhs_acc_2dpZenit_ris
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Zenith2DP_RIS";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_perst3: rhs_acc_perst1ik
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_Perst3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_V: rhs_acc_perst3
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_IRIL: rhs_acc_perst3
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_IRILW: rhs_acc_perst3
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_IRxIRIL: rhs_acc_perst3
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_IRxIRILW: rhs_acc_perst3
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_IRPIL: rhs_acc_perst3
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_top: rhs_acc_perst3
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_top_V: rhs_acc_perst3_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_top_IRIL: rhs_acc_perst3_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_top_IRILW: rhs_acc_perst3_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_top_IRxIRIL: rhs_acc_perst3_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_top_IRxIRILW: rhs_acc_perst3_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_top_IRPIL: rhs_acc_perst3_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_top_h: rhs_acc_perst3_top
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_top_h_V: rhs_acc_perst3_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_top_h_IRIL: rhs_acc_perst3_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_top_h_IRILW: rhs_acc_perst3_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_top_h_IRxIRIL: rhs_acc_perst3_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_top_h_IRxIRILW: rhs_acc_perst3_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_top_h_IRPIL: rhs_acc_perst3_top_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3_Top_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp: rhs_acc_perst3
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_V: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_IRIL: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_IRILW: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_IRxIRIL: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_IRxIRILW: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_IRPIL: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_VxL: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flashdir,flash);
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_VxLW: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flashdir,flash);
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_light: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_LW: rhs_acc_perst3_2dp
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_h: rhs_acc_perst3_2dp
{
    scope=2;
    scopeArsenal=2;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_h_V: rhs_acc_perst3_2dp_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        class FlashLight {};
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_h_IRIL: rhs_acc_perst3_2dp_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_h_IRILW: rhs_acc_perst3_2dp_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_h_IRxIRIL: rhs_acc_perst3_2dp_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_NARROW(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_h_IRxIRILW: rhs_acc_perst3_2dp_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_LASER_x_IR_ILLUM_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_WIDE(laser pos,laser dir);
        RIFLE_LASER_IR(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_h_IRPIL: rhs_acc_perst3_2dp_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_IR);
        mode=Q(XPI_M_IR_ILLUM_POINTER);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_IR_FAR_ILLUM(laser pos,laser dir);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_h_VxL: rhs_acc_perst3_2dp_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flashdir,flash);
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_h_VxLW: rhs_acc_perst3_2dp_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_VISIBLE_LASER_x_LIGTH_WIDE);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flashdir,flash);
        RIFLE_LASER_VISIBLE_GREEN(laser pos,laser dir);
    };
};

class rhs_acc_perst3_2dp_light_h: rhs_acc_perst3_2dp_light
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_NARROW(flashdir,flash);
        class Pointer {};
    };
};

class rhs_acc_perst3_2dp_h_LW: rhs_acc_perst3_2dp_light_h
{
    scope=1;
    scopeArsenal=0;
    class dzn_XPI
    {
        bundle="RHS_Perst3x2DP_H";
        type=Q(XPI_T_VISIBLE);
        mode=Q(XPI_M_LIGHT_W);
    };

    class ItemInfo: InventoryFlashLightItem_Base_F
    {
        RIFLE_LIGHT_WIDE(flashdir,flash);
        class Pointer {};
    };
};
