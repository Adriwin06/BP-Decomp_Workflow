// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct SpliceBankStatistics {
			// CgsSplicerContent.h:128
			struct Stats {
				// CgsSplicerContent.h:130
				uint16_t muPlayCount;

			public:
				// CgsSplicerContent.h:129
				Stats();

			}

		}

	}

}

// CgsSplicerContent.h:45
struct CgsSound::Playback::SpliceBankStatistics {
	// CgsSplicerContent.h:133
	extern SpliceBankStatistics * spHead;

	// CgsSplicerContent.h:135
	const CgsSound::Playback::SplicerContent * mpSpliceContent;

	// CgsSplicerContent.h:136
	const SpliceManager::SpliceContainer * mpSpliceBank;

	// CgsSplicerContent.h:137
	CgsSound::Playback::SpliceBankStatistics::Stats * mpaStats;

	// CgsSplicerContent.h:138
	uint32_t muStatCount;

	// CgsSplicerContent.h:139
	SpliceBankStatistics * mpNext;

	// CgsSplicerContent.h:140
	uint32_t muIndex;

public:
	// CgsSplicerContent.h:47
	void SpliceBankStatistics();

	// CgsSplicerContent.h:58
	void SpliceBankStatistics(const SpliceManager::SpliceContainer *, const CgsSound::Playback::SplicerContent *, uint32_t);

	// CgsSplicerContent.h:81
	void ~SpliceBankStatistics();

	// CgsSplicerContent.h:112
	void DoPlay(uint16_t);

	// CgsSplicerContent.h:122
	// Declaration
	void DumpToTty() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSplicerContent.cpp:189
		using namespace CgsDev::Message;

		// CgsSplicerContent.cpp:195
		using namespace CgsDev::Message;

	}

	// CgsSplicerContent.h:125
	void DumpAllToTty();

}

// CgsSplicerContent.h:248
struct CgsSound::Playback::SplicerContentSlot : public CgsSound::Playback::ISlotImplementation {
	// CgsSplicerContent.cpp:40
	extern const Name SK_SLOT_CLASSNAME;

public:
	// CgsSplicerContent.cpp:101
	virtual bool DoPlay(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &, uint32_t);

	// CgsSplicerContent.cpp:152
	virtual bool DoStop(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &);

	// CgsSplicerContent.cpp:66
	virtual bool DoUpdatePlaying(System *, const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &, float);

	// CgsSplicerContent.cpp:166
	virtual void DoPreDetach(const Slot &, CgsSound::Playback::Voice &, CgsSound::Playback::Content &);

}

// CgsSplicerContent.h:154
struct CgsSound::Playback::SplicerContent : public CgsSound::Playback::Content {
	// CgsSplicerContent.h:158
	SpliceBankStatistics mStatistics;

	// CgsSplicerContent.cpp:33
	extern const Name SK_CONTENT_CLASS;

	// CgsSplicerContent.cpp:36
	extern const Name SK_CONTENT_TYPE;

private:
	// CgsSplicerContent.h:238
	ContentLoader<CgsResource::BinaryFileResource> mLoader;

	// CgsSplicerContent.h:239
	void * mpSplicerData;

	// CgsSplicerContent.h:240
	SPLICE_TYPE meType;

public:
	void SplicerContent(const CgsSound::Playback::SplicerContent &);

	// CgsSplicerContent.h:167
	void SplicerContent(CgsSound::Playback::Factory &, const ContentSpec &, uint32_t);

	// CgsSplicerContent.h:173
	virtual void ~SplicerContent();

	// CgsSplicerContent.h:176
	SPLICE_TYPE GetSpliceType();

protected:
	// CgsSplicerContent.h:183
	CgsSound::Playback::SplicerFactory & GetSplicerFactory();

	// CgsSplicerContent.h:188
	virtual bool DoLoad();

	// CgsSplicerContent.h:189
	virtual bool DoUnload();

	// CgsSplicerContent.h:190
	virtual void DoUpdate(float);

	// CgsSplicerContent.h:191
	virtual void * DoGetData();

	// CgsSplicerContent.h:196
	virtual bool DoOnPostLoad();

	// CgsSplicerContent.h:223
	virtual bool DoOnPreUnload();

}

