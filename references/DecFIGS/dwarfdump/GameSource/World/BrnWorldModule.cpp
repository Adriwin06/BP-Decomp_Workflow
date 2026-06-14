// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnWorldModule.cpp:60
	const uint32_t KI_VEHICLE_LOD_COUNT = 5;

	// BrnWorldModule.cpp:99
	extern float32_t[5] KF_HIQUALITY_VEHICLE_LOD_DISTANCES;

	// BrnWorldModule.cpp:107
	extern float32_t[5] KF_AGGRESSIVE_VEHICLE_LOD_DISTANCES;

	// BrnWorldModule.cpp:117
	const float32_t KF_VEHICLE_RENDER_BUDGET_MIN;

	// BrnWorldModule.cpp:118
	const float32_t KF_VEHICLE_RENDER_BUDGET_MAX;

	// BrnWorldModule.cpp:120
	extern bool KB_DEBUG_USE_DYNAMIC_LODS;

	// BrnWorldModule.cpp:121
	extern bool KB_DEBUG_USE_FIXED_LODS;

	// BrnWorldModule.cpp:122
	extern bool KB_DEBUG_USE_AGGRESSIVE_LODS;

	// BrnWorldModule.cpp:123
	extern int32_t KI_DEBUG_VEHICLE_LOD;

}

// BrnWorldModule.cpp:4070
using BrnGameState::GameStateModuleIO;

// BrnWorldModule.cpp:2321
void GenerateShaderConstantsForQuadricIrradiance(const rw::math::vpu::Matrix44 &  lIrradianceMatrixR, const rw::math::vpu::Matrix44 &  lIrradianceMatrixG, const rw::math::vpu::Matrix44 &  lIrradianceMatrixB, const Matrix44 &  lOutQuadricMatrix0, const Matrix44 &  lOutQuadricMatrix1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModule.cpp:2323
		Vector4 lIrradiance_1;

		// BrnWorldModule.cpp:2326
		Matrix44 lIrradiance_x_y_z_xx;

		// BrnWorldModule.cpp:2327
		Matrix44 lIrradiance_xy_yz_zx_yy;

		// BrnWorldModule.cpp:2329
		const rw::math::vpu::Matrix44 *[3] laIrradianceMatrices;

		// BrnWorldModule.cpp:2400
		Matrix44 lIrradianceQuadricForShaderA;

		// BrnWorldModule.cpp:2401
		Matrix44 lIrradianceQuadricForShaderB;

		rw::math::vpu::Vector4::SetZero(/* parameters */);
	}
	{
		// BrnWorldModule.cpp:2331
		int luChannel;

		{
			// BrnWorldModule.cpp:2333
			const const rw::math::vpu::Matrix44 & lIrradianceMatrix;

			// BrnWorldModule.cpp:2335
			float Cxx;

			// BrnWorldModule.cpp:2336
			float Cyy;

			// BrnWorldModule.cpp:2337
			float Czz;

			// BrnWorldModule.cpp:2338
			float C1;

			// BrnWorldModule.cpp:2343
			float Cx;

			// BrnWorldModule.cpp:2344
			float Cy;

			// BrnWorldModule.cpp:2345
			float Cz;

			// BrnWorldModule.cpp:2347
			float Cxy;

			// BrnWorldModule.cpp:2348
			float Cyz;

			// BrnWorldModule.cpp:2349
			float Czx;

			rw::math::vpu::Matrix44::GetElem(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Matrix44::GetElem(/* parameters */);
			rw::math::vpu::Matrix44::GetElem(/* parameters */);
			rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			{
			}
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
			rw::math::vpu::Vector4::SetComponent(/* parameters */);
			{
			}
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			{
			}
			rw::math::vpu::operator*(/* parameters */);
			{
			}
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Matrix44::SetElem(/* parameters */);
		}
		{
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44::SetElem(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44::SetElem(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44::SetElem(/* parameters */);
		rw::math::vpu::Matrix44::SetElem(/* parameters */);
		rw::math::vpu::Matrix44::SetElem(/* parameters */);
		rw::math::vpu::Matrix44::SetElem(/* parameters */);
		rw::math::vpu::Matrix44::SetElem(/* parameters */);
	}
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	rw::math::vpu::Matrix44::SetRow(/* parameters */);
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	rw::math::vpu::Matrix44::SetRow(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// _built-in_
namespace :: {
	// BrnWorldModule.cpp:43
	const uint32_t KU_WORLD_ENTITY_ID;

	// BrnWorldModule.cpp:44
	const uint32_t K_FRUSTUM_TEST_QUERY_ID = 65535;

	// BrnWorldModule.cpp:147
	SceneQueryId[11] KA_FRUSTUM_QUERY_IDS;

}

