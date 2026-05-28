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
		skipWhenMissingDependencies = 1;
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class gm_Magazine_Base: CA_Magazine {};
	class gm_putMagazine_base: gm_Magazine_Base {useAction = 0;};
	class SatchelCharge_Remote_Mag: CA_Magazine {useAction = 0;};
	class gm_explosiveRemoteMagazine_base: SatchelCharge_Remote_Mag {};
	class gm_explosive_petn_charge_base: gm_explosiveRemoteMagazine_base {useAction = 0;};
	class gm_explosive_plnp_charge_base: gm_explosiveRemoteMagazine_base {useAction = 0;};
};
