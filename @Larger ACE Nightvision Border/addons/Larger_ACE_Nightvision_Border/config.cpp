// Larger ACE Nightvision Border
// D. Wolfe (Red-Thirten)
// APL-SA License
// 11/07/23
// Increases all NVG borders by 200% for all vanilla NVGs, ACE NVGs,
// and any NVGs that extend the NVGoggles class AND do not override ace_nightvision_border.

class CfgPatches {
	class Larger_ACE_Nightvision_Border {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"ace_nightvision"};
		version = 1.0.2;
		author = "D. Wolfe";
		authorUrl = "https://steamcommunity.com/id/redthirten/";
	};
};

class CfgWeapons {
	class Binocular;	// External class reference
	
	// Vanilla
    class NVGoggles: Binocular {
        ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
    };
    class O_NVGoggles_hex_F: NVGoggles {
        ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
    };
	
	// ACE3
    class ACE_NVG_Biocular: NVGoggles {
        ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
    };
    class ACE_NVG_Monocular: NVGoggles {
        ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
    };
    class ACE_NVG_Binocular: NVGoggles {
        ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
    };
    class ACE_NVG_Quadocular: NVGoggles {
        ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
    };
};
