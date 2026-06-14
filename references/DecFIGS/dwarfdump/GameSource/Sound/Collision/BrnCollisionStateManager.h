// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionStateManager.h:40
		namespace Collision {
			// BrnCollisionStateManager.h:61
			enum ESize {
				E_SIZE_LARGE = 0,
				E_SIZE_MEDIUM = 1,
				E_SIZE_SMALL = 2,
			}

			// BrnCollisionStateManager.h:69
			enum ECollisionSpliceTags {
				E_COLLISIION_SPLICE_TAG_SMALL_LANDINGS = 0,
				E_COLLISIION_SPLICE_TAG_SUSPENSION = 1,
				E_COLLISIION_SPLICE_TAG_HARD_LANDINGS = 2,
				E_COLLISIION_SPLICE_TAG_CRASH_LANDINGS = 3,
				E_COLLISIION_SPLICE_TAG_JUNKYARD_LANDING_SWEETNER = 4,
				E_COLLISIION_SPLICE_TAG_CRASH_IN_WATER = 5,
			}

			struct PropToMaterialMapping;

			struct GenericEntity;

			struct CameraInfo;

			// Declaration
			struct RaceCarCache {
				// BrnCollisionStateManager.h:132
				struct RaceCarCacheNode {
					// BrnCollisionStateManager.h:137
					Vector3 mComOffset;

					// BrnCollisionStateManager.h:139
					DataPoint<bool> mbActive;

					// BrnCollisionStateManager.h:140
					DataPoint<rw::math::vpu::Matrix44Affine> mTransform;

					// BrnCollisionStateManager.h:142
					Vector3 mMin;

					// BrnCollisionStateManager.h:143
					Vector3 mMax;

				public:
					// BrnCollisionStateManager.h:133
					RaceCarCacheNode();

				}

			}

			// Declaration
			struct HingeStateCache {
				// BrnCollisionStateManager.h:169
				struct CacheNode {
					// BrnSoundLogicSharedIO.h:68
					typedef JointedPartStateEvent JointedPartStateEvent;

					// BrnCollisionStateManager.h:172
					BrnSound::Logic::Collision::HingeStateCache::CacheNode::JointedPartStateEvent mEvent;

					// BrnCollisionStateManager.h:173
					bool mbValid;

					// BrnCollisionStateManager.h:174
					float32_t mfTimeLastSeen;

					// BrnCollisionStateManager.h:175
					bool mbHingeOpen;

					// BrnCollisionStateManager.h:176
					bool mbHingeClose;

				public:
					// BrnCollisionStateManager.h:170
					CacheNode();

				}

			}

			// Declaration
			struct BinLookupCache {
				// BrnCollisionStateManager.h:239
				struct CacheEntry {
					// BrnCollisionStateManager.h:240
					uint64_t mx64MaterialA;

					// BrnCollisionStateManager.h:241
					uint64_t mx64MaterialB;

				}

			}

			struct ScrapeInfo;

			// Declaration
			struct InputCollision {
				// BrnCollisionStateManager.h:377
				enum EPipeline {
					E_REGULAR = 0,
					E_PROP = 1,
					E_MAX_PIPELINES = 2,
				}

			}

			// Declaration
			struct CollisionStateManager {
			protected:
				// BrnCollisionStateManager.h:733
				// Declaration
				void SelectBin<Attrib::Gen::propscrashbinlist, Attrib::Gen::propscrashbin>(const propscrashbinlist &, OutputCollision &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// BrnCollisionStateManager.cpp:2418
					using namespace AttribSys::Enums;

				}

				// BrnCollisionStateManager.h:733
				// Declaration
				void SelectBin<Attrib::Gen::crashbinlist, Attrib::Gen::crashbin>(const crashbinlist &, OutputCollision &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// BrnCollisionStateManager.cpp:2418
					using namespace AttribSys::Enums;

				}

			}

			// BrnCollisionStateManager.h:479
			enum ECollisionSpliceBankType {
				E_COLLISION_SPLICE_BANK_COLLISION = 0,
				E_COLLISION_SPLICE_BANK_MAX = 1,
			}

			struct OutputCollision;

			struct CrashBinUtils<Attrib::Gen::crashbin>;

			struct ScrapeEffect;

			struct CrashBinUtils<Attrib::Gen::propscrashbin>;

			struct Collision3DControl;

			struct CollisionControl;

			void MapBodyPartEnumToMateral(EBodyParts);

			void MapGameModesToBinFlags(const GameModeOutputInterface *);

			void MapEntityIdToMaterial(EntityId, int32_t, const LogicInputBuffer &);

			void MapCameraStateToBinFlags(const CameraState *);

			void MapPositionToOrientationUsingBox(Vector3, Vector3, Matrix44Affine, Vector3, Vector3, Vector3, Vector3);

			void MapPositionToOrientation(Matrix44Affine, Vector3, Vector3, EntityId, EntityId, const BrnSound::Logic::Collision::CollisionStateManager &, AttribSys::Enums::eOrientation::eOrientation &);

		}

	}

}

// BrnCollisionStateManager.h:93
struct BrnSound::Logic::Collision::PropToMaterialMapping {
	// BrnCollisionStateManager.h:94
	uint16_t muMaterialIndex;

	// BrnCollisionStateManager.h:95
	bool mbValid;

public:
	// BrnCollisionStateManager.h:97
	void PropToMaterialMapping();

}

// BrnCollisionStateManager.h:102
struct BrnSound::Logic::Collision::GenericEntity {
	// BrnCollisionStateManager.h:111
	Vector3 mPosition;

	// BrnCollisionStateManager.h:112
	Vector3 mVelocity;

	// BrnCollisionStateManager.h:113
	bool mbCrashing;

	// BrnCollisionStateManager.h:114
	bool mbPlayer;

	// BrnCollisionStateManager.h:115
	bool mbWorld;

public:
	// BrnCollisionStateManager.h:103
	void GenericEntity();

}

// BrnCollisionStateManager.h:120
struct BrnSound::Logic::Collision::CameraInfo {
	// BrnCollisionStateManager.h:121
	Matrix44Affine mTransform;

	// BrnCollisionStateManager.h:122
	float32_t mf32FieldOfView;

	// BrnCollisionStateManager.h:123
	float32_t mf32CosineHalfFov;

	// BrnCollisionStateManager.h:124
	float32_t mf32AspectRatio;

	// BrnCollisionStateManager.h:125
	float32_t mf32Zoom;

}

// BrnCollisionStateManager.h:129
struct BrnSound::Logic::Collision::RaceCarCache {
	// BrnCollisionStateManager.h:146
	BrnSound::Logic::Collision::RaceCarCache::RaceCarCacheNode[8] maRaceCars;

public:
	// BrnCollisionStateManager.h:151
	// Declaration
	void Update(const RootInputBuffer::VehicleInterface &, const DeformationState &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:3922
		using namespace BrnPhysics::Vehicle;

	}

	// BrnCollisionStateManager.h:154
	const BrnSound::Logic::Collision::RaceCarCache::RaceCarCacheNode * GetRaceCar(uint32_t) const;

}

// BrnCollisionStateManager.h:163
struct BrnSound::Logic::Collision::HingeStateCache {
	// BrnCollisionStateManager.h:166
	extern const uint32_t KU_CACHE_SIZE = 32;

	// BrnCollisionStateManager.h:228
	BrnSound::Logic::Collision::HingeStateCache::CacheNode[32] maEvents;

public:
	// BrnCollisionStateManager.h:181
	void Update(float32_t);

	// BrnCollisionStateManager.h:197
	BrnSound::Logic::Collision::HingeStateCache::CacheNode * FindInCache(const BrnSound::Logic::Collision::HingeStateCache::CacheNode::JointedPartStateEvent &);

	// BrnCollisionStateManager.h:214
	BrnSound::Logic::Collision::HingeStateCache::CacheNode * Insert(const BrnSound::Logic::Collision::HingeStateCache::CacheNode::JointedPartStateEvent &);

}

// BrnCollisionStateManager.h:232
struct BrnSound::Logic::Collision::BinLookupCache {
	// BrnCollisionStateManager.h:234
	extern const uint32_t KU_CACHE_SIZE = 64;

private:
	// BrnCollisionStateManager.h:275
	uint32_t muEntryCount;

	// BrnCollisionStateManager.h:276
	BrnSound::Logic::Collision::BinLookupCache::CacheEntry[64] maCacheEntry;

public:
	// BrnCollisionStateManager.h:236
	void BinLookupCache();

	// BrnCollisionStateManager.h:262
	const BrnSound::Logic::Collision::BinLookupCache::CacheEntry & GetEntry(uint32_t) const;

	// BrnCollisionStateManager.h:269
	uint32_t GetEntryCount() const;

}

// BrnCollisionStateManager.h:280
struct BrnSound::Logic::Collision::ScrapeInfo {
	// BrnCollisionStateManager.h:281
	Vector3 mRelativeVelocity;

	// BrnCollisionStateManager.h:282
	EntityId mEntityIdA;

	// BrnCollisionStateManager.h:283
	EntityId mEntityIdB;

	// BrnCollisionStateManager.h:284
	float32_t mfTimeStamp;

	// BrnCollisionStateManager.h:285
	CollisionTag mCollisionTagB;

	// BrnCollisionStateManager.h:286
	AttribSys::Enums::eOrientation::eOrientation meOrientation;

	// BrnCollisionStateManager.h:287
	float32_t mfIntensity;

	// BrnCollisionStateManager.h:288
	bool mbCrashing;

	// BrnCollisionStateManager.h:289
	bool mbValid;

public:
	// BrnCollisionStateManager.h:292
	void ScrapeInfo();

	// BrnCollisionStateManager.h:299
	// Declaration
	void ScrapeInfo(InputContactSpy, AttribSys::Enums::eOrientation::eOrientation, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicSharedIO.h:54
		typedef BaseContact InputContactSpy;

	}

	// BrnCollisionStateManager.h:312
	bool operator==(const ScrapeInfo &) const;

	// BrnCollisionStateManager.h:323
	void SwapOrder();

	// BrnCollisionStateManager.h:332
	void UpdateTracking(const ScrapeInfo &);

	// BrnCollisionStateManager.h:339
	void UpdateState(const ScrapeInfo &);

	// BrnCollisionStateManager.h:346
	void UpdateHistory(const ScrapeInfo &);

	// BrnCollisionStateManager.h:357
	void DebugPrint();

}

// BrnCollisionStateManager.h:376
struct BrnSound::Logic::Collision::InputCollision {
	// BrnCollisionStateManager.h:384
	ScrapeInfo mScrapeInfo;

	// BrnCollisionStateManager.h:385
	VecFloat[3] maParameter;

	// BrnCollisionStateManager.h:386
	Vector3 mPosition;

	// BrnCollisionStateManager.h:387
	uint64_t[2] maMaterial;

	// BrnCollisionStateManager.h:388
	EntityId[2] maEntityID;

	// BrnCollisionStateManager.h:389
	float32_t mfPriorityAddition;

	// eAction.h:25
	typedef AttribSys::Enums::eAction::eAction EeAction;

	// BrnCollisionStateManager.h:390
	InputCollision::EeAction meAction;

	// eOrientation.h:24
	typedef AttribSys::Enums::eOrientation::eOrientation EeOrientation;

	// BrnCollisionStateManager.h:391
	InputCollision::EeOrientation meOrientation;

	// BrnCollisionStateManager.h:392
	BrnSound::Logic::Collision::InputCollision::EPipeline mePipeline;

	// BrnCollisionStateManager.h:393
	bool mbCull;

public:
	// BrnCollisionStateManager.h:396
	void InputCollision();

	// BrnCollisionStateManager.h:405
	// Declaration
	void InputCollision(const CameraInfo &, BrnSound::Logic::Collision::CollisionStateManager &, const InputContactSpy &, const LogicInputBuffer &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicModuleIo.h:38
		typedef RootInputBuffer LogicInputBuffer;

		// BrnCollisionStateManager.cpp:997
		using namespace rw::math::vpu;

	}

	// BrnCollisionStateManager.h:414
	// Declaration
	void InputCollision(const CameraInfo &, BrnSound::Logic::Collision::CollisionStateManager &, const InputPropSpy &, const LogicInputBuffer &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicSharedIO.h:55
		typedef PropContact InputPropSpy;

		// BrnCollisionStateManager.cpp:1075
		using namespace rw::math::vpu;

	}

	// BrnCollisionStateManager.h:424
	// Declaration
	void InputCollision(const CameraInfo &, BrnSound::Logic::Collision::CollisionStateManager &, const DiscardedContact &, const LogicInputBuffer &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicSharedIO.h:56
		typedef DiscardedContact DiscardedContact;

		// BrnCollisionStateManager.cpp:1169
		using namespace rw::math::vpu;

	}

	// BrnCollisionStateManager.h:433
	// Declaration
	void InputCollision(const CameraInfo &, BrnSound::Logic::Collision::CollisionStateManager &, const PhysicalCarPartContact &, const LogicInputBuffer &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicSharedIO.h:57
		typedef PhysicalCarPartContact PhysicalCarPartContact;

		// BrnCollisionStateManager.cpp:1220
		using namespace rw::math::vpu;

		// BrnCollisionStateManager.cpp:1221
		using namespace BrnWorld;

	}

	// BrnCollisionStateManager.h:442
	// Declaration
	void InputCollision(const CameraInfo &, BrnSound::Logic::Collision::CollisionStateManager &, const BrokenJointNotificationEvent &, const LogicInputBuffer &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicSharedIO.h:59
		typedef BrokenJointNotificationEvent BrokenJointNotificationEvent;

		// BrnCollisionStateManager.cpp:1345
		using namespace rw::math::vpu;

		// BrnCollisionStateManager.cpp:1346
		using namespace AttribSys::Enums::eMaterialType;

	}

	// BrnCollisionStateManager.h:451
	// Declaration
	void InputCollision(const CameraInfo &, BrnSound::Logic::Collision::CollisionStateManager &, const DetachedPartNotificationEvent &, const LogicInputBuffer &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicSharedIO.h:58
		typedef DetachedPartNotificationEvent DetachedPartNotificationEvent;

		// BrnCollisionStateManager.cpp:1394
		using namespace AttribSys::Enums::eMaterialType;

		// BrnCollisionStateManager.cpp:1395
		using namespace rw::math::vpu;

	}

	// BrnCollisionStateManager.h:460
	// Declaration
	void InputCollision(BrnSound::Logic::Collision::CollisionStateManager &, EBodyParts, EntityId, const GenericEntity &, InputCollision::EeAction, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:1293
		using namespace rw::math::vpu;

		// BrnCollisionStateManager.cpp:1294
		using namespace BrnWorld;

	}

	// BrnCollisionStateManager.h:466
	// Declaration
	void InputCollision(BrnSound::Logic::Collision::CollisionStateManager &, const GlassSmashOrCrackEvent &, const GenericEntity &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:1440
		using namespace rw::math::vpu;

		// BrnCollisionStateManager.cpp:1441
		using namespace BrnWorld;

	}

	// BrnCollisionStateManager.h:470
	void DebugPrint(const BrnSound::Logic::Collision::CollisionStateManager &) const;

	// BrnCollisionStateManager.h:474
	void SwapEntityIds(InputContactSpy &);

}

// BrnCollisionStateManager.h:486
struct BrnSound::Logic::Collision::OutputCollision {
	// BrnCollisionStateManager.h:492
	BrnSound::Logic::Collision::ECollisionSpliceBankType meBankType;

	// BrnCollisionStateManager.h:493
	BrnSound::Logic::Collision::InputCollision::EPipeline mePipeline;

	// BrnCollisionStateManager.h:494
	uint64_t[2] maMaterial;

	// BrnCollisionStateManager.h:495
	EntityId[2] maEntityID;

	// BrnCollisionStateManager.h:496
	Vector3 mPosition;

	// BrnCollisionStateManager.h:497
	InputCollision::EeAction meAction;

	// BrnCollisionStateManager.h:498
	InputCollision::EeOrientation meOrientation;

	// BrnCollisionStateManager.h:499
	BrnSound::Logic::Collision::ESize meSize;

	// BrnCollisionStateManager.h:501
	BrnSound::Logic::EFatalityFlag meFatality;

	// BrnCollisionStateManager.h:502
	DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime meImpactTime;

	// BrnCollisionStateManager.h:504
	VecFloat[3] maParameter;

	// BrnCollisionStateManager.h:505
	VecFloat mNormalizedImpulse;

	// BrnCollisionStateManager.h:507
	Attribute::Key mBinKey;

	// BrnCollisionStateManager.h:508
	ScrapeInfo mScrapeInfo;

	// BrnCollisionStateManager.h:510
	float32_t mfPriority;

	// BrnCollisionStateManager.h:513
	int8_t miBinIndex;

	// BrnCollisionStateManager.h:514
	int32_t miSampleID;

public:
	// BrnCollisionStateManager.h:487
	void OutputCollision();

	// BrnCollisionStateManager.h:517
	void DebugPrint(const BrnSound::Logic::Collision::CollisionStateManager &) const;

}

// BrnCollisionStateManager.h:528
struct BrnSound::Logic::Collision::CrashBinUtils<Attrib::Gen::crashbin> {
public:
	// BrnCollisionStateManager.h:538
	uint32_t GetSampleIds(const crashbin *, const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & (*)(), const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & (*)(unsigned int), uint16_t *, short unsigned int);

}

// BrnCollisionStateManager.h:529
struct {
	// BrnCollisionStateManager.h:529
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & (*)() __pfn;

	// BrnCollisionStateManager.h:529
	int __delta;

}

// BrnCollisionStateManager.h:530
struct {
	// BrnCollisionStateManager.h:530
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & (*)(unsigned int) __pfn;

	// BrnCollisionStateManager.h:530
	int __delta;

}

// BrnCollisionStateManager.h:528
struct BrnSound::Logic::Collision::CrashBinUtils<Attrib::Gen::propscrashbin> {
public:
	// BrnCollisionStateManager.h:538
	uint32_t GetSampleIds(const propscrashbin *, const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & (*)(), const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & (*)(unsigned int), uint16_t *, short unsigned int);

}

// BrnCollisionStateManager.h:563
struct BrnSound::Logic::Collision::CollisionStateManager : public BrnSound::Logic::BrnStateManager {
protected:
	// BrnCollisionStateManager.cpp:152
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

	// Unknown accessibility
	// BrnCollisionStateManager.cpp:82
	extern VecFloat SKF32_CAMERA_ASPECT_RATIO_NORMAL;

	// Unknown accessibility
	// BrnCollisionStateManager.cpp:83
	extern VecFloat SKF32_CAMERA_ASPECT_RATIO_WIDESCREEN;

private:
	// BrnCollisionStateManager.h:787
	BinLookupCache[2] maBinLoopupCache;

	// BrnCollisionStateManager.h:788
	SelectionHistory<512u,uint16_t,uint16_t,65536ull>[1] maSelectionHistory;

	// BrnCollisionStateManager.h:790
	RaceCarCache mRaceCarCache;

	// BrnCollisionStateManager.h:791
	HingeStateCache mHingeCache;

	// BrnCollisionStateManager.h:792
	PropToMaterialMapping[500] maPropToMaterialMappings;

	// BrnCollisionStateManager.h:794
	ScrapeInfo[16] maScrapeHistory;

	// BrnCollisionStateManager.h:795
	InputCollision[64] maInputCollision;

	// BrnCollisionStateManager.h:796
	OutputCollision[64] maOutputCollision;

	// BrnCollisionStateManager.h:798
	CameraInfo mCameraInfo;

	// BrnCollisionStateManager.h:799
	uint32_t mu32InputCollisionCount;

	// BrnCollisionStateManager.h:800
	uint32_t mu32OutputCollisionCount;

	// BrnCollisionStateManager.h:802
	FrameInformation mFrameInformation;

	// BrnCollisionStateManager.h:804
	Content mScrapesCsisInterface;

	// BrnCollisionStateManager.h:805
	Content mScrapesAemsBank;

	// BrnCollisionStateManager.h:806
	Content[1] mCollisionSplicerBank;

	// BrnCollisionStateManager.h:808
	crashbinlist mCrashBinList;

	// BrnCollisionStateManager.h:809
	propscrashbinlist mPropsCrashBinList;

	// BrnCollisionStateManager.h:810
	proptomaterialmappings mPropMaterialMappings;

	// BrnCollisionStateManager.h:812
	bool mbResourcesAreLoaded;

	// BrnCollisionStateManager.h:813
	bool mbBoundToProps;

	// BrnCollisionStateManager.h:815
	ResourceHandle mPropDataResourceHandle;

	// BrnCollisionStateManager.h:817
	uint32_t mx32CameraBinFlags;

	// BrnCollisionStateManager.h:818
	uint32_t mx32GameModeBinFlags;

	// BrnCollisionStateManager.h:820
	int32_t miTracerId;

public:
	void CollisionStateManager(const BrnSound::Logic::Collision::CollisionStateManager &);

	// BrnCollisionStateManager.cpp:152
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnCollisionStateManager.cpp:152
	virtual const char * GetTypeName() const;

	// BrnCollisionStateManager.h:567
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnCollisionStateManager.cpp:152
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnCollisionStateManager.cpp:374
	void CollisionStateManager();

	// BrnCollisionStateManager.cpp:397
	// Declaration
	virtual bool Prepare() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:427
		using namespace ParameterIndexes::CollisionSubmixVoiceSpec;

		// BrnCollisionStateManager.cpp:428
		using namespace SendIndexes::CollisionSubmixVoiceSpec;

	}

	// BrnCollisionStateManager.cpp:508
	virtual void ExitGamePlay();

	// BrnCollisionStateManager.cpp:580
	virtual void UpdateParams(float32_t);

	// BrnCollisionStateManager.cpp:678
	virtual CgsSound::Logic::State * GetFreeState(void *);

	// BrnCollisionStateManager.h:829
	const CgsSound::Logic::Content & GetSplicerBank(BrnSound::Logic::Collision::ECollisionSpliceBankType);

	// BrnCollisionStateManager.cpp:531
	// Declaration
	virtual void ResourcesAreReady() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:533
		using namespace Attrib::Gen;

	}

	// BrnCollisionStateManager.cpp:1614
	// Declaration
	void UpdateResolver(LogicInputBuffer *, const FrameInformation &, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:1616
		using namespace Module::Io;

		// BrnCollisionStateManager.cpp:1617
		using namespace BrnPhysics;

	}

	// BrnCollisionStateManager.h:611
	uint32_t GetOutputCollisionCount();

	// BrnCollisionStateManager.h:618
	const OutputCollision & GetOutputCollision(uint32_t);

	// BrnCollisionStateManager.h:629
	const CgsSound::Logic::Content & GetScrapesBank() const;

	// BrnCollisionStateManager.h:635
	const RaceCarCache & GetRaceCarCache() const;

	// BrnCollisionStateManager.cpp:761
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	// BrnCollisionStateManager.h:644
	const FrameInformation & GetFrameInformation() const;

	// BrnCollisionStateManager.cpp:3210
	// Declaration
	bool MapPropTypeToMaterial(uint16_t, uint64_t &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:3212
		using namespace BrnPhysics::Props;

	}

	// BrnCollisionStateManager.cpp:3376
	BrnSound::Logic::Collision::ECollisionSpliceBankType FindCollisionContentSpec(const char *) const;

	// BrnCollisionStateManager.cpp:829
	const char * Debug_GetMaterialName(uint64_t, BrnSound::Logic::Collision::InputCollision::EPipeline) const;

	// BrnCollisionStateManager.cpp:875
	void Debug_GetMaterialBitfieldNames(uint64_t, BrnSound::Logic::Collision::InputCollision::EPipeline, char *, uint32_t) const;

protected:
	// BrnCollisionStateManager.cpp:3403
	void SetCollisionBinList(Attribute::Key, Attribute::Key, Attribute::Key);

	// BrnCollisionStateManager.cpp:1789
	void SetCameraInfo(const RootInputBuffer::DirectorCamera &);

	// BrnCollisionStateManager.cpp:1812
	// Declaration
	void AddInputCollision(const InputCollision &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:1857
		using namespace rw::math::vpu;

	}

	// BrnCollisionStateManager.cpp:3078
	// Declaration
	void UpdateHingingBodyParts(const JointedPartStateQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicSharedIO.h:69
		typedef DeformationOutputInterface::JointedPartStateQueue JointedPartStateQueue;

		// BrnCollisionStateManager.cpp:3080
		using namespace Module::Io;

		// BrnCollisionStateManager.cpp:3081
		using namespace rw::math::fpu;

	}

	// BrnCollisionStateManager.cpp:2678
	// Declaration
	void UpdateScrapes(const FrameInformation &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:2680
		using namespace rw::math::vpu;

	}

	// BrnCollisionStateManager.cpp:3458
	// Declaration
	void UpdateGlass(const DeformationOutputInterface &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:3460
		using namespace BrnPhysics::Deformation;

	}

	// BrnCollisionStateManager.cpp:2044
	void CullInputCollisions();

	// BrnCollisionStateManager.cpp:2113
	// Declaration
	void CullInputCollisions_RemoveDuplicates() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:2115
		using namespace rw::math::vpu;

	}

	// BrnCollisionStateManager.cpp:1907
	void CullAgainstPlaying();

	// BrnCollisionStateManager.cpp:2304
	bool IsInputCollisionCullable(uint32_t) const;

	// BrnCollisionStateManager.h:716
	void CalculateThresholds();

	// BrnCollisionStateManager.cpp:2322
	void ProcessCollisions();

	// BrnCollisionStateManager.cpp:2347
	// Declaration
	bool ProcessCollision(OutputCollision &, const InputCollision &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:2349
		using namespace Attrib::Gen;

	}

	// BrnCollisionStateManager.h:727
	void DispatchOutputCollisions();

	// BrnCollisionStateManager.cpp:2856
	ScrapeInfo * FindInScrapeHistory(const ScrapeInfo &);

	// BrnCollisionStateManager.h:750
	const ScrapeInfo * FindInScrapeHistory(const ScrapeInfo &) const;

	// BrnCollisionStateManager.cpp:2881
	ScrapeInfo * FindOldestScrapeInHistory();

	// BrnCollisionStateManager.cpp:3000
	// Declaration
	bool FindEntity(const EntityId &, GenericEntity &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:3002
		using namespace Module::Io;

		// BrnCollisionStateManager.cpp:3003
		using namespace BrnWorld;

		// BrnCollisionStateManager.cpp:3004
		using namespace BrnPhysics::Vehicle;

	}

	// BrnCollisionStateManager.cpp:2975
	bool UniqueScrape(const ScrapeInfo &, const InputCollision *const*, uint32_t) const;

	// BrnCollisionStateManager.cpp:2916
	void UpdateScrapeHistory(const FrameInformation &);

	// BrnCollisionStateManager.cpp:3865
	// Declaration
	void DebugDumpProps() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:3869
		using namespace BrnPhysics::Props;

		// BrnCollisionStateManager.cpp:3874
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3877
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3879
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3881
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3889
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3893
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3895
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3898
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3902
		using namespace CgsDev::Message;

	}

private:
	// BrnCollisionStateManager.cpp:3316
	// Declaration
	void BuildPropToMaterialTable() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCollisionStateManager.cpp:3318
		using namespace BrnPhysics::Props;

		// BrnCollisionStateManager.cpp:3352
		using namespace CgsDev::Message;

		// BrnCollisionStateManager.cpp:3357
		using namespace CgsDev::Message;

	}

public:
	virtual void ~CollisionStateManager();

}

// BrnCollisionStateManager.h:626
extern void GetRandomSampleID<Attrib::Gen::propscrashbin>(OutputCollision *  lpOutColl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:2218
		const OutputCollision & lOutputCollision;

		// BrnCollisionStateManager.cpp:2219
		propscrashbin lCrashBin;

		// BrnCollisionStateManager.cpp:2222
		extern const uint32_t KU_MX_SAMPLE_ARRAY_SIZE;

		// BrnCollisionStateManager.cpp:2224
		uint32_t lu16SampleCount;

		// BrnCollisionStateManager.cpp:2225
		uint16_t[32] la16SampleIndicies;

		// BrnCollisionStateManager.cpp:2270
		uint16_t luSampleId;

	}
	Attrib::Gen::propscrashbin::propscrashbin(/* parameters */);
	FindRandomOldest<uint16_t, 32u>(/* parameters */);
	CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull>::FindResult::FindResult(/* parameters */);
	{
	}
	std::sort<CgsSound::Utils::SelectionHistory<512u, uint16_t, uint16_t, 65536ull>::FindResult*, bool (*)(const CgsSound::Utils::SelectionHistory<512u, uint16_t, uint16_t, 65536ull>::FindResult&, const CgsSound::Utils::SelectionHistory<512u, uint16_t, uint16_t, 65536ull>::FindResult&)>(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull>::Update(/* parameters */);
	Attrib::Gen::propscrashbin::~propscrashbin(/* parameters */);
	BrnSound::Logic::Collision::CrashBinUtils<Attrib::Gen::propscrashbin>::GetSampleIds(/* parameters */);
	BrnSound::Logic::Collision::CrashBinUtils<Attrib::Gen::propscrashbin>::GetSampleIds(/* parameters */);
	BrnSound::Module::SoundLogicModule::GetRandomGenerator(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
	CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull>::Randomize(/* parameters */);
	BrnSound::Logic::Collision::CrashBinUtils<Attrib::Gen::propscrashbin>::GetSampleIds(/* parameters */);
}

// BrnCollisionStateManager.h:626
extern void GetRandomSampleID<Attrib::Gen::crashbin>(OutputCollision *  lpOutColl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:2218
		const OutputCollision & lOutputCollision;

		// BrnCollisionStateManager.cpp:2219
		crashbin lCrashBin;

		// BrnCollisionStateManager.cpp:2222
		extern const uint32_t KU_MX_SAMPLE_ARRAY_SIZE;

		// BrnCollisionStateManager.cpp:2224
		uint32_t lu16SampleCount;

		// BrnCollisionStateManager.cpp:2225
		uint16_t[32] la16SampleIndicies;

		// BrnCollisionStateManager.cpp:2270
		uint16_t luSampleId;

	}
	Attrib::Gen::crashbin::crashbin(/* parameters */);
	FindRandomOldest<uint16_t, 32u>(/* parameters */);
	CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull>::FindResult::FindResult(/* parameters */);
	{
	}
	std::sort<CgsSound::Utils::SelectionHistory<512u, uint16_t, uint16_t, 65536ull>::FindResult*, bool (*)(const CgsSound::Utils::SelectionHistory<512u, uint16_t, uint16_t, 65536ull>::FindResult&, const CgsSound::Utils::SelectionHistory<512u, uint16_t, uint16_t, 65536ull>::FindResult&)>(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull>::Update(/* parameters */);
	Attrib::Gen::crashbin::~crashbin(/* parameters */);
	BrnSound::Logic::Collision::CrashBinUtils<Attrib::Gen::crashbin>::GetSampleIds(/* parameters */);
	BrnSound::Logic::Collision::CrashBinUtils<Attrib::Gen::crashbin>::GetSampleIds(/* parameters */);
	BrnSound::Module::SoundLogicModule::GetRandomGenerator(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
	CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull>::Randomize(/* parameters */);
	BrnSound::Logic::Collision::CrashBinUtils<Attrib::Gen::crashbin>::GetSampleIds(/* parameters */);
}

// BrnCollisionStateManager.h:563
void BrnSound::Logic::Collision::CollisionStateManager::~CollisionStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCollisionStateManager.h:247
extern void Build<Attrib::Gen::crashbinlist, Attrib::Gen::crashbin>(const const crashbinlist &  lList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.h:251
		int i;

		{
			// BrnCollisionStateManager.h:253
			Attribute::Key lBinKey;

			// BrnCollisionStateManager.h:254
			crashbin lCrashBin;

		}
	}
}

// BrnCollisionStateManager.h:247
extern void Build<Attrib::Gen::propscrashbinlist, Attrib::Gen::propscrashbin>(const const propscrashbinlist &  lList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.h:251
		int i;

		{
			// BrnCollisionStateManager.h:253
			Attribute::Key lBinKey;

			// BrnCollisionStateManager.h:254
			propscrashbin lCrashBin;

		}
	}
}

// BrnCollisionStateManager.h:166
extern const uint32_t KU_CACHE_SIZE = 32;

// BrnCollisionStateManager.h:234
extern const uint32_t KU_CACHE_SIZE = 64;

