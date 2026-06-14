// CgsRasterizerStateFactory.h:52
extern RasterizerState *[3] saRasterizerStates;

// CgsRasterizerStateFactory.h:37
struct CgsRasterizerStateFactory {
	int (*)(...) * _vptr.CgsRasterizerStateFactory;

private:
	// CgsRasterizerStateFactory.cpp:25
	extern RasterizerState *[3] saRasterizerStates;

public:
	// CgsRasterizerStateFactory.h:56
	CgsRasterizerStateFactory();

	// CgsRasterizerStateFactory.cpp:45
	virtual void Construct(rw::IResourceAllocator *);

	// CgsRasterizerStateFactory.cpp:90
	virtual void Destruct();

	// CgsRasterizerStateFactory.cpp:105
	virtual bool Prepare();

	// CgsRasterizerStateFactory.h:77
	RasterizerState * GetState(uint32_t);

}

