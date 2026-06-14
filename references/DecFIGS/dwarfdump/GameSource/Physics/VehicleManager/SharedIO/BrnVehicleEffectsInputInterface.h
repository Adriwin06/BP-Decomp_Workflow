// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleEffectsInputInterface.h:33
		const float32_t KF_AIR_RAM_SCALE_FACTOR;

		// BrnVehicleEffectsInputInterface.h:34
		const float32_t KF_SLAM_MAGNITUDE;

		// BrnVehicleEffectsInputInterface.h:37
		const uint32_t KU_RAMEFFECT_WORLDSPACEIMPULSE = 1;

		// BrnVehicleEffectsInputInterface.h:38
		const uint32_t KU_RAMEFFECT_BODYSPACEIMPULSE = 2;

		// BrnVehicleEffectsInputInterface.h:39
		const uint32_t KU_RAMEFFECT_CUSTOMIMPULSE = 4;

		// BrnVehicleEffectsInputInterface.h:40
		const uint32_t KU_RAMEFFECT_UPIMPULSE = 8;

		// BrnVehicleEffectsInputInterface.h:41
		const uint32_t KU_RAMEFFECT_RIGHTIMPULSE = 16;

		// BrnVehicleEffectsInputInterface.h:42
		const uint32_t KU_RAMEFFECT_FORWARDIMPULSE = 32;

		// BrnVehicleEffectsInputInterface.h:44
		const uint32_t KU_RAMEFFECT_CUSTOMPOSITION = 256;

		// BrnVehicleEffectsInputInterface.h:45
		const uint32_t KU_RAMEFFECT_FRONT = 512;

		// BrnVehicleEffectsInputInterface.h:46
		const uint32_t KU_RAMEFFECT_REAR = 1024;

		// BrnVehicleEffectsInputInterface.h:48
		const uint32_t KU_RAMEFFECT_LEFT = 2048;

		// BrnVehicleEffectsInputInterface.h:49
		const uint32_t KU_RAMEFFECT_RIGHT = 4096;

		// BrnVehicleEffectsInputInterface.h:51
		const uint32_t KU_RAMEFFECT_CENTRE;

		// BrnVehicleEffectsInputInterface.h:55
		const uint32_t KU_RAMEFFECT_CLOCKWISE_SPIN = 530;

		// BrnVehicleEffectsInputInterface.h:56
		const uint32_t KU_RAMEFFECT_ANTICLOCKWISE_SPIN = 1042;

		// BrnVehicleEffectsInputInterface.h:57
		const uint32_t KU_RAMEFFECT_RIGHT_BARREL_ROLL = 4106;

		// BrnVehicleEffectsInputInterface.h:58
		const uint32_t KU_RAMEFFECT_LEFT_BARREL_ROLL = 2058;

		// BrnVehicleEffectsInputInterface.h:60
		const uint32_t KU_RAMEFFECT_FRONT_FLIP = 1034;

		// BrnVehicleEffectsInputInterface.h:61
		const uint32_t KU_RAMEFFECT_BACK_FLIP = 522;

		// BrnVehicleEffectsInputInterface.h:63
		const uint32_t KU_RAMEFFECT_FRONT_RIGHT_SPIN = 3082;

		// BrnVehicleEffectsInputInterface.h:64
		const uint32_t KU_RAMEFFECT_REAR_RIGHT_SPIN = 2570;

		// BrnVehicleEffectsInputInterface.h:65
		const uint32_t KU_RAMEFFECT_FRONT_LEFT_SPIN = 5130;

		// BrnVehicleEffectsInputInterface.h:66
		const uint32_t KU_RAMEFFECT_REAR_LEFT_SPIN = 4618;

	}

}

// BrnVehicleEffectsInputInterface.h:83
struct BrnPhysics::Vehicle::VehicleEffectsInputInterface {
	// BrnVehicleQueues.h:43
	typedef EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20> CreateAirRamEventQueue;

private:
	// BrnVehicleEffectsInputInterface.h:121
	VehicleEffectsInputInterface::CreateAirRamEventQueue mAirRamQueue;

	// Unknown accessibility
	// BrnVehicleQueues.h:44
	typedef EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10> CreateSpinEventQueue;

	// BrnVehicleEffectsInputInterface.h:122
	VehicleEffectsInputInterface::CreateSpinEventQueue mSpinQueue;

public:
	// BrnVehicleEffectsInputInterface.h:88
	void Append(const VehicleEffectsInputInterface *);

	// BrnVehicleEffectsInputInterface.h:91
	void Construct();

	// BrnVehicleEffectsInputInterface.h:94
	void Clear();

	// BrnVehicleEffectsInputInterface.h:97
	const VehicleEffectsInputInterface::CreateAirRamEventQueue * GetAirRamEventQueue() const;

	// BrnVehicleEffectsInputInterface.h:100
	const VehicleEffectsInputInterface::CreateSpinEventQueue * GetSpinEventQueue() const;

	// BrnVehicleEffectsInputInterface.h:111
	void CreateAirRam(VolumeInstanceId, uint32_t, float32_t, float32_t, Vector3, Vector3, float32_t);

	// BrnVehicleEffectsInputInterface.h:117
	int32_t CreateSpin(VolumeInstanceId, Vector3, float32_t);

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleEffectsInputInterface.h:33
		const float32_t KF_AIR_RAM_SCALE_FACTOR;

		// BrnVehicleEffectsInputInterface.h:34
		const float32_t KF_SLAM_MAGNITUDE;

		// BrnVehicleEffectsInputInterface.h:37
		const uint32_t KU_RAMEFFECT_WORLDSPACEIMPULSE = 1;

		// BrnVehicleEffectsInputInterface.h:38
		const uint32_t KU_RAMEFFECT_BODYSPACEIMPULSE = 2;

		// BrnVehicleEffectsInputInterface.h:39
		const uint32_t KU_RAMEFFECT_CUSTOMIMPULSE = 4;

		// BrnVehicleEffectsInputInterface.h:40
		const uint32_t KU_RAMEFFECT_UPIMPULSE = 8;

		// BrnVehicleEffectsInputInterface.h:41
		const uint32_t KU_RAMEFFECT_RIGHTIMPULSE = 16;

		// BrnVehicleEffectsInputInterface.h:42
		const uint32_t KU_RAMEFFECT_FORWARDIMPULSE = 32;

		// BrnVehicleEffectsInputInterface.h:44
		const uint32_t KU_RAMEFFECT_CUSTOMPOSITION = 256;

		// BrnVehicleEffectsInputInterface.h:45
		const uint32_t KU_RAMEFFECT_FRONT = 512;

		// BrnVehicleEffectsInputInterface.h:46
		const uint32_t KU_RAMEFFECT_REAR = 1024;

		// BrnVehicleEffectsInputInterface.h:48
		const uint32_t KU_RAMEFFECT_LEFT = 2048;

		// BrnVehicleEffectsInputInterface.h:49
		const uint32_t KU_RAMEFFECT_RIGHT = 4096;

		// BrnVehicleEffectsInputInterface.h:51
		const uint32_t KU_RAMEFFECT_CENTRE;

		// BrnVehicleEffectsInputInterface.h:55
		const uint32_t KU_RAMEFFECT_CLOCKWISE_SPIN = 530;

		// BrnVehicleEffectsInputInterface.h:56
		const uint32_t KU_RAMEFFECT_ANTICLOCKWISE_SPIN = 1042;

		// BrnVehicleEffectsInputInterface.h:57
		const uint32_t KU_RAMEFFECT_RIGHT_BARREL_ROLL = 4106;

		// BrnVehicleEffectsInputInterface.h:58
		const uint32_t KU_RAMEFFECT_LEFT_BARREL_ROLL = 2058;

		// BrnVehicleEffectsInputInterface.h:60
		const uint32_t KU_RAMEFFECT_FRONT_FLIP = 1034;

		// BrnVehicleEffectsInputInterface.h:61
		const uint32_t KU_RAMEFFECT_BACK_FLIP = 522;

		// BrnVehicleEffectsInputInterface.h:63
		const uint32_t KU_RAMEFFECT_FRONT_RIGHT_SPIN = 3082;

		// BrnVehicleEffectsInputInterface.h:64
		const uint32_t KU_RAMEFFECT_REAR_RIGHT_SPIN = 2570;

		// BrnVehicleEffectsInputInterface.h:65
		const uint32_t KU_RAMEFFECT_FRONT_LEFT_SPIN = 5130;

		// BrnVehicleEffectsInputInterface.h:66
		const uint32_t KU_RAMEFFECT_REAR_LEFT_SPIN = 4618;

	}

}

