// LionSerialiser.h:39
struct cLionSerialiser {
	// LionSerialiser.h:61
	char * mpStringBase;

	// LionSerialiser.h:62
	U8 * mpDataBase;

	// LionSerialiser.h:64
	U32 mStringOffset;

	// LionSerialiser.h:65
	U32 mDataOffset;

	// LionSerialiser.h:67
	U32 mStringSize;

	// LionSerialiser.h:68
	U32 mDataSize;

	// LionSerialiser.h:70
	U32 mRemapIndex;

	// LionSerialiser.h:71
	sLionSerialiserRemapEntry[2048] mRemapEntries;

public:
	// LionSerialiser.h:46
	void Init();

	// LionSerialiser.h:47
	void DeInit();

	// LionSerialiser.h:49
	void Alloc();

	// LionSerialiser.h:50
	void DeAlloc();

	// LionSerialiser.h:52
	void SetRemap(void *, void *);

	// LionSerialiser.h:53
	void * GetRemap(void *);

	// LionSerialiser.h:55
	char * StringStore(const char *);

	// LionSerialiser.h:56
	U8 * DataStore(const void *, U32);

	// LionSerialiser.h:58
	void StringSizeUpdate(const char *);

	// LionSerialiser.h:59
	void DataSizeUpdate(U32);

}

// LionSerialiser.h:33
struct sLionSerialiserRemapEntry {
	// LionSerialiser.h:34
	void * mpOld;

	// LionSerialiser.h:35
	void * mpNew;

}

// LionSerialiser.h:36
typedef sLionSerialiserRemapEntry sLionSerialiserRemapEntry;

// LionSerialiser.h:26
struct iLionBinWriter {
	int (*)(...) * _vptr.iLionBinWriter;

public:
	iLionBinWriter(const iLionBinWriter &);

	iLionBinWriter();

	// LionSerialiser.h:28
	virtual void Write(void *, U32);

}

// LionSerialiser.h:26
void iLionBinWriter::iLionBinWriter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

