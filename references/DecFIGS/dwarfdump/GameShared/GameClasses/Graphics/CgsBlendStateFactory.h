// CgsBlendStateFactory.h:57
extern BlendState *[9] saBlendStates;

// CgsBlendStateFactory.h:36
struct CgsBlendStateFactory {
	int (*)(...) * _vptr.CgsBlendStateFactory;

private:
	// CgsBlendStateFactory.cpp:25
	extern BlendState *[9] saBlendStates;

public:
	// CgsBlendStateFactory.h:61
	CgsBlendStateFactory();

	// CgsBlendStateFactory.cpp:44
	virtual void Construct(rw::IResourceAllocator *);

	// CgsBlendStateFactory.cpp:235
	virtual void Destruct();

	// CgsBlendStateFactory.cpp:250
	virtual bool Prepare();

	// CgsBlendStateFactory.h:82
	BlendState * GetState(uint32_t);

}

