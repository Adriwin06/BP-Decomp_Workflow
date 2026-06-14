// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// manager.h:32
		namespace controller {
			struct Options;

			struct Manager;

			struct LLManager;

		}

	}

}

// manager.h:46
struct rw::core::controller::Options {
	// manager.h:66
	EA::Allocator::ICoreAllocator * mAllocator;

public:
	// manager.h:50
	void Options();

	// manager.h:56
	void Options(EA::Allocator::ICoreAllocator *);

	// manager.h:60
	void Options(Channel *, EA::Allocator::ICoreAllocator *);

}

// manager.h:99
struct rw::core::controller::Manager {
	// manager.h:114
	extern const unsigned int MAX_DEVICES = 7;

private:
	// manager.h:247
	extern Manager * sInstance;

	// manager.h:250
	extern EA::Allocator::ICoreAllocator * sAllocator;

	// manager.h:254
	rw::core::controller::LLManager * pImpl;

public:
	// manager.h:123
	void CreateInstance(const Options &);

	// manager.h:129
	Manager * GetInstance();

	// manager.h:135
	void DestroyInstance();

	// manager.h:140
	bool IsInitialized();

	// manager.h:146
	EA::Allocator::ICoreAllocator * GetAllocator();

	// manager.h:153
	void Update();

	// manager.h:166
	const rw::core::controller::DeviceInfo * GetDeviceInfo(unsigned int) const;

	// manager.h:185
	const rw::core::controller::DeviceState * GetDeviceState(unsigned int) const;

	// manager.h:202
	rw::core::controller::DeviceEffect * GetDeviceEffect(unsigned int) const;

	// manager.h:215
	unsigned int GetNumControllers() const;

	// manager.h:222
	uint32_t TMPGetButtonData() const;

	// manager.h:236
	bool GetInterceptState() const;

private:
	// manager.h:240
	void Manager(const Options &);

	// manager.h:241
	void ~Manager();

	// manager.h:244
	void * operator new(size_t);

	// manager.h:245
	void operator delete(void *);

}

// manager.h:247
extern Manager * sInstance;

// manager.h:250
extern EA::Allocator::ICoreAllocator * sAllocator;

