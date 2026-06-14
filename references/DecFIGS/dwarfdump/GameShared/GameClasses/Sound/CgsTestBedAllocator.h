// CgsCommon.h:25
namespace CgsSound {
	// CgsTestBedAllocator.h:64
	namespace TestBed {
	}

}

// CgsTestBedAllocator.h:97
extern const uint32_t KU_HISTORY_LENGTH = 500;

// CgsTestBedAllocator.h:653
extern const uintptr_t SK_GUARD = 1936946035;

// CgsTestBedAllocator.h:654
extern const uintptr_t SK_GUARD_DEALLOCATED = 1920103026;

// CgsTestBedAllocator.h:803
extern const char * gpcDebugAllocString;

// CgsTestBedAllocator.h:804
extern bool gbRemoveDebugStringAfterUse;

// CgsCommon.h:25
namespace CgsSound {
	// CgsTestBedAllocator.h:64
	namespace TestBed {
		// Declaration
		struct Allocator {
			// CgsTestBedAllocator.h:96
			struct History {
				// CgsTestBedAllocator.h:100
				struct Entry {
					// CgsTestBedAllocator.h:108
					const char * mpcName;

					// CgsTestBedAllocator.h:109
					uint8_t * mpStartMem;

					// CgsTestBedAllocator.h:110
					uint8_t * mpEndMem;

					// CgsTestBedAllocator.h:111
					size_t muSize;

				public:
					// CgsTestBedAllocator.h:101
					Entry();

					// CgsTestBedAllocator.h:104
					Entry(const char *, uint8_t *, size_t);

				}

				// CgsTestBedAllocator.h:97
				extern const uint32_t KU_HISTORY_LENGTH = 500;

				// CgsTestBedAllocator.h:113
				CgsSound::TestBed::Allocator::History::Entry[500] maHistory;

				// CgsTestBedAllocator.h:115
				uint32_t muCurrentPosition;

			public:
				// CgsTestBedAllocator.h:117
				History();

				// CgsTestBedAllocator.h:121
				CgsSound::TestBed::Allocator::History::Entry & DoAllocate();

				// CgsTestBedAllocator.h:128
				// Declaration
				void DumpAllPossibleDanglers(uint8_t *) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsTestBedAllocator.h:143
					using namespace CgsDev::Message;

					// CgsTestBedAllocator.h:154
					using namespace CgsDev::Message;

				}

			}

			// CgsTestBedAllocator.h:652
			struct Guard {
				// CgsTestBedAllocator.h:653
				extern const uintptr_t SK_GUARD = 1936946035;

				// CgsTestBedAllocator.h:654
				extern const uintptr_t SK_GUARD_DEALLOCATED = 1920103026;

			private:
				// CgsTestBedAllocator.h:676
				uintptr_t muValue;

			public:
				// CgsTestBedAllocator.h:657
				void Construct();

				// CgsTestBedAllocator.h:663
				bool IsValid();

				// CgsTestBedAllocator.h:669
				void Destruct();

			}

			// CgsTestBedAllocator.h:680
			struct Header {
				// CgsTestBedAllocator.h:681
				CgsSound::TestBed::Allocator::Header * mpNext;

				// CgsTestBedAllocator.h:682
				Resource mResource;

				// CgsTestBedAllocator.h:684
				const char * mpcName;

				// CgsTestBedAllocator.h:686
				uintptr_t muSize;

				// CgsTestBedAllocator.h:687
				CgsSound::TestBed::Allocator::Guard mStartGuard;

			public:
				// CgsTestBedAllocator.h:691
				CgsSound::TestBed::Allocator::Header & GetHeaderFromAddress(void *);

				// CgsTestBedAllocator.h:697
				CgsSound::TestBed::Allocator::Guard & GetEndGuard();

				// CgsTestBedAllocator.h:703
				const char ** GetEndGuardName();

				// CgsTestBedAllocator.h:716
				// Declaration
				void SanityCheck(CgsSound::TestBed::Allocator::History &, const char *) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsTestBedAllocator.h:720
					using namespace CgsDev::Message;

					// CgsTestBedAllocator.h:726
					using namespace CgsDev::Message;

					// CgsTestBedAllocator.h:733
					using namespace CgsDev::Message;

					// CgsTestBedAllocator.h:737
					using namespace CgsDev::Message;

					// CgsTestBedAllocator.h:741
					using namespace CgsDev::Message;

					// CgsTestBedAllocator.h:746
					using namespace CgsDev::Message;

					// CgsTestBedAllocator.h:753
					using namespace CgsDev::Message;

					// CgsTestBedAllocator.h:757
					using namespace CgsDev::Message;

				}

				// CgsTestBedAllocator.h:765
				// Declaration
				void Dump(CgsSound::TestBed::Allocator::History &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsTestBedAllocator.h:769
					using namespace CgsDev::Message;

				}

				// CgsTestBedAllocator.h:774
				void * GetClientAddress();

			}

		}

	}

}

// CgsTestBedAllocator.h:68
struct CgsSound::TestBed::Allocator : public rw::IResourceAllocator {
private:
	// CgsTestBedAllocator.h:784
	rw::IResourceAllocator * mpAllocator;

	// CgsTestBedAllocator.h:785
	CgsSound::TestBed::Allocator::Header * mpFirstHeader;

	// CgsTestBedAllocator.h:786
	bool mbSanityCheck;

	// CgsTestBedAllocator.h:787
	bool mbVerbose;

	// CgsTestBedAllocator.h:788
	bool volatile mbAllocEntered;

	// CgsTestBedAllocator.h:789
	bool volatile mbFreeEntered;

	// CgsTestBedAllocator.h:790
	bool mbEnableThreadSafety;

	// CgsTestBedAllocator.h:792
	bool mbTestRwac;

	// CgsTestBedAllocator.h:794
	void * mpvBadAlloc;

	// CgsTestBedAllocator.h:795
	void * mpvBadFree;

	// CgsTestBedAllocator.h:796
	const char * mpcName;

	// CgsTestBedAllocator.h:797
	size_t muBytesAllocated;

	// Unknown accessibility
	// mutex.h:22
	typedef Mutex Mutex;

	// CgsTestBedAllocator.h:798
	Allocator::Mutex mMutex;

	// CgsTestBedAllocator.h:801
	CgsSound::TestBed::Allocator::History mHistory;

	// CgsTestBedAllocator.cpp:10
	extern const char * gpcDebugAllocString;

	// CgsTestBedAllocator.cpp:11
	extern bool gbRemoveDebugStringAfterUse;

public:
	void Allocator(const Allocator &);

	// CgsTestBedAllocator.h:72
	void Allocator(const char *, rw::IResourceAllocator *);

	// CgsTestBedAllocator.h:161
	bool IsValidMemoryAddress(const void *);

	// CgsTestBedAllocator.h:183
	bool IsValidMemoryAddress(const char *);

	// CgsTestBedAllocator.h:206
	void SetDebugAllocStringBehavior(bool);

	// CgsTestBedAllocator.h:212
	void SetDebugAllocString(const char *);

	// CgsTestBedAllocator.h:217
	void ClearDebugAllocString();

	// CgsTestBedAllocator.h:223
	virtual void ~Allocator();

	// CgsTestBedAllocator.h:229
	void SetSanityCheck(bool);

	// CgsTestBedAllocator.h:236
	void SetVerbose(bool);

	// CgsTestBedAllocator.h:243
	void SetAllocator(rw::IResourceAllocator *);

	// CgsTestBedAllocator.h:254
	void EnableThreadSafety(bool);

	// CgsTestBedAllocator.h:262
	void EnableRwacLockedTest(bool);

	// CgsTestBedAllocator.h:269
	void TrapOnAllocate(uintptr_t);

	// CgsTestBedAllocator.h:272
	void TrapOnFree(uintptr_t);

	// CgsTestBedAllocator.h:275
	void SanityCheck();

	// CgsTestBedAllocator.h:294
	// Declaration
	void SafeDump() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTestBedAllocator.h:296
		using namespace CgsDev::Message;

		// CgsTestBedAllocator.h:313
		using namespace CgsDev::Message;

	}

	// CgsTestBedAllocator.h:320
	// Declaration
	void SortedDump() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTestBedAllocator.h:322
		using namespace CgsDev::Message;

		// CgsTestBedAllocator.h:356
		using namespace CgsDev::Message;

		// CgsTestBedAllocator.h:370
		using namespace CgsDev::Message;

		// CgsTestBedAllocator.h:383
		using namespace CgsDev::Message;

	}

	// CgsTestBedAllocator.h:406
	// Declaration
	void ResetThreadId() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTestBedAllocator.h:408
		using namespace CgsDev::Message;

	}

	// CgsTestBedAllocator.h:413
	size_t GetBytesAllocated() const;

private:
	// CgsTestBedAllocator.h:422
	// Declaration
	virtual Resource DoAllocate(const ResourceDescriptor &, const char8_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTestBedAllocator.h:464
		using namespace CgsDev::Message;

		// CgsTestBedAllocator.h:468
		using namespace CgsDev::Message;

		// CgsTestBedAllocator.h:480
		using namespace CgsDev::Message;

		// CgsTestBedAllocator.h:538
		using namespace CgsDev::Message;

	}

	// CgsTestBedAllocator.h:562
	// Declaration
	virtual void DoFree(const Resource &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTestBedAllocator.h:585
		using namespace CgsDev::Message;

		// CgsTestBedAllocator.h:598
		using namespace CgsDev::Message;

	}

}

