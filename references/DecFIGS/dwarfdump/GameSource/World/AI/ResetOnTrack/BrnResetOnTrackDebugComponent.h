// BrnRoute.h:26
namespace BrnAI {
	// Declaration
	struct ResetOnTrackDebugComponent {
		// BrnResetOnTrackDebugComponent.h:125
		struct ResetEntry {
			// BrnResetOnTrackDebugComponent.h:127
			ResetOnTrackRequest mRequest;

			// BrnResetOnTrackDebugComponent.h:128
			ResetOnTrackResult mResult;

			// BrnResetOnTrackDebugComponent.h:129
			float32_t mfAngle;

			// BrnResetOnTrackDebugComponent.h:130
			float32_t mfDistanceToPlayer;

			// BrnResetOnTrackDebugComponent.h:131
			int32_t miHngTestCount;

			// BrnResetOnTrackDebugComponent.h:132
			bool mbHasDriver;

		}

		// BrnResetOnTrackDebugComponent.h:137
		struct HngTestEntry {
			// BrnResetOnTrackDebugComponent.h:139
			Vector3 mStartPosition;

			// BrnResetOnTrackDebugComponent.h:140
			Vector3 mEndPosition;

			// BrnResetOnTrackDebugComponent.h:141
			bool mbHit;

		}

	}

}

// BrnResetOnTrackDebugComponent.h:50
struct BrnAI::ResetOnTrackDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnResetOnTrackDebugComponent.h:147
	ResetOnTrackManager * mpResetOnTrackManager;

	// BrnResetOnTrackDebugComponent.h:148
	FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry,16> mResetRingBuffer;

	// BrnResetOnTrackDebugComponent.h:149
	FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry,16> mHngTestRingBuffer;

	// BrnResetOnTrackDebugComponent.h:150
	int32_t miLastHngTestCount;

	// BrnResetOnTrackDebugComponent.h:151
	int32_t miFrameCount;

	// BrnResetOnTrackDebugComponent.h:153
	bool mbShowPlayerInfoOnly;

	// BrnResetOnTrackDebugComponent.h:154
	bool mbShowResetInfo;

	// BrnResetOnTrackDebugComponent.h:155
	bool mbShowCurrentInfo;

	// BrnResetOnTrackDebugComponent.h:156
	bool mbShowHngTestInfo;

	// BrnResetOnTrackDebugComponent.h:157
	bool mbContinousResetOnTrack;

	// BrnResetOnTrackDebugComponent.h:158
	bool mbUseHardcodedResetPosition;

	// BrnResetOnTrackDebugComponent.h:159
	bool mbIncrementResetSpeed;

	// BrnResetOnTrackDebugComponent.h:160
	int32_t miContinuousResetFrameSkip;

public:
	// BrnResetOnTrackDebugComponent.cpp:56
	void Construct(ResetOnTrackManager *);

	// BrnResetOnTrackDebugComponent.cpp:83
	void Destruct();

	// BrnResetOnTrackDebugComponent.cpp:147
	virtual void Update();

	// BrnResetOnTrackDebugComponent.cpp:170
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnResetOnTrackDebugComponent.cpp:255
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnResetOnTrackDebugComponent.h:74
	void PushPlaceOnTrackTransform(Matrix44Affine);

	// BrnResetOnTrackDebugComponent.cpp:334
	void PushResetInfo(const ResetOnTrackRequest *, const ResetOnTrackResult *);

	// BrnResetOnTrackDebugComponent.cpp:366
	void PushHngTestInfo(Vector2, Vector2, bool);

	// BrnResetOnTrackDebugComponent.h:88
	bool GetContinuousResetOnTrack();

	// BrnResetOnTrackDebugComponent.h:92
	bool GetUseHardcodedResetPosition();

	// BrnResetOnTrackDebugComponent.h:96
	bool GetIncrementResetSpeed();

protected:
	// BrnResetOnTrackDebugComponent.cpp:98
	virtual const char * GetName() const;

	// BrnResetOnTrackDebugComponent.cpp:111
	virtual const char * GetPath() const;

	// BrnResetOnTrackDebugComponent.cpp:123
	virtual void OnActivate();

private:
	// BrnResetOnTrackDebugComponent.cpp:391
	void ResetPlayerCarOnTrack();

	// BrnResetOnTrackDebugComponent.cpp:413
	void ResetPlayerCarOnTrackCallback(void *);

	// BrnResetOnTrackDebugComponent.cpp:429
	void DrawResetOnTrackAISection(CgsDev::Debug3DImmediateRender *) const;

}

// BrnRoute.h:26
namespace BrnAI {
	// Declaration
	struct ResetOnTrackDebugComponent {
		// BrnResetOnTrackDebugComponent.h:125
		struct ResetEntry {
			// BrnResetOnTrackDebugComponent.h:127
			ResetOnTrackRequest mRequest;

			// BrnResetOnTrackDebugComponent.h:128
			ResetOnTrackResult mResult;

			// BrnResetOnTrackDebugComponent.h:129
			float32_t mfAngle;

			// BrnResetOnTrackDebugComponent.h:130
			float32_t mfDistanceToPlayer;

			// BrnResetOnTrackDebugComponent.h:131
			int32_t miHngTestCount;

			// BrnResetOnTrackDebugComponent.h:132
			bool mbHasDriver;

		}

		// BrnResetOnTrackDebugComponent.h:137
		struct HngTestEntry {
			// BrnResetOnTrackDebugComponent.h:139
			Vector3 mStartPosition;

			// BrnResetOnTrackDebugComponent.h:140
			Vector3 mEndPosition;

			// BrnResetOnTrackDebugComponent.h:141
			bool mbHit;

		}

	public:
		ResetOnTrackDebugComponent();

	}

}

// BrnResetOnTrackDebugComponent.h:50
void BrnAI::ResetOnTrackDebugComponent::ResetOnTrackDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

