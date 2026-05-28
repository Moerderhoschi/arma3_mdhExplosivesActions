class CfgPatches
{
	class mdhExplosivesActionsRHSUSAF
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActionsRHSUSAF";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","rhsusf_c_weapons"};
		skipWhenMissingDependencies = 1;
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class rhsusf_m112_mag: CA_Magazine {useAction = 0;};
};
