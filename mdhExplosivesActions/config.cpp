class CfgPatches
{
	class mdhExplosivesActions
	{
		author = "Moerderhoschi";
		name = "mdhExplosivesActions";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		//url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3473212949";
	};
};

class CfgFunctions
{
	class mdh
	{
		class mdhFunctions
		{
			class mdhExplosivesActions
			{
				file = "mdhExplosivesActions\mdhExplosivesActions.sqf";
				postInit = 1;
			};
		};
	};
};

class CfgMagazines
{
	class Default {};
	class CA_Magazine: Default {};
	class SatchelCharge_Remote_Mag: CA_Magazine {useAction = 0;};
	class ATMine_Range_Mag: CA_Magazine {useAction = 0;};
	class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine {useAction = 0;};
	
};

class CfgMods
{
	class mdhExplosivesActions
	{
		dir = "@mdhExplosivesActions";
		name = "mdhExplosivesActions";
		picture = "a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa";
		hidePicture = "true";
		hideName = "true";
		actionName = "Website";
		//action = "https://steamcommunity.com/sharedfiles/filedetails/?id=3473212949";
	};
};
