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
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class SPE_Mine_Magazine: CA_Magazine {useAction = 0;};
};

class CfgMods
{
	class mdhExplosivesActionsSPE
	{
		dir = "@mdhExplosivesActionsSPE";
		name = "mdhExplosivesActionsSPE";
		picture = "a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};
