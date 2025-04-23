// Larger ACE Nightvision Border RHSAFRF Compat
// D. Wolfe (Red-Thirten)
// APL-SA License
// 11/07/23
// Increases all NVG borders by 200% for all RHS AFRF NVGs.

class CfgPatches {
	class Larger_ACE_Nightvision_Border_RHSAFRF_Compat {
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.14;
		requiredAddons[] = {"rhs_main_loadorder", "ace_compat_rhs_afrf3_nightvision"};
		skipWhenMissingDependencies = 1;
		addonRootClass = "Larger_ACE_Nightvision_Border";
	};
};

class CfgWeapons {
	class NVGoggles;	// External class reference
	
	// RHS AFRF
	class rhs_1PN138: NVGoggles {
		ace_nightvision_border = "\Larger_ACE_Nightvision_Border\data\nvg_mask_4096_2x.paa";
	};
};
