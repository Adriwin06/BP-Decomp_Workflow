// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct Name {
			// CgsCommon.h:269
			struct HashNode {
				// CgsCommon.h:284
				uintptr_t mHash;

				// CgsCommon.h:285
				const char * mkpacName;

				// CgsCommon.h:286
				CgsSound::Playback::Name::HashNode * mpLess;

				// CgsCommon.h:287
				CgsSound::Playback::Name::HashNode * mpMore;

			public:
				// CgsCommon.h:271
				HashNode();

				// CgsCommon.h:274
				void Clear();

				// CgsCommon.h:277
				// Declaration
				void Dump() {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsCommon.cpp:47
					using namespace CgsDev::Message;

				}

				// CgsCommon.h:282
				bool Traverse(bool (*)(uintptr_t, const char *, void *), void *);

			}

			// CgsCommon.h:292
			struct HashTable {
			private:
				// CgsCommon.h:312
				extern CgsSound::Playback::Name::HashNode *[32] sapHashNode;

				// CgsCommon.h:313
				extern CgsSound::Playback::Name::HashNode[2048] saNodes;

				// CgsCommon.h:314
				extern uint32_t su32CurrentNode;

			public:
				// CgsCommon.h:297
				// Declaration
				void Store(uintptr_t, const char *) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsCommon.cpp:141
					using namespace CgsDev::Message;

				}

				// CgsCommon.h:301
				const char * Retrieve(uintptr_t);

				// CgsCommon.h:304
				// Declaration
				void Dump() {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsCommon.cpp:183
					using namespace CgsDev::Message;

				}

				// CgsCommon.h:309
				void Traverse(bool (*)(uintptr_t, const char *, void *), void *);

			}

		}

		// CgsCommon.cpp:32
		extern const Name K_NULL_NAME;

	}

}

// CgsCommon.cpp:153
void CgsSound::Playback::Name::HashTable::Retrieve(uintptr_t  lHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommon.cpp:155
		CgsSound::Playback::Name::HashNode * lpHashNode;

	}
}

// CgsCommon.cpp:60
void CgsSound::Playback::Name::HashNode::Traverse(bool (*)(uintptr_t, const char *, void *)  lTraversal, void *  lpvContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommon.cpp:62
		bool lbResult;

	}
}

// CgsCommon.cpp:197
void CgsSound::Playback::Name::HashTable::Traverse(bool (*)(uintptr_t, const char *, void *)  lTraversal, void *  lpvContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommon.cpp:199
		bool lbResult;

		{
			// CgsCommon.cpp:201
			uint32_t lu32I;

		}
	}
}

// CgsCommon.cpp:84
void CgsSound::Playback::Name::HashNode::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCommon.cpp:104
void CgsSound::Playback::Name::HashTable::Store(uintptr_t  lHash, const char *  lkpacName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommon.cpp:108
		CgsSound::Playback::Name::HashNode ** lppHashNode;

	}
	HashNode::Clear(/* parameters */);
}

// CgsCommon.cpp:217
void CgsSound::Playback::Name::MakeHash(const char *  lkpacName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		// CgsCommon.cpp:223
		uintptr_t lHash;

		// CgsCommon.cpp:224
		const char * lpkcC;

	}
}

// CgsCommon.cpp:40
void CgsSound::Playback::Name::HashNode::Dump() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsCommon.cpp:181
void CgsSound::Playback::Name::HashTable::Dump() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommon.cpp:184
		uint32_t lu32I;

	}
}

// CgsCommon.cpp:97
// CgsCommon.cpp:98
// CgsCommon.cpp:99
