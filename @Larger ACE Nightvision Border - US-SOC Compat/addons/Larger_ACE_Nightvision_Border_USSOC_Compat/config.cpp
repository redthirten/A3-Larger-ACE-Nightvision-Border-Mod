// Larger ACE Nightvision Border
// D. Wolfe (Red-Thirten)
// APL-SA License
// 07/18/21
// Increases all NVG borders by 200% for all US-SOC NVGs.

class CfgPatches {
	class Larger_ACE_Nightvision_Border_USSOC_Compat {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"Larger_ACE_Nightvision_Border", "ace_nightvision", "mas_usa_lite_common"};
		version = 1.0.0;
		author = "D. Wolfe";
		authorUrl = "https://steamcommunity.com/id/redthirten/";
	};
};

class CfgWeapons {
	class NVGoggles; // External class reference
	
	class NVGoggles_mas_usl_h: NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
		modelOptics = "";
	};
	
	class NVGoggles_mas_usl_h18: NVGoggles_mas_usl_h {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_quad_4096_2x.paa";
	};
};
