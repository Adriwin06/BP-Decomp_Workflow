// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// Declaration
	struct LUACallbackHelper {
		// BrnLUACallbackHelper.h:50
		enum EArgType {
			E_NUMBER = 0,
			E_STRING = 1,
			E_NIL = 2,
			E_BOOL = 3,
			E_UNKNOWN = 4,
		}

	}

}

// BrnLUACallbackHelper.h:48
struct BrnGame::LUACallbackHelper {
private:
	// BrnLUACallbackHelper.h:114
	int32_t miNumParams;

	// BrnLUACallbackHelper.h:115
	int32_t miNumResults;

	// BrnLUACallbackHelper.h:116
	lua_State * mpLUAHandle;

public:
	// BrnLUACallbackHelper.h:59
	void LUACallbackHelper(lua_State *);

	// BrnLUACallbackHelper.h:62
	int32_t GetNumParams() const;

	// BrnLUACallbackHelper.h:65
	float32_t GetFloat32Param(int32_t);

	// BrnLUACallbackHelper.h:68
	int32_t GetInt32Param(int32_t);

	// BrnLUACallbackHelper.h:71
	const char * GetStringParam(int32_t) const;

	// BrnLUACallbackHelper.h:74
	bool GetBoolParam(int32_t) const;

	// BrnLUACallbackHelper.h:77
	bool IsParamNumber(int32_t) const;

	// BrnLUACallbackHelper.h:80
	bool IsParamString(int32_t) const;

	// BrnLUACallbackHelper.h:83
	bool IsParamBool(int32_t) const;

	// BrnLUACallbackHelper.h:86
	bool IsParamNil(int32_t) const;

	// BrnLUACallbackHelper.h:89
	BrnGame::LUACallbackHelper::EArgType GetParamType(int32_t) const;

	// BrnLUACallbackHelper.h:92
	void ClearParams();

	// BrnLUACallbackHelper.h:95
	int32_t GetReturnValue() const;

	// BrnLUACallbackHelper.h:98
	void AddResult(float32_t);

	// BrnLUACallbackHelper.h:101
	void AddResult(int32_t);

	// BrnLUACallbackHelper.h:104
	void AddResult(const char *);

	// BrnLUACallbackHelper.h:107
	void AddResult(bool);

	// BrnLUACallbackHelper.h:110
	void AddNILResult();

private:
	// BrnLUACallbackHelper.h:119
	int32_t ParamIndexToStackIndex(int32_t) const;

}

