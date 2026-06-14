// resource.h:53
struct rw::BaseResourceDescriptors<6u> {
private:
	// resource.h:219
	BaseResourceDescriptor[6] m_baseResourceDescriptors;

public:
	// resource.h:61
	void BaseResourceDescriptors();

	// resource.h:77
	const BaseResourceDescriptor & GetBaseResourceDescriptor(unsigned int) const;

	// resource.h:86
	BaseResourceDescriptor & GetBaseResourceDescriptor(unsigned int);

	// resource.h:96
	uint32_t GetNumberOfBaseResourceTypes();

	// resource.h:106
	BaseResourceDescriptor * begin() const;

	// resource.h:115
	BaseResourceDescriptor * begin();

	// resource.h:125
	BaseResourceDescriptor * end() const;

	// resource.h:134
	BaseResourceDescriptor * end();

	// resource.h:145
	void EndianSwap();

	// resource.h:160
	void Align(const BaseResourceDescriptors<6u> &);

	// resource.h:176
	void Flatten();

	// resource.h:194
	void operator+=(const BaseResourceDescriptors<6u> &);

	// resource.h:208
	void operator-=(const BaseResourceDescriptors<6u> &);

}

// resource.h:296
struct rw::BaseResources<6u> {
	// baseresource.h:337
	typedef void * BaseResource;

private:
	// resource.h:486
	BaseResources<6u>::BaseResource[6] m_baseResources;

public:
	// resource.h:304
	void BaseResources();

	// resource.h:323
	bool operator bool() const;

	// resource.h:340
	const BaseResources<6u>::BaseResource & GetBaseResource(unsigned int) const;

	// resource.h:349
	BaseResources<6u>::BaseResource & GetBaseResource(unsigned int);

	// resource.h:359
	uint32_t GetNumberOfBaseResourceTypes();

	// resource.h:369
	BaseResources<6u>::BaseResource * begin() const;

	// resource.h:378
	BaseResources<6u>::BaseResource * begin();

	// resource.h:388
	BaseResources<6u>::BaseResource * end() const;

	// resource.h:397
	BaseResources<6u>::BaseResource * end();

	// resource.h:409
	RwBool IsAligned(const BaseResourceDescriptors<6u> &);

	// resource.h:429
	void Align(const BaseResourceDescriptors<6u> &);

	// resource.h:446
	void operator+=(const BaseResourceDescriptors<6u> &);

	// resource.h:466
	void FromMemoryBlock(void *, const BaseResourceDescriptors<6u> &);

}

// resource.h:53
struct rw::BaseResourceDescriptors<3u> {
private:
	// resource.h:219
	BaseResourceDescriptor[3] m_baseResourceDescriptors;

public:
	// resource.h:61
	void BaseResourceDescriptors();

	// resource.h:77
	const BaseResourceDescriptor & GetBaseResourceDescriptor(unsigned int) const;

	// resource.h:86
	BaseResourceDescriptor & GetBaseResourceDescriptor(unsigned int);

	// resource.h:96
	uint32_t GetNumberOfBaseResourceTypes();

	// resource.h:106
	BaseResourceDescriptor * begin() const;

	// resource.h:115
	BaseResourceDescriptor * begin();

	// resource.h:125
	BaseResourceDescriptor * end() const;

	// resource.h:134
	BaseResourceDescriptor * end();

	// resource.h:145
	void EndianSwap();

	// resource.h:160
	void Align(const BaseResourceDescriptors<3u> &);

	// resource.h:176
	void Flatten();

	// resource.h:194
	void operator+=(const BaseResourceDescriptors<3u> &);

	// resource.h:208
	void operator-=(const BaseResourceDescriptors<3u> &);

}

// resource.h:296
struct rw::BaseResources<3u> {
private:
	// resource.h:486
	BaseResources<6u>::BaseResource[3] m_baseResources;

public:
	// resource.h:304
	void BaseResources();

	// resource.h:323
	bool operator bool() const;

	// resource.h:340
	const BaseResources<6u>::BaseResource & GetBaseResource(unsigned int) const;

	// resource.h:349
	BaseResources<6u>::BaseResource & GetBaseResource(unsigned int);

	// resource.h:359
	uint32_t GetNumberOfBaseResourceTypes();

	// resource.h:369
	BaseResources<6u>::BaseResource * begin() const;

	// resource.h:378
	BaseResources<6u>::BaseResource * begin();

	// resource.h:388
	BaseResources<6u>::BaseResource * end() const;

	// resource.h:397
	BaseResources<6u>::BaseResource * end();

	// resource.h:409
	RwBool IsAligned(const BaseResourceDescriptors<3u> &);

	// resource.h:429
	void Align(const BaseResourceDescriptors<3u> &);

	// resource.h:446
	void operator+=(const BaseResourceDescriptors<3u> &);

	// resource.h:466
	void FromMemoryBlock(void *, const BaseResourceDescriptors<3u> &);

}

// importnamespaces.h:8
namespace rw {
	// resource.h:500
	extern RwBool operator==<3u>(const BaseResources<3u> &, const BaseResources<3u> &);

}

