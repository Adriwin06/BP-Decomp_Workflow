// BrnVehicleGraphicsSpec.h:52
struct BrnVehicle::ShatteredGlassPart {
	// BrnVehicleGraphicsSpec.h:56
	Model * mpModel;

	// BrnVehicleGraphicsSpec.h:57
	uint32_t muBodyPartIndex;

	// BrnVehicleGraphicsSpec.h:58
	uint32_t muBodyPartType;

public:
	// BrnVehicleGraphicsSpec.h:54
	void Construct();

}

// BrnVehicleGraphicsSpec.h:62
struct BrnVehicle::GraphicsSpec {
	// BrnVehicleGraphicsSpec.h:71
	uint32_t muVersion;

	// BrnVehicleGraphicsSpec.h:73
	uint32_t muPartsCount;

	// BrnVehicleGraphicsSpec.h:74
	Model ** mppPartModels;

	// BrnVehicleGraphicsSpec.h:76
	uint32_t muShatteredGlassPartsCount;

	// BrnVehicleGraphicsSpec.h:77
	ShatteredGlassPart * mpShatteredGlassParts;

	// BrnVehicleGraphicsSpec.h:79
	Matrix44Affine * mpPartLocators;

	// BrnVehicleGraphicsSpec.h:80
	uint8_t * mpPartVolumeIDs;

	// BrnVehicleGraphicsSpec.h:82
	uint8_t * mpNumRigidBodiesForPart;

	// BrnVehicleGraphicsSpec.h:83
	Matrix44Affine ** mppRigidBodyToSkinMatrixTransforms;

public:
	// BrnVehicleGraphicsSpec.h:66
	void Construct();

}

// BrnVehicleGraphicsSpec.h:52
struct BrnVehicle::ShatteredGlassPart {
	// BrnVehicleGraphicsSpec.h:56
	CgsGraphics::Model * mpModel;

	// BrnVehicleGraphicsSpec.h:57
	uint32_t muBodyPartIndex;

	// BrnVehicleGraphicsSpec.h:58
	uint32_t muBodyPartType;

public:
	// BrnVehicleGraphicsSpec.h:54
	void Construct();

}

// BrnVehicleGraphicsSpec.h:62
struct BrnVehicle::GraphicsSpec {
	// BrnVehicleGraphicsSpec.h:71
	uint32_t muVersion;

	// BrnVehicleGraphicsSpec.h:73
	uint32_t muPartsCount;

	// BrnVehicleGraphicsSpec.h:74
	CgsGraphics::Model ** mppPartModels;

	// BrnVehicleGraphicsSpec.h:76
	uint32_t muShatteredGlassPartsCount;

	// BrnVehicleGraphicsSpec.h:77
	ShatteredGlassPart * mpShatteredGlassParts;

	// BrnVehicleGraphicsSpec.h:79
	Matrix44Affine * mpPartLocators;

	// BrnVehicleGraphicsSpec.h:80
	uint8_t * mpPartVolumeIDs;

	// BrnVehicleGraphicsSpec.h:82
	uint8_t * mpNumRigidBodiesForPart;

	// BrnVehicleGraphicsSpec.h:83
	Matrix44Affine ** mppRigidBodyToSkinMatrixTransforms;

public:
	// BrnVehicleGraphicsSpec.h:66
	void Construct();

}

