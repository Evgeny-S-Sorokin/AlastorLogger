class CfgPatches
{
	class AlastorLogger
	{
		units[]				= {};
		weapons[]			= {};
		requiredVersion		= 0.1;
		requiredAddons[]	= {};
	};
};

class CfgMods
{
	class Logger
	{
	    type 			= "mod";
		name 			= "Custom_logger";
		author 			= "Alastor";
		authorID 		= "76561198052045611";
	    dependencies[] 	= { "Game" };
		
	    class defs
	    {

			class gameScriptModule
            {
                value	= "";
                files[] = { "AlastorLogger/scripts/3_game" };
            };
			
        };
    };
};