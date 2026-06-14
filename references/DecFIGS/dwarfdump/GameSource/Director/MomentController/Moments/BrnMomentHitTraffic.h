// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentHitTraffic {
		// BrnMomentHitTraffic.h:96
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentHitTraffic.h:100
			void Construct();

		}

	}

}

// BrnMomentHitTraffic.h:47
struct BrnDirector::MomentHitTraffic : public BrnDirector::Moment {
private:
	// BrnMomentHitTraffic.h:82
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mHeliCamHandle;

	// BrnMomentHitTraffic.h:84
	const BrnDirector::MomentHitTraffic::Parameters * mpParameters;

	// BrnMomentHitTraffic.h:86
	float32_t mfRunningTime;

public:
	void MomentHitTraffic(const MomentHitTraffic &);

	void MomentHitTraffic();

	// BrnMomentHitTraffic.cpp:34
	virtual void Construct();

	// BrnMomentHitTraffic.cpp:52
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentHitTraffic.cpp:69
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentHitTraffic.cpp:138
	virtual bool Release();

	// BrnMomentHitTraffic.cpp:156
	virtual void Destruct();

	// BrnMomentHitTraffic.cpp:170
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentHitTraffic.cpp:196
	virtual const char * GetName() const;

private:
	// BrnMomentHitTraffic.cpp:182
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentHitTraffic.h:47
void BrnDirector::MomentHitTraffic::MomentHitTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

