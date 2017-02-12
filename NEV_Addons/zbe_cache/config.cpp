class CfgPatches {
	class ZBE_Cache {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"Zorrobyte"};

	};
};

class CfgFunctions {
    class ZBE {
        class Cache {
            class Cache_Init {
                file = "zbe_cache\init.sqf";
                preInit = 1;
            };
        };
    };
};

class ZBE_Cache_Key_Setting {
	#include "\userconfig\zbe_cache\zbe_cache.hpp"
};