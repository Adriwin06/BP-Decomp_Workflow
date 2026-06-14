// BrnDebugChecks.h:26
namespace BrnDebugChecks {
	// BrnDebugChecks.cpp:41
	extern void DebugSetVal(BrnDebugChecks::EDebugCheckEntries, bool);

	// BrnDebugChecks.cpp:47
	extern void DebugSetVal(BrnDebugChecks::EDebugCheckEntries, int32_t);

	// BrnDebugChecks.cpp:53
	extern void DebugSetVal(BrnDebugChecks::EDebugCheckEntries, uint32_t);

	// BrnDebugChecks.cpp:59
	extern void DebugSetVal(BrnDebugChecks::EDebugCheckEntries, float32_t);

	// BrnDebugChecks.cpp:65
	extern void DebugCheckVal(const char *, int32_t, BrnDebugChecks::EDebugCheckEntries, const char *, bool);

	// BrnDebugChecks.cpp:71
	extern void DebugCheckVal(const char *, int32_t, BrnDebugChecks::EDebugCheckEntries, const char *, int32_t);

	// BrnDebugChecks.cpp:77
	extern void DebugCheckVal(const char *, int32_t, BrnDebugChecks::EDebugCheckEntries, const char *, uint32_t);

	// BrnDebugChecks.cpp:83
	extern void DebugCheckVal(const char *, int32_t, BrnDebugChecks::EDebugCheckEntries, const char *, float32_t);

	// BrnDebugChecks.cpp:32
	DebugCheckEntry volatile[1] gaChecks;

}

// BrnDebugChecks.cpp:26
union BrnDebugChecks::DebugCheckEntry {
	// BrnDebugChecks.cpp:27
	float32_t mfFloatVal;

	// BrnDebugChecks.cpp:28
	int32_t miIntVal;

	// BrnDebugChecks.cpp:29
	uint32_t muUIntVal;

}
