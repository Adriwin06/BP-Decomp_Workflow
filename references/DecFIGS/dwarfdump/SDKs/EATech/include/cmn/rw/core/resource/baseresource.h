// baseresource.h:53
struct rw::BaseResourceDescriptor {
private:
	// baseresource.h:232
	uint32_t m_size;

	// baseresource.h:233
	uint32_t m_alignment;

public:
	// baseresource.h:58
	void BaseResourceDescriptor();

	// baseresource.h:73
	void BaseResourceDescriptor(uint32_t, uint32_t);

	// baseresource.h:85
	void ~BaseResourceDescriptor();

	// baseresource.h:99
	void EndianSwap();

	// baseresource.h:111
	uint32_t GetSize() const;

	// baseresource.h:121
	void SetSize(uint32_t);

	// baseresource.h:132
	uint32_t GetAlignment() const;

	// baseresource.h:142
	void SetAlignment(uint32_t);

	// baseresource.h:155
	void Align(const BaseResourceDescriptor &);

	// baseresource.h:172
	void operator+=(const BaseResourceDescriptor &);

	// baseresource.h:189
	BaseResourceDescriptor operator+(const BaseResourceDescriptor &) const;

	// baseresource.h:205
	void operator-=(const BaseResourceDescriptor &);

	// baseresource.h:222
	BaseResourceDescriptor operator-(const BaseResourceDescriptor &) const;

}

// baseresource.h:296
struct rw::BaseResourceDescriptorType<0u> : public BaseResourceDescriptor {
public:
	// baseresource.h:301
	void BaseResourceDescriptorType();

	// baseresource.h:313
	void BaseResourceDescriptorType(unsigned int, unsigned int);

	// baseresource.h:323
	void ~BaseResourceDescriptorType();

}

// baseresource.h:296
struct rw::BaseResourceDescriptorType<2u> : public BaseResourceDescriptor {
public:
	// baseresource.h:301
	void BaseResourceDescriptorType();

	// baseresource.h:313
	void BaseResourceDescriptorType(unsigned int, unsigned int);

	// baseresource.h:323
	void ~BaseResourceDescriptorType();

}

// baseresource.h:296
struct rw::BaseResourceDescriptorType<1u> : public BaseResourceDescriptor {
public:
	// baseresource.h:301
	void BaseResourceDescriptorType();

	// baseresource.h:313
	void BaseResourceDescriptorType(unsigned int, unsigned int);

	// baseresource.h:323
	void ~BaseResourceDescriptorType();

}

// baseresource.h:296
struct rw::BaseResourceDescriptorType<3u> : public BaseResourceDescriptor {
public:
	// baseresource.h:301
	void BaseResourceDescriptorType();

	// baseresource.h:313
	void BaseResourceDescriptorType(unsigned int, unsigned int);

	// baseresource.h:323
	void ~BaseResourceDescriptorType();

}

// baseresource.h:296
struct rw::BaseResourceDescriptorType<4u> : public BaseResourceDescriptor {
public:
	// baseresource.h:301
	void BaseResourceDescriptorType();

	// baseresource.h:313
	void BaseResourceDescriptorType(unsigned int, unsigned int);

	// baseresource.h:323
	void ~BaseResourceDescriptorType();

}

// baseresource.h:296
struct rw::BaseResourceDescriptorType<5u> : public BaseResourceDescriptor {
public:
	// baseresource.h:301
	void BaseResourceDescriptorType();

	// baseresource.h:313
	void BaseResourceDescriptorType(unsigned int, unsigned int);

	// baseresource.h:323
	void ~BaseResourceDescriptorType();

}

