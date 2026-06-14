// CgsMemBase.h:68
struct CgsSound::MemBase {
	int (*)(...) * _vptr.MemBase;

protected:
	// CgsMemBase.h:220
	extern rw::IResourceAllocator * mpAllocator;

public:
	void MemBase(const MemBase &);

	// CgsMemBase.h:83
	virtual void ~MemBase();

	// CgsMemBase.h:259
	void * operator new(size_t, const char *);

	// CgsMemBase.h:277
	void * operator new(size_t, const char *, bool);

	// CgsMemBase.h:294
	void * operator new [](size_t, const char *);

	// CgsMemBase.h:112
	void * operator new(size_t, Environment &);

	// CgsMemBase.h:123
	void * operator new(size_t, Environment &, const char *);

	// CgsMemBase.h:134
	void * operator new [](size_t, Environment &, const char *);

	// CgsMemBase.h:310
	void operator delete(void *);

	// CgsMemBase.h:326
	void operator delete [](void *);

	// CgsMemBase.h:156
	void operator delete(void *, Environment &);

	// CgsMemBase.h:166
	void operator delete [](void *, Environment &);

	// CgsMemBase.h:391
	void operator delete(void *, Environment &, const char *);

	// CgsMemBase.h:406
	void operator delete [](void *, Environment &, const char *);

	// CgsMemBase.h:343
	void operator delete(void *, const char *);

	// CgsMemBase.h:361
	void operator delete(void *, const char *, bool);

	// CgsMemBase.h:377
	void operator delete [](void *, const char *);

	// CgsMemBase.h:418
	void SetAllocator(rw::IResourceAllocator *);

	// CgsMemBase.h:434
	rw::IResourceAllocator * GetAllocator();

protected:
	// CgsMemBase.h:243
	void MemBase();

}

// CgsMemBase.h:220
extern rw::IResourceAllocator * mpAllocator;

// CgsCommon.h:25
namespace CgsSound {
	// CgsMemBase.h:38
	namespace Logic {
		struct ClassTypeInfo<CgsSound::Logic::EffectControl>;

		struct Content;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct ModuleParams;

		struct Environment;

		struct DynamicMixer;

		struct Module;

		struct ClassTypeInfo<CgsSound::Logic::State>;

		struct ClassTypeInfo<CgsSound::Logic::StateManager>;

		struct Voice;

	}

}

// CgsMemBase.h:68
struct CgsSound::MemBase {
	int (*)(...) * _vptr.MemBase;

protected:
	// CgsMemBase.cpp:45
	extern rw::IResourceAllocator * mpAllocator;

public:
	MemBase & operator=(const MemBase &);

	void MemBase(const MemBase &);

	// CgsMemBase.h:83
	virtual void ~MemBase();

	// CgsMemBase.h:259
	void * operator new(size_t, const char *);

	// CgsMemBase.h:277
	void * operator new(size_t, const char *, bool);

	// CgsMemBase.h:294
	void * operator new [](size_t, const char *);

	// CgsMemBase.cpp:63
	void * operator new(size_t, Environment &);

	// CgsMemBase.cpp:83
	void * operator new(size_t, Environment &, const char *);

	// CgsMemBase.cpp:103
	void * operator new [](size_t, Environment &, const char *);

	// CgsMemBase.h:310
	void operator delete(void *);

	// CgsMemBase.h:326
	void operator delete [](void *);

	// CgsMemBase.cpp:122
	void operator delete(void *, Environment &);

	// CgsMemBase.cpp:141
	void operator delete [](void *, Environment &);

	// CgsMemBase.h:391
	void operator delete(void *, Environment &, const char *);

	// CgsMemBase.h:406
	void operator delete [](void *, Environment &, const char *);

	// CgsMemBase.h:343
	void operator delete(void *, const char *);

	// CgsMemBase.h:361
	void operator delete(void *, const char *, bool);

	// CgsMemBase.h:377
	void operator delete [](void *, const char *);

	// CgsMemBase.h:418
	void SetAllocator(rw::IResourceAllocator *);

	// CgsMemBase.h:434
	rw::IResourceAllocator * GetAllocator();

protected:
	// CgsMemBase.h:243
	void MemBase();

}

