// BrnMainMapRenderer.h:55
extern const uint8_t KU8_MAX_ALPHA;

// BrnMainMapRenderer.h:56
extern const uint8_t KU8_INACTIVE_ALPHA;

// BrnMainMapRenderer.h:123
extern const RGBA KC_ROUTE_COLOUR;

// BrnMainMapRenderer.h:125
extern const int32_t KI_MAX_PULSES = 4;

// BrnMainMapRenderer.h:126
extern const float32_t KF_PULSE_SPEED;

// BrnMainMapRenderer.h:127
extern const float32_t KF_PULSE_EVERY;

// BrnMainMapRenderer.h:128
extern const rw::math::vpu::Vector3 KV_PULSE_COLOUR;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MainMapRenderer {
		// BrnMainMapRenderer.h:58
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnMainMapRenderer.h:64
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// BrnMainMapRenderer.h:114
		enum EFadeState {
			E_FADESTATE_NONE = 0,
			E_FADESTATE_IN = 1,
			E_FADESTATE_OUT = 2,
			E_FADESTATE_NUM = 3,
		}

	}

}

// BrnMainMapRenderer.h:52
struct BrnGui::MainMapRenderer : public CgsGui::CustomRenderComponentInterface {
	// BrnMainMapRenderer.cpp:33
	extern const uint8_t KU8_MAX_ALPHA = 255;

	// BrnMainMapRenderer.cpp:34
	extern const uint8_t KU8_INACTIVE_ALPHA = 128;

private:
	// BrnMainMapRenderer.cpp:31
	extern const RGBA KC_ROUTE_COLOUR;

	// BrnMainMapRenderer.h:125
	extern const int32_t KI_MAX_PULSES = 4;

	// BrnMainMapRenderer.cpp:35
	extern const float32_t KF_PULSE_SPEED;

	// BrnMainMapRenderer.cpp:36
	extern const float32_t KF_PULSE_EVERY;

	// BrnMainMapRenderer.cpp:37
	extern const rw::math::vpu::Vector3 KV_PULSE_COLOUR;

	// BrnMainMapRenderer.h:133
	BrnGui::MainMapRenderer::EPrepareStage mePrepareStage;

	// BrnMainMapRenderer.h:134
	BrnGui::MainMapRenderer::EReleaseStage meReleaseStage;

	// BrnMainMapRenderer.h:136
	GuiEventRenderMainMap mRenderMainMapEvent;

	// BrnMainMapRenderer.h:137
	BrnGui::GuiCache * mpGuiCache;

	// BrnMainMapRenderer.h:139
	rw::IResourceAllocator * mpHeapAllocator;

	// BrnMainMapRenderer.h:142
	Resource mBackgroundMaskTextureStateResource;

	// BrnMainMapRenderer.h:143
	TextureState * mpBackgroundMaskTextureState;

	// BrnMainMapRenderer.h:145
	Resource mPreRaceMaskTextureStateResource;

	// BrnMainMapRenderer.h:146
	TextureState * mpPreRaceMaskTextureState;

	// BrnMainMapRenderer.h:148
	Resource mMapTileBlendStateResource;

	// BrnMainMapRenderer.h:149
	BlendState * mpMapTileBlendState;

	// BrnMainMapRenderer.h:151
	Resource mRouteSegmentTextureStateResource;

	// BrnMainMapRenderer.h:152
	TextureState * mpRouteSegmentTextureState;

	// BrnMainMapRenderer.h:154
	Resource mRouteSegmentBlendStateResource;

	// BrnMainMapRenderer.h:155
	BlendState * mpRouteSegmentBlendState;

	// BrnMainMapRenderer.h:157
	Resource mPulseTextureStateResource;

	// BrnMainMapRenderer.h:158
	TextureState * mpPulseTextureState;

	// BrnMainMapRenderer.h:188
	BrnGui::MainMapRenderer::EFadeState meFadeState;

	// BrnMainMapRenderer.h:189
	float32_t mfFadeStartTime;

	// BrnMainMapRenderer.h:190
	float32_t mfFadeDuration;

	// BrnMainMapRenderer.h:191
	uint8_t mu8Alpha;

	// BrnMainMapRenderer.h:210
	ParticleSystem2d[4] mParticleSystem;

	// BrnMainMapRenderer.h:211
	float32_t[4] mfLastProp;

	// BrnMainMapRenderer.h:213
	bool mbDrawRoute;

public:
	// BrnMainMapRenderer.cpp:58
	virtual void Construct();

	// BrnMainMapRenderer.cpp:109
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnMainMapRenderer.cpp:152
	virtual bool Release();

	// BrnMainMapRenderer.cpp:230
	virtual void Destruct();

	// BrnMainMapRenderer.cpp:268
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnMainMapRenderer.cpp:253
	virtual void Update();

	// BrnMainMapRenderer.cpp:377
	virtual void SetRenderEnabled(bool);

	// BrnMainMapRenderer.cpp:1139
	virtual CgsID GetID() const;

	// BrnMainMapRenderer.cpp:1158
	virtual void StartFade(bool, float32_t);

	// BrnMainMapRenderer.cpp:1187
	virtual void ClearFadeState();

	// BrnMainMapRenderer.cpp:753
	void RenderRoute(const Array<rw::math::vpu::Vector3,5120u> *, CgsGraphics::Im2dRenderBuffer *, const rw::math::vpu::Matrix33 &);

	// BrnMainMapRenderer.cpp:861
	// Declaration
	void ClipRoute(const Array<rw::math::vpu::Vector3,5120u> *, Vector3, const rw::math::vpu::Matrix33 &, Vector4, Array<rw::math::vpu::Vector3,5120u> *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMainMapRenderer.cpp:863
		using namespace rw::math;

	}

	// BrnMainMapRenderer.cpp:929
	// Declaration
	bool IsWorldPosInViewport(Vector3, const rw::math::vpu::Matrix33 &, Vector4) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMainMapRenderer.cpp:931
		using namespace rw::math;

	}

private:
	// BrnMainMapRenderer.cpp:397
	// Declaration
	virtual void RenderComponent(ImRendererSet *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMainMapRenderer.cpp:399
		using namespace rw::math;

	}

	// BrnMainMapRenderer.cpp:567
	void ClearBackgroundFlatBlack(CgsGraphics::Im2dRenderBuffer *, Vector4, Matrix44, Matrix44);

	// BrnMainMapRenderer.cpp:626
	void ClearBackgroundFadeToMapEdges(CgsGraphics::Im2dRenderBuffer *, Vector4, uint32_t, Matrix33, Matrix44, Matrix44);

	// BrnMainMapRenderer.cpp:1204
	void UpdateAlphaForFadeState();

	// BrnMainMapRenderer.cpp:954
	// Declaration
	void RenderPulses(const Array<rw::math::vpu::Vector3,5120u> *, CgsGraphics::Im2dRenderBuffer *, const rw::math::vpu::Matrix33 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMainMapRenderer.cpp:956
		using namespace rw::math;

	}

	// BrnMainMapRenderer.cpp:1002
	// Declaration
	void RenderPulse(const Array<rw::math::vpu::Vector3,5120u> *, float32_t, float32_t, float32_t, CgsGraphics::Im2dRenderBuffer *, const rw::math::vpu::Matrix33 &, ParticleSystem2d &, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMainMapRenderer.cpp:1004
		using namespace rw::math;

	}

	// BrnMainMapRenderer.cpp:1070
	// Declaration
	float32_t GetRouteLength(const Array<rw::math::vpu::Vector3,5120u> *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMainMapRenderer.cpp:1072
		using namespace rw::math;

	}

	// BrnMainMapRenderer.cpp:1104
	// Declaration
	void PreparePulseParticleSystem(ParticleSystem2d &, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMainMapRenderer.cpp:1106
		using namespace rw::math;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MainMapRenderer {
	public:
		MainMapRenderer();

		// Unknown accessibility
		// BrnMainMapRenderer.h:55
		extern const uint8_t KU8_MAX_ALPHA;

		// Unknown accessibility
		// BrnMainMapRenderer.h:56
		extern const uint8_t KU8_INACTIVE_ALPHA;

	private:
		// BrnMainMapRenderer.h:123
		extern const RGBA KC_ROUTE_COLOUR;

		// BrnMainMapRenderer.h:125
		extern const int32_t KI_MAX_PULSES = 4;

		// BrnMainMapRenderer.h:126
		extern const float32_t KF_PULSE_SPEED;

		// BrnMainMapRenderer.h:127
		extern const float32_t KF_PULSE_EVERY;

		// BrnMainMapRenderer.h:128
		extern const rw::math::vpu::Vector3 KV_PULSE_COLOUR;

	}

}

// BrnMainMapRenderer.h:52
void BrnGui::MainMapRenderer::MainMapRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

