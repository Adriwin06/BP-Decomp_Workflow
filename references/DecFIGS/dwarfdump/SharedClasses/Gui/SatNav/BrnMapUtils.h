// BrnMapUtils.h:264
extern const rw::math::vpu::Vector4 smv4WorldRect;

// BrnMapUtils.h:266
extern const rw::math::vpu::Vector4 smv4NormalizedRect;

// BrnMapUtils.h:267
extern const rw::math::vpu::Vector4 smv4DeviceRect;

// BrnMapUtils.h:272
extern const rw::math::vpu::Matrix33 smm33WorldSpace;

// BrnMapUtils.h:274
extern const rw::math::vpu::Matrix33 smm33NormalisedSpace;

// BrnMapUtils.h:275
extern const rw::math::vpu::Matrix33 smm33DeviceSpace;

// BrnMapUtils.h:278
extern const rw::math::vpu::Vector4 smv4SatNavViewRectHighDef;

// BrnMapUtils.h:279
extern const rw::math::vpu::Vector4 smv4SatNavViewRectStandardDef;

// BrnMapUtils.h:280
extern Vector4 smv4SatNavViewRect;

// BrnMapUtils.h:281
extern const rw::math::vpu::Vector4 smv4MainMapViewRect;

// BrnMapUtils.h:282
extern const rw::math::vpu::Vector4 smv4EventMapViewRect;

// BrnMapUtils.h:285
extern const rw::math::vpu::Vector4 smv4HighZoomWorldRect;

// BrnMapUtils.h:286
extern const rw::math::vpu::Vector4 smv4MediumZoomWorldRect;

// BrnMapUtils.h:287
extern const rw::math::vpu::Vector4 smv4LowZoomWorldRect;

// BrnMapUtils.h:290
extern Vector4 smv4ZoomedWorldRect;

// BrnMapUtils.h:293
extern Matrix33 smm33ZoomedWorldTransform;

// BrnMapUtils.h:294
extern Matrix33 smm33ZoomedViewportTransform;

// BrnMapUtils.h:295
extern Matrix33 smm33ZoomedViewportScreenTransform;

// BrnMapUtils.h:297
extern const float32_t KF_MIN_ZOOM_FACTOR;

// BrnMapUtils.h:311
extern const float32_t KF_ZOOM_SAFEAREA;

// BrnMapUtils.h:76
struct BrnGui::MapTransform {
private:
	// BrnMapUtils.h:264
	extern const rw::math::vpu::Vector4 smv4WorldRect;

	// BrnMapUtils.h:266
	extern const rw::math::vpu::Vector4 smv4NormalizedRect;

	// BrnMapUtils.h:267
	extern const rw::math::vpu::Vector4 smv4DeviceRect;

	// BrnMapUtils.h:272
	extern const rw::math::vpu::Matrix33 smm33WorldSpace;

	// BrnMapUtils.h:274
	extern const rw::math::vpu::Matrix33 smm33NormalisedSpace;

	// BrnMapUtils.h:275
	extern const rw::math::vpu::Matrix33 smm33DeviceSpace;

	// BrnMapUtils.h:278
	extern const rw::math::vpu::Vector4 smv4SatNavViewRectHighDef;

	// BrnMapUtils.h:279
	extern const rw::math::vpu::Vector4 smv4SatNavViewRectStandardDef;

	// BrnMapUtils.h:280
	extern Vector4 smv4SatNavViewRect;

	// BrnMapUtils.h:281
	extern const rw::math::vpu::Vector4 smv4MainMapViewRect;

	// BrnMapUtils.h:282
	extern const rw::math::vpu::Vector4 smv4EventMapViewRect;

	// BrnMapUtils.h:285
	extern const rw::math::vpu::Vector4 smv4HighZoomWorldRect;

	// BrnMapUtils.h:286
	extern const rw::math::vpu::Vector4 smv4MediumZoomWorldRect;

	// BrnMapUtils.h:287
	extern const rw::math::vpu::Vector4 smv4LowZoomWorldRect;

	// BrnMapUtils.h:290
	extern Vector4 smv4ZoomedWorldRect;

	// BrnMapUtils.h:293
	extern Matrix33 smm33ZoomedWorldTransform;

	// BrnMapUtils.h:294
	extern Matrix33 smm33ZoomedViewportTransform;

	// BrnMapUtils.h:295
	extern Matrix33 smm33ZoomedViewportScreenTransform;

	// BrnMapUtils.h:297
	extern const float32_t KF_MIN_ZOOM_FACTOR;

	// BrnMapUtils.h:311
	extern const float32_t KF_ZOOM_SAFEAREA;

public:
	// BrnMapUtils.h:81
	Vector2 WorldToNormalised(Vector3);

	// BrnMapUtils.h:87
	Vector2 WorldToDevice(Vector3, bool);

	// BrnMapUtils.h:92
	Vector3 DeviceToWorld(Vector2);

	// BrnMapUtils.h:99
	Vector2 Transform(Vector2, Vector4, Vector4);

	// BrnMapUtils.h:106
	Vector2 Transform(Vector2, Matrix33, Matrix33);

	// BrnMapUtils.h:112
	// Declaration
	Vector2 Transform(Vector2, Matrix33) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMapUtils.h:415
		using namespace rw::math;

	}

	// BrnMapUtils.h:118
	Matrix33 MakeTransform(Matrix33, Matrix33);

	// BrnMapUtils.h:123
	// Declaration
	Matrix33 MakeCoordSpaceFromRect(Vector4) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMapUtils.h:458
		using namespace rw::math;

	}

	// BrnMapUtils.h:130
	Matrix33 MakeCoordSpaceFromPoints(Vector2, Vector2, Vector2);

	// BrnMapUtils.h:135
	Vector2 Flatten(Vector3);

	// BrnMapUtils.h:140
	Vector3 Unflatten(Vector2);

	// BrnMapUtils.h:147
	void SetZoomedWorldRect(Vector2, Vector2, Vector2);

	// BrnMapUtils.h:152
	void SetZoomedViewportRect(Vector4);

	// BrnMapUtils.h:159
	bool IsWithinViewport(Vector3, float32_t, float32_t);

	// BrnMapUtils.h:166
	float32_t CalculateZoomFactor(Vector2, Vector2, Vector2, float32_t);

	// BrnMapUtils.h:171
	void SetIsHighDef(bool);

	// BrnMapUtils.h:176
	void SetSatNavRect(Vector4);

	// BrnMapUtils.h:180
	const rw::math::vpu::Vector4 & GetZoomedWorldRect();

	// BrnMapUtils.h:187
	const rw::math::vpu::Vector4 & GetWorldRect();

	// BrnMapUtils.h:193
	const rw::math::vpu::Vector4 & GetNormalisedRect();

	// BrnMapUtils.h:199
	const rw::math::vpu::Vector4 & GetDeviceRect();

	// BrnMapUtils.h:206
	const rw::math::vpu::Matrix33 & GetWorldSpace();

	// BrnMapUtils.h:212
	const rw::math::vpu::Matrix33 & GetNormalisedSpace();

	// BrnMapUtils.h:218
	const rw::math::vpu::Matrix33 & GetDeviceSpace();

	// BrnMapUtils.h:224
	const rw::math::vpu::Vector4 & GetSatNavViewRect();

	// BrnMapUtils.h:230
	const rw::math::vpu::Matrix33 & GetZoomedWorldSpace();

	// BrnMapUtils.h:236
	const rw::math::vpu::Matrix33 & GetZoomedViewportScreen();

	// BrnMapUtils.h:242
	const rw::math::vpu::Matrix33 & GetZoomedViewport();

	// BrnMapUtils.h:248
	const rw::math::vpu::Vector4 & GetMainMapViewRect();

private:
	// BrnMapUtils.h:306
	Matrix33 MakeCoordSpaceFromAxes(Vector2, Vector2, Vector2);

	// BrnMapUtils.h:314
	void MapTransform();

}

