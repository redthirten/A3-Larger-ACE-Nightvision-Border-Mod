class CfgWeapons {
    class NVGoggles;
	
    class USP_PVS14: NVGoggles {
        modelOptics = "";
        EGVAR(nightvision,border) = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_200x.paa";
        EGVAR(nightvision,bluRadius) = 0.13;
    };
    class USP_GPNVG18: NVGoggles {
        modelOptics = "";
        EGVAR(nightvision,border) = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_200x.paa";
        EGVAR(nightvision,bluRadius) = 0.15;
    };
    class USP_GPNVG18_TAN: USP_GPNVG18 {
        modelOptics = "";
        EGVAR(nightvision,border) = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_200x.paa";
        EGVAR(nightvision,bluRadius) = 0.15;
    };
};