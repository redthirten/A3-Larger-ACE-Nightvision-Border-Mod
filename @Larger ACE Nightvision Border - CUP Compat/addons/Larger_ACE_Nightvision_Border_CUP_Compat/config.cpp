// Larger ACE Nightvision Border
// D. Wolfe (Red-Thirten)
// APL-SA License
// 11/17/20
// Increases all NVG borders by 200% for all CUP NVGs.

class CfgPatches {
	class Larger_ACE_Nightvision_Border_CUP_Compat {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"Larger_ACE_Nightvision_Border", "ace_nightvision", "cup_weapons_ace_compat"};
		version = 1.0.1;
		author = "D. Wolfe";
		authorUrl = "https://steamcommunity.com/id/redthirten/";
	};
};

class CfgWeapons {
	class NVGoggles;	// External class reference
	
	class CUP_NVG_PVS7 : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
	};
	
	class CUP_NVG_HMNVS : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
	};
	
	class CUP_NVG_PVS14 : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
	};
	
	class CUP_NVG_GPNVG_black : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
	};
	
	class CUP_NVG_GPNVG_tan : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
	};
	
	class CUP_NVG_GPNVG_green : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
	};
	
	class CUP_NVG_GPNVG_winter : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
	};
	
	class CUP_NVG_PVS15_black : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
	};
	
	class CUP_NVG_PVS15_tan : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
	};
	
	class CUP_NVG_PVS15_green : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
	};
	
	class CUP_NVG_PVS15_winter : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
	};
};
