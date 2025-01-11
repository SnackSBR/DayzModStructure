class CfgPatches
{
	class MyAwesomeMod
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class MyAwesomeMod
	{
		dir="MyAwesomeMod";
		action="";
		hideName=0;
		hidePicture=0;
		name="MyAwesomeMod";
		author="SnackS";
		authorID="76561197980358676";
		credits="SnackS";
		version="1.00";
		extra=0;
		type="mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"MyAwesomeMod/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"MyAwesomeMod/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"MyAwesomeMod/scripts/5_Mission"};
			};
		};
	};
};