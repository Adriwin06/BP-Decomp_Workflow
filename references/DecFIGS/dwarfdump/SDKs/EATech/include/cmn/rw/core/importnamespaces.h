// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct SPU;

	// importnamespaces.h:27
	namespace graphics {
	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

		struct Material;

		struct Part;

		struct PartDefinition;

		struct JointHelper;

	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct PrimitivePairIntersectResult;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

		struct Material;

		struct PartDefinition;

		struct Part;

		struct JointHelper;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	struct BitTable;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:59
namespace rwg {
	// importnamespaces.h:60
	using namespace rw::graphics;

	// importnamespaces.h:61
	using namespace rw::graphics::conditioning;

	// importnamespaces.h:62
	using namespace rw::platform::design_view;

	// importnamespaces.h:63
	using namespace rw::platform::profile_mesh;

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// importnamespaces.h:28
		namespace conditioning {
		}

	}

	// importnamespaces.h:35
	namespace platform {
		// importnamespaces.h:37
		namespace design_view {
		}

		// importnamespaces.h:40
		namespace profile_mesh {
		}

		// importnamespaces.h:41
		namespace hierarchy {
		}

		// importnamespaces.h:43
		namespace sink {
		}

	}

	// importnamespaces.h:14
	namespace oldanimation {
		// importnamespaces.h:15
		namespace conditioning {
		}

	}

	// importnamespaces.h:18
	namespace collision {
		// importnamespaces.h:19
		namespace conditioning {
		}

		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

	}

	// importnamespaces.h:31
	namespace physics {
		// importnamespaces.h:32
		namespace conditioning {
		}

	}

	// importnamespaces.h:22
	namespace conditioning {
		// importnamespaces.h:24
		namespace core {
		}

		// importnamespaces.h:23
		namespace shared {
		}

	}

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct RGBA;

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:66
namespace rwk {
	// importnamespaces.h:67
	using namespace rw::oldanimation;

	// importnamespaces.h:68
	using namespace rw::oldanimation::conditioning;

	// importnamespaces.h:69
	using namespace rw::platform::hierarchy;

	// importnamespaces.h:70
	using namespace rw::platform::sink;

}

// importnamespaces.h:73
namespace rwc {
	// importnamespaces.h:74
	using namespace rw::collision;

	// importnamespaces.h:75
	using namespace rw::collision::conditioning;

}

// importnamespaces.h:78
namespace rwp {
	// importnamespaces.h:79
	using namespace rw::physics;

	// importnamespaces.h:80
	using namespace rw::physics::conditioning;

}

// importnamespaces.h:83
namespace rwx {
	// importnamespaces.h:84
	using namespace rw::conditioning::core;

	// importnamespaces.h:85
	using namespace rw::conditioning::shared;

}

// importnamespaces.h:47
namespace sk {
}

// importnamespaces.h:99
using namespace sk;

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// importnamespaces.h:28
		namespace conditioning {
		}

	}

	// importnamespaces.h:35
	namespace platform {
		// importnamespaces.h:37
		namespace design_view {
		}

		// importnamespaces.h:40
		namespace profile_mesh {
		}

		// importnamespaces.h:41
		namespace hierarchy {
		}

		// importnamespaces.h:43
		namespace sink {
		}

	}

	// importnamespaces.h:14
	namespace oldanimation {
		// importnamespaces.h:15
		namespace conditioning {
		}

	}

	// importnamespaces.h:18
	namespace collision {
		// importnamespaces.h:19
		namespace conditioning {
		}

	}

	// importnamespaces.h:31
	namespace physics {
		// importnamespaces.h:32
		namespace conditioning {
		}

	}

	// importnamespaces.h:22
	namespace conditioning {
		// importnamespaces.h:24
		namespace core {
		}

		// importnamespaces.h:23
		namespace shared {
		}

	}

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct RGBA;

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct TriangleVolume;

		struct BoxVolume;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct LinearResourceAllocator;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		union vector_union {
		}
		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

		struct Material;

		struct PartDefinition;

		struct Part;

		struct JointHelper;

	}

	// importnamespaces.h:18
	namespace collision {
		struct CapsuleVolume;

		struct SphereVolume;

		struct CylinderVolume;

		struct BoxVolume;

		struct TriangleVolume;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct VolumeBBoxQuery;

		struct VolumeLineQuery;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
		struct ShaderDataWriter;

		struct IndexDescriptor;

		struct SamplerStateBitField;

	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolumeLineSegIntersectResult;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMeshCluster;

		struct ClusteredMesh;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	struct BitTable;

	// importnamespaces.h:27
	namespace graphics {
	}

	// importnamespaces.h:18
	namespace collision {
		struct AALineClipper;

		struct KdTreeLineQuery;

		struct KdTreeBBoxQuery;

		struct KdTreeBBoxQueryBase;

		struct SphereSpecificData;

		struct CapsuleSpecificData;

		struct TriangleSpecificData;

		struct BoxSpecificData;

		struct CylinderSpecificData;

		struct AggregateSpecificData;

		struct FeatureEdge;

		struct Feature;

		struct Interval;

		struct GPTriangle;

		struct VolRef;

		struct VolRefPair;

		struct VolRef1xN;

		struct VolumeLineSegIntersectResult;

		struct Plane;

		struct Frustum;

		struct VolumeLineQuery;

		struct VolumeBBoxQuery;

		struct SphereVolume;

		struct CapsuleVolume;

		struct CylinderVolume;

		struct PrimitivePairIntersectResult;

		struct VolumeVolumeQuery;

		struct TriangleVolume;

		struct BoxVolume;

		struct AggregateVolume;

		struct Procedural;

		struct ClusterParams;

		struct ClusteredMesh;

		struct KdTreeBatchBBoxQueryResult;

		struct KdTreeBatchBBoxQuery;

	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

	// importnamespaces.h:31
	namespace physics {
		struct Inertia;

		struct RigidBody;

		struct Simulation;

		struct Contact;

		union AddrVoidPtrUnion {
		}
		struct ContactJacobian;

		struct ContactSpy;

		struct JointJacobian;

		struct JointSpy;

		struct DriveJacobian;

		struct DriveSpy;

		struct JointFrames;

		struct JointLimits;

		struct Joint;

		struct DriveFrames;

		struct Drive;

		struct SimulationWorkspace;

	}

}

// importnamespaces.h:8
namespace rw {
	struct RGBA;

	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			struct UnfixContextImpl;

			struct Arena;

			struct ArenaSectionTypes;

			struct ArenaSectionExternalArenas;

			struct ArenaSectionSubreferences;

			struct ArenaIterator;

			struct ArenaSectionManifest;

			struct ArenaDictEntry;

			struct RefixContextImpl;

			struct SizeAndAlignment;

			struct ArenaSectionSubreferencesRecord;

			struct ArenaExportedObject;

			struct ArenaFileHeaderMagicNumber;

			struct ArenaFileHeader;

			struct ArenaGroup;

			struct ArenaSection;

			struct FixupContextImpl;

			struct DynamicArenaSubreferencesData;

			struct ArenaTypeReg;

			struct ArenaSectionAtoms;

		}

		struct GeneralResourceAllocator;

	}

	struct IResourceAllocator;

	struct BaseResourceDescriptor;

	struct BaseResourceDescriptors<6u>;

	struct ResourceDescriptor;

	struct BaseResourceDescriptorType<0u>;

	struct BaseResourceDescriptorType<2u>;

	struct BaseResourceDescriptorType<1u>;

	struct BaseResourceDescriptorType<3u>;

	struct BaseResourceDescriptorType<4u>;

	struct BaseResourceDescriptorType<5u>;

	struct BaseResources<6u>;

	struct Resource;

	struct TargetResource;

	struct SPU;

	struct SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>;

	struct SimpleVector<rw::core::arena::ArenaDictEntry>;

	struct SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*>;

	struct HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>;

	struct PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>;

	// importnamespaces.h:27
	namespace graphics {
	}

	struct BaseResourceDescriptors<3u>;

	struct BaseResources<3u>;

}

