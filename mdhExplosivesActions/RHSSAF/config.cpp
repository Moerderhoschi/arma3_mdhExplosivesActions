class CfgPatches
{
	class mdhExplosivesActionsRHSSAF
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActionsRHSSAF";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","rhssaf_c_weapons"};
		skipWhenMissingDependencies = 1;
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class rhssaf_tm100_mag: CA_Magazine {useAction = 0;};
};
