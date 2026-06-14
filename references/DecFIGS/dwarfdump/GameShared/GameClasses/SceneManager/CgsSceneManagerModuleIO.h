// CgsSceneManagerModuleIO.h:154
struct CgsSceneManager::SceneManagerIO::InEventLineTest : public Event {
	// CgsSceneManagerModuleIO.h:156
	Vector3 mLineStart;

	// CgsSceneManagerModuleIO.h:157
	Vector3 mLineEnd;

	// CgsSceneManagerModuleIO.h:159
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:160
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

}

// CgsSceneManagerModuleIO.h:217
struct CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult : public Event {
	// CgsSceneManagerModuleIO.h:219
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:220
	int32_t miNumIntersections;

	// CgsSceneManagerModuleIO.h:222
	float32_t[2] mafPad;

public:
	// CgsSceneManagerModuleIO.h:227
	LineTestIntersection * GetIntersections() const;

}

// CgsSceneManagerModuleIO.h:237
struct CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult : public Event {
	// CgsSceneManagerModuleIO.h:239
	Vector3 mPosition;

	// CgsSceneManagerModuleIO.h:240
	Vector3 mNormal;

	// CgsSceneManagerModuleIO.h:241
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerModuleIO.h:242
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:243
	EntityId mEntityId;

	// CgsSceneManagerModuleIO.h:244
	float32_t mfLineParam;

	// CgsSceneManagerModuleIO.h:245
	uint16_t mu16MaterialTag;

	// CgsSceneManagerModuleIO.h:246
	uint16_t mu16GroupTag;

	// CgsSceneManagerModuleIO.h:247
	bool mbIntersection;

}

// CgsSceneManagerModuleIO.h:251
struct CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult : public Event {
	// CgsSceneManagerModuleIO.h:253
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:254
	bool mbIntersection;

}

// CgsSceneManagerModuleIO.h:258
struct CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult : public Event {
	// CgsSceneManagerModuleIO.h:260
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:261
	bool mbIntersection;

}

// CgsSceneManagerModuleIO.h:265
struct CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult : public Event {
	// CgsSceneManagerModuleIO.h:267
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:268
	float32_t mfDepth;

	// CgsSceneManagerModuleIO.h:269
	bool mbIntersection;

}

// CgsSceneManagerModuleIO.h:273
struct CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult : public Event {
	// CgsSceneManagerModuleIO.h:275
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:276
	int32_t miNumEntities;

public:
	// CgsSceneManagerModuleIO.h:281
	EntityId * GetEntityIds() const;

}

// CgsSceneManagerModuleIO.h:293
struct CgsSceneManager::SceneManagerIO::OutOverlapPair : public Event {
	// CgsSceneManagerModuleIO.h:295
	VolumeInstanceId mVolInstA;

	// CgsSceneManagerModuleIO.h:296
	VolumeInstanceId mVolInstB;

	// CgsSceneManagerModuleIO.h:297
	float32_t mfPadding;

}

// CgsSceneManagerModuleIO.h:316
struct CgsSceneManager::SceneManagerIO::SceneQueryInterface {
	// CgsSceneManagerModuleIO.h:180
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> InFineLineTestBaseQueue;

private:
	// CgsSceneManagerModuleIO.h:426
	SceneQueryInterface::InFineLineTestBaseQueue * mpFineLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:181
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> InFineLineTestNearestBaseQueue;

	// CgsSceneManagerModuleIO.h:427
	SceneQueryInterface::InFineLineTestNearestBaseQueue * mpFineLineTestNearestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:182
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> InFineLineTestFastDoubleSidedBaseQueue;

	// CgsSceneManagerModuleIO.h:428
	SceneQueryInterface::InFineLineTestFastDoubleSidedBaseQueue * mpFineLineTestFastDoubleSidedQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:183
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> InFineSphereTestFastBaseQueue;

	// CgsSceneManagerModuleIO.h:429
	SceneQueryInterface::InFineSphereTestFastBaseQueue * mpFineSphereTestFastQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:184
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> InFineVolumeTestDeepestBaseQueue;

	// CgsSceneManagerModuleIO.h:430
	SceneQueryInterface::InFineVolumeTestDeepestBaseQueue * mpFineVolumeTestDeepestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:185
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> InFineVolumeTestBaseQueue;

	// CgsSceneManagerModuleIO.h:431
	SceneQueryInterface::InFineVolumeTestBaseQueue * mpFineVolumeTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:187
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> InTriangleCollisionLineTestBaseQueue;

	// CgsSceneManagerModuleIO.h:432
	SceneQueryInterface::InTriangleCollisionLineTestBaseQueue * mpTriangleCollisionLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:188
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> InTriangleCollisionLineTestNearestBaseQueue;

	// CgsSceneManagerModuleIO.h:433
	SceneQueryInterface::InTriangleCollisionLineTestNearestBaseQueue * mpTriangleCollisionLineTestNearestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:189
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> InTriangleCollisionSphereTestBaseQueue;

	// CgsSceneManagerModuleIO.h:434
	SceneQueryInterface::InTriangleCollisionSphereTestBaseQueue * mpTriangleCollisionSphereTestQueue;

public:
	// CgsSceneManagerModuleIO.h:329
	void Construct(SceneQueryInterface::InFineLineTestBaseQueue *, SceneQueryInterface::InFineLineTestNearestBaseQueue *, SceneQueryInterface::InFineLineTestFastDoubleSidedBaseQueue *, SceneQueryInterface::InFineSphereTestFastBaseQueue *, SceneQueryInterface::InFineVolumeTestDeepestBaseQueue *, SceneQueryInterface::InFineVolumeTestBaseQueue *, SceneQueryInterface::InTriangleCollisionLineTestBaseQueue *, SceneQueryInterface::InTriangleCollisionLineTestNearestBaseQueue *, SceneQueryInterface::InTriangleCollisionSphereTestBaseQueue *);

	// CgsSceneManagerModuleIO.h:332
	void Destruct();

	// CgsSceneManagerModuleIO.h:335
	bool HasData() const;

	// CgsSceneManagerModuleIO.h:346
	void LineTestFine(SceneQueryId, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:357
	void LineTestNearest(SceneQueryId, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:368
	void LineTestFastDoubleSided(SceneQueryId, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:379
	void SphereTestFast(SceneQueryId, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, VecFloat, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:390
	void VolumeTestDeepest(SceneQueryId, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:401
	void VolumeTestFine(SceneQueryId, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:405
	void Append(const SceneQueryInterface &);

	// CgsSceneManagerModuleIO.h:408
	void Clear();

	// CgsSceneManagerModuleIO.h:411
	void SceneQueryInterface();

	// CgsSceneManagerModuleIO.h:414
	bool IsEmpty() const;

private:
	// CgsSceneManagerModuleIO.h:420
	void SceneQueryInterface(const SceneQueryInterface &);

	// CgsSceneManagerModuleIO.h:424
	const SceneQueryInterface & operator=(const SceneQueryInterface &);

}

// CgsSceneManagerModuleIO.h:481
struct CgsSceneManager::SceneManagerIO::InputBuffer_Query : public IOBuffer {
private:
	// CgsSceneManagerModuleIO.h:540
	SceneQueryInterface mSceneQueryInterface;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:165
	typedef InCoarseQueryQueue<16384> InSmCoarseQueryQueue;

	// CgsSceneManagerModuleIO.h:543
	InputBuffer_Query::InSmCoarseQueryQueue mCoarseQueryQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:168
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256> InCoarseLineTestQueue;

	// CgsSceneManagerModuleIO.h:546
	InputBuffer_Query::InCoarseLineTestQueue mCoarseLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:169
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256> InFineLineTestQueue;

	// CgsSceneManagerModuleIO.h:547
	InputBuffer_Query::InFineLineTestQueue mFineLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:170
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256> InFineLineTestNearestQueue;

	// CgsSceneManagerModuleIO.h:548
	InputBuffer_Query::InFineLineTestNearestQueue mFineLineTestNearestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:171
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16> InFineLineTestFastDoubleSidedQueue;

	// CgsSceneManagerModuleIO.h:549
	InputBuffer_Query::InFineLineTestFastDoubleSidedQueue mFineLineTestFastDoubleSidedQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:172
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16> InFineSphereTestFastQueue;

	// CgsSceneManagerModuleIO.h:550
	InputBuffer_Query::InFineSphereTestFastQueue mFineSphereTestFastQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:173
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256> InFineVolumeTestDeepestQueue;

	// CgsSceneManagerModuleIO.h:551
	InputBuffer_Query::InFineVolumeTestDeepestQueue mFineVolumeTestDeepestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:174
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64> InFineVolumeTestQueue;

	// CgsSceneManagerModuleIO.h:552
	InputBuffer_Query::InFineVolumeTestQueue mFineVolumeTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:176
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256> InTriangleCollisionLineTestQueue;

	// CgsSceneManagerModuleIO.h:553
	InputBuffer_Query::InTriangleCollisionLineTestQueue mTriangleCollisionLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:177
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256> InTriangleCollisionLineTestNearestQueue;

	// CgsSceneManagerModuleIO.h:554
	InputBuffer_Query::InTriangleCollisionLineTestNearestQueue mTriangleCollisionLineTestNearestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:178
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256> InTriangleCollisionSphereTestQueue;

	// CgsSceneManagerModuleIO.h:555
	InputBuffer_Query::InTriangleCollisionSphereTestQueue mTriangleCollisionSphereTestQueue;

public:
	// CgsSceneManagerModuleIO.h:486
	void Construct();

	// CgsSceneManagerModuleIO.h:490
	void Destruct();

	// CgsSceneManagerModuleIO.h:494
	void AddLineTestFineQuery(const InEventLineTestFine &);

	// CgsSceneManagerModuleIO.h:498
	void AddLineTestNearestQuery(const InEventLineTestNearest &);

	// CgsSceneManagerModuleIO.h:502
	void AddVolumeTestDeepestQuery(const InEventVolumeTestDeepest &);

	// CgsSceneManagerModuleIO.h:506
	void AddVolumeTestFineQuery(const InEventVolumeTestFine &);

	// CgsSceneManagerModuleIO.h:509
	const InputBuffer_Query::InSmCoarseQueryQueue * GetCoarseQueryQueue() const;

	// CgsSceneManagerModuleIO.h:510
	const InputBuffer_Query::InCoarseLineTestQueue * GetCoarseLineTestQueue() const;

	// CgsSceneManagerModuleIO.h:511
	const InputBuffer_Query::InFineLineTestQueue * GetFineLineTestQueue() const;

	// CgsSceneManagerModuleIO.h:512
	const InputBuffer_Query::InFineLineTestNearestQueue * GetFineLineTestNearestQueue() const;

	// CgsSceneManagerModuleIO.h:513
	const InputBuffer_Query::InFineLineTestFastDoubleSidedQueue * GetFineLineTestFastDoubleSidedQueue() const;

	// CgsSceneManagerModuleIO.h:514
	const InputBuffer_Query::InFineSphereTestFastQueue * GetFineSphereTestFastQueue() const;

	// CgsSceneManagerModuleIO.h:515
	const InputBuffer_Query::InFineVolumeTestDeepestQueue * GetFineVolumeTestDeepestQueue() const;

	// CgsSceneManagerModuleIO.h:516
	const InputBuffer_Query::InFineVolumeTestQueue * GetFineVolumeTestQueue() const;

	// CgsSceneManagerModuleIO.h:517
	const InputBuffer_Query::InTriangleCollisionLineTestQueue * GetTriangleCollisionLineTestQueue() const;

	// CgsSceneManagerModuleIO.h:518
	const InputBuffer_Query::InTriangleCollisionLineTestNearestQueue * GetTriangleCollisionLineTestNearestQueue() const;

	// CgsSceneManagerModuleIO.h:519
	const InputBuffer_Query::InTriangleCollisionSphereTestQueue * GetTriangleCollisionSphereTestQueue() const;

	// CgsSceneManagerModuleIO.h:522
	InputBuffer_Query::InSmCoarseQueryQueue * GetCoarseQueryQueue();

	// CgsSceneManagerModuleIO.h:523
	InputBuffer_Query::InFineLineTestQueue * GetFineLineTestQueue();

	// CgsSceneManagerModuleIO.h:524
	InputBuffer_Query::InTriangleCollisionLineTestQueue * GetTriangleCollisionLineTestQueue();

	// CgsSceneManagerModuleIO.h:525
	InputBuffer_Query::InTriangleCollisionLineTestNearestQueue * GetTriangleCollisionLineTestNearestQueue();

	// CgsSceneManagerModuleIO.h:526
	InputBuffer_Query::InTriangleCollisionSphereTestQueue * GetTriangleCollisionSphereTestQueue();

	// CgsSceneManagerModuleIO.h:528
	SceneQueryInterface * GetSceneQueryInterface();

	// CgsSceneManagerModuleIO.h:532
	void Clear();

	// CgsSceneManagerModuleIO.h:536
	bool IsEmpty() const;

}

// CgsSceneManagerModuleIO.h:568
struct CgsSceneManager::SceneManagerIO::TriangleCacheInterface {
private:
	// CgsSceneManagerModuleIO.h:598
	const TriangleCacheManager * mpTriangleCacheManager;

public:
	// CgsSceneManagerModuleIO.h:572
	void Construct();

	// CgsSceneManagerModuleIO.h:575
	void Destruct();

	// CgsSceneManagerModuleIO.h:579
	void SetTriangleCacheManager(const TriangleCacheManager *);

	// CgsSceneManagerModuleIO.h:583
	void Append(const TriangleCacheInterface *);

	// CgsSceneManagerModuleIO.h:590
	const Triangle4 * GetCachedTriangles(int32_t) const;

	// CgsSceneManagerModuleIO.h:594
	int32_t GetNumCachedTriangleBatches(int32_t) const;

}

// CgsSceneManagerModuleIO.h:58
struct CgsSceneManager::SceneManagerIO::OutSceneQueryResultsQueue<32768> : public VariableEventQueue<32768,16> {
public:
	// CgsSceneManagerModuleIO.h:65
	EntityId * AllocateCoarseResult(SceneQueryId, int, int);

	// CgsSceneManagerModuleIO.h:71
	LineTestIntersection * AddLineTestFineResult(SceneQueryId, int);

	// CgsSceneManagerModuleIO.h:84
	void AddLineTestNearestResult(SceneQueryId, EntityId, VolumeInstanceId, Vector3, Vector3, float, short unsigned int, short unsigned int, bool);

	// CgsSceneManagerModuleIO.h:90
	void AddLineTestFastDoubleSidedResult(SceneQueryId, bool);

	// CgsSceneManagerModuleIO.h:96
	void AddSphereTestFastResult(SceneQueryId, bool);

	// CgsSceneManagerModuleIO.h:104
	LineTestIntersection * AddTriangleCollisionLineTestResult(SceneQueryId, EntityId, VolumeInstanceId, const LineTestResult *, int);

	// CgsSceneManagerModuleIO.h:112
	void AddTriangleCollisionLineTestNearestResult(SceneQueryId, EntityId, VolumeInstanceId, const LineTestResult *, bool);

	// CgsSceneManagerModuleIO.h:118
	void AddVolumeTestDeepestResult(SceneQueryId, float, bool);

	// CgsSceneManagerModuleIO.h:124
	EntityId * AddVolumeTestFineResult(SceneQueryId, int, const uint16_t *);

}

// CgsSceneManagerModuleIO.h:141
struct CgsSceneManager::SceneManagerIO::OutErrorQueue<128> : public EventQueue<CgsSceneManager::ErrorEvent,128> {
}

// CgsSceneManagerModuleIO.h:612
struct CgsSceneManager::SceneManagerIO::OutputBuffer : public IOBuffer {
	// CgsSceneManagerModuleIO.h:303
	typedef OutSceneQueryResultsQueue<32768> OutSmSceneQueryResultsQueue;

private:
	// CgsSceneManagerModuleIO.h:640
	OutputBuffer::OutSmSceneQueryResultsQueue mResultsQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:290
	typedef EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048> OutPotentialContactQueue;

	// CgsSceneManagerModuleIO.h:643
	OutputBuffer::OutPotentialContactQueue mPotentialContactQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:300
	typedef EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128> OutOverlapPairsQueue;

	// CgsSceneManagerModuleIO.h:646
	OutputBuffer::OutOverlapPairsQueue mOverlapPairsQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:304
	typedef OutErrorQueue<128> OutSmErrorQueue;

	// CgsSceneManagerModuleIO.h:649
	OutputBuffer::OutSmErrorQueue mErrorQueue;

	// CgsSceneManagerModuleIO.h:652
	TriangleCacheInterface mTriangleCacheInterface;

public:
	// CgsSceneManagerModuleIO.h:617
	void Construct();

	// CgsSceneManagerModuleIO.h:621
	void Destruct();

	// CgsSceneManagerModuleIO.h:624
	const OutputBuffer::OutSmSceneQueryResultsQueue * GetResultsQueue() const;

	// CgsSceneManagerModuleIO.h:625
	const OutputBuffer::OutPotentialContactQueue * GetPotentialContactQueue() const;

	// CgsSceneManagerModuleIO.h:626
	const OutputBuffer::OutSmErrorQueue * GetErrorQueue() const;

	// CgsSceneManagerModuleIO.h:627
	const OutputBuffer::OutOverlapPairsQueue * GetOverlapPairsQueue() const;

	// CgsSceneManagerModuleIO.h:628
	const TriangleCacheInterface * GetTriangleCacheInterface() const;

	// CgsSceneManagerModuleIO.h:631
	OutputBuffer::OutSmSceneQueryResultsQueue * GetResultsQueue();

	// CgsSceneManagerModuleIO.h:632
	OutputBuffer::OutPotentialContactQueue * GetPotentialContactQueue();

	// CgsSceneManagerModuleIO.h:633
	OutputBuffer::OutOverlapPairsQueue * GetOverlapPairsQueue();

	// CgsSceneManagerModuleIO.h:634
	TriangleCacheInterface * GetTriangleCacheInterface();

}

// CgsSceneManagerModuleIO.h:58
struct CgsSceneManager::SceneManagerIO::OutSceneQueryResultsQueue<4032> : public VariableEventQueue<4032,16> {
public:
	// CgsSceneManagerModuleIO.h:755
	EntityId * AllocateCoarseResult(SceneQueryId, int, int);

	// CgsSceneManagerModuleIO.h:772
	LineTestIntersection * AddLineTestFineResult(SceneQueryId, int);

	// CgsSceneManagerModuleIO.h:795
	void AddLineTestNearestResult(SceneQueryId, EntityId, VolumeInstanceId, Vector3, Vector3, float, short unsigned int, short unsigned int, bool);

	// CgsSceneManagerModuleIO.h:815
	void AddLineTestFastDoubleSidedResult(SceneQueryId, bool);

	// CgsSceneManagerModuleIO.h:828
	void AddSphereTestFastResult(SceneQueryId, bool);

	// CgsSceneManagerModuleIO.h:843
	LineTestIntersection * AddTriangleCollisionLineTestResult(SceneQueryId, EntityId, VolumeInstanceId, const LineTestResult *, int);

	// CgsSceneManagerModuleIO.h:877
	void AddTriangleCollisionLineTestNearestResult(SceneQueryId, EntityId, VolumeInstanceId, const LineTestResult *, bool);

	// CgsSceneManagerModuleIO.h:903
	void AddVolumeTestDeepestResult(SceneQueryId, float, bool);

	// CgsSceneManagerModuleIO.h:918
	EntityId * AddVolumeTestFineResult(SceneQueryId, int, const uint16_t *);

}

// CgsSceneManagerModuleIO.h:154
struct CgsSceneManager::SceneManagerIO::InEventLineTest : public Event {
	// CgsSceneManagerModuleIO.h:156
	Vector3 mLineStart;

	// CgsSceneManagerModuleIO.h:157
	Vector3 mLineEnd;

	// CgsSceneManagerModuleIO.h:159
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:160
	InEventAddEntity::EntityTypeFlags mx32EntityTypeFlags;

}

// CgsSceneManagerModuleIO.h:316
struct CgsSceneManager::SceneManagerIO::SceneQueryInterface {
	// CgsSceneManagerModuleIO.h:180
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> InFineLineTestBaseQueue;

private:
	// CgsSceneManagerModuleIO.h:426
	SceneQueryInterface::InFineLineTestBaseQueue * mpFineLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:181
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> InFineLineTestNearestBaseQueue;

	// CgsSceneManagerModuleIO.h:427
	SceneQueryInterface::InFineLineTestNearestBaseQueue * mpFineLineTestNearestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:182
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> InFineLineTestFastDoubleSidedBaseQueue;

	// CgsSceneManagerModuleIO.h:428
	SceneQueryInterface::InFineLineTestFastDoubleSidedBaseQueue * mpFineLineTestFastDoubleSidedQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:183
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> InFineSphereTestFastBaseQueue;

	// CgsSceneManagerModuleIO.h:429
	SceneQueryInterface::InFineSphereTestFastBaseQueue * mpFineSphereTestFastQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:184
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> InFineVolumeTestDeepestBaseQueue;

	// CgsSceneManagerModuleIO.h:430
	SceneQueryInterface::InFineVolumeTestDeepestBaseQueue * mpFineVolumeTestDeepestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:185
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> InFineVolumeTestBaseQueue;

	// CgsSceneManagerModuleIO.h:431
	SceneQueryInterface::InFineVolumeTestBaseQueue * mpFineVolumeTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:187
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> InTriangleCollisionLineTestBaseQueue;

	// CgsSceneManagerModuleIO.h:432
	SceneQueryInterface::InTriangleCollisionLineTestBaseQueue * mpTriangleCollisionLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:188
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> InTriangleCollisionLineTestNearestBaseQueue;

	// CgsSceneManagerModuleIO.h:433
	SceneQueryInterface::InTriangleCollisionLineTestNearestBaseQueue * mpTriangleCollisionLineTestNearestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:189
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> InTriangleCollisionSphereTestBaseQueue;

	// CgsSceneManagerModuleIO.h:434
	SceneQueryInterface::InTriangleCollisionSphereTestBaseQueue * mpTriangleCollisionSphereTestQueue;

public:
	// CgsSceneManagerModuleIO.h:329
	void Construct(SceneQueryInterface::InFineLineTestBaseQueue *, SceneQueryInterface::InFineLineTestNearestBaseQueue *, SceneQueryInterface::InFineLineTestFastDoubleSidedBaseQueue *, SceneQueryInterface::InFineSphereTestFastBaseQueue *, SceneQueryInterface::InFineVolumeTestDeepestBaseQueue *, SceneQueryInterface::InFineVolumeTestBaseQueue *, SceneQueryInterface::InTriangleCollisionLineTestBaseQueue *, SceneQueryInterface::InTriangleCollisionLineTestNearestBaseQueue *, SceneQueryInterface::InTriangleCollisionSphereTestBaseQueue *);

	// CgsSceneManagerModuleIO.h:332
	void Destruct();

	// CgsSceneManagerModuleIO.h:335
	bool HasData() const;

	// CgsSceneManagerModuleIO.h:346
	void LineTestFine(SceneQueryId, InEventAddEntity::EntityTypeFlags, InEventAddDynamicVolume::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:357
	void LineTestNearest(SceneQueryId, InEventAddEntity::EntityTypeFlags, InEventAddDynamicVolume::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:368
	void LineTestFastDoubleSided(SceneQueryId, InEventAddEntity::EntityTypeFlags, InEventAddDynamicVolume::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:379
	void SphereTestFast(SceneQueryId, InEventAddEntity::EntityTypeFlags, InEventAddDynamicVolume::VolumeTypeFlags, Vector3, VecFloat, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:390
	void VolumeTestDeepest(SceneQueryId, InEventAddEntity::EntityTypeFlags, InEventAddDynamicVolume::VolumeTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:401
	void VolumeTestFine(SceneQueryId, InEventAddEntity::EntityTypeFlags, InEventAddDynamicVolume::VolumeTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:405
	void Append(const SceneQueryInterface &);

	// CgsSceneManagerModuleIO.h:408
	void Clear();

	// CgsSceneManagerModuleIO.h:411
	void SceneQueryInterface();

	// CgsSceneManagerModuleIO.h:414
	bool IsEmpty() const;

private:
	// CgsSceneManagerModuleIO.h:420
	void SceneQueryInterface(const SceneQueryInterface &);

	// CgsSceneManagerModuleIO.h:424
	const SceneQueryInterface & operator=(const SceneQueryInterface &);

}

// CgsSceneManagerModuleIO.h:447
struct CgsSceneManager::SceneManagerIO::InputBuffer_Update : public IOBuffer {
	// CgsSceneManagerModuleIO.h:164
	typedef InSceneUpdateInterface InSmSceneUpdateInterface;

private:
	// CgsSceneManagerModuleIO.h:467
	InputBuffer_Update::InSmSceneUpdateInterface mSceneUpdateInterface;

public:
	// CgsSceneManagerModuleIO.h:452
	void Construct();

	// CgsSceneManagerModuleIO.h:456
	void Destruct();

	// CgsSceneManagerModuleIO.h:460
	void Clear();

	// CgsSceneManagerModuleIO.h:462
	const InputBuffer_Update::InSmSceneUpdateInterface * GetSceneUpdateInterface() const;

	// CgsSceneManagerModuleIO.h:463
	InputBuffer_Update::InSmSceneUpdateInterface * GetSceneUpdateInterface();

}

// CgsSceneManagerModuleIO.h:198
struct CgsSceneManager::SceneManagerIO::OutEventCoarseTestResult : public Event {
	// CgsSceneManagerModuleIO.h:200
	SceneQueryId mQueryId;

	// CgsSceneManagerModuleIO.h:201
	int32_t miNumResultsStored;

	// CgsSceneManagerModuleIO.h:202
	int32_t miActualNumResults;

public:
	// CgsSceneManagerModuleIO.h:207
	EntityId * GetEntityIds() const;

}

// CgsSceneManagerModuleIO.h:316
struct CgsSceneManager::SceneManagerIO::SceneQueryInterface {
	// CgsSceneManagerModuleIO.h:180
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> InFineLineTestBaseQueue;

private:
	// CgsSceneManagerModuleIO.h:426
	SceneQueryInterface::InFineLineTestBaseQueue * mpFineLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:181
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> InFineLineTestNearestBaseQueue;

	// CgsSceneManagerModuleIO.h:427
	SceneQueryInterface::InFineLineTestNearestBaseQueue * mpFineLineTestNearestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:182
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> InFineLineTestFastDoubleSidedBaseQueue;

	// CgsSceneManagerModuleIO.h:428
	SceneQueryInterface::InFineLineTestFastDoubleSidedBaseQueue * mpFineLineTestFastDoubleSidedQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:183
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> InFineSphereTestFastBaseQueue;

	// CgsSceneManagerModuleIO.h:429
	SceneQueryInterface::InFineSphereTestFastBaseQueue * mpFineSphereTestFastQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:184
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> InFineVolumeTestDeepestBaseQueue;

	// CgsSceneManagerModuleIO.h:430
	SceneQueryInterface::InFineVolumeTestDeepestBaseQueue * mpFineVolumeTestDeepestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:185
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> InFineVolumeTestBaseQueue;

	// CgsSceneManagerModuleIO.h:431
	SceneQueryInterface::InFineVolumeTestBaseQueue * mpFineVolumeTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:187
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> InTriangleCollisionLineTestBaseQueue;

	// CgsSceneManagerModuleIO.h:432
	SceneQueryInterface::InTriangleCollisionLineTestBaseQueue * mpTriangleCollisionLineTestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:188
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> InTriangleCollisionLineTestNearestBaseQueue;

	// CgsSceneManagerModuleIO.h:433
	SceneQueryInterface::InTriangleCollisionLineTestNearestBaseQueue * mpTriangleCollisionLineTestNearestQueue;

	// Unknown accessibility
	// CgsSceneManagerModuleIO.h:189
	typedef CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> InTriangleCollisionSphereTestBaseQueue;

	// CgsSceneManagerModuleIO.h:434
	SceneQueryInterface::InTriangleCollisionSphereTestBaseQueue * mpTriangleCollisionSphereTestQueue;

public:
	// CgsSceneManagerModuleIO.h:329
	void Construct(SceneQueryInterface::InFineLineTestBaseQueue *, SceneQueryInterface::InFineLineTestNearestBaseQueue *, SceneQueryInterface::InFineLineTestFastDoubleSidedBaseQueue *, SceneQueryInterface::InFineSphereTestFastBaseQueue *, SceneQueryInterface::InFineVolumeTestDeepestBaseQueue *, SceneQueryInterface::InFineVolumeTestBaseQueue *, SceneQueryInterface::InTriangleCollisionLineTestBaseQueue *, SceneQueryInterface::InTriangleCollisionLineTestNearestBaseQueue *, SceneQueryInterface::InTriangleCollisionSphereTestBaseQueue *);

	// CgsSceneManagerModuleIO.h:332
	void Destruct();

	// CgsSceneManagerModuleIO.h:335
	bool HasData() const;

	// CgsSceneManagerModuleIO.h:346
	void LineTestFine(SceneQueryId, InEventLineTestFine::EntityTypeFlags, VolumeManagerVolume::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:357
	void LineTestNearest(SceneQueryId, InEventLineTestFine::EntityTypeFlags, VolumeManagerVolume::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:368
	void LineTestFastDoubleSided(SceneQueryId, InEventLineTestFine::EntityTypeFlags, VolumeManagerVolume::VolumeTypeFlags, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:379
	void SphereTestFast(SceneQueryId, InEventLineTestFine::EntityTypeFlags, VolumeManagerVolume::VolumeTypeFlags, Vector3, VecFloat, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:390
	void VolumeTestDeepest(SceneQueryId, InEventLineTestFine::EntityTypeFlags, VolumeManagerVolume::VolumeTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:401
	void VolumeTestFine(SceneQueryId, InEventLineTestFine::EntityTypeFlags, VolumeManagerVolume::VolumeTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerModuleIO.h:405
	void Append(const SceneQueryInterface &);

	// CgsSceneManagerModuleIO.h:408
	void Clear();

	// CgsSceneManagerModuleIO.h:411
	void SceneQueryInterface();

	// CgsSceneManagerModuleIO.h:414
	bool IsEmpty() const;

private:
	// CgsSceneManagerModuleIO.h:420
	void SceneQueryInterface(const SceneQueryInterface &);

	// CgsSceneManagerModuleIO.h:424
	const SceneQueryInterface & operator=(const SceneQueryInterface &);

}

// CgsSceneManagerModuleIO.h:664
struct CgsSceneManager::SceneManagerIO::TriCacheQueryBuffer : public IOBuffer {
private:
	// CgsSceneManagerModuleIO.h:684
	InputBuffer_Query::InTriangleCollisionLineTestQueue mTriangleCollisionLineTestQueue;

	// CgsSceneManagerModuleIO.h:685
	InputBuffer_Query::InTriangleCollisionLineTestNearestQueue mTriangleCollisionLineTestNearestQueue;

	// CgsSceneManagerModuleIO.h:686
	InputBuffer_Query::InTriangleCollisionSphereTestQueue mTriangleCollisionSphereTestQueue;

public:
	// CgsSceneManagerModuleIO.h:669
	void Construct();

	// CgsSceneManagerModuleIO.h:673
	void Destruct();

	// CgsSceneManagerModuleIO.h:675
	const InputBuffer_Query::InTriangleCollisionLineTestQueue * GetTriangleCollisionLineTestQueue() const;

	// CgsSceneManagerModuleIO.h:676
	const InputBuffer_Query::InTriangleCollisionLineTestNearestQueue * GetTriangleCollisionLineTestNearestQueue() const;

	// CgsSceneManagerModuleIO.h:677
	const InputBuffer_Query::InTriangleCollisionSphereTestQueue * GetTriangleCollisionSphereTestQueue() const;

	// CgsSceneManagerModuleIO.h:678
	InputBuffer_Query::InTriangleCollisionLineTestQueue * GetTriangleCollisionLineTestQueue();

	// CgsSceneManagerModuleIO.h:679
	InputBuffer_Query::InTriangleCollisionLineTestNearestQueue * GetTriangleCollisionLineTestNearestQueue();

	// CgsSceneManagerModuleIO.h:680
	InputBuffer_Query::InTriangleCollisionSphereTestQueue * GetTriangleCollisionSphereTestQueue();

}

