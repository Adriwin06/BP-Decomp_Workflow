// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// B5PhysicsHandlingDebugComponent.cpp:33
		const RGBA K_VALID_CONTACT_COLOUR;

		// B5PhysicsHandlingDebugComponent.cpp:34
		const RGBA K_INVALID_CONTACT_COLOUR;

	}

}

// B5PhysicsHandlingDebugComponent.cpp:1908
void BrnPhysics::Vehicle::GripCurveDebugGraph::Prepare(const BrnPhysics::Vehicle::Wheel::TireGripCurve *  lpGripCurve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// B5PhysicsHandlingDebugComponent.cpp:1575
void BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u>::Construct(/* parameters */);
	CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u>::Construct(/* parameters */);
}

// B5PhysicsHandlingDebugComponent.cpp:1882
void BrnPhysics::Vehicle::GripCurveDebugGraph::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
}

// B5PhysicsHandlingDebugComponent.cpp:1985
void BrnPhysics::Vehicle::GripCurveDebugGraph::PlotCoefficientLabel(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfCoefficient, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// B5PhysicsHandlingDebugComponent.cpp:1990
		char[16] lacLabelText;

		// B5PhysicsHandlingDebugComponent.cpp:1994
		Vector2 lTextPos;

	}
	rw::math::vpu::Vector2::GetY(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	GetPointOnGraph(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	GetYAxisLength(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator-=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
}

// B5PhysicsHandlingDebugComponent.cpp:2029
void BrnPhysics::Vehicle::GripCurveDebugGraph::PlotSlipRatioLabel(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfSlipRatio, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// B5PhysicsHandlingDebugComponent.cpp:2034
		char[16] lacLabelText;

		// B5PhysicsHandlingDebugComponent.cpp:2038
		Vector2 lTextPos;

	}
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	GetPointOnGraph(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator-=(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
}

// B5PhysicsHandlingDebugComponent.cpp:2073
void BrnPhysics::Vehicle::GripCurveDebugGraph::PlotCurrentValue(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfSlipRatio, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// B5PhysicsHandlingDebugComponent.cpp:2079
		float32_t lfCoefficient;

		// B5PhysicsHandlingDebugComponent.cpp:2082
		Vector2 lPointOnGraph;

		rw::math::vpu::Vector2::GetX(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	GetPointOnGraph(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
}

// B5PhysicsHandlingDebugComponent.cpp:1928
void BrnPhysics::Vehicle::GripCurveDebugGraph::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// B5PhysicsHandlingDebugComponent.cpp:1930
		Vector2 lAxisTopLeft;

		// B5PhysicsHandlingDebugComponent.cpp:1931
		Vector2 lAxisOrigin;

		// B5PhysicsHandlingDebugComponent.cpp:1932
		Vector2 lAxisBottomRight;

		GetPointOnGraph(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	GetXAxisLength(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::GetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	GetYAxisLength(/* parameters */);
	GetOrigin(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetPointOnGraph(/* parameters */);
	GetPointOnGraph(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	GetXAxisLength(/* parameters */);
	{
	}
	GetYAxisLength(/* parameters */);
	GetYAxisLength(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	GetOrigin(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// B5PhysicsHandlingDebugComponent.cpp:1942
		const RGBA kfGraphLineColour;

		// B5PhysicsHandlingDebugComponent.cpp:1944
		Vector2 lPeak;

		// B5PhysicsHandlingDebugComponent.cpp:1945
		Vector2 lFall;

		// B5PhysicsHandlingDebugComponent.cpp:1946
		Vector2 lEnd;

		rw::RGBA::RGBA(/* parameters */);
		Wheel::TireGripCurve::GetPeakSlipRatio(/* parameters */);
		Wheel::TireGripCurve::GetPeakCoefficient(/* parameters */);
		GetPointOnGraph(/* parameters */);
		Wheel::TireGripCurve::GetFloorSlipRatio(/* parameters */);
		GetPointOnGraph(/* parameters */);
		Wheel::TireGripCurve::GetFallCoefficient(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		GetXAxisLength(/* parameters */);
		GetYAxisLength(/* parameters */);
		GetOrigin(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
		GetPointOnGraph(/* parameters */);
		GetOrigin(/* parameters */);
		GetYAxisLength(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		GetYAxisLength(/* parameters */);
		GetXAxisLength(/* parameters */);
		GetYAxisLength(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		Wheel::TireGripCurve::GetFallCoefficient(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	Wheel::TireGripCurve::GetPeakSlipRatio(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Wheel::TireGripCurve::GetFloorSlipRatio(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Wheel::TireGripCurve::GetPeakCoefficient(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Wheel::TireGripCurve::GetFallCoefficient(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// B5PhysicsHandlingDebugComponent.cpp:1618
void BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::AddVector(const rw::math::vpu::Vector3  lPosition_DrawingSpace, const rw::math::vpu::Vector3  lDirection_DrawingSpace, const char *  lpName_Permanent, float32_t  lfDuration) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// B5PhysicsHandlingDebugComponent.cpp:1620
		BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector lDrawableVector;

	}
	CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// B5PhysicsHandlingDebugComponent.cpp:1598
void BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::AddDrawableCar(const rw::math::vpu::Matrix44Affine &  lCarSpaceToDrawingSpace, const rw::math::vpu::Vector3  lHalfDims_CarSpace, const char *  lpName_Permanent, float32_t  lfDuration) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// B5PhysicsHandlingDebugComponent.cpp:1600
		BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar lDrawableCar;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u>::Append(/* parameters */);
	operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// B5PhysicsHandlingDebugComponent.cpp:1633
void BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::Render(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// B5PhysicsHandlingDebugComponent.cpp:1635
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	{
		// B5PhysicsHandlingDebugComponent.cpp:1637
		uint32_t i;

		CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u>::GetLength(/* parameters */);
	}
	{
		// B5PhysicsHandlingDebugComponent.cpp:1639
		BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar lDrawableCar;

		// B5PhysicsHandlingDebugComponent.cpp:1641
		Vector2 lPosition_ScreenSpace;

		// B5PhysicsHandlingDebugComponent.cpp:1644
		Vector3 lHalfExtent_DrawSpace;

		// B5PhysicsHandlingDebugComponent.cpp:1645
		Vector2 lHalfExtent_ScreenSpace;

		// B5PhysicsHandlingDebugComponent.cpp:1647
		Vector3 lAdjacentHalfExtent_CarSpace;

		// B5PhysicsHandlingDebugComponent.cpp:1649
		Vector3 lAdjacentHalfExtent_DrawSpace;

		// B5PhysicsHandlingDebugComponent.cpp:1650
		Vector2 lAdjacentHalfExtent_ScreenSpace;

		// B5PhysicsHandlingDebugComponent.cpp:1653
		Vector2 lPoint1;

		// B5PhysicsHandlingDebugComponent.cpp:1654
		Vector2 lPoint2;

		// B5PhysicsHandlingDebugComponent.cpp:1655
		Vector2 lPoint3;

		// B5PhysicsHandlingDebugComponent.cpp:1656
		Vector2 lPoint4;

		CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u>::operator[](/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector2::X(/* parameters */);
		rw::math::vpu::Vector3::SetX(/* parameters */);
		DrawableCar(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY, VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY, VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY, VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u>::operator[](/* parameters */);
		CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u>::operator[](/* parameters */);
	}
	{
		// B5PhysicsHandlingDebugComponent.cpp:1673
		uint32_t i;

		CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u>::GetLength(/* parameters */);
		{
			// B5PhysicsHandlingDebugComponent.cpp:1675
			BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector lDrawableVector;

			// B5PhysicsHandlingDebugComponent.cpp:1677
			Vector2 lPosition_ScreenSpace;

			// B5PhysicsHandlingDebugComponent.cpp:1680
			Vector2 lDirection_ScreenSpace;

			CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u>::operator[](/* parameters */);
			rw::math::vpu::Vector2::X(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY, VectorAxisZ>(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
			rw::math::vpu::Vector2::X(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY, VectorAxisZ>(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u>::operator[](/* parameters */);
			CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u>::operator[](/* parameters */);
		}
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u>::Erase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u>::Erase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

