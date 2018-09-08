#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "NEV Component - Debug Menu";
        author = "Neviothr";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"nev_main"};
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgNotifications.hpp"
#include "CfgEventHandlers.hpp"
#include "\x\nev\addons\main\ui\BaseDefines.hpp"
#include "\x\nev\addons\debug_menu\ui\DebugMenu.hpp"
