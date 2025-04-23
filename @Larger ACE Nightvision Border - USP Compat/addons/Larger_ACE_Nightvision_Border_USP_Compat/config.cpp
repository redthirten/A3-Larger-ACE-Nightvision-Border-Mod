// Larger ACE Nightvision Border
// D. Wolfe (Red-Thirten)
// APL-SA License
// 11/17/20
// Increases all NVG borders by 200% for all USP NVGs.

class CfgPatches {
	class Larger_ACE_Nightvision_Border_USP_Compat {
		requiredAddons[] = {"Larger_ACE_Nightvision_Border", "ace_nightvision", "USP_Gear_Nvg"};
		version = 1.0.0;
		author = "D. Wolfe";
		authorUrl = "https://steamcommunity.com/id/redthirten/";
	};
};

class CfgWeapons {
	class NVGoggles;
	
	class USP_PVS14: NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
	};
	class USP_GPNVG18: NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
	};
	class USP_GPNVG18_TAN: USP_GPNVG18 {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
	};
};
