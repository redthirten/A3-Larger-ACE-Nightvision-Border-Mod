// Larger ACE Nightvision Border RHSUSAF Compat
// D. Wolfe (Red-Thirten)
// APL-SA License
// 11/07/23
// Increases all NVG borders by 200% for all RHS USAF NVGs.

class CfgPatches {
	class Larger_ACE_Nightvision_Border_RHSUSAF_Compat {
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.14;
		requiredAddons[] = {"rhsusf_main_loadorder", "ace_compat_rhs_usf3_nightvision"};
		skipWhenMissingDependencies = 1;
		addonRootClass = "Larger_ACE_Nightvision_Border";
	};
};

class CfgWeapons {
	class NVGoggles;	// External class reference
	
	// RHS USAF
	class rhsusf_ANPVS_14: NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
	};
	class rhsusf_ANPVS_15: rhsusf_ANPVS_14 {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_binos_4096_2x.paa";
	};
};
