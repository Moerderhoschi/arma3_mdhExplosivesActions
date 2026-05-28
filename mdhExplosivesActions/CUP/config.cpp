class CfgPatches
{
	class mdhExplosivesActionsCUP
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActionsCUP";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","CUP_Weapons_Put"};
		skipWhenMissingDependencies = 1;
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class CUP_TimeBomb_M: CA_Magazine {useAction = 0;};
	
};
