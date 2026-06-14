// CgsEvent.h:72
extern const int32_t KI_MAX_VARIABLE_COUNT = 16;

// CgsEvent.h:51
struct CgsFsm::Event {
private:
	// CgsEvent.h:72
	extern const int32_t KI_MAX_VARIABLE_COUNT = 16;

	// CgsEvent.h:74
	const CgsFsm::Variable *[16] maVariables;

	// CgsEvent.h:75
	CgsID mId;

	// CgsEvent.h:76
	int32_t miVariableCount;

public:
	// CgsEvent.h:55
	void Construct(CgsID);

	// CgsEvent.h:58
	CgsID GetId() const;

	// CgsEvent.h:62
	void AddVariable(const CgsFsm::Variable *);

	// CgsEvent.h:65
	int32_t GetVariableCount() const;

	// CgsEvent.h:69
	const CgsFsm::Variable * GetVariable(int32_t) const;

}

