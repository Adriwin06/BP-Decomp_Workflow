// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// CgsInstance.h:34
	const uint32_t KU_INSTANCE_DATA_VERSION_NUMBER = 1;

}

// CgsInstance.h:50
struct CgsGraphics::Instance {
	// CgsInstance.h:88
	Model * mpModel;

	// CgsInstance.h:90
	int16_t mi16BackdropZoneID;

	// CgsInstance.h:91
	uint16_t mu16Pad;

	// CgsInstance.h:93
	uint32_t mu32Pad;

	// CgsInstance.h:94
	float32_t mfMaxVisibleDistanceSquared;

private:
	// CgsInstance.h:98
	Matrix44Affine mTransform;

public:
	// CgsInstance.h:54
	void Construct();

	// CgsInstance.h:57
	void Destruct();

	// CgsInstance.h:61
	void FixUp(void *);

	// CgsInstance.h:65
	void FixDown(void *);

	// CgsInstance.h:69
	void SetModel(Model *);

	// CgsInstance.h:72
	Model * GetModel() const;

	// CgsInstance.h:76
	void SetTransform(Matrix44Affine);

	// CgsInstance.h:79
	const rw::math::vpu::Matrix44Affine & GetTransform();

	// CgsInstance.h:82
	int16_t GetBackdropZoneID();

	// CgsInstance.h:85
	void SetBackdropZoneID(int16_t);

}

// CgsInstance.h:113
struct CgsGraphics::InstanceList {
private:
	// CgsInstance.h:178
	Instance * mpaInstances;

	// CgsInstance.h:179
	uint32_t muArraySize;

	// CgsInstance.h:180
	uint32_t muNumInstances;

	// CgsInstance.h:181
	uint32_t muVersionNumber;

public:
	// CgsInstance.h:117
	void Construct();

	// CgsInstance.h:120
	void Destruct();

	// CgsInstance.h:124
	void FixUp(void *);

	// CgsInstance.h:128
	void FixDown(void *);

	// CgsInstance.h:131
	void ConstructInstances();

	// CgsInstance.h:135
	void SetNumInstances(uint32_t);

	// CgsInstance.h:139
	uint32_t GetNumInstances() const;

	// CgsInstance.h:143
	uint32_t GetArraySize() const;

	// CgsInstance.h:147
	void SetArraySize(uint32_t);

	// CgsInstance.h:151
	void SetInstanceArray(Instance *);

	// CgsInstance.h:155
	Instance * GetInstance(uint32_t);

	// CgsInstance.h:159
	const Model *const GetInstanceModel(uint32_t) const;

	// CgsInstance.h:162
	uint32_t GetNumBackdrops() const;

	// CgsInstance.h:166
	void SetVersionNumber(uint32_t);

	// CgsInstance.h:169
	uint32_t GetVersionNumber() const;

}

// CgsCamera.h:44
namespace CgsGraphics {
	// CgsInstance.h:34
	const uint32_t KU_INSTANCE_DATA_VERSION_NUMBER = 1;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// CgsInstance.h:34
	const uint32_t KU_INSTANCE_DATA_VERSION_NUMBER = 1;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// CgsInstance.h:34
	const uint32_t KU_INSTANCE_DATA_VERSION_NUMBER = 1;

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// CgsInstance.h:34
	const uint32_t KU_INSTANCE_DATA_VERSION_NUMBER = 1;

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// CgsInstance.h:34
	const uint32_t KU_INSTANCE_DATA_VERSION_NUMBER = 1;

}

// CgsInstance.h:50
struct CgsGraphics::Instance {
	// CgsInstance.h:88
	CgsGraphics::Model * mpModel;

	// CgsInstance.h:90
	int16_t mi16BackdropZoneID;

	// CgsInstance.h:91
	uint16_t mu16Pad;

	// CgsInstance.h:93
	uint32_t mu32Pad;

	// CgsInstance.h:94
	float32_t mfMaxVisibleDistanceSquared;

private:
	// CgsInstance.h:98
	Matrix44Affine mTransform;

public:
	// CgsInstance.h:54
	void Construct();

	// CgsInstance.h:57
	void Destruct();

	// CgsInstance.h:61
	void FixUp(void *);

	// CgsInstance.h:65
	void FixDown(void *);

	// CgsInstance.h:69
	void SetModel(CgsGraphics::Model *);

	// CgsInstance.h:72
	CgsGraphics::Model * GetModel() const;

	// CgsInstance.h:76
	void SetTransform(Matrix44Affine);

	// CgsInstance.h:79
	const rw::math::vpu::Matrix44Affine & GetTransform();

	// CgsInstance.h:82
	int16_t GetBackdropZoneID();

	// CgsInstance.h:85
	void SetBackdropZoneID(int16_t);

}

// CgsInstance.h:113
struct CgsGraphics::InstanceList {
private:
	// CgsInstance.h:178
	Instance * mpaInstances;

	// CgsInstance.h:179
	uint32_t muArraySize;

	// CgsInstance.h:180
	uint32_t muNumInstances;

	// CgsInstance.h:181
	uint32_t muVersionNumber;

public:
	// CgsInstance.h:117
	void Construct();

	// CgsInstance.h:120
	void Destruct();

	// CgsInstance.h:124
	void FixUp(void *);

	// CgsInstance.h:128
	void FixDown(void *);

	// CgsInstance.h:131
	void ConstructInstances();

	// CgsInstance.h:135
	void SetNumInstances(uint32_t);

	// CgsInstance.h:139
	uint32_t GetNumInstances() const;

	// CgsInstance.h:143
	uint32_t GetArraySize() const;

	// CgsInstance.h:147
	void SetArraySize(uint32_t);

	// CgsInstance.h:151
	void SetInstanceArray(Instance *);

	// CgsInstance.h:155
	Instance * GetInstance(uint32_t);

	// CgsInstance.h:159
	const CgsGraphics::Model *const GetInstanceModel(uint32_t) const;

	// CgsInstance.h:162
	uint32_t GetNumBackdrops() const;

	// CgsInstance.h:166
	void SetVersionNumber(uint32_t);

	// CgsInstance.h:169
	uint32_t GetVersionNumber() const;

}

