// Copyright (c) 2015 Matheus Silva

extern "C" {
    #include "../../dependency/lua/src/lua.h"
    #include "../../dependency/lua/src/lauxlib.h"
    #include "../../dependency/lua/src/lualib.h"
}

#define __LUA_ENABLED__
#ifdef WIN32
#ifdef LAPI_EXPORTS
#define LAPI_API _declspec(dllexports)
#else
#define LAPI_API _declspec(dllimports)
#endif
#else
#define LAPI_API
#endif

class AlphaEngine {
    
}
