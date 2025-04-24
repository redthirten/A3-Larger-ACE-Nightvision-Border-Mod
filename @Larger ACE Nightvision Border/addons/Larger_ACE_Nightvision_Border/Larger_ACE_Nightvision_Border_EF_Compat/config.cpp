// Larger ACE Nightvision Border Expeditionary Force CDLC Compat
// D. Wolfe (Red-Thirten)
// APL-SA License
// 04/23/25
// Increases all NVG borders by 200% for all Expeditionary Force CDLC NVGs.

class CfgPatches {
	class Larger_ACE_Nightvision_Border_EF_Compat {
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.14;
		requiredAddons[] = {"EF_Weapons", "ace_compat_ef"};
		skipWhenMissingDependencies = 1;
		addonRootClass = "Larger_ACE_Nightvision_Border";
		version = 1.0.0;
		author = "D. Wolfe";
		authorUrl = "https://steamcommunity.com/id/redthirten/";
	};
};

class CfgWeapons {
	class NVGoggles;	// External class reference
	
	// Expeditionary Force CDLC
	class EF_LPNVG : NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
	};
	class EF_LPNVG_Tan: EF_LPNVG {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
	};
};
