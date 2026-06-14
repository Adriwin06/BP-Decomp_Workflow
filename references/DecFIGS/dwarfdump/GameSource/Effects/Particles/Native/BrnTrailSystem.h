// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnTrailSystem.h:46
		enum EB4EmitterState {
			eEMITTER_NORMAL = 0,
			eEMITTER_READYTODELETE = 1,
		}

		// BrnTrailSystem.h:61
		const uint8_t kxTrailEmitterContinuance = 2;

		// BrnTrailSystem.h:62
		const uint32_t kuTrailBlendNormal = 1;

		// BrnTrailSystem.h:63
		const int32_t knTrailEmitterPoolSize = 96;

		// BrnTrailSystem.h:64
		const int32_t KI_MAX_NUM_TRAIL_TYPES = 4;

	}

}

// BrnTrailSystem.h:81
struct BrnParticle::Native::TrailEmitterData {
	// BrnTrailSystem.h:100
	Vector3 mLastPosition;

	// BrnTrailSystem.h:103
	BrnParticle::Native::TrailEmitter * mpTrailEmitter;

	// BrnTrailSystem.h:104
	float32_t mrLastTrailTime;

public:
	// BrnTrailSystem.h:85
	void Prepare();

	// BrnTrailSystem.h:92
	void Detatch();

}

// BrnTrailSystem.h:120
struct BrnParticle::Native::EmitterArray {
private:
	// BrnTrailSystem.h:200
	BrnParticle::Native::TrailEmitter *[96] mapEmitters;

	// BrnTrailSystem.h:201
	int32_t mnCurrentSize;

public:
	// BrnTrailSystem.h:124
	bool Prepare();

	// BrnTrailSystem.h:132
	void AddEntry(BrnParticle::Native::TrailEmitter *);

	// BrnTrailSystem.h:139
	void RemoveEntry(BrnParticle::Native::TrailEmitter *);

	// BrnTrailSystem.h:163
	void RemoveEntry(int32_t);

	// BrnTrailSystem.h:180
	BrnParticle::Native::TrailEmitter * operator[](int32_t);

	// BrnTrailSystem.h:187
	int32_t GetSize();

	// BrnTrailSystem.h:193
	BrnParticle::Native::TrailEmitter ** operator BrnParticle::Native::TrailEmitter**();

}

// BrnTrailSystem.h:213
struct BrnParticle::Native::TrailParams {
	// BrnTrailSystem.h:216
	RwRGBAReal mStartColour;

	// BrnTrailSystem.h:217
	RwRGBAReal mEndColour;

}

// BrnTrailSystem.h:221
struct BrnParticle::Native::TrailEmitter {
private:
	// BrnTrailSystem.h:260
	float32_t mrTimeLastSegmentAdded;

	// BrnTrailSystem.h:261
	BrnParticle::Native::TrailParams * mpParams;

	// Unknown accessibility
	// BrnTrailSystem.h:266
	TrailSegmentCollection * mpCurrentSegments;

	// BrnTrailSystem.h:271
	TrailSegmentCollection * mpOldSegments;

	// BrnTrailSystem.h:273
	int8_t mn8NumSegments;

	// BrnTrailSystem.h:274
	int8_t mu8TrailTypeID;

	// BrnTrailSystem.h:275
	uint8_t mx8Flags;

	// BrnTrailSystem.h:276
	int8_t mn8TextureIndex;

	// BrnTrailSystem.h:279
	TrailEmitterData * mpOwner;

public:
	// BrnTrailSystem.h:224
	void Construct();

	// BrnTrailSystem.h:225
	void Destruct();

	// BrnTrailSystem.h:228
	bool Prepare(BrnParticle::Native::TrailParams *);

	// BrnTrailSystem.h:230
	bool Prepare();

	// BrnTrailSystem.h:232
	void Release();

	// BrnTrailSystem.h:234
	BrnParticle::Native::EB4EmitterState Update(float32_t, float32_t);

	// BrnTrailSystem.h:241
	bool AddTrailSegment(float32_t, Vector3, Vector3, float32_t);

	// BrnTrailSystem.h:244
	void PostRender();

	// BrnTrailSystem.h:253
	int8_t GetTrailTypeID() const;

}

// BrnTrailSystem.h:293
struct BrnParticle::Native::TrailSystem {
	// BrnTrailSystem.h:339
	extern TrailParams[4] mgaDefaultParams;

private:
	// BrnTrailSystem.h:346
	TrailSegmentCollection[192] maSegments;

	// BrnTrailSystem.h:348
	TrailEmitter[96] maEmitterPool;

	// BrnTrailSystem.h:350
	Stack<BrnParticle::Native::TrailEmitter*,96> mFreeEmitters;

	// BrnTrailSystem.h:352
	SafeResourceHandle<renderengine::Texture> mTrailTexture;

	// BrnTrailSystem.h:354
	EmitterArray[4] maActiveEmitters;

	// BrnTrailSystem.h:355
	int32_t mnCurrentBuffer;

	// BrnTrailSystem.h:357
	TrailRenderer mRenderer;

	// BrnTrailSystem.h:358
	float mfCurrentTime;

	// BrnTrailSystem.h:359
	float mfCurrentTimeStep;

	// BrnTrailSystem.h:360
	bool mbIsReady;

public:
	// BrnTrailSystem.h:297
	void Construct(HeapMalloc *, BrnGraphics::Im3dSkidsRenderer *);

	// BrnTrailSystem.h:300
	void Destruct();

	// BrnTrailSystem.h:303
	bool Prepare();

	// BrnTrailSystem.h:306
	void Release();

	// BrnTrailSystem.h:312
	void Update(float32_t, float32_t, Matrix44);

	// BrnTrailSystem.h:315
	void Render(float32_t);

	// BrnTrailSystem.h:324
	void AddTrailSegment(TrailEmitterData *, Vector3, Vector3, int8_t, float32_t, float32_t);

	// BrnTrailSystem.h:328
	BrnParticle::Native::TrailEmitter * AttachTrailEmitter(int8_t);

	// BrnTrailSystem.h:330
	void AcquireTexture(uint32_t, SafeResourceHandle<renderengine::Texture>);

	// BrnTrailSystem.h:333
	void EndOfFrame();

	// BrnTrailSystem.h:337
	void UpdateTrailType(int16_t, Vector4, Vector4);

}

// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnTrailSystem.h:61
		const uint8_t kxTrailEmitterContinuance = 2;

		// BrnTrailSystem.h:62
		const uint32_t kuTrailBlendNormal = 1;

		// BrnTrailSystem.h:63
		const int32_t knTrailEmitterPoolSize = 96;

		// BrnTrailSystem.h:64
		const int32_t KI_MAX_NUM_TRAIL_TYPES = 4;

	}

}

