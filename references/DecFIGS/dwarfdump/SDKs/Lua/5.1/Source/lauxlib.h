// lauxlib.h:35
struct luaL_Reg {
	// lauxlib.h:36
	const char * name;

	// lauxlib.h:37
	lua_CFunction func;

}

// lauxlib.h:38
typedef luaL_Reg luaL_Reg;

