// BrnVehiclePhysicsSpec.h:48
struct BrnVehicle::PhysicsSpec {
	// BrnVehiclePhysicsSpec.h:56
	uint32_t muVersion;

	// BrnVehiclePhysicsSpec.h:58
	ModelData * mpSkinPhysics;

	// BrnVehiclePhysicsSpec.h:60
	uint32_t muPartsCount;

	// BrnVehiclePhysicsSpec.h:61
	ModelData ** mppPartPhysics;

public:
	// BrnVehiclePhysicsSpec.h:51
	void Construct();

}

