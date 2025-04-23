// Larger ACE Nightvision Border
// D. Wolfe (Red-Thirten)
// APL-SA License
// 11/17/20
// Increases all NVG borders by 200% for all RHS NVGs.

class CfgPatches {
	class Larger_ACE_Nightvision_Border_RHS_Compat {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"Larger_ACE_Nightvision_Border", "ace_nightvision", "ace_compat_rhs_usf3", "ace_compat_rhs_afrf3"};
		version = 1.0.1;
		author = "D. Wolfe";
		authorUrl = "https://steamcommunity.com/id/redthirten/";
	};
};

class CfgWeapons {
	class NVGoggles;
	
	class rhsusf_ANPVS_14: NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
	};
	class rhsusf_ANPVS_15: rhsusf_ANPVS_14 {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
	};
	
	class rhs_1PN138: NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
	};
};
