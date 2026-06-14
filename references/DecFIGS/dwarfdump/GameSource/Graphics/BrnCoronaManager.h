// BrnCoronaManager.h:39
enum BrnCoronaType {
	eCoronaTypeTrafficHeadLight = 0,
	eCoronaTypeTrafficRearLight = 1,
	eCoronaTypeTrafficBrakeLight = 2,
	eCoronaTypeTrafficIndicator = 3,
	eCoronaTypeTrafficSpotlights = 4,
	eCoronaTypeTrafficLightGreen = 5,
	eCoronaTypeTrafficLightAmber = 6,
	eCoronaTypeTrafficLightRed = 7,
	eCoronaTypeRaceCarHeadLight = 8,
	eCoronaTypeRaceCarRearLight = 9,
	eCoronaTypeRaceCarBrakeLight = 10,
	eCoronaTypeRaceCarIndicator = 11,
	eCoronaTypeRaceCarReversingLight = 12,
	eCoronaTypeRaceCarBluesTwosRed = 13,
	eCoronaTypeRaceCarBluesTwosBlue = 14,
	eCoronaTypeRaceCarSpotlights = 15,
	eCoronaTypePlayerCarHeadLight = 16,
	eCoronaTypePlayerCarRearLight = 17,
	eCoronaTypePlayerCarBrakeLight = 18,
	eCoronaTypePlayerCarIndicator = 19,
	eCoronaTypePlayerCarReversingLight = 20,
	eCoronaTypePlayerCarBluesTwosRed = 21,
	eCoronaTypePlayerCarBluesTwosBlue = 22,
	eCoronaTypePlayerCarSpotlights = 23,
	eCoronaTypePlayerCarPS3BluRayLights = 24,
	eCoronaTypeCount = 25,
}

// BrnCoronaManager.h:75
struct BrnCoronaTypeParams {
	// BrnCoronaManager.h:87
	Vector2 mvSize;

	// BrnCoronaManager.h:88
	int32_t miTextureID;

	// BrnCoronaManager.h:89
	float32_t mfBiasDistance;

	// BrnCoronaManager.h:90
	SmoothStep mScaleCurve;

private:
	// BrnCoronaManager.h:94
	extern BrnCoronaTypeParams[25] mParams;

public:
	// BrnCoronaManager.h:80
	const BrnCoronaTypeParams & GetCoronaTypeParams(BrnCoronaType);

}

// BrnCoronaManager.h:98
struct BrnCoronaManager {
	// BrnCoronaManager.h:102
	struct BrnSubmissionInterface {
		// BrnCoronaManager.h:147
		struct DerivedCoronaIterator : public renderengine::CoronaBuffer::Iterator {
		public:
			// BrnCoronaManager.h:151
			uint32_t GetNumCoronasWritten() const;

		}

	private:
		// BrnCoronaManager.h:167
		extern const int32_t KI_MAX_CORONAS = 512;

		// BrnCoronaManager.h:173
		CoronaBuffer * mpBuffer;

		// BrnCoronaManager.h:174
		BrnCoronaManager::BrnSubmissionInterface::DerivedCoronaIterator mBufferIterator;

		// BrnCoronaManager.h:175
		Matrix44 mViewProj;

		// BrnCoronaManager.h:176
		Vector3 mCameraPosition;

		// BrnCoronaManager.h:177
		Vector4 mViewXyScale;

	public:
		// BrnCoronaManager.h:113
		void SetCameraInfo(Matrix44, Vector3, Vector4);

		// BrnCoronaManager.h:126
		void AddPropCorona(Vector3, Vector3, const Vector2Template<float> &, float32_t, int32_t);

		// BrnCoronaManager.h:134
		void AddCorona(Vector3, Vector3, float32_t, float32_t, const BrnCoronaTypeParams &);

		// BrnCoronaManager.h:142
		void AddCorona(Vector3, Vector3, float32_t, float32_t, const BrnCoronaType &);

		// BrnCoronaManager.h:159
		const BrnCoronaTypeParams & GetTypeParams(BrnCoronaType);

	private:
		// BrnCoronaManager.h:170
		void Construct();

	}

}

// _built-in_
namespace :: {
	// BrnCoronaManager.h:33
	const float32_t KF_CORONA_OFFSET;

}

// BrnCoronaManager.h:94
extern BrnCoronaTypeParams[25] mParams;

// BrnCoronaManager.h:98
struct BrnCoronaManager {
	// BrnCoronaManager.h:102
	struct BrnSubmissionInterface {
	public:
		// BrnCoronaManager.h:159
		const BrnCoronaTypeParams & GetTypeParams(BrnCoronaType);

	}

}

// BrnCoronaManager.h:98
struct BrnCoronaManager {
	// BrnCoronaManager.h:102
	struct BrnSubmissionInterface {
		// BrnCoronaManager.h:147
		struct DerivedCoronaIterator : public renderengine::CoronaBuffer::Iterator {
		public:
			// BrnCoronaManager.h:151
			uint32_t GetNumCoronasWritten() const;

		}

	private:
		// BrnCoronaManager.h:167
		extern const int32_t KI_MAX_CORONAS = 512;

		// BrnCoronaManager.h:173
		CoronaBuffer * mpBuffer;

		// BrnCoronaManager.h:174
		BrnCoronaManager::BrnSubmissionInterface::DerivedCoronaIterator mBufferIterator;

		// BrnCoronaManager.h:175
		Matrix44 mViewProj;

		// BrnCoronaManager.h:176
		Vector3 mCameraPosition;

		// BrnCoronaManager.h:177
		Vector4 mViewXyScale;

	public:
		// BrnCoronaManager.h:113
		void SetCameraInfo(Matrix44, Vector3, Vector4);

		// BrnCoronaManager.h:126
		void AddPropCorona(Vector3, Vector3, const Vector2Template<float> &, float32_t, int32_t);

		// BrnCoronaManager.h:134
		void AddCorona(Vector3, Vector3, float32_t, float32_t, const BrnCoronaTypeParams &);

		// BrnCoronaManager.h:142
		void AddCorona(Vector3, Vector3, float32_t, float32_t, const BrnCoronaType &);

		// BrnCoronaManager.h:159
		const BrnCoronaTypeParams & GetTypeParams(BrnCoronaType);

	private:
		// BrnCoronaManager.h:170
		void Construct();

	}

protected:
	// BrnCoronaManager.h:217
	bool mbActive;

	// BrnCoronaManager.h:219
	renderengine::Texture * m_textureAtlas;

	// BrnCoronaManager.h:220
	TextureState * m_textureStateAtlas;

	// BrnCoronaManager.h:222
	CoronaBuffer * m_coronaBuffer0;

	// BrnCoronaManager.h:223
	CoronaBuffer * m_coronaBuffer1;

	// BrnCoronaManager.h:225
	Resource m_textureStateAtlasResource;

	// BrnCoronaManager.h:226
	Resource m_coronaBuffer0Resource;

	// BrnCoronaManager.h:227
	Resource m_coronaBuffer1Resource;

	// BrnCoronaManager.h:229
	extern Vector2[12][4] s_atlasUVs;

	// BrnCoronaManager.h:231
	BrnCoronaManager::BrnSubmissionInterface[2] mSubmissionInterface;

	// BrnCoronaManager.h:232
	uint8_t mu8SubmissionSwapIndex;

public:
	// BrnCoronaManager.h:184
	void Construct(BrnResource::LinearResourceAllocator &);

	// BrnCoronaManager.h:187
	void Destruct();

	// BrnCoronaManager.h:190
	bool Prepare();

	// BrnCoronaManager.h:193
	bool Release(rw::IResourceAllocator &);

	// BrnCoronaManager.h:196
	void Clear();

	// BrnCoronaManager.h:199
	void Swap();

	// BrnCoronaManager.h:202
	void Render(float32_t);

	// BrnCoronaManager.h:205
	BrnCoronaManager::BrnSubmissionInterface * GetSubmissionInterface();

	// BrnCoronaManager.h:213
	void SetTextureAtlas(rw::IResourceAllocator &, renderengine::Texture *);

}

// BrnCoronaManager.h:167
extern const int32_t KI_MAX_CORONAS = 512;

