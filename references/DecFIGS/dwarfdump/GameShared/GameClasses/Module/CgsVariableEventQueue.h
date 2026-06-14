// CgsVariableEventQueue.h:45
struct CgsModule::BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:57
	bool mbIsConstructed;

	// CgsVariableEventQueue.h:51
	void BaseVariableEventQueue();

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<16384,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[16384] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<32768,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[32768] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<13312,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[13312] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<512,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[512] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4032,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4032] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<13312,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<4032,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<512,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::LoadGameDataEvent>(const const LoadGameDataEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::GetGameDataEvent>(const const GetGameDataEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::GetICEListRequest>(const const GetICEListRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::GetVehicleListRequest>(const const GetVehicleListRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsAttribSys::AttribSysIO::RegisterVaultRequest>(const const RegisterVaultRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// _built-in_
namespace :: {
	// CgsVariableEventQueue.h:25
	const int32_t KI_MAX_EVENT_TYPES_IN_QUEUE = 100;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<16384,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[16384] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<256, 16>(const VariableEventQueue<256,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<2048,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[2048] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<1536,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[1536] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<1536, 16>(const VariableEventQueue<1536,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<256,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[256] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<1024,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[1024] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<128,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[128] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<16384,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<2048,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<128,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<4096,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<13312,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[13312] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<13312, 16>(const VariableEventQueue<13312,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<65536,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[65536] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<65536, 16>(const VariableEventQueue<65536,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<2048,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[2048] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<2048, 16>(const VariableEventQueue<2048,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<32768,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[32768] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<2048, 16>(const VariableEventQueue<2048,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<512, 16>(const VariableEventQueue<512,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<14000,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[14000] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<1536,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[1536] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<1536, 16>(const VariableEventQueue<1536,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4920,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4920] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4920, 16>(const VariableEventQueue<4920,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<8192,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[8192] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<2048, 16>(const VariableEventQueue<2048,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<131072,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[131072] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<131072, 16>(const VariableEventQueue<131072,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<1024,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[1024] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<3072,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[3072] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<4920,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<1536,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<131072,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<1024,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<32768,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<8192,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnAI::AIModuleIO::DeactivateRaceCarEvent>(const const DeactivateRaceCarEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::GetWheelListRequest>(const const GetWheelListRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnAI::AIModuleIO::AttachAIControlEvent>(const const AttachAIControlEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::SwapOutCollisionWorldRequest>(const const SwapOutCollisionWorldRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::SwapInCollisionWorldRequest>(const const SwapInCollisionWorldRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSceneManager::SceneManagerIO::InEventLineTestFine>(const const InEventLineTestFine &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnAI::AIModuleIO::AddCarToCurrentModeEvent>(const const AddCarToCurrentModeEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnAI::AIModuleIO::DetachAIControlEvent>(const const DetachAIControlEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnAI::AIModuleIO::SetUpOutOfRangeRaceCarEvent>(const const SetUpOutOfRangeRaceCarEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnPhysics::Vehicle::BrnPlayerDriverControls>(const const BrnPlayerDriverControls &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnAI::AIModuleIO::PlayerControlChangedEvent>(const const PlayerControlChangedEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnAI::AIModuleIO::RemoveCarFromCurrentModeEvent>(const const RemoveCarFromCurrentModeEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnAI::AIModuleIO::ActivateRaceCarEvent>(const const ActivateRaceCarEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<13312,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[13312] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<16384,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[16384] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<256, 16>(const VariableEventQueue<256,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<2048,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[2048] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<131072,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[131072] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<131072, 16>(const VariableEventQueue<131072,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<3072,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[3072] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<3072,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<13312,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[13312] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<13312, 16>(const VariableEventQueue<13312,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<256, 16>(const VariableEventQueue<256,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<1024,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[1024] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<256,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[256] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<256,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnWorld::TriggerEntityModuleIO::InLineTestEvent>(const const InLineTestEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::GetFreeburnChallengeListRequest>(const const GetFreeburnChallengeListRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnWorld::TriggerEntityModuleIO::InAddBoxTriggerEvent>(const const InAddBoxTriggerEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<65536,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[65536] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<65536, 16>(const VariableEventQueue<65536,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<32768,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[32768] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<2048, 16>(const VariableEventQueue<2048,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<512, 16>(const VariableEventQueue<512,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<256, 16>(const VariableEventQueue<256,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<3072, 16>(const VariableEventQueue<3072,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<1024, 16>(const VariableEventQueue<1024,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<14000,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[14000] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4032,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4032] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<32768, 16>(const VariableEventQueue<32768,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<14000,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<65536,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<13312,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[13312] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<32768,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[32768] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<13312,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[13312] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<13312, 16>(const VariableEventQueue<13312,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<2048,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[2048] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<2048, 16>(const VariableEventQueue<2048,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4920,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4920] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4920, 16>(const VariableEventQueue<4920,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<32768,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[32768] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<512,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[512] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnGameState::GameStateModuleIO::FinishedSyncingPlayersEvent>(const const FinishedSyncingPlayersEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<256,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[256] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<14000,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[14000] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<14000, 16>(const VariableEventQueue<14000,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnPhysics::Vehicle::BrnNetworkDriverControls>(const const BrnNetworkDriverControls &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<13440,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[13440] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<13440, 16>(const VariableEventQueue<13440,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<13440,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>(const const InEventLineTestNearest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<2048,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[2048] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<2048, 16>(const VariableEventQueue<2048,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<32768, 16>(const VariableEventQueue<32768,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsAttribSys::AttribSysIO::UnregisterVaultRequest>(const const UnregisterVaultRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsAttribSys::AttribSysIO::RegisterSchemaRequest>(const const RegisterSchemaRequest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<1024, 16>(const VariableEventQueue<1024,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<128,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[128] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::FxVolumes> >(const const Message<BrnSound::FxVolumes> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::Brn3DEffectControl::DrawSphere> >(const const Message<BrnSound::Logic::Brn3DEffectControl::DrawSphere> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<bool> >(const const Message<bool> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<CgsGui::GuiEventPlayMusicOnMenuStream> >(const const Message<CgsGui::GuiEventPlayMusicOnMenuStream> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGui::GuiAudioEvent> >(const const Message<BrnGui::GuiAudioEvent> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGui::GuiAudioTriggerEvent> >(const const Message<BrnGui::GuiAudioTriggerEvent> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGui::GuiEventAudioTraxUpdate> >(const const Message<BrnGui::GuiEventAudioTraxUpdate> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGui::GuiEventAudioTraxLastPlayedIndexes> >(const const Message<BrnGui::GuiEventAudioTraxLastPlayedIndexes> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGui::GuiEventAudioTraxPreview> >(const const Message<BrnGui::GuiEventAudioTraxPreview> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGui::GuiEventAudioTraxPlayOrder> >(const const Message<BrnGui::GuiEventAudioTraxPlayOrder> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<CgsSound::Playback::Name> >(const const Message<CgsSound::Playback::Name> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<Attrib::Key> >(const const Message<Attrib::Key> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGui::GuiEventAudioSettings> >(const const Message<BrnGui::GuiEventAudioSettings> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGui::GuiEventAudioEventIntros> >(const const Message<BrnGui::GuiEventAudioEventIntros> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<CgsLanguage::ELanguage> >(const const Message<CgsLanguage::ELanguage> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<AttribSys::Enums::EOnlineVoiceOver> >(const const Message<AttribSys::Enums::OnlineVoiceOver::OnlineVoiceOver> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<int32_t> >(const const Message<int32_t> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGameState::GameStateModuleIO::VehicleImpactEvent> >(const const Message<BrnGameState::GameStateModuleIO::VehicleImpactEvent> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<CgsSound::Io::QueueElement> >(const const Message<CgsSound::Io::QueueElement> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<float32_t> >(const const Message<float32_t> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGameState::GameStateModuleIO::EGameActionType> >(const const Message<BrnGameState::GameStateModuleIO::EGameActionType> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::FxMessage_StuntSmash> >(const const Message<BrnSound::Logic::FxMessage_StuntSmash> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::FxMessage_StuntStunt> >(const const Message<BrnSound::Logic::FxMessage_StuntStunt> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::ESoundMessages> >(const const Message<BrnSound::ESoundMessages> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction> >(const const Message<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::FxMessage_StruntJump> >(const const Message<BrnSound::Logic::FxMessage_StruntJump> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGameState::GameStateModuleIO::ShowModeResultsAction> >(const const Message<BrnGameState::GameStateModuleIO::ShowModeResultsAction> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::GameModeLostResults> >(const const Message<BrnSound::GameModeLostResults> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::MusicEffect::EJunkyardAmbience> >(const const Message<BrnSound::Logic::MusicEffect::EJunkyardAmbience> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnProgression::ETrainingType> >(const const Message<BrnProgression::ETrainingType> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::FxMessage_QuitEvent> >(const const Message<BrnSound::Logic::FxMessage_QuitEvent> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType> >(const const Message<BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnProgression::TrophyUnlockData::UnlockType> >(const const Message<BrnProgression::TrophyUnlockData::UnlockType> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::FxMessage_OnlineRivalSweep> >(const const Message<BrnSound::Logic::FxMessage_OnlineRivalSweep> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnGameState::GameStateModuleIO::EGameModeType> >(const const Message<BrnGameState::GameStateModuleIO::EGameModeType> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::FxMessage_CameraCut> >(const const Message<BrnSound::Logic::FxMessage_CameraCut> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::FxMessage_CameraPhoto> >(const const Message<BrnSound::Logic::FxMessage_CameraPhoto> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::Logic::FxMessage_ResetOnTrack> >(const const Message<BrnSound::Logic::FxMessage_ResetOnTrack> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSound::Io::Message<BrnSound::RaceCarIsNowActive> >(const const Message<BrnSound::RaceCarIsNowActive> &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<2048, 16>(const VariableEventQueue<2048,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSceneManager::SceneManagerIO::InEventFrustumTestVp>(const const InEventFrustumTestVp &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSceneManager::SceneManagerIO::InEventSphereTest>(const const InEventSphereTest &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnPhysics::Vehicle::BrnTrafficDriverControls>(const const BrnTrafficDriverControls &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnPhysics::Vehicle::BrnAIDriverControls>(const const BrnAIDriverControls &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<32768,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[32768] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<32768, 16>(const VariableEventQueue<32768,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<8192, 16>(const VariableEventQueue<8192,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<1024, 16>(const VariableEventQueue<1024,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<8192,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[8192] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:839
extern bool Append<BrnGameState::GameStateModuleIO::RecordPropHitEvent, 50>(const const EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50> &  lSourceQueue, int32_t  liType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:842
		int32_t liIndex;

		{
			// CgsVariableEventQueue.h:841
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsVariableEventQueue.h:846
			const CgsModule::Event * lpEvent;

		}
	}
}

// CgsVariableEventQueue.h:839
extern bool Append<BrnGameState::GameStateModuleIO::HitOverheadSignEvent, 100>(const const EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100> &  lSourceQueue, int32_t  liType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:842
		int32_t liIndex;

		{
			// CgsVariableEventQueue.h:841
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsVariableEventQueue.h:846
			const CgsModule::Event * lpEvent;

		}
	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<13440,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[13440] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<13440, 16>(const VariableEventQueue<13440,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<8192,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[8192] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<BrnResource::GameDataIO::UnloadGameDataEvent>(const const UnloadGameDataEvent &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<128,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[128] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<16384,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[16384] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<16384,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[16384] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<2048,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[2048] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<16384,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[16384] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawQuad>(const const CInEventDrawQuad &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawText2D>(const const CInEventDrawText2D &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawLine2D>(const const CInEventDrawLine2D &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawBox2D>(const const CInEventDrawBox2D &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawFrame2D>(const const CInEventDrawFrame2D &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawText>(const const CInEventDrawText &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawLine>(const const CInEventDrawLine &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawPoint>(const const CInEventDrawPoint &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawAngle>(const const CInEventDrawAngle &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawAxis>(const const CInEventDrawAxis &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawSphere>(const const CInEventDrawSphere &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawSolidSphere>(const const CInEventDrawSolidSphere &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawHollowSphere>(const const CInEventDrawHollowSphere &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawCircle>(const const CInEventDrawCircle &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawBox>(const const CInEventDrawBox &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawBoxAA>(const const CInEventDrawBoxAA &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawSolidBox>(const const CInEventDrawSolidBox &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawSolidBoxAA>(const const CInEventDrawSolidBoxAA &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawArrow>(const const CInEventDrawArrow &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawSolidArrow>(const const CInEventDrawSolidArrow &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawCapsule>(const const CInEventDrawCapsule &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawCylinder>(const const CInEventDrawCylinder &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:709
extern bool AddEventSafe<CgsDev::Internal::CInEventDrawTriangle>(const const CInEventDrawTriangle &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:711
		StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<32768,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[32768] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<32768, 16>(const VariableEventQueue<32768,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:803
extern bool AppendSafe<32768, 16>(const const VariableEventQueue<32768,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:806
		int32_t liEventId;

		// CgsVariableEventQueue.h:807
		int32_t liEventSize;

		// CgsVariableEventQueue.h:808
		const CgsModule::Event * lpEvent;

		{
			// CgsVariableEventQueue.h:805
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsVariableEventQueue.h:803
extern bool AppendSafe<65536, 16>(const const VariableEventQueue<65536,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:806
		int32_t liEventId;

		// CgsVariableEventQueue.h:807
		int32_t liEventSize;

		// CgsVariableEventQueue.h:808
		const CgsModule::Event * lpEvent;

		{
			// CgsVariableEventQueue.h:805
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<5120,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[5120] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<5120,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<135168,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[135168] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<20480,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[20480] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:183
struct CgsModule::VariableEventQueue<135168,16>::CBufferEntry {
	// CgsVariableEventQueue.h:185
	int32_t miID;

	// CgsVariableEventQueue.h:186
	int32_t miSize;

	// CgsVariableEventQueue.h:187
	uint64_t muPadTo16Bytes;

}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult>(const const OutEventVolumeTestDeepestResult &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>(const const OutEventLineTestFastDoubleSidedResult &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:686
extern bool AddEvent<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>(const const OutEventLineTestNearestResult &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:688
		CgsDev::StrStream lStrStream;

	}
}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<5120,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[5120] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	void OutputQueueContents() const;

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<4096,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[4096] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<8192, 16>(const VariableEventQueue<8192,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<16384, 16>(const VariableEventQueue<16384,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

// CgsVariableEventQueue.h:70
struct CgsModule::VariableEventQueue<8192,16> : public BaseVariableEventQueue {
protected:
	// CgsVariableEventQueue.h:190
	RwChar[8192] macData;

	// CgsVariableEventQueue.h:191
	int32_t miBufferWritePos;

	// CgsVariableEventQueue.h:192
	int32_t miLength;

	// CgsVariableEventQueue.h:193
	int32_t miFirstEventOffset;

	// Unknown accessibility
	struct CBufferEntry;

public:
	// CgsVariableEventQueue.h:211
	void Construct();

	// CgsVariableEventQueue.h:243
	bool Prepare();

	// CgsVariableEventQueue.h:261
	bool Release();

	// CgsVariableEventQueue.h:279
	void Destruct();

	// CgsVariableEventQueue.h:296
	void Clear();

	// CgsVariableEventQueue.h:330
	int32_t GetMaxLength() const;

	// CgsVariableEventQueue.h:346
	int32_t GetLength() const;

	// CgsVariableEventQueue.h:365
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:405
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

	// CgsVariableEventQueue.h:452
	bool AddEvent(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:506
	bool AddEventSafe(const CgsModule::Event *, int, int);

	// CgsVariableEventQueue.h:554
	void * AllocateEvent(int, int);

	// CgsVariableEventQueue.h:598
	void * AllocateEventSafe(int, int);

	// CgsVariableEventQueue.h:646
	bool AddStringEvent(const char *, int);

	// CgsVariableEventQueue.h:663
	bool AddStringEventSafe(const char *, int);

	// CgsVariableEventQueue.h:895
	// Declaration
	void OutputQueueContents() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:907
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:943
		using namespace CgsDev::Message;

	}

	// CgsVariableEventQueue.h:1015
	char * GetFirstWritePointer();

	// CgsVariableEventQueue.h:998
	const char * GetFirstWritePointer() const;

	// CgsVariableEventQueue.h:981
	int32_t GetSizeInBytes() const;

protected:
	// CgsVariableEventQueue.h:726
	int32_t GetEventPaddingSize(int) const;

public:
	// CgsVariableEventQueue.h:755
	// Declaration
	bool Append<4096, 16>(const VariableEventQueue<4096,16> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableEventQueue.h:766
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:767
		using namespace CgsDev::Message;

		// CgsVariableEventQueue.h:770
		using namespace CgsDev::Message;

	}

}

