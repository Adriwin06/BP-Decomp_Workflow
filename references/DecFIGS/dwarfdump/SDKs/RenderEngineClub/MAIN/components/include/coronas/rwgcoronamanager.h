// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct CoronaManager {
		// rwgcoronamanager.h:13
		struct Parameters {
			// rwgcoronamanager.h:16
			uint32_t m_numBuffers;

		public:
			// rwgcoronamanager.h:14
			void SetNumBuffers(uint32_t);

		}

	}

}

// rwgcoronamanager.h:10
struct renderengine::CoronaManager {
private:
	// rwgcoronamanager.h:30
	CoronaBuffer ** m_buffers;

	// rwgcoronamanager.h:31
	uint32_t m_numBuffers;

	// rwgcoronamanager.h:32
	uint32_t m_currentBuffer;

	// rwgcoronamanager.h:33
	uint32_t m_activeCount;

public:
	// rwgcoronamanager.h:19
	ResourceDescriptor GetResourceDescriptor(renderengine::CoronaManager::Parameters &);

	// rwgcoronamanager.h:20
	CoronaManager * Initialize(const Resource &, renderengine::CoronaManager::Parameters &);

	// rwgcoronamanager.h:21
	void Release();

	// rwgcoronamanager.h:23
	CoronaBuffer * GetCurrentBuffer() const;

	// rwgcoronamanager.h:24
	void SwapBuffers();

	// rwgcoronamanager.h:25
	void SetBuffer(CoronaBuffer *, uint32_t);

	// rwgcoronamanager.h:26
	void SetActiveCount(uint32_t);

	// rwgcoronamanager.h:27
	uint32_t GetActiveCount() const;

}

