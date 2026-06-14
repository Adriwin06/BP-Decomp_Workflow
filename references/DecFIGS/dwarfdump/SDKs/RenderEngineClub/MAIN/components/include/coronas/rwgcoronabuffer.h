// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct CoronaBuffer {
		// rwgcoronabuffer.h:13
		struct Parameters {
			// rwgcoronabuffer.h:16
			int m_numCoronas;

		public:
			// rwgcoronabuffer.h:14
			void SetNumCoronas(int);

		}

		// rwgcoronabuffer.h:20
		struct Iterator {
		protected:
			// rwgcoronabuffer.h:37
			Corona * m_data;

			// rwgcoronabuffer.h:38
			uint32_t m_index;

			// rwgcoronabuffer.h:39
			uint32_t m_numCoronas;

		public:
			// rwgcoronabuffer.h:21
			void Write(const Corona &);

			// rwgcoronabuffer.h:28
			void Write(Vector3, Vector3, Vector2, float, RGBA, int);

			// rwgcoronabuffer.h:30
			void SetPosition(uint32_t);

			// rwgcoronabuffer.h:32
			Corona & operator*();

			// rwgcoronabuffer.h:33
			void operator++();

		}

	}

}

// rwgcoronabuffer.h:10
struct renderengine::CoronaBuffer {
private:
	// rwgcoronabuffer.h:53
	uint32_t m_numCoronas;

	// rwgcoronabuffer.h:54
	Corona * m_data;

public:
	// rwgcoronabuffer.h:42
	ResourceDescriptor GetResourceDescriptor(renderengine::CoronaBuffer::Parameters &);

	// rwgcoronabuffer.h:43
	CoronaBuffer * Initialize(const Resource &, renderengine::CoronaBuffer::Parameters &);

	// rwgcoronabuffer.h:44
	void Release();

	// rwgcoronabuffer.h:46
	uint32_t GetNumCoronas() const;

	// rwgcoronabuffer.h:47
	const Corona * GetCoronas() const;

	// rwgcoronabuffer.h:49
	void Lock(renderengine::CoronaBuffer::Iterator &);

	// rwgcoronabuffer.h:50
	void Unlock();

}

