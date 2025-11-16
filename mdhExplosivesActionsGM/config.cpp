class CfgPatches
{
	class mdhExplosivesActionsGM
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActionsGM";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","gm_weapons_put"};
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606894809";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class SatchelCharge_Remote_Mag: CA_Magazine {useAction = 0;};
	class gm_explosiveRemoteMagazine_base: SatchelCharge_Remote_Mag {};
	class gm_explosive_petn_charge_base: gm_explosiveRemoteMagazine_base {useAction = 0;};
	class gm_explosive_plnp_charge_base: gm_explosiveRemoteMagazine_base {useAction = 0;};
};

class CfgMods
{
	class mdhExplosivesActionsGM
	{
		dir = "@mdhExplosivesActionsGM";
		name = "mdhExplosivesActionsGM";
		picture = "a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606894809";
	};
};
