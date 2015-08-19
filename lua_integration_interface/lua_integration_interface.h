// Copyright (C) 2015 Matheus Silva

#ifndef __LUA_AVAILABLE__
#define __LUA_AVAILABLE__
#endif

#ifdef WIN32
#ifdef LUA_INTEGRATION_INTERFACE_EXPORTS
#define LII_API __declspec(dllexport)
#else
#define LII_API __declspec(dllimport)
#endif
#else
#define LII_API
#endif

#include "../dependency/lua/src/lua.hpp"

namespace alpha_engine 
{
    namespace lua_machine_wrapper
    {
        class LII_API lua_machine
        {
        public:
            lua_machine(const char * s);
            ~lua_machine();

        private:
            void lua_error(luaL_State *L, int err);
            luaL_State *L;
        };

    }
}