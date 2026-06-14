// BrnTrafficVehicleTypeRuntime.cpp:61
void BrnTraffic::VehicleTypeRuntime::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicleTypeRuntime.cpp:70
		uint32_t luPaintColour;

		rw::math::vpu::Vector4::Set(/* parameters */);
		rw::math::vpu::Vector4::Set(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
}

// BrnTrafficVehicleTypeRuntime.cpp:89
void BrnTraffic::VehicleTypeRuntime::Prepare(const StreamedDeformationSpec *  lpModel, const Attribute::Key  lCarAssetAttribKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicleTypeRuntime.cpp:96
		VehicleAttribs lVehicleAttribs;

		// BrnTrafficVehicleTypeRuntime.cpp:97
		burnoutcarasset lBaseCarAsset;

		// BrnTrafficVehicleTypeRuntime.cpp:98
		physicsvehiclehandling lHandling;

		// BrnTrafficVehicleTypeRuntime.cpp:105
		uint8_t luWheelIdx;

		// BrnTrafficVehicleTypeRuntime.cpp:106
		uint8_t luWheelCount;

		// BrnTrafficVehicleTypeRuntime.cpp:107
		Vector3[6] laWheelPositions;

		// BrnTrafficVehicleTypeRuntime.cpp:108
		VecFloat[6] lafWheelRadii;

		// BrnTrafficVehicleTypeRuntime.cpp:126
		VecFloat lfMass;

		// BrnTrafficVehicleTypeRuntime.cpp:130
		Matrix44Affine lTagPointSpaceToModelSpace;

		// BrnTrafficVehicleTypeRuntime.cpp:131
		const const LocatorPointSpecList & lTags;

		// BrnTrafficVehicleTypeRuntime.cpp:132
		uint32_t luTag;

		// BrnTrafficVehicleTypeRuntime.cpp:176
		burnoutcargraphicsasset lGraphicsAsset;

		VehicleAttribs(/* parameters */);
		Attrib::Gen::burnoutcarasset::burnoutcarasset(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
		BrnPhysics::Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
		BrnPhysics::Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
		{
			// BrnTrafficVehicleTypeRuntime.cpp:115
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::Vector4::SetY(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		BrnPhysics::Vehicle::VehicleAttribs::VehicleBaseAttribs::GetMass(/* parameters */);
		SetW<VectorAxisZ>(/* parameters */);
		SetZ<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Vector4::SetX(/* parameters */);
		BrnPhysics::Deformation::StreamedDeformationSpec::GetCarModelSpaceToHandlingBodySpaceTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
		BrnPhysics::Deformation::StreamedDeformationSpec::GetGenericLocators(/* parameters */);
		BrnPhysics::Deformation::LocatorPointSpecList::GetNumLocatorPoints(/* parameters */);
		BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorType(/* parameters */);
		{
			// BrnTrafficVehicleTypeRuntime.cpp:157
			Vector3 lModelSpaceTagPointPos;

			BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorXform(/* parameters */);
			SetY<VectorAxisZ>(/* parameters */);
		}
		{
			// BrnTrafficVehicleTypeRuntime.cpp:164
			Vector3 lModelSpaceTagPointPos;

			rw::math::vpu::TransformPoint(/* parameters */);
		}
		SetX<VectorAxisZ>(/* parameters */);
		{
			// BrnTrafficVehicleTypeRuntime.cpp:179
			uint8_t luTrafficColourIndex;

			Attrib::Gen::burnoutcargraphicsasset::burnoutcargraphicsasset(/* parameters */);
			Attrib::Instance::SetDefaultLayout(/* parameters */);
			Attrib::Gen::burnoutcargraphicsasset::Num_RandomTrafficColours(/* parameters */);
			BrnMath::IntMin(/* parameters */);
			Attrib::Gen::burnoutcargraphicsasset::~burnoutcargraphicsasset(/* parameters */);
		}
		Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
		Attrib::Gen::burnoutcarasset::~burnoutcarasset(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorXform(/* parameters */);
	Attrib::Gen::burnoutcargraphicsasset::RandomTrafficColours(/* parameters */);
}

