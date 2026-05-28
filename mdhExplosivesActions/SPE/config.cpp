class CfgPatches
{
	class mdhExplosivesActionsSPE
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActionsSPE";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","WW2_SPE_Assets_c_Weapons_Mines_c"};
		skipWhenMissingDependencies = 1;
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class SPE_Mine_Magazine: CA_Magazine {useAction = 0;};
};
