// CgsDepthStencilStateFactory.h:53
extern DepthStencilState *[5] saDepthStencilStates;

// CgsDepthStencilStateFactory.h:36
struct CgsDepthStencilStateFactory {
	int (*)(...) * _vptr.CgsDepthStencilStateFactory;

private:
	// CgsDepthStencilStateFactory.cpp:25
	extern DepthStencilState *[5] saDepthStencilStates;

public:
	// CgsDepthStencilStateFactory.h:57
	CgsDepthStencilStateFactory();

	// CgsDepthStencilStateFactory.cpp:45
	virtual void Construct(rw::IResourceAllocator *);

	// CgsDepthStencilStateFactory.cpp:116
	virtual void Destruct();

	// CgsDepthStencilStateFactory.cpp:131
	virtual bool Prepare();

	// CgsDepthStencilStateFactory.h:78
	DepthStencilState * GetState(uint32_t);

}

