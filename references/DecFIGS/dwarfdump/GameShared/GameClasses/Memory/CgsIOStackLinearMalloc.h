// CgsIOStackLinearMalloc.h:38
struct CgsMemory::IOStackLinearMalloc<1048576> : IOBuffer {
private:
	// CgsIOStackLinearMalloc.h:50
	LinearMalloc mAlloc;

	// CgsIOStackLinearMalloc.h:51
	uint8_t[1048576] maData;

public:
	// CgsIOStackLinearMalloc.h:61
	void Construct();

	// CgsIOStackLinearMalloc.h:73
	void Prepare();

	// CgsIOStackLinearMalloc.h:67
	void Destruct();

	// CgsIOStackLinearMalloc.h:79
	LinearMalloc * GetMalloc();

}

