// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnPenetrationSolver.h:32
		const int32_t KI_MAX_PENETRATION_BODIES = 29;

		// BrnPenetrationSolver.h:33
		const int32_t KI_MAX_PENETRATION_CONTACTS = 2016;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnPenetrationSolver.h:32
		const int32_t KI_MAX_PENETRATION_BODIES = 29;

		// BrnPenetrationSolver.h:33
		const int32_t KI_MAX_PENETRATION_CONTACTS = 2016;

	}

}

// BrnPenetrationSolver.h:48
struct BrnPhysics::Deformation::PenetrationContact {
	// BrnPenetrationSolver.h:50
	Vector3 mPointOnA;

	// BrnPenetrationSolver.h:51
	Vector3 mPointOnB;

	// BrnPenetrationSolver.h:52
	Vector3 mNormal;

	// BrnPenetrationSolver.h:53
	int32_t miIndexA;

	// BrnPenetrationSolver.h:54
	int32_t miIndexB;

}

// BrnPenetrationSolver.h:66
struct BrnPhysics::Deformation::PenetrationSolver : public IOBuffer {
private:
	// BrnPenetrationSolver.h:127
	Matrix44Affine[29] maObjectTransforms;

	// BrnPenetrationSolver.h:128
	VecFloat[29] mavfBodyWeighting;

	// BrnPenetrationSolver.h:130
	PenetrationContact[2016] maVehicleContacts;

	// BrnPenetrationSolver.h:131
	uint8_t[256] mau8PaddingForCacheLineZeroing;

	// BrnPenetrationSolver.h:132
	PenetrationContact[2016] maWorldContacts;

	// BrnPenetrationSolver.h:133
	uint8_t[256] mau8PaddingForCacheLineZeroing2;

	// BrnPenetrationSolver.h:135
	int32_t miNumVehicleContacts;

	// BrnPenetrationSolver.h:136
	int32_t miNumWorldContacts;

public:
	// BrnPenetrationSolver.h:68
	void Construct();

	// BrnPenetrationSolver.h:69
	void Destruct();

	// BrnPenetrationSolver.h:75
	void AddObject(int32_t, Matrix44Affine, VecFloat);

	// BrnPenetrationSolver.h:83
	void AddVehicleContact(Vector3, Vector3, Vector3, int32_t, int32_t);

	// BrnPenetrationSolver.h:91
	void AddWorldContact(Vector3, Vector3, Vector3, int32_t, int32_t);

	// BrnPenetrationSolver.h:94
	PenetrationContact * GetVehicleContacts();

	// BrnPenetrationSolver.h:98
	PenetrationContact * GetWorldContacts();

	// BrnPenetrationSolver.h:102
	int32_t GetNumVehicleContacts() const;

	// BrnPenetrationSolver.h:106
	int32_t GetNumWorldContacts() const;

	// BrnPenetrationSolver.h:111
	void SetNumVehicleContacts(int32_t);

	// BrnPenetrationSolver.h:116
	void SetNumWorldContacts(int32_t);

	// BrnPenetrationSolver.h:120
	void Solve();

	// BrnPenetrationSolver.h:124
	const rw::math::vpu::Matrix44Affine * GetUpdatedTransform(int32_t) const;

}

