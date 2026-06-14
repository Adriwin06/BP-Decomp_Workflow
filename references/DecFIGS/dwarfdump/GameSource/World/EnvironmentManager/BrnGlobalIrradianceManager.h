// BrnGlobalIrradianceManager.h:35
struct BrnWorld::GlobalIrradianceManager {
protected:
	// BrnGlobalIrradianceManager.h:90
	Matrix44[3] maIrradianceMatrix;

	// BrnGlobalIrradianceManager.h:91
	Vector3 mAverageIrradianceColour;

	// BrnGlobalIrradianceManager.h:92
	Vector3[9] maFrameIrradianceCoeffs;

public:
	// BrnGlobalIrradianceManager.h:39
	void Construct();

	// BrnGlobalIrradianceManager.h:43
	bool Prepare();

	// BrnGlobalIrradianceManager.h:54
	void ComputeIrradiance(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3);

	// BrnGlobalIrradianceManager.h:57
	Matrix44 GetIrradianceMatrix(uint8_t) const;

	// BrnGlobalIrradianceManager.h:60
	Vector3 GetAverageIrradianceColour() const;

	// BrnGlobalIrradianceManager.h:64
	Vector3 SampleIrradiance(Vector3);

protected:
	// BrnGlobalIrradianceManager.h:71
	void UpdateCoefficients(Vector3, Vector3);

	// BrnGlobalIrradianceManager.h:77
	void ComputeIrradianceMatrix(int32_t, Vector3 *, Matrix44 &);

	// BrnGlobalIrradianceManager.h:87
	void ComputeFrameCoeffs(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3);

}

