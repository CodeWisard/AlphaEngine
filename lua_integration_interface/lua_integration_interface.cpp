// Copyright (C) 2015 Matheus Silva

#include "lua_integration_interface.h"

namespace alpha_engine
{
    namespace lua_machine_wrapper
    {
        lua_machine::lua_machine(const char * s)
        {
            L = luaL_newstate();
            if (luaL_loadstring(L, s))
            {
                // Return error
            }
        }

        lua_machine::~lua_machine()
        {
            lua_close(L);
        }
        void lua_machine::lua_error(lua_State * L, int err)
        {
            // alpha_engine
        }
    }
}