// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct DebugMenuSerialiser {
			// Serialisation.h:226
			enum EMode {
				E_MODE_ADD_TO_MENU = 0,
				E_MODE_REMOVE_FROM_MENU = 1,
			}

		}

		// Serialisation.h:830
		extern void SerialiseBehaviourParameters<BrnDirector::Camera::DebugMenuSerialiser>(const char *, BrnDirector::Camera::Behaviour::Parameters &, DebugMenuSerialiser &);

		// Serialisation.h:830
		extern void SerialiseBehaviourParameters<BrnDirector::Camera::TestbedSetupSerialiser>(const char *, BrnDirector::Camera::Behaviour::Parameters &, TestbedSetupSerialiser &);

		// Serialisation.h:830
		extern void SerialiseBehaviourParameters<BrnDirector::Camera::BehaviourParameterNamingSerialiser>(const char *, BrnDirector::Camera::Behaviour::Parameters &, BehaviourParameterNamingSerialiser &);

		// Serialisation.h:830
		extern void SerialiseBehaviourParameters<BrnDirector::Camera::TextFileReadSerialiser>(const char *, BrnDirector::Camera::Behaviour::Parameters &, TextFileReadSerialiser &);

		// Serialisation.h:830
		extern void SerialiseBehaviourParameters<BrnDirector::Camera::TextFileWriteSerialiser>(const char *, BrnDirector::Camera::Behaviour::Parameters &, TextFileWriteSerialiser &);

	}

}

// Serialisation.h:54
struct BrnDirector::Camera::TestbedSetupSerialiser {
private:
	// Serialisation.h:84
	BrnDirector::DebugComponent * mpDebugComponent;

public:
	// Serialisation.h:59
	void Construct(BrnDirector::DebugComponent *);

	// Serialisation.h:77
	void Serialise(const char *, VersionNumber &);

}

// Serialisation.h:90
struct BrnDirector::Camera::BehaviourParameterNamingSerialiser {
public:
	// Serialisation.h:104
	void Serialise(const char *, VersionNumber &);

}

// Serialisation.h:221
struct BrnDirector::Camera::DebugMenuSerialiser {
	// Serialisation.h:224
	extern const int32_t KI_CHARBUFFERLENGTH = 64;

private:
	// Serialisation.h:448
	extern const int32_t KI_PATHSTACKSIZE = 64;

	// Serialisation.h:450
	BrnDirector::Camera::DebugMenuSerialiser::EMode meMode;

	// Serialisation.h:451
	uint32_t muStackPos;

	// Serialisation.h:452
	char[64] macPathStack;

	// Serialisation.h:454
	BrnDirector::DebugComponent * mpDebugComponent;

public:
	// Serialisation.h:235
	void Construct(BrnDirector::DebugComponent *, BrnDirector::Camera::DebugMenuSerialiser::EMode);

	// Serialisation.h:245
	void AddToPath(const char *);

	// Serialisation.h:293
	void ProcessFunction(DebugCallbackFunction, void *, const char *);

	// Serialisation.h:320
	void Serialise(const char *, float32_t &);

	// Serialisation.h:345
	void Serialise(const char *, int32_t &);

	// Serialisation.h:353
	void Serialise(const char *, uint32_t &);

	// Serialisation.h:362
	void Serialise(const char *, VersionNumber &);

	// Serialisation.h:370
	void Serialise(const char *, FOV &);

	// Serialisation.h:379
	void Serialise(const char *, bool &);

	// Serialisation.h:387
	void Serialise(const char *, Vector3 &);

	// Serialisation.h:397
	void Serialise(const char *, SharedPlaylists &);

	// Serialisation.h:406
	void Serialise(const char *, ICEMoviePlaylist &);

private:
	// Serialisation.h:458
	void RemoveFromPath(const char *);

}

// Serialisation.h:468
struct BrnDirector::Camera::TextFileReadSerialiser {
	// Serialisation.h:471
	extern const int32_t KI_CHARBUFFERLENGTH = 64;

private:
	// Serialisation.h:617
	std::FILE * mpFile;

public:
	// Serialisation.h:475
	void Construct(const char *);

	// Serialisation.h:481
	void Destruct();

	// Serialisation.h:523
	void Serialise(const char *, float32_t &);

	// Serialisation.h:535
	void Serialise(const char *, uint32_t &);

	// Serialisation.h:547
	void Serialise(const char *, int32_t &);

	// Serialisation.h:559
	void Serialise(const char *, bool &);

	// Serialisation.h:573
	void Serialise(const char *, VersionNumber &);

	// Serialisation.h:585
	void Serialise(const char *, FOV &);

	// Serialisation.h:597
	void Serialise(const char *, Vector3 &);

}

// Serialisation.h:623
struct BrnDirector::Camera::TextFileWriteSerialiser {
private:
	// Serialisation.h:820
	uint32_t muRecursionDepth;

	// Serialisation.h:821
	std::FILE * mpFile;

public:
	// Serialisation.h:634
	void Construct(const char *);

	// Serialisation.h:641
	void Destruct();

	// Serialisation.h:689
	void Serialise(const char *, float32_t &);

	// Serialisation.h:702
	void Serialise(const char *, int32_t &);

	// Serialisation.h:715
	void Serialise(const char *, uint32_t &);

	// Serialisation.h:728
	void Serialise(const char *, VersionNumber &);

	// Serialisation.h:741
	void Serialise(const char *, FOV &);

	// Serialisation.h:754
	void Serialise(const char *, bool &);

	// Serialisation.h:768
	void Serialise(const char *, Vector3 &);

private:
	// Serialisation.h:791
	void FormatName(char *, const char *);

}

// Serialisation.h:265
extern void Process<float>(const char *  lpcName, const float &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:265
extern void Process<bool>(const char *  lpcName, const bool &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:265
extern void Process<int>(const char *  lpcName, const int &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:265
extern void Process<unsigned int>(const char *  lpcName, const unsigned int &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:332
extern void Serialise<VectorAxisX>(const char *  lpcName, VecFloatRef<VectorAxisX> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:336
		const float32_t & lrFloat;

	}
}

// Serialisation.h:332
extern void Serialise<VectorAxisY>(const char *  lpcName, VecFloatRef<VectorAxisY> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:336
		const float32_t & lrFloat;

	}
}

// Serialisation.h:332
extern void Serialise<VectorAxisZ>(const char *  lpcName, VecFloatRef<VectorAxisZ> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:336
		const float32_t & lrFloat;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::Utils::OrientationLag::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::Utils::PositionLag::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::Utils::CameraRig::Params>(const char *  lpcName, const Params &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(const char *  lpcName, const BrnDirector::Camera::Utils::Looker::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::AttachmentTruck::Parameters>(const char *  lpcName, const BrnDirector::Camera::AttachmentTruck::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourGameplayExternal::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayExternal::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourGameplayBumper::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayBumper::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourRig::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRig::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourBystanderCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourBystanderCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourHeliCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourHeliCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourPassengerCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourPassengerCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourGyroCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGyroCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCrash::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCrash::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourFailsafe::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFailsafe::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourLooseAttachment::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourLooseAttachment::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourFixedCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFixedCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:255
extern void Serialise<BrnDirector::Camera::BehaviourRoadRunner::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRoadRunner::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourGameplayExternal::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayExternal::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourGameplayBumper::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayBumper::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourRig::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRig::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourBystanderCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourBystanderCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourHeliCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourHeliCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourPassengerCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourPassengerCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourGyroCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGyroCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCrash::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCrash::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourFailsafe::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFailsafe::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourLooseAttachment::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourLooseAttachment::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourFixedCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFixedCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:67
extern void Serialise<BrnDirector::Camera::BehaviourRoadRunner::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRoadRunner::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourGameplayExternal::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayExternal::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourGameplayBumper::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayBumper::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourRig::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRig::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourBystanderCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourBystanderCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourHeliCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourHeliCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourPassengerCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourPassengerCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourGyroCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGyroCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCrash::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCrash::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourFailsafe::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFailsafe::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourLooseAttachment::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourLooseAttachment::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourFixedCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFixedCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:96
extern void Serialise<BrnDirector::Camera::BehaviourRoadRunner::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRoadRunner::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(const char *  lpcName, const BrnDirector::Camera::Utils::Looker::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::AttachmentTruck::Parameters>(const char *  lpcName, const BrnDirector::Camera::AttachmentTruck::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:508
extern void Serialise<VectorAxisX>(const char *  lpcName, VecFloatRef<VectorAxisX> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:512
		float32_t lfTemp;

		// Serialisation.h:514
		char[64] lacBuffer;

	}
}

// Serialisation.h:508
extern void Serialise<VectorAxisY>(const char *  lpcName, VecFloatRef<VectorAxisY> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:512
		float32_t lfTemp;

		// Serialisation.h:514
		char[64] lacBuffer;

	}
}

// Serialisation.h:508
extern void Serialise<VectorAxisZ>(const char *  lpcName, VecFloatRef<VectorAxisZ> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:512
		float32_t lfTemp;

		// Serialisation.h:514
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::Utils::OrientationLag::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::Utils::PositionLag::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::Utils::CameraRig::Params>(const char *  lpcName, const Params &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourGameplayExternal::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayExternal::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourGameplayBumper::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayBumper::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourRig::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRig::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourBystanderCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourBystanderCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourHeliCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourHeliCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourPassengerCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourPassengerCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourGyroCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGyroCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCrash::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCrash::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourFailsafe::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFailsafe::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourLooseAttachment::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourLooseAttachment::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourFixedCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFixedCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::Camera::BehaviourRoadRunner::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRoadRunner::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(const char *  lpcName, const BrnDirector::Camera::Utils::Looker::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::AttachmentTruck::Parameters>(const char *  lpcName, const BrnDirector::Camera::AttachmentTruck::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:676
extern void Serialise<VectorAxisX>(const char *  lpcName, VecFloatRef<VectorAxisX> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:680
		char[64] lacBuffer;

	}
}

// Serialisation.h:676
extern void Serialise<VectorAxisY>(const char *  lpcName, VecFloatRef<VectorAxisY> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:680
		char[64] lacBuffer;

	}
}

// Serialisation.h:676
extern void Serialise<VectorAxisZ>(const char *  lpcName, VecFloatRef<VectorAxisZ> &  lrInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:680
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::Utils::OrientationLag::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::Utils::PositionLag::Parameters>(const char *  lpcName, const Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::Utils::CameraRig::Params>(const char *  lpcName, const Params &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourGameplayExternal::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayExternal::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourGameplayBumper::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGameplayBumper::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourRig::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRig::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourBystanderCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourBystanderCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourHeliCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourHeliCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourPassengerCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourPassengerCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourGyroCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourGyroCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourAftertouchCrash::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourAftertouchCrash::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourFailsafe::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFailsafe::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourLooseAttachment::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourLooseAttachment::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourFixedCam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourFixedCam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::Camera::BehaviourRoadRunner::Parameters>(const char *  lpcName, const BrnDirector::Camera::BehaviourRoadRunner::Parameters &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:255
extern void Serialise<BrnDirector::IceMovie>(const char *  lpcName, const IceMovie &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Serialisation.h:492
extern void Serialise<BrnDirector::IceMovie>(const char *  lpcName, const IceMovie &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:492
extern void Serialise<BrnDirector::ICEMoviePlaylist>(const char *  lpcName, const ICEMoviePlaylist &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:496
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::IceMovie>(const char *  lpcName, const IceMovie &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:653
extern void Serialise<BrnDirector::ICEMoviePlaylist>(const char *  lpcName, const ICEMoviePlaylist &  lrTInOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Serialisation.h:657
		char[64] lacBuffer;

	}
}

// Serialisation.h:116
extern const int32_t KI_CHARBUFFERLENGTH = 64;

// Serialisation.h:448
extern const int32_t KI_PATHSTACKSIZE = 64;

// Serialisation.h:471
extern const int32_t KI_CHARBUFFERLENGTH = 64;

