// ParticleBehaviour.h:47
struct cParticleBehaviour {
	// ParticleBehaviour.h:131
	extern const uint32_t knCOLOUR_STEP_LIMIT = 4;

	// ParticleBehaviour.h:154
	cVector mAccBase;

	// ParticleBehaviour.h:155
	cVector mAccVariance;

	// ParticleBehaviour.h:157
	cVector mAxisBase;

	// ParticleBehaviour.h:159
	cVector mOffsetRotXYZBase;

	// ParticleBehaviour.h:160
	cVector mOffsetRotXYZVariance;

	// ParticleBehaviour.h:161
	cVector mOffsetRotXYZVelBase;

	// ParticleBehaviour.h:162
	cVector mOffsetRotXYZVelVariance;

	// ParticleBehaviour.h:163
	cVector mOffsetRotXYZAccBase;

	// ParticleBehaviour.h:164
	cVector mOffsetRotXYZAccVariance;

	// ParticleBehaviour.h:166
	cVector mRotXYZBase;

	// ParticleBehaviour.h:167
	cVector mRotXYZVariance;

	// ParticleBehaviour.h:168
	cVector mRotXYZVelBase;

	// ParticleBehaviour.h:169
	cVector mRotXYZVelVariance;

	// ParticleBehaviour.h:170
	cVector mRotXYZAccBase;

	// ParticleBehaviour.h:171
	cVector mRotXYZAccVariance;

	// ParticleBehaviour.h:173
	cVector mPivotPoint;

	// ParticleBehaviour.h:175
	cVector mPosBase;

	// ParticleBehaviour.h:176
	cVector mPosVariance;

	// ParticleBehaviour.h:178
	cVector mRingRadius;

	// ParticleBehaviour.h:180
	cVector mSizeXYZBase;

	// ParticleBehaviour.h:181
	cVector mSizeXYZVariance;

	// ParticleBehaviour.h:182
	cVector mSizeXYZVelBase;

	// ParticleBehaviour.h:183
	cVector mSizeXYZVelVariance;

	// ParticleBehaviour.h:184
	cVector mSizeXYZAccBase;

	// ParticleBehaviour.h:185
	cVector mSizeXYZAccVariance;

	// ParticleBehaviour.h:187
	cVector mVelBase;

	// ParticleBehaviour.h:188
	cVector mVelVariance;

	// ParticleBehaviour.h:190
	cVector mRGBADiff;

	// ParticleBehaviour.h:193
	cVector[4] mColourStepsRGBAv;

	// ParticleBehaviour.h:194
	FP32[4] mDivisors;

	// ParticleBehaviour.h:197
	cColour8 mRGBA0;

	// ParticleBehaviour.h:198
	cColour8 mRGBA1;

	// ParticleBehaviour.h:200
	cColour8 mRGBABase;

	// ParticleBehaviour.h:201
	cColour8 mRGBAVar;

	// ParticleBehaviour.h:203
	cColour8[4] mColour;

	// ParticleBehaviour.h:204
	FP32[4] mColourTime;

	// ParticleBehaviour.h:205
	cColour8[4] mColourStepRGBA;

	// ParticleBehaviour.h:206
	FP32[4] mRGBATime;

	// ParticleBehaviour.h:207
	U32 mColourSteps;

	// ParticleBehaviour.h:210
	U32 mRGBAVarianceMode;

	// ParticleBehaviour.h:213
	FP32 mZero;

	// ParticleBehaviour.h:213
	FP32 mAlphaFadeOutPlusInvOneMinusAlphaFadeOut;

	// ParticleBehaviour.h:214
	FP32 mAlphaFadeInInv;

	// ParticleBehaviour.h:214
	FP32 mNegInvOneMinusAlphaFadeOut;

	// ParticleBehaviour.h:217
	FP32 mAlphaFadeIn;

	// ParticleBehaviour.h:218
	FP32 mAlphaFadeOut;

	// ParticleBehaviour.h:219
	FP32 mCellSize;

	// ParticleBehaviour.h:220
	FP32 mCloneScaleInTime;

	// ParticleBehaviour.h:222
	FP32 mDragFactor;

	// ParticleBehaviour.h:223
	FP32 mMass;

	// ParticleBehaviour.h:225
	FP32 mSizeBase;

	// ParticleBehaviour.h:226
	FP32 mSizeVariance;

	// ParticleBehaviour.h:227
	FP32 mSizeVelBase;

	// ParticleBehaviour.h:228
	FP32 mSizeVelVariance;

	// ParticleBehaviour.h:229
	FP32 mSizeAccBase;

	// ParticleBehaviour.h:230
	FP32 mSizeAccVariance;

	// ParticleBehaviour.h:232
	FP32 mEmissionRateBase;

	// ParticleBehaviour.h:233
	FP32 mEmissionRateVariance;

	// ParticleBehaviour.h:235
	FP32 mLifeBase;

	// ParticleBehaviour.h:236
	FP32 mLifeVariance;

	// ParticleBehaviour.h:238
	FP32 mRadius;

	// ParticleBehaviour.h:239
	FP32 mScale;

	// ParticleBehaviour.h:241
	U32 mEmissionCountClamp;

	// ParticleBehaviour.h:242
	U32 mFlags;

	// ParticleBehaviour.h:243
	cParticleWaveForm * mpWaveFormX;

	// ParticleBehaviour.h:244
	cParticleWaveForm * mpWaveFormY;

	// ParticleBehaviour.h:245
	cParticleWaveForm * mpWaveFormZ;

	// ParticleBehaviour.h:247
	cParticleWaveForm * mpWaveFormAlpha;

	// ParticleBehaviour.h:248
	cParticleWaveForm * mpWaveFormRGB;

	// ParticleBehaviour.h:250
	cParticleBehaviour * mpNext;

	// ParticleBehaviour.h:254
	cParticleBehaviourBaseVarianceCompiled mBVCompiled;

	// ParticleBehaviour.h:256
	bool mEmissionRateHasBeenScaled;

	// ParticleBehaviour.h:257
	U32 mEmissionCountClampVariance;

	// ParticleBehaviour.h:259
	FP32 mEndOnAlphaFade;

	// ParticleBehaviour.h:260
	FP32 mEndOnScale;

	// ParticleBehaviour.h:261
	FP32 mEndOnStartAngle;

	// ParticleBehaviour.h:262
	FP32 mEndOnEndAngle;

	// ParticleBehaviour.h:264
	FP32 mTimeScale;

	// ParticleBehaviour.h:265
	FP32 mTimeScaleVariance;

	// ParticleBehaviour.h:267
	U32 mRibbonParticleCount;

	// ParticleBehaviour.h:270
	FP32 mDragFactorVel;

	// ParticleBehaviour.h:271
	FP32 mDragFactorRot;

	// ParticleBehaviour.h:272
	FP32 mDragFactorScale;

	// ParticleBehaviour.h:274
	FP32 mEmitterStartWeight;

	// ParticleBehaviour.h:275
	FP32 mEmitterEndWeight;

	// ParticleBehaviour.h:276
	FP32 mEmitterVelWeight;

	// ParticleBehaviour.h:278
	cVector mAABBMin;

	// ParticleBehaviour.h:279
	cVector mAABBMax;

public:
	// ParticleBehaviour.h:133
	void Init();

	// ParticleBehaviour.h:134
	void DeInit(cLionParticleEffectManager &);

	// ParticleBehaviour.h:136
	void Delocate(U32);

	// ParticleBehaviour.h:137
	void Relocate();

	// ParticleBehaviour.h:139
	void GetSerialiseSize(cLionSerialiser &) const;

	// ParticleBehaviour.h:140
	cParticleBehaviour * Serialise(cLionSerialiser &) const;

	// ParticleBehaviour.h:141
	void Remap(cLionSerialiser &);

	// ParticleBehaviour.h:143
	void CloneInit(const cParticleBehaviour *);

	// ParticleBehaviour.h:144
	void AlphaReScale(FP32);

	// ParticleBehaviour.h:145
	void RGBReScale(FP32);

	// ParticleBehaviour.h:146
	void Build();

	// ParticleBehaviour.h:147
	void UnBuild();

	// ParticleBehaviour.h:148
	void BuildColourSteps();

	// ParticleBehaviour.h:149
	FP32 GetDurationMax() const;

	// ParticleBehaviour.h:150
	void Lerp(const cParticleBehaviour *, const cParticleBehaviour *, FP32);

	// ParticleBehaviour.h:151
	cParticleWaveForm * WaveFormAdd(cLionParticleEffectManager &, U32);

	// ParticleBehaviour.h:152
	void WaveFormRemove(cLionParticleEffectManager &, U32);

	// ParticleBehaviour.h:282
	void CompileBaseVariance();

}

// ParticleBehaviour.h:33
struct sParticleBehaviourBaseVariancePack {
	// ParticleBehaviour.h:34
	float base;

	// ParticleBehaviour.h:34
	float variance;

}

// ParticleBehaviour.h:40
struct cParticleBehaviourBaseVarianceCompiled {
	// ParticleBehaviour.h:42
	sParticleBehaviourBaseVariancePack[47] aData;

	// ParticleBehaviour.h:43
	unsigned int size;

	// ParticleBehaviour.h:43
	unsigned int dummy;

}

// ParticleBehaviour.h:131
extern const uint32_t knCOLOUR_STEP_LIMIT = 4;

