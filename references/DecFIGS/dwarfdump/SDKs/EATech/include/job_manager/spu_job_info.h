// spu_job_info.h:20
struct EA::Jobs::SpuJobInfo {
private:
	// spu_job_info.h:43
	uint32_t mAddress;

	// spu_job_info.h:44
	uint32_t mSize;

	// spu_job_info.h:45
	uint32_t mEntry;

	// spu_job_info.h:46
	uint32_t mDataOffset;

	// spu_job_info.h:47
	uint32_t mDataSize;

	// spu_job_info.h:49
	uint32_t mScopeVarsOffset;

	// spu_job_info.h:50
	uint32_t mScopeVarsBaseAddress;

	// spu_job_info.h:51
	uint32_t mScopeVarsAllocSize;

	// spu_job_info.h:52
	uint32_t mScopeVarsCount;

public:
	// spu_job_info.h:21
	void SpuJobInfo();

	// spu_job_info.h:22
	void SpuJobInfo(const char *, uint32_t);

	// spu_job_info.h:24
	void Parse(const char *, uint32_t);

	// spu_job_info.h:26
	uint32_t Address() const;

	// spu_job_info.h:27
	uint32_t Size() const;

	// spu_job_info.h:28
	uint32_t Entry() const;

	// spu_job_info.h:29
	uint32_t DataOffset() const;

	// spu_job_info.h:30
	uint32_t DataSize() const;

	// spu_job_info.h:32
	uint32_t ScopeVarsOffset() const;

	// spu_job_info.h:33
	uint32_t ScopeVarsBaseAddress() const;

	// spu_job_info.h:34
	uint32_t ScopeVarsAllocSize() const;

	// spu_job_info.h:35
	uint32_t ScopeVarsCount() const;

private:
	// spu_job_info.h:39
	void ParseScopeVarSection();

}

