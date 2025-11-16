class CfgPatches
{
	class mdhExplosivesActionsRHSAFRF
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActionsRHSAFRF";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","rhs_c_weapons"};
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3607114871";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class ATMine_Range_Mag: CA_Magazine {useAction = 0;};
	class rhs_ec75_mag: ATMine_Range_Mag {useAction = 0;};
};

class CfgMods
{
	class mdhExplosivesActionsRHSAFRF
	{
		dir = "@mdhExplosivesActionsRHSAFRF";
		name = "mdhExplosivesActionsRHSAFRF";
		picture = "a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=3607114871";
	};
};
