// CgsInterpreterData.h:63
struct CgsSound::Logic::InterpreterData {
private:
	// CgsInterpreterData.h:100
	const CgsSound::Logic::MessageResponse * mpaResponses;

	// CgsInterpreterData.h:101
	int32_t miNumResponses;

public:
	// CgsInterpreterData.h:77
	void Construct(const CgsSound::Logic::MessageResponse *, int32_t);

	// CgsInterpreterData.h:86
	int32_t GetNumResponses() const;

	// CgsInterpreterData.h:94
	const CgsSound::Logic::MessageResponse * GetResponse(int32_t) const;

}

// CgsInterpreterData.h:118
struct CgsSound::Logic::Parameter {
	// CgsInterpreterData.h:129
	float32_t mfScalar;

public:
	// CgsInterpreterData.h:125
	void Construct();

}

// CgsInterpreterData.h:146
struct CgsSound::Logic::MessageResponse {
private:
	// CgsInterpreterData.h:246
	extern const int32_t KI_INPUT_SLOTS = 4;

	// CgsInterpreterData.h:248
	int32_t[4] maiInputSlots;

	// CgsInterpreterData.h:249
	int32_t miInputSlotsUsed;

	// CgsInterpreterData.h:251
	uint32_t mu32Message;

	// CgsInterpreterData.h:253
	const ID * mpaResourceIds;

	// CgsInterpreterData.h:254
	int32_t miNumIds;

	// CgsInterpreterData.h:257
	Parameter mGainVar;

	// CgsInterpreterData.h:258
	Parameter mPitchVar;

public:
	// CgsInterpreterData.h:158
	void Construct(uint32_t, const ID *, int32_t);

	// CgsInterpreterData.h:164
	uint32_t GetMessage() const;

	// CgsInterpreterData.h:171
	int32_t GetInputSlotsUsed() const;

	// CgsInterpreterData.h:179
	int32_t GetInputSlot(int32_t) const;

	// CgsInterpreterData.h:186
	int32_t GetNumResourceIds() const;

	// CgsInterpreterData.h:194
	const ID * GetResourceId(int32_t) const;

	// CgsInterpreterData.h:201
	Parameter & GetGainVarParameter();

	// CgsInterpreterData.h:208
	Parameter & GetPitchVarParameter();

	// CgsInterpreterData.h:217
	void SetInputSlots(int32_t *, int32_t);

private:
	// CgsInterpreterData.h:230
	void SetResourceIds(const ID *, int32_t);

	// CgsInterpreterData.h:242
	void SetMessage(uint32_t);

}

// CgsInterpreterData.h:246
extern const int32_t KI_INPUT_SLOTS = 4;

