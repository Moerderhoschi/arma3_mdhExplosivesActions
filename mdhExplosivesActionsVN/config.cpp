class CfgPatches
{
	class mdhExplosivesActionsVN
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActionsVN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","weapons_f_vietnam_c"};
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606903026";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class vn_magazine: CA_Magazine {};
	class vn_mine_m18_mag: vn_magazine {useAction = 0;};
	class vn_mine_satchel_remote_02_mag: vn_mine_m18_mag {useAction = 0;};
	class vn_mine_punji_01_mag: vn_mine_m18_mag {useAction = 0;};
};

class CfgMods
{
	class mdhExplosivesActionsVN
	{
		dir = "@mdhExplosivesActionsVN";
		name = "mdhExplosivesActionsVN";
		picture = "a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606903026";
	};
};
