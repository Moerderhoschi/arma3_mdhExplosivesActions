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
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class CUP_TimeBomb_M: CA_Magazine {useAction = 0;};
	
};

class CfgMods
{
	class mdhExplosivesActionsCUP
	{
		dir = "@mdhExplosivesActionsCUP";
		name = "mdhExplosivesActionsCUP";
		picture = "a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};
