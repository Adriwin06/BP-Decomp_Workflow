// targetresource.h:64
struct rw::TargetResource {
	// targetresource.h:56
	typedef void * TargetBaseResource;

private:
	// targetresource.h:163
	TargetResource::TargetBaseResource[6] m_baseResources;

public:
	// targetresource.h:70
	void TargetResource();

	// targetresource.h:84
	void TargetResource(const Resource &);

	// targetresource.h:98
	void ~TargetResource();

	// targetresource.h:112
	TargetResource::TargetBaseResource & GetTargetBaseResource(uint32_t);

	// targetresource.h:122
	Resource ToResource() const;

	// targetresource.h:137
	void FromResource(const Resource &);

	// targetresource.h:151
	void EndianSwap();

}

