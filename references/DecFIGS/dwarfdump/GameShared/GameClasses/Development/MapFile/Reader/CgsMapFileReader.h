// CgsMapFileReader.h:47
void CgsDev::MapFile::Reader::Reader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMapFileReader.h:47
struct CgsDev::MapFile::Reader {
	int (*)(...) * _vptr.Reader;

protected:
	// CgsMapFileReader.h:64
	StackUnpickBase * mpCallstack;

public:
	void Reader(const Reader &);

	void Reader();

	// CgsMapFileReader.cpp:48
	virtual void Prepare(const char *, StackUnpickBase *);

	// CgsMapFileReader.cpp:66
	virtual void Update();

	// CgsMapFileReader.h:59
	virtual const char * GetStackEntryName(int32_t);

}

