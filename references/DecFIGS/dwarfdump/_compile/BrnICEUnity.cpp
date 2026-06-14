struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

struct BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>;

void BrnDirector::Camera::Camera::GetDepthOfField() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::DepthOfField::SetParams(float32_t  lfFocusStartDistanceMeters, float32_t  lfPerfectFocusStartDistanceMeters, float32_t  lfPerfectFocusEndDistanceMeters, float32_t  lfFocusEndDistanceMeters, float32_t  lfBlurriness) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::SetFOV(float32_t  lfFOV) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::NoiseBase(int32_t  liIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::StrLen(const char *  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bStringHash(const char *  text) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:181
		uint32_t h;

	}
}

void ICE::GetGroundElevation(const Vector3 *  position) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::GetParameter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::StringPrintf(char *  buf, const char *  lpFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMath.cpp:147
		va_list lArgList;

	}
}

void ICE::bToUpper(char  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bStringHashUpper(const char *  text) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:157
		uint32_t h;

		bToUpper(/* parameters */);
	}
}

void ICE::Point::Update(float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Abs(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SpringDamper(Cubic1D *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEPoint.cpp:345
		float32_t error;

		// ICEPoint.cpp:346
		float32_t spring_val;

		// ICEPoint.cpp:347
		float32_t damper_val;

		// ICEPoint.cpp:348
		float32_t vDelta;

	}
	ICEMath::Abs(/* parameters */);
}

void ICE::Point::SpringDamper(Cubic2D *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SpringDamper(Cubic3D *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::PointVelocity(Point *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::PointVelocityWrap(Point *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::PointSpringDamper(Point *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic1D::SetVal(float32_t  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetYScale(float32_t  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetVal(/* parameters */);
}

void ICE::Cubic1D::SetdVal(float32_t  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdYScale(float32_t  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdVal(/* parameters */);
}

void ICE::Cubic1D::SetValDesired(float32_t  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetYScaleDesired(float32_t  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetValDesired(/* parameters */);
}

void ICE::Cubic1D::SetdValDesired(float32_t  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdYScaleDesired(float32_t  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdValDesired(/* parameters */);
}

void ICE::Point::SetDuration(float32_t  seconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetBiasZ(float32_t  ratio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::~Point() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::~Point(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEManager::IsPlaybackDataSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICEPlayingMovie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICEResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICEResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEResourceType.cpp:144
		ICE::ICETakeData * lpData;

	}
}

extern CameraSpaceHandler & operator=(const const ICE::CameraSpaceHandler &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Matrix44ToICEMatrix(const rw::math::vpu::Matrix44 &  lInMatrix, Matrix4 *  lpOutMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetX(/* parameters */);
}

void ICE::CameraSpaceHandler::GetCarToWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Cross(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
	}
}

void ICE::ICEMath::eMakeOrientation(Matrix4 *  lMatrix, const Vector3 *  lvForward) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMath.cpp:42
		Vector3 lvUp;

		// ICEMath.cpp:43
		Vector3 lvRight;

		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetX(/* parameters */);
		rw::math::vpu::GetVector3_YAxis(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
	}
}

extern void Poly() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const const VecFloatRef<VectorAxisX> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(VecFloatRef<VectorAxisX> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:262
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const const VecFloatRef<VectorAxisY> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(VecFloatRef<VectorAxisY> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:269
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const const VecFloatRef<VectorAxisZ> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(VecFloatRef<VectorAxisZ> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:275
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void ICE::Cubic2D::SetdValDesired(float32_t  vx, float32_t  vy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void ICE::Cubic3D::SetdValDesired(float32_t  vx, float32_t  vy, float32_t  vz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdPosDesiredX(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdValDesired(/* parameters */);
}

void ICE::Point::SetdPosDesiredY(float32_t  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdValDesired(/* parameters */);
}

void ICE::Point::SetdPosDesiredZ(float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdValDesired(/* parameters */);
}

void ICE::Point::SetdPosDesired(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdPosDesired(const Vector3 *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdRotDesiredX(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdValDesired(/* parameters */);
}

void ICE::Point::SetdRotDesiredY(float32_t  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdValDesired(/* parameters */);
}

void ICE::Point::SetdRotDesiredZ(float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdValDesired(/* parameters */);
}

void ICE::Point::SetdRotDesired(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdRotDesired(const Vector3 *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdScaleDesired(float32_t  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdValDesired(/* parameters */);
}

void ICE::ICEMath::IntToFloat(int32_t  liInParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEParameter::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic2D::SetVal(float32_t  vx, float32_t  vy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic3D::SetVal(float32_t  vx, float32_t  vy, float32_t  vz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetPosX(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetVal(/* parameters */);
}

void ICE::Point::SetPosY(float32_t  y, bool  ratio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEPoint.cpp:555
		const float32_t tvHeight;

	}
	Cubic1D::SetVal(/* parameters */);
}

void ICE::Point::SetPosZ(float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetVal(/* parameters */);
}

void ICE::Point::SetPos(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetPos(const Vector3 *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetRotX(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetVal(/* parameters */);
}

void ICE::Point::SetRotY(float32_t  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetVal(/* parameters */);
}

void ICE::Point::SetRotZ(float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetVal(/* parameters */);
}

void ICE::Point::SetRot(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetRot(const Vector3 *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetScale(float32_t  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetVal(/* parameters */);
}

void ICE::Cubic2D::SetdVal(float32_t  vx, float32_t  vy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic3D::SetdVal(float32_t  vx, float32_t  vy, float32_t  vz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdPosX(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdVal(/* parameters */);
}

void ICE::Point::SetdPosY(float32_t  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdVal(/* parameters */);
}

void ICE::Point::SetdPosZ(float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdVal(/* parameters */);
}

void ICE::Point::SetdPos(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdPos(const Vector3 *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdRotX(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdVal(/* parameters */);
}

void ICE::Point::SetdRotY(float32_t  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdVal(/* parameters */);
}

void ICE::Point::SetdRotZ(float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdVal(/* parameters */);
}

void ICE::Point::SetdRot(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdRot(const Vector3 *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetdScale(float32_t  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetdVal(/* parameters */);
}

void ICE::Cubic2D::SetValDesired(float32_t  vx, float32_t  vy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic3D::SetValDesired(float32_t  vx, float32_t  vy, float32_t  vz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetPosDesiredX(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetValDesired(/* parameters */);
}

void ICE::Point::SetPosDesiredY(float32_t  y, bool  ratio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEPoint.cpp:614
		const float32_t tvHeight;

	}
	Cubic1D::SetValDesired(/* parameters */);
}

void ICE::Point::SetPosDesiredZ(float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetValDesired(/* parameters */);
}

void ICE::Point::SetPosDesired(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetPosDesired(const Vector3 *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetRotDesiredX(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetValDesired(/* parameters */);
}

void ICE::Point::SetRotDesiredY(float32_t  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetValDesired(/* parameters */);
}

void ICE::Point::SetRotDesiredZ(float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetValDesired(/* parameters */);
}

void ICE::Point::SetRotDesired(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetRotDesired(const Vector3 *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SetScaleDesired(float32_t  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::SetValDesired(/* parameters */);
}

void ICE::bList::GetHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bNode::GetNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic1D::Snap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::Snap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Cubic1D::Snap(/* parameters */);
	Cubic1D::Snap(/* parameters */);
	Cubic1D::Snap(/* parameters */);
	Cubic1D::Snap(/* parameters */);
	Cubic1D::Snap(/* parameters */);
	Cubic1D::Snap(/* parameters */);
	Cubic1D::Snap(/* parameters */);
	Cubic1D::Snap(/* parameters */);
}

void ICE::bList::EndOfList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bTList<ICE::ICETakeData>::GetNode(int32_t  ordinal_number) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bTList<ICE::ICETakeData>::EndOfList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic2D::SetDuration(float32_t  tx, float32_t  ty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic1D::SetDuration(float32_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic3D::SetDuration(float32_t  tx, float32_t  ty, float32_t  tz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::GetSignedInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::GetUnsignedInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::FloatToInt(float32_t  lfInParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEElementDescription::IsFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Clamp(float32_t  a, float32_t  min, float32_t  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
}

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void ICE::bTList<ICE::ICETakeData>::GetHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bTNode<ICE::ICETakeData>::GetNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::SetSimTimeScale(float  lfSimTimeScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::SetBloomThresholdModifier(float32_t  lfBloomThreshold) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::SetBloomLuminanceModifier(float32_t  lfBloomLuminance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::FloatToUInt(float32_t  lfInParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::SetFadeColor(uint32_t  luColor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SplineSeek(Cubic1D *  p, float32_t  time, float32_t  fDClamp, float32_t  fDDClamp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEPoint.cpp:290
		float32_t interval;

		// ICEPoint.cpp:299
		float32_t t;

		Cubic1D::Snap(/* parameters */);
	}
}

void ICE::Point::SplineSeek(Cubic3D *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::SplineSeek(Cubic2D *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Clamp(int32_t  a, int32_t  min, int32_t  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<int32_t>(const const int32_t &  a, const const int32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<int32_t>(const const int32_t &  a, const const int32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Abs(int32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Vector3ToVector4(const rw::math::vpu::Vector3  lInVec3, const Vector4 &  lOutVec4, float32_t  lfW) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::ICEMatrixToMatrix44(Matrix4 *  lpInMatrix, const Matrix44 &  lOutMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMath.cpp:67
		Vector4 lTemp;

		Vector3ToVector4(/* parameters */);
		Vector3ToVector4(/* parameters */);
		Vector3ToVector4(/* parameters */);
		rw::math::vpu::Matrix44::SetX(/* parameters */);
		Vector3ToVector4(/* parameters */);
	}
}

void ICE::ICEValue::ICEValue(int32_t  liIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::Set(int32_t  liIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::ICEValue(uint32_t  luIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::ICEValue(float32_t  lfIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::Set(float32_t  lfIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::GetCurrentInterval(int32_t  liChannelNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::GetCurrentInterval() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::IsHardCut(int32_t  liChannelNumber, int32_t  liWhichEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::IsHardCut(int32_t  liWhichEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Copy(Vector3 *  dst, const Vector3 *  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETakeData::IsAllocated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::FlushUndo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bNode::AddBefore(bNode *  insert_point) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.hpp:141
		bNode * new_prev;

		// ICEMemory.hpp:142
		bNode * new_next;

	}
}

void ICE::bList::AddTail(bNode *  node) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Max(float32_t  a, float32_t  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Min(float32_t  a, float32_t  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
	ICE::ICEValue::ICEValue(/* parameters */);
}

void ICE::ICEChannel::HasData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::GetNumIntervals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::GetNumKeys() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETakeData::GetNumIntervals(int32_t  channel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Max(int32_t  a, int32_t  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETakeData::GetNumKeys(int32_t  channel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEElementDescription::GetDataSize(int32_t  liNumData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETakeData::GetVariableDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETakeData::GetVariableData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::MemCmp(const void *  dst, const void *  src, uint32_t  numbytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bTList<ICE::ICETakeData>::Remove(bNode *  node) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bList::Remove(bNode *  node) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bNode::Remove() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.hpp:119
		bNode * next_node;

		// ICEMemory.hpp:120
		bNode * prev_node;

	}
}

void ICE::bList::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic1D::GetVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::IsElementValid(int32_t  liElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::GetBool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::VehicleRef::SetToPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETimer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICEResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ICEResourceType.cpp:64
	ResourceDescriptor & lDescriptor;

	{
		// ICEResourceType.cpp:58
		const ICETakeData * lpTakeData;

		// ICEResourceType.cpp:59
		uint32_t luSizeInBytes;

		// ICEResourceType.cpp:64
		ResourceDescriptor lDescriptor;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void ICE::Point::HasArrived() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic3D::HasArrived() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic1D::HasArrived() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::CallBack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::PointSpline(Point *  p, float32_t  time) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HasArrived(/* parameters */);
	Cubic3D::HasArrived(/* parameters */);
	CallBack(/* parameters */);
}

void ICE::ICEMath::Floor(float32_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMath.hpp:271
		float32_t t;

	}
}

void ICE::ICEMath::Truncate(float32_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::NoiseInterpolated(float32_t  liIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECamera.cpp:493
		int32_t liA;

		// ICECamera.cpp:494
		float32_t lfS;

		// ICECamera.cpp:495
		float32_t lfT;

		// ICECamera.cpp:496
		float32_t lfU;

		ICEMath::Floor(/* parameters */);
	}
	ICEMath::FloatToInt(/* parameters */);
}

void ICE::Noise(float32_t  liIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECamera.cpp:514
		float32_t lfTotal;

		// ICECamera.cpp:515
		float32_t lfFrequency;

		// ICECamera.cpp:516
		float32_t lfAmplitude;

		{
			// ICECamera.cpp:518
			int32_t liLoop;

		}
	}
}

void ICE::ICEMath::Round(float32_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMath.hpp:273
		float32_t floor;

	}
}

void ICE::InitICEDescriptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEData.cpp:38
		int32_t i;

	}
	{
		// ICEData.cpp:45
		int32_t liLoop;

		{
			// ICEData.cpp:48
			int32_t liChannelNumber;

			// ICEData.cpp:49
			const ICEChannelDescription & lDescription;

		}
	}
}

void ICE::ICEMath::RoundFloatToInt(float32_t  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMath.hpp:274
		float32_t frac;

		// ICEMath.hpp:274
		int32_t ret;

	}
}

void ICE::ICEParameter::SetValue(float32_t  lfParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void rw::math::fpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:155
		float test;

		// scalar.h:156
		float r;

	}
}

void ICE::bList::GetTail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bNode::GetPrev() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::bList::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEParameter::ICEParameter(float32_t  lfParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEParameter::operator<=(const const ICEParameter &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEParameter::operator<(const const ICEParameter &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEParameter::operator>=(const const ICEParameter &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEParameter::operator=(const const ICEParameter &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::operator=(const const ICEValue &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Dot(const Vector3 *  v1, const Vector3 *  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:146
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void ICE::ICEMath::ScaleAdd(Vector3 *  dst, const Vector3 *  v1, const Vector3 *  v2, float32_t  scale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Add(Vector3 *  dst, const Vector3 *  v1, const Vector3 *  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Scale(Vector3 *  dst, const Vector3 *  src, float32_t  scale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:41
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:42
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vector3_operation_inline.h:42
				VectorIntrinsicUnion u;

			}
		}
	}
}

void ICE::ICEMath::Normalize(Vector3 *  dst, const Vector3 *  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v, const Vector3 &  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void ICE::ICETakeData::HasChannelData(int32_t  channel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::MarkChannelFromSubTake(int32_t  liChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::IsChannelFromSubTake(int32_t  liChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::SetParameterData(ICEParameter *  lpParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::SetNumIntervals(int16_t  liNumIntervals) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::SetKeyData(uint16_t *  lpKeyIndices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::SetNumKeys(int16_t  li16NumKeys) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::GetValue(int32_t  liElementNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::GetIntervalStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::GetIntervalStart(uint16_t  lu16CurrentInterval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETakeData::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::operator=(float32_t  lfIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEManager::IsCameraPaused() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEManager::IsEditorOff() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETimer::GetTimestep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsZero(float  value, float  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICECameraMover::SetTake(ICETake *  lpTake) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::VehicleRef::Set(BrnDirector::VehicleRef::EType  leType, EActiveRaceCarIndex  leRaceCarIndex, uint32_t  luOrdinalDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::VehicleRef::SetToRaceCar(EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::VehicleRef::SetToRaceCarNearestPlayer(uint32_t  luOrdinalDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICETake() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::ICEValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic1D::Cubic1D(short int  type, float32_t  dur) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::GetElementData(int32_t  liChannelNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const float32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::GetNumIntervals(int32_t  liChannelNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::GetParameterData(int32_t  liChannelNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::GetParameterData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEParameter::GetPackedPtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint16_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETake::GetKeyData(int32_t  liChannelNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEChannel::GetKeyData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const int32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICEResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEResourceType.cpp:127
		ICE::ICETakeData * lpData;

	}
}

void ICE::Cubic1D::GetddVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::ConvertLensLengthToFovAngle(float32_t  f_lens_mm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::ATan(float32_t  x, float32_t  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ICEMath.hpp:463
	Angle lReturnTemp;

	{
		// ICEMath.hpp:463
		Angle lReturnTemp;

	}
}

void ICE::Angle::Angle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::ATan2(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// trig_operation_inline.h:60
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic zeroVec;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic a_signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bNeg;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bZero;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic res1;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bRecip;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic res2;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic b_signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic newRes;

			{
				// trig_operation_inline.h:61
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// trig_operation_inline.h:61
				VectorIntrinsicUnion::VectorIntrinsic vOne;

			}
		}
	}
}

void std::atanf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// atanf4.h:25
		float[4] bias;

		// atanf4.h:26
		float[4] x2;

		// atanf4.h:26
		float[4] x3;

		// atanf4.h:26
		float[4] x4;

		// atanf4.h:26
		float[4] x8;

		// atanf4.h:26
		float[4] x9;

		// atanf4.h:27
		float[4] hi;

		// atanf4.h:27
		float[4] lo;

		// atanf4.h:28
		float[4] result;

		// atanf4.h:29
		float[4] inv_x;

		// atanf4.h:30
		unsigned int[4] sign;

		// atanf4.h:31
		unsigned int[4] select;

		// atanf4.h:32
		float[4] xabs;

		// atanf4.h:33
		float[4] vzero;

	}
}

void std::recipf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// recipf4.h:15
		float[4] y0;

	}
}

void ICE::Angle::SetFromVecFloat(const VecFloat  lVecFloatIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMath.hpp:103
		float32_t lfTemp;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1565
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1566
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1566
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator<(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:638
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:640
		bool ret;

		{
			// vec_float_operation_inline.h:639
			VectorIntrinsicUnion u;

		}
	}
}

void ICE::ICEMath::Angles::AngToDeg(Angle  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Angle::ConvertToFloatRad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Angles::RadToDeg(float32_t  radians) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Angles::RevToAng(float32_t  revolutions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Angles::RevToRad(float32_t  lfRev) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Angle::Angle(float32_t  lfInParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Sin(Angle  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Sin(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sinf4.h:14
		float[4] xl;

		// sinf4.h:14
		float[4] xl2;

		// sinf4.h:14
		float[4] xl3;

		// sinf4.h:14
		float[4] res;

		// sinf4.h:15
		int[4] q;

		// sinf4.h:30
		int[4] offset;

		// sinf4.h:34
		float[4] qf;

		// sinf4.h:35
		float[4] p1;

		// sinf4.h:49
		float[4] ct1;

		// sinf4.h:50
		float[4] st1;

		// sinf4.h:52
		float[4] ct2;

		// sinf4.h:53
		float[4] st2;

		// sinf4.h:55
		float[4] cx;

		// sinf4.h:56
		float[4] sx;

		// sinf4.h:61
		unsigned int[4] mask1;

		// sinf4.h:68
		unsigned int[4] mask2;

	}
}

void ICE::ICEMath::Cos(Angle  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Cos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cosf4.h:14
		float[4] xl;

		// cosf4.h:14
		float[4] xl2;

		// cosf4.h:14
		float[4] xl3;

		// cosf4.h:14
		float[4] res;

		// cosf4.h:15
		int[4] q;

		// cosf4.h:30
		int[4] offset;

		// cosf4.h:34
		float[4] qf;

		// cosf4.h:35
		float[4] p1;

		// cosf4.h:49
		float[4] ct1;

		// cosf4.h:50
		float[4] st1;

		// cosf4.h:52
		float[4] ct2;

		// cosf4.h:53
		float[4] st2;

		// cosf4.h:55
		float[4] cx;

		// cosf4.h:56
		float[4] sx;

		// cosf4.h:61
		unsigned int[4] mask1;

		// cosf4.h:68
		unsigned int[4] mask2;

	}
}

void ICE::ICEMath::Identity(Matrix4 *  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::RotateZ(Matrix4 *  dst, const Matrix4 *  src, Angle  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::RotateAroundZAxis(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:737
		VecFloat s;

		// matrix44affine_operation_inline.h:737
		VecFloat c;

	}
}

void rw::math::vpu::SinCos(const VecFloat  a, const VecFloat &  s_out, const VecFloat &  c_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sincosf4(float[4]  x, float *[4]  s, float *[4]  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sincosf4.h:14
		float[4] xl;

		// sincosf4.h:14
		float[4] xl2;

		// sincosf4.h:14
		float[4] xl3;

		// sincosf4.h:15
		int[4] q;

		// sincosf4.h:16
		int[4] offsetSin;

		// sincosf4.h:16
		int[4] offsetCos;

		// sincosf4.h:37
		float[4] qf;

		// sincosf4.h:38
		float[4] p1;

		// sincosf4.h:52
		float[4] ct1;

		// sincosf4.h:53
		float[4] st1;

		// sincosf4.h:55
		float[4] ct2;

		// sincosf4.h:56
		float[4] st2;

		// sincosf4.h:58
		float[4] cx;

		// sincosf4.h:59
		float[4] sx;

		// sincosf4.h:64
		unsigned int[4] sinMask;

		// sincosf4.h:65
		unsigned int[4] cosMask;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::RotateY(Matrix4 *  dst, const Matrix4 *  src, Angle  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::RotateAroundYAxis(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:714
		VecFloat s;

		// matrix44affine_operation_inline.h:714
		VecFloat c;

	}
}

void ICE::ICEMath::RotateX(Matrix4 *  dst, const Matrix4 *  src, Angle  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::RotateAroundXAxis(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:692
		VecFloat s;

		// matrix44affine_operation_inline.h:692
		VecFloat c;

	}
}

void ICE::Point::BuildMatrix(Matrix4 *  pMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEMath::Identity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	ICEMath::Angles::RevToAng(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetElem(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44Affine::SetElem(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetElem(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ICEMath::RotateZ(/* parameters */);
	Angle::ConvertToFloatRad(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::RotateAroundZAxis(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	ICEMath::Angles::RevToAng(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ICEMath::RotateY(/* parameters */);
	Angle::ConvertToFloatRad(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::RotateAroundYAxis(/* parameters */);
	vec_nmsub(/* parameters */);
	ICEMath::Angles::RevToAng(/* parameters */);
	vec_add(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_add(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ICEMath::RotateX(/* parameters */);
	Angle::ConvertToFloatRad(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::RotateAroundXAxis(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetElem(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetElem(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::SetComponent(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetElem(/* parameters */);
}

void ICE::ICEMath::FixToFloat(Angle  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Angles::AngToFloat(Angle  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Angle::operator short unsigned int() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Sqrt(float32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Sqrt(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:186
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:187
			const VectorIntrinsicUnion::VectorIntrinsic zero;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

				{
					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
	}
}

void ICE::Cubic3D::Cubic3D(short int  type, float32_t  dur) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::Point() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Point::Point(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICE::Cubic3D::Cubic3D(/* parameters */);
	ICE::Cubic3D::Cubic3D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
}

void ICE::ICEMath::Sub(Vector3 *  dst, const Vector3 *  v1, const Vector3 *  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::Length(const Vector3 *  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:160
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:161
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:161
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void ICE::ICEMath::Cross(Vector3 *  dst, const Vector3 *  v1, const Vector3 *  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:686
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:687
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void BrnDirector::Camera::Camera::SetTransform(const rw::math::vpu::Matrix44Affine &  lrTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraState::SetFlag(BrnDirector::Camera::CameraState::EFlag  leFlag, bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::SetBitToBool(uint32_t  luIndex, bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetMatrix44Affine_Identity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::GetCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::IsAllocated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::operator[](BehaviourHelperIndex  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::BehaviourHelperIndex::operator std::int32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<28u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::BehaviourManager::BehaviourHelper::GetCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(const rw::math::vpu::Matrix44Affine &  in) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:204
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// matrix44affine_operation_platform_inline.h:206
		VectorIntrinsicUnion::VectorIntrinsic negatePos;

		// matrix44affine_operation_platform_inline.h:208
		VectorIntrinsicUnion::VectorIntrinsic[4] tempT;

		// matrix44affine_operation_platform_inline.h:214
		VectorIntrinsicUnion::VectorIntrinsic[4] transposedTransform;

		// matrix44affine_operation_platform_inline.h:219
		VectorIntrinsicUnion::VectorIntrinsic Z;

		// matrix44affine_operation_platform_inline.h:220
		VectorIntrinsicUnion::VectorIntrinsic Y;

		// matrix44affine_operation_platform_inline.h:221
		VectorIntrinsicUnion::VectorIntrinsic X;

	}
}

void rw::math::vpu::TransformPoint(const rw::math::vpu::Vector3  pt, const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:50
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void ICE::ICECameraAnchor::GetSpace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEMath::DistBetween(const Vector3 *  v1, const Vector3 *  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMath.hpp:537
		Vector3 lvResult;

	}
}

void ICE::ICETimer::Update(const TimerStatusInterface *  lpTimerInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::GetGameTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEManager::IsEditorOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetRawResource(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:114
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:115
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:116
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetRawResourceDescriptor(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:123
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:124
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:125
		CgsDev::StrStream lStrStream;

	}
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::DirectorResourceManager::GetIceResourceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEPointers::Construct(ICEFileHandler *  lpICEFileHandler, ActionQueue *  lpAcionQueue, ICEMemory *  lpICEMemory, ICE::ICECameraAnchor *  lpICECameraAnchor, ICE::ICETimer *  lpICETimer, const ICE::IResourceManager *  lpResourceManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KI_DEPTH_OF_FIELD_MAX_FALLOFF_DISTANCE = [66, 72, 0, 0];

::::KI_DEPTH_OF_FIELD_MIN_FALLOFF_DISTANCE = [58, 131, 18, 111];

::::ICE_SMALL_FLOAT = [53, 134, 55, 189];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::cameradefaults::ImpactShakeDecayRate = -7687775437294225719;

Attrib::Hash::cameradefaults::ImpactShakeScale = -842583479824379615;

Attrib::Hash::cameradefaults::ImpactShakeType = -5456835001829100036;

Attrib::Hash::cameradefaults::SpeedShakeThreshold = -2676194790771603092;

Attrib::Hash::cameradefaults::SpeedShakeType = -7084916540873237413;

Attrib::Hash::cameraexternalbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::cameraexternalbehaviour::PivotLength = -5488398596126602666;

Attrib::Hash::cameraexternalbehaviour::TiltCameraScale = -2098857104130072476;

Attrib::Hash::cameraexternalbehaviour::ZAndTiltCutoffSpeedMPH = -4276768861718081255;

Attrib::Hash::camerabumperbehaviour::AccelerationResponse = -4777123151109968498;

Attrib::Hash::camerabumperbehaviour::BodyPitchScale = -6812158392904343490;

Attrib::Hash::camerabumperbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::camerabumperbehaviour::RollSpring = -2603261772359457364;

Attrib::Hash::camerabumperbehaviour::ZOffset = -2031833194172202669;

Attrib::Hash::iceanim::Guid = -7097409704044230467;

Attrib::Hash::aftertouchcam::MaxDistance = -8557505899279475338;

Attrib::Hash::aftertouchcam::MinHeight = -4927329763252819482;

Attrib::Hash::aftertouchcam::Pitch = -4570886707007131269;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

Attrib::ClassName::camerabumperbehaviour = -872580195161256039;

Attrib::ClassName::cameraexternalbehaviour = -1590435079418921852;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

ICE::TWO_PI_ANGLE = [71, 128, 0, 0];

ICE::TWO_PI_DEG = [67, 180, 0, 0];

ICE::TWO_PI = [64, 201, 15, 219];

ICE::MILE = [63, 205, 254, 252];

ICE::ICE_PARAMETER_MAX = -1;

ICE::ICE_LENS_DEFAULT = [65, 192, 0, 0];

ICE::ICE_NEAR_CLIP_DEFAULT = [63, 0, 0, 0];

ICE::ICE_TANGENT_LENGTH_DEFAULT = [63, 128, 0, 0];

ICE::ICE_INVALID_KEY = -1;

ICE::ICE_INVALID_INTERVAL = -1;

ICE::ICE_MAX_EDIT_KEYS;

ICE::ICE_MAX_EDIT_INTERVALS;

ICE::ICE_EPSILON = [55, 39, 197, 172];

ICE::ICE_DATA_SMALL_FLOAT = [58, 131, 18, 111];

ICE::ICEMath::ASPECT_X = [63, 170, 61, 113];

ICE::ICEMath::LENS_BASE = [65, 64, 0, 0];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

