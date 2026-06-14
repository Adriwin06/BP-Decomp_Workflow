// importnamespaces.h:8
namespace rw {
	// types.h:17
	namespace datacontainer {
		// buffer.h:14
		const size_t BUFFERALIGNMENT = 1;

		// buffer.h:15
		const size_t BUFFERPADDING;

		// buffer.h:16
		const size_t TRANSFERSIZE = 1;

	}

}

// buffer.h:50
struct rw::datacontainer::BufferParameters {
private:
	// buffer.h:71
	uint32_t mId;

	// buffer.h:72
	uint32_t mSize;

	// buffer.h:73
	uint32_t mMemoryType;

	// buffer.h:74
	uint32_t mDimension0;

	// buffer.h:75
	uint32_t mDimension1;

public:
	// buffer.h:53
	void BufferParameters();

	// buffer.h:54
	void BufferParameters(uint32_t, uint32_t, uint32_t);

	// buffer.h:55
	void BufferParameters(uint32_t, uint32_t, uint32_t, uint32_t);

	// buffer.h:56
	void BufferParameters(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

	// buffer.h:59
	uint32_t GetId() const;

	// buffer.h:60
	uint32_t GetSize() const;

	// buffer.h:61
	uint32_t GetMemoryType() const;

	// buffer.h:62
	uint32_t GetDimension0() const;

	// buffer.h:63
	uint32_t GetDimension1() const;

	// buffer.h:66
	void EndianSwap();

}

// buffer.h:218
struct rw::datacontainer::Buffer {
private:
	// buffer.h:240
	void * mMinimum;

	// buffer.h:241
	void * mMaximumAllocated;

	// buffer.h:242
	void * mMaximumUsed;

	// buffer.h:243
	BufferParameters mParameters;

public:
	// buffer.h:222
	ResourceDescriptor GetResourceDescriptor(const BufferParameters &);

	// buffer.h:223
	Buffer * Initialize(Resource &, const BufferParameters &);

	// buffer.h:224
	void Release();

	// buffer.h:227
	void GetParameters(BufferParameters &) const;

	// buffer.h:235
	void EndianSwap();

}

