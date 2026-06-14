// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// Declaration
	struct LUACall {
		// BrnLUACall.h:62
		enum EArgType {
			E_NUMBER = 0,
			E_STRING = 1,
			E_NIL = 2,
			E_BOOL = 3,
			E_UNKNOWN = 4,
		}

	}

}

// BrnLUACall.h:59
struct BrnGame::LUACall {
private:
	// BrnLUACall.h:126
	int32_t miNumParams;

	// BrnLUACall.h:127
	int32_t miNumResults;

	// BrnLUACall.h:128
	lua_State * mpLuaHandle;

	// BrnLUACall.h:129
	bool mbCalledFunction;

public:
	// BrnLUACall.h:71
	void LUACall(lua_State *);

	// BrnLUACall.h:74
	void SetFunction(const char *);

	// BrnLUACall.h:77
	void AddArgument(bool);

	// BrnLUACall.h:80
	void AddArgument(float32_t);

	// BrnLUACall.h:83
	void AddArgument(int32_t);

	// BrnLUACall.h:86
	void AddArgument(const char *);

	// BrnLUACall.h:89
	void Call();

	// BrnLUACall.h:92
	int32_t GetNumResults();

	// BrnLUACall.h:95
	float32_t GetFloat32(int32_t);

	// BrnLUACall.h:98
	int32_t GetInt32(int32_t);

	// BrnLUACall.h:101
	const char * GetString(int32_t) const;

	// BrnLUACall.h:104
	bool GetBool(int32_t) const;

	// BrnLUACall.h:107
	bool IsNumber(int32_t) const;

	// BrnLUACall.h:110
	bool IsString(int32_t) const;

	// BrnLUACall.h:113
	bool IsBool(int32_t) const;

	// BrnLUACall.h:116
	bool IsNil(int32_t) const;

	// BrnLUACall.h:119
	BrnGame::LUACall::EArgType GetArgType(int32_t) const;

	// BrnLUACall.h:122
	void ResetStack();

private:
	// BrnLUACall.h:132
	int32_t ResultIndexToStackIndex(int32_t) const;

}

