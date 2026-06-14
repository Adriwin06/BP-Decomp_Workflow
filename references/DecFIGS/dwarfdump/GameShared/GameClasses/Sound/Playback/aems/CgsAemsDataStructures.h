// CgsAemsDataStructures.h:40
struct CgsSound::Playback::AemsVoiceCsisClass : public Entity {
	// CgsAemsDataStructures.h:42
	extern const Name SK_TYPE_NAME;

private:
	// CgsAemsDataStructures.h:140
	uint32_t mu32ParameterCount;

	// CgsAemsDataStructures.h:141
	uint16_t mu16UserParameterStart;

	// CgsAemsDataStructures.h:142
	uint16_t mu16ClassNameLength;

	// CgsAemsDataStructures.h:143
	uint32_t mSystemCrc;

	// CgsAemsDataStructures.h:144
	uint32_t mClassCrc;

public:
	// CgsAemsDataStructures.h:46
	size_t GetAllocationSize(uint32_t);

	// CgsAemsDataStructures.h:53
	void AemsVoiceCsisClass(uint32_t);

	// CgsAemsDataStructures.h:58
	uint32_t GetParameterCount() const;

	// CgsAemsDataStructures.h:65
	void SetParameterCount(uint32_t);

	// CgsAemsDataStructures.h:71
	uint32_t GetUserParameterStart() const;

	// CgsAemsDataStructures.h:78
	void SetUserParameterStart(uint32_t);

	// CgsAemsDataStructures.h:84
	uint32_t GetSystemCrc() const;

	// CgsAemsDataStructures.h:91
	void SetSystemCrc(uint32_t);

	// CgsAemsDataStructures.h:97
	uint32_t GetClassCrc() const;

	// CgsAemsDataStructures.h:104
	void SetClassCrc(uint32_t);

	// CgsAemsDataStructures.h:110
	const char * GetClassName() const;

	// CgsAemsDataStructures.h:121
	void SetClassName(const char *);

private:
	// CgsAemsDataStructures.h:133
	char * GetClassNameInternal();

}

