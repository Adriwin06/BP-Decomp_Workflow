// ParticleWaveForm.h:25
struct cParticleWaveForm {
	// ParticleWaveForm.h:94
	U32 mID;

	// ParticleWaveForm.h:95
	U32 mType;

	// ParticleWaveForm.h:97
	FP32 mBase;

	// ParticleWaveForm.h:98
	FP32 mPhase;

	// ParticleWaveForm.h:99
	FP32 mFreq;

	// ParticleWaveForm.h:100
	FP32 mAmp;

	// ParticleWaveForm.h:101
	FP32 mClampMin;

	// ParticleWaveForm.h:102
	FP32 mClampMax;

	// ParticleWaveForm.h:104
	FP32 mBaseVariance;

	// ParticleWaveForm.h:105
	FP32 mPhaseVariance;

	// ParticleWaveForm.h:106
	FP32 mFreqVariance;

	// ParticleWaveForm.h:107
	FP32 mAmpVariance;

	// ParticleWaveForm.h:108
	FP32 mClampMinVariance;

	// ParticleWaveForm.h:109
	FP32 mClampMaxVariance;

public:
	// ParticleWaveForm.h:41
	void Init();

	// ParticleWaveForm.h:42
	void Lerp(const cParticleWaveForm &, const cParticleWaveForm &, FP32);

	// ParticleWaveForm.h:43
	FP32 Evaluate(FP32) const;

	// ParticleWaveForm.h:44
	FP32 Evaluate(FP32, cParticleRandomSeed &) const;

	// ParticleWaveForm.h:46
	void Delocate(U32);

	// ParticleWaveForm.h:47
	void Relocate();

	// ParticleWaveForm.h:49
	void GetSerialiseSize(cLionSerialiser &) const;

	// ParticleWaveForm.h:50
	cParticleWaveForm * Serialise(cLionSerialiser &) const;

	// ParticleWaveForm.h:51
	void Remap(cLionSerialiser &);

	// ParticleWaveForm.h:53
	U32 GetType() const;

	// ParticleWaveForm.h:54
	void SetType(U32);

	// ParticleWaveForm.h:56
	FP32 GetBase() const;

	// ParticleWaveForm.h:57
	void SetBase(FP32);

	// ParticleWaveForm.h:59
	FP32 GetPhase() const;

	// ParticleWaveForm.h:60
	void SetPhase(FP32);

	// ParticleWaveForm.h:62
	FP32 GetFreq() const;

	// ParticleWaveForm.h:63
	void SetFreq(FP32);

	// ParticleWaveForm.h:65
	FP32 GetAmp() const;

	// ParticleWaveForm.h:66
	void SetAmp(FP32);

	// ParticleWaveForm.h:68
	FP32 GetClampMin() const;

	// ParticleWaveForm.h:69
	void SetClampMin(FP32);

	// ParticleWaveForm.h:71
	FP32 GetClampMax() const;

	// ParticleWaveForm.h:72
	void SetClampMax(FP32);

	// ParticleWaveForm.h:75
	FP32 GetBaseVariance() const;

	// ParticleWaveForm.h:76
	void SetBaseVariance(FP32);

	// ParticleWaveForm.h:78
	FP32 GetPhaseVariance() const;

	// ParticleWaveForm.h:79
	void SetPhaseVariance(FP32);

	// ParticleWaveForm.h:81
	FP32 GetFreqVariance() const;

	// ParticleWaveForm.h:82
	void SetFreqVariance(FP32);

	// ParticleWaveForm.h:84
	FP32 GetAmpVariance() const;

	// ParticleWaveForm.h:85
	void SetAmpVariance(FP32);

	// ParticleWaveForm.h:87
	FP32 GetClampMinVariance() const;

	// ParticleWaveForm.h:88
	void SetClampMinVariance(FP32);

	// ParticleWaveForm.h:90
	FP32 GetClampMaxVariance() const;

	// ParticleWaveForm.h:91
	void SetClampMaxVariance(FP32);

}

// ParticleWaveForm.h:114
struct cParticleWaveFormTable {
private:
	// ParticleWaveForm.h:174
	extern cParticleWaveFormTable mSingleton;

	// ParticleWaveForm.h:183
	FP32[512] mNoiseTable;

	// ParticleWaveForm.h:184
	FP32[512] mSawToothTable;

	// ParticleWaveForm.h:185
	FP32[512] mSawToothInvTable;

	// ParticleWaveForm.h:186
	FP32[512] mSinTable;

	// ParticleWaveForm.h:187
	FP32[512] mSquareTable;

	// ParticleWaveForm.h:188
	FP32[512] mTriangleTable;

public:
	// ParticleWaveForm.h:123
	void Init();

	// ParticleWaveForm.h:125
	FP32 GetCos(S32);

	// ParticleWaveForm.h:126
	FP32 GetNoise(S32);

	// ParticleWaveForm.h:127
	FP32 GetSawTooth(S32);

	// ParticleWaveForm.h:128
	FP32 GetSawToothInv(S32);

	// ParticleWaveForm.h:129
	FP32 GetSin(S32);

	// ParticleWaveForm.h:130
	FP32 GetSquare(S32);

	// ParticleWaveForm.h:131
	FP32 GetTriangle(S32);

	// ParticleWaveForm.h:133
	cParticleWaveFormTable * GetMe();

	// ParticleWaveForm.h:135
	FP32 * GetNoiseTable();

	// ParticleWaveForm.h:136
	FP32 * GetSawToothTable();

	// ParticleWaveForm.h:137
	FP32 * GetSawToothInvTable();

	// ParticleWaveForm.h:138
	FP32 * GetSinTable();

	// ParticleWaveForm.h:139
	FP32 * GetSquareTable();

	// ParticleWaveForm.h:140
	FP32 * GetTriangleTable();

	// ParticleWaveForm.h:141
	FP32 * GetTable(U32);

private:
	// ParticleWaveForm.h:176
	void NoiseTableBuild();

	// ParticleWaveForm.h:177
	void SawToothTableBuild();

	// ParticleWaveForm.h:178
	void SawToothInvTableBuild();

	// ParticleWaveForm.h:179
	void SinTableBuild();

	// ParticleWaveForm.h:180
	void SquareTableBuild();

	// ParticleWaveForm.h:181
	void TriangleTableBuild();

}

