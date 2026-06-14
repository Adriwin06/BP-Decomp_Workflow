// CgsMaterialState.h:37
namespace CgsGraphics {
	// CgsModel.h:279
	namespace ModelInstanceCollector {
		// CgsModel.cpp:609
		extern bool operator<(const ModelInstanceInfo &, const ModelInstanceInfo &);

		// CgsModel.cpp:621
		extern bool AreCompatibleInstances(const ModelInstanceInfo &, const ModelInstanceInfo &);

		// CgsModel.cpp:664
		extern void BeginInstanceCollection(CgsGraphics::DispatchFrame *, const rw::math::vpu::Matrix44 *, int32_t, int32_t, int32_t, uint8_t, bool);

		// CgsModel.cpp:714
		extern void FlushInstanceCollection();

		// CgsModel.cpp:706
		extern void EndInstanceCollection();

		// CgsModel.cpp:687
		extern void AddInstance(Model *, const rw::math::vpu::Matrix44Affine *, CgsGraphics::Model::State);

		// CgsModel.cpp:600
		const int32_t KI_MAX_INSTANCES_PER_COLLECTION_PASS = 100;

		// CgsModel.cpp:628
		bool sbIsDuringInstanceCollection;

		// CgsModel.cpp:630
		int siInstanceRenderingBufferLength;

		// CgsModel.cpp:631
		ModelInstanceInfo[100] saInstanceRenderingBufferArray;

		// CgsModel.cpp:632
		const rw::math::vpu::Matrix44Affine *[5] saInstanceGroupMatrixArray;

		// CgsModel.cpp:633
		Vector4[5] saInstanceGroupStreamDataArray;

		// CgsModel.cpp:635
		CgsGraphics::DispatchFrame * spDispatchFrame;

		// CgsModel.cpp:636
		const rw::math::vpu::Matrix44 * spCameraViewProjection;

		// CgsModel.cpp:637
		int32_t siModelOnlyDisplayList;

		// CgsModel.cpp:638
		int32_t siOpaqueList;

		// CgsModel.cpp:639
		int32_t siTransparentList;

		// CgsModel.cpp:640
		uint8_t su8PreZList;

		// CgsModel.cpp:641
		bool sbEnableZOnlyRenderPath;

		// CgsModel.cpp:645
		int siMaxInstancesPerCollectionPass;

		// CgsModel.cpp:646
		int siMaxInstancesPerGroup;

		// CgsModel.cpp:647
		int siMinInstancesPerGroup;

		// CgsModel.cpp:648
		bool sbInstanceRenderingEnabled;

	}

	// CgsModel.cpp:540
	Vector4[5] gaTheFirstFewIntegersAsVectors;

}

// CgsModel.cpp:603
struct CgsGraphics::ModelInstanceCollector::ModelInstanceInfo {
	// CgsModel.cpp:604
	Model * mpModel;

	// CgsModel.cpp:605
	CgsGraphics::Model::State meLodState;

	// CgsModel.cpp:606
	const rw::math::vpu::Matrix44Affine * mpMatrix;

}

// CgsModel.cpp:413
void CgsGraphics::Model::UsesTexture(const Texture *  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModel.cpp:415
		uint32_t luRenderableIndex;

	}
}

// CgsModel.cpp:440
void CgsGraphics::Model::DebugRenderMeshBoundingBoxes(CgsGraphics::Model::State  leState, const rw::math::vpu::Matrix44Affine &  lTransform, RGBA  lRGBA, int32_t  liMeshIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModel.cpp:446
		Renderable * lpRenderable;

		// CgsModel.cpp:449
		RenderableMesh * lpRenderableMesh;

		// CgsModel.cpp:450
		uint32_t lu32MeshId;

		// CgsModel.cpp:452
		DebugInterface lDebugInterface;

		// CgsModel.cpp:453
		const DebugRender & lDebugRender;

		// CgsModel.cpp:454
		Matrix44Affine lBoundingBoxMatrix;

	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	{
		// CgsModel.cpp:480
		Matrix44 lMeshBoxMatrix;

		// CgsModel.cpp:486
		Matrix44Affine lMat;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	{
		// CgsModel.cpp:464
		Matrix44 lMeshBoxMatrix;

		// CgsModel.cpp:470
		Matrix44Affine lMat;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		// CgsModel.cpp:447
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsModel.cpp:554
void CgsGraphics::Model::SetupShaderConstantsForInstancing(int32_t  liModelInstanceCount, const rw::math::vpu::Matrix44Affine **  lpaModelInstancingArray, const rw::math::vpu::Vector4 *  lpaModelInstancingStreamData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModel.cpp:561
		Matrix44Affine[5] lInstancingMatrixArray;

		// CgsModel.cpp:562
		Vector4[5] lInstancingIndexArray;

	}
	{
		// CgsModel.cpp:564
		int liIndex;

		{
			// CgsModel.cpp:566
			Vector4 lVector;

			SetW<VectorAxisW>(/* parameters */);
		}
	}
	{
		// CgsModel.cpp:572
		int liIndex;

	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		// CgsModel.cpp:577
		int liIndex;

	}
	ShaderConstantTable::SetShaderConstantArrayData(/* parameters */);
	ShaderConstantTable::SetShaderConstantArrayData(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	ShaderConstantTable::SetMatrixFromAffine(/* parameters */);
	{
	}
	{
	}
	{
	}
}

