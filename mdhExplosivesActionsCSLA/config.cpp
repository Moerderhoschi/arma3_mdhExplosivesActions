class CfgPatches
{
	class mdhExplosivesActionsCSLA
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActionsCSLA";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","CSLA"};
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606905793";
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class CSLA_Magazine: Default {};
	class US85_Magazine: CA_Magazine {};
	class CSLA_IVZmagazine: CSLA_Magazine {useAction = 0;};
	class CSLA_PTMiD_mag: CSLA_IVZmagazine {useAction = 0;};
	class CSLA_PtMiBa3_mag: CSLA_IVZmagazine {useAction = 0;};
	class CSLA_PPMiNa_mag: CSLA_IVZmagazine {useAction = 0;};
	class CSLA_PPMiSr2_mag: CSLA_IVZmagazine {useAction = 0;};
	class CSLA_IVZ: CSLA_IVZmagazine {useAction = 0;};
	class CSLA_TNT0100g: CSLA_IVZmagazine {useAction = 0;};
	class CSLA_NO2: CSLA_IVZmagazine {useAction = 0;};
	class CSLA_RG4m_mag: CSLA_NO2 {useAction = 0;};
	class US85_ATMine_mag: US85_Magazine {useAction = 0;};
	class US85_M14Mine_mag: US85_Magazine {useAction = 0;};
	class US85_SatchelCharge_Mag: US85_Magazine {useAction = 0;};
	class US85_M67m_mag: CSLA_NO2 {useAction = 0;};
};

class CfgMods
{
	class mdhExplosivesActionsCSLA
	{
		dir = "@mdhExplosivesActionsCSLA";
		name = "mdhExplosivesActionsCSLA";
		picture = "a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=3606905793";
	};
};
