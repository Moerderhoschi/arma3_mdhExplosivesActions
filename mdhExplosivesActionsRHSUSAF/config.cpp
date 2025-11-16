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
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3607116655";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class rhsusf_m112_mag: CA_Magazine {useAction = 0;};
};

class CfgMods
{
	class mdhExplosivesActionsRHSUSAF
	{
		dir = "@mdhExplosivesActionsRHSUSAF";
		name = "mdhExplosivesActionsRHSUSAF";
		picture = "a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=3607116655";
	};
};
