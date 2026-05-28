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
		skipWhenMissingDependencies = 1;
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class ATMine_Range_Mag: CA_Magazine {useAction = 0;};
	class rhs_ec75_mag: ATMine_Range_Mag {useAction = 0;};
};
