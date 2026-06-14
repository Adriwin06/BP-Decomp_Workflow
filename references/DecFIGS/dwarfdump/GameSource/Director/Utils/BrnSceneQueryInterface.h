// BrnSceneQueryInterface.h:54
struct BrnDirector::SceneQueryInterface {
private:
	// BrnSceneQueryInterface.h:162
	SceneQueryInterface * mpSceneQueryInterface;

	// Unknown accessibility
	// BrnDirectorPostOfficeTypes.h:54
	typedef BrnDirector::PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u> LineTestFinePostOffice;

	// BrnSceneQueryInterface.h:164
	SceneQueryInterface::LineTestFinePostOffice * mpLineTestFinePostOffice;

	// Unknown accessibility
	// BrnDirectorPostOfficeTypes.h:55
	typedef BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,40u> LineTestNearestPostOffice;

	// BrnSceneQueryInterface.h:165
	SceneQueryInterface::LineTestNearestPostOffice * mpLineTestNearestPostOffice;

	// Unknown accessibility
	// BrnDirectorPostOfficeTypes.h:56
	typedef BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult,10u> LineTestFastDoubleSidedPostOffice;

	// BrnSceneQueryInterface.h:166
	SceneQueryInterface::LineTestFastDoubleSidedPostOffice * mpLineTestFastDoubleSidedPostOffice;

	// Unknown accessibility
	// BrnDirectorPostOfficeTypes.h:57
	typedef BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult,10u> SphereTestFastPostOffice;

	// BrnSceneQueryInterface.h:167
	SceneQueryInterface::SphereTestFastPostOffice * mpSphereTestFastPostOffice;

	// Unknown accessibility
	// BrnDirectorPostOfficeTypes.h:58
	typedef BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult,1u> VolumeTestFinePostOffice;

	// BrnSceneQueryInterface.h:168
	SceneQueryInterface::VolumeTestFinePostOffice * mpVolumeTestFinePostOffice;

	// Unknown accessibility
	// BrnDirectorPostOfficeTypes.h:59
	typedef BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult,10u> VolumeTestDeepestPostOffice;

	// BrnSceneQueryInterface.h:169
	SceneQueryInterface::VolumeTestDeepestPostOffice * mpVolumeTestDeepestPostOffice;

public:
	// BrnSceneQueryInterface.h:79
	void Construct(SceneQueryInterface *, SceneQueryInterface::LineTestFinePostOffice *, SceneQueryInterface::LineTestNearestPostOffice *, SceneQueryInterface::LineTestFastDoubleSidedPostOffice *, SceneQueryInterface::SphereTestFastPostOffice *, SceneQueryInterface::VolumeTestFinePostOffice *, SceneQueryInterface::VolumeTestDeepestPostOffice *);

	// BrnSceneQueryInterface.h:88
	void Clear();

	// BrnSceneQueryInterface.h:91
	void Destruct();

	// BrnSceneQueryInterface.h:102
	// Declaration
	void LineTestFine(LineTestFinePostBox &, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDirectorPostOfficeTypes.h:61
		typedef BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> LineTestFinePostBox;

	}

	// BrnSceneQueryInterface.h:114
	// Declaration
	void LineTestNearest(LineTestNearestPostBox &, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDirectorPostOfficeTypes.h:62
		typedef BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> LineTestNearestPostBox;

	}

	// BrnSceneQueryInterface.h:125
	// Declaration
	void LineTestFastDoubleSided(LineTestFastDoubleSidedPostBox &, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDirectorPostOfficeTypes.h:63
		typedef BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> LineTestFastDoubleSidedPostBox;

	}

	// BrnSceneQueryInterface.h:136
	// Declaration
	void SphereTestFast(SphereTestFastPostBox &, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, VecFloat, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDirectorPostOfficeTypes.h:64
		typedef BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> SphereTestFastPostBox;

	}

	// BrnSceneQueryInterface.h:147
	// Declaration
	void VolumeTestDeepest(VolumeTestDeepestPostBox &, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDirectorPostOfficeTypes.h:66
		typedef BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> VolumeTestDeepestPostBox;

	}

	// BrnSceneQueryInterface.h:158
	// Declaration
	void VolumeTestFine(VolumeTestFinePostBox &, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDirectorPostOfficeTypes.h:65
		typedef BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> VolumeTestFinePostBox;

	}

}

