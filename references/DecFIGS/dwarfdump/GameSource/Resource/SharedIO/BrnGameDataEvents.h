// BrnGameDataEvents.h:51
struct BrnResource::GameDataIO::GameDataEvent : public Event {
private:
	// BrnGameDataEvents.h:73
	int32_t miEventId;

	// BrnGameDataEvents.h:74
	BaseEventReceiverQueue * mpReceiverQueue;

public:
	// BrnGameDataEvents.h:55
	void SetEventId(int32_t);

	// BrnGameDataEvents.h:58
	void SetReceiverQueue(BaseEventReceiverQueue *);

	// BrnGameDataEvents.h:61
	int32_t GetEventId() const;

	// BrnGameDataEvents.h:64
	BaseEventReceiverQueue * GetReceiverQueue() const;

protected:
	// BrnGameDataEvents.h:69
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// BrnGameDataEvents.h:86
struct BrnResource::GameDataIO::GameDataAssetEvent : public GameDataEvent {
private:
	// BrnGameDataEvents.h:123
	int32_t miPoolId;

	// BrnGameDataEvents.h:124
	CgsID mId;

	// BrnGameDataEvents.h:125
	BrnResource::EAssetSet meType;

	// BrnGameDataEvents.h:126
	bool mbFailFlag;

public:
	// BrnGameDataEvents.h:96
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, CgsID, BrnResource::EAssetSet, bool);

	// BrnGameDataEvents.h:99
	void SetPoolId(int32_t);

	// BrnGameDataEvents.h:102
	void SetGameDataId(CgsID);

	// BrnGameDataEvents.h:105
	void SetGameDataType(BrnResource::EAssetSet);

	// BrnGameDataEvents.h:108
	void SetFailureFlag(bool);

	// BrnGameDataEvents.h:111
	int32_t GetPoolId() const;

	// BrnGameDataEvents.h:114
	CgsID GetGameDataId() const;

	// BrnGameDataEvents.h:117
	BrnResource::EAssetSet GetGameDataType() const;

	// BrnGameDataEvents.h:120
	bool GetFailureFlag() const;

}

// BrnGameDataEvents.h:138
struct BrnResource::GameDataIO::LoadGameDataEvent : public GameDataAssetEvent {
}

// BrnGameDataEvents.h:169
struct BrnResource::GameDataIO::GetGameDataEvent : public GameDataAssetEvent {
}

// BrnGameDataEvents.h:494
struct BrnResource::GameDataIO::GetTrafficLaneDataResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:512
	ResourceHandle mTrafficLaneHandle;

public:
	// BrnGameDataEvents.h:503
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:506
	const ResourceHandle & GetTrafficLaneHandle() const;

	// BrnGameDataEvents.h:509
	void SetTrafficLaneHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:524
struct BrnResource::GameDataIO::GetAIDataResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:542
	ResourceHandle mAIDataHandle;

public:
	// BrnGameDataEvents.h:533
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:536
	const ResourceHandle & GetAIDataHandle() const;

	// BrnGameDataEvents.h:539
	void SetAIDataHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:657
struct BrnResource::GameDataIO::GetVehicleListRequest : public GameDataAssetEvent {
public:
	// BrnGameDataEvents.h:663
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// BrnGameDataEvents.h:711
struct BrnResource::GameDataIO::GetVehicleListResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:724
	const VehicleList * mpVehicleList;

public:
	// BrnGameDataEvents.h:718
	void Construct(int32_t, const VehicleList *, bool);

	// BrnGameDataEvents.h:721
	const VehicleList * GetVehicleListPtr() const;

}

// BrnGameDataEvents.h:763
struct BrnResource::GameDataIO::GetICEListRequest : public GameDataAssetEvent {
public:
	// BrnGameDataEvents.h:769
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// BrnGameDataEvents.h:781
struct BrnResource::GameDataIO::GetICEListResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:794
	const BrnResource::ICEList * mpICEList;

public:
	// BrnGameDataEvents.h:788
	void Construct(int32_t, const BrnResource::ICEList *, bool);

	// BrnGameDataEvents.h:791
	const BrnResource::ICEList * GetICEListPtr() const;

}

// BrnGameDataEvents.h:294
struct BrnResource::GameDataIO::GetPropPhysicsResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:312
	ResourceHandle mPropPhysicsHandle;

public:
	// BrnGameDataEvents.h:303
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:306
	const ResourceHandle & GetPropPhysicsObjectHandle() const;

	// BrnGameDataEvents.h:309
	void SetPropPhysicsObjectHandle(const ResourceHandle &);

}

// BrnAssetIds.h:25
namespace BrnResource {
	// BrnGameDataEvents.h:34
	namespace GameDataIO {
		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct LoadGameDataEvent;

		struct GetGameDataEvent;

		struct GetVehicleGraphicsResponse;

		struct GetPropPhysicsResponse;

		struct GetPropInstancesResponse;

		struct GetPropGraphicsListResponse;

		struct GetWheelGraphicsResponse;

		struct GetVehiclePhysicsResponse;

		struct GetPVSResponse;

		struct UnloadGameDataResponse;

		struct GetVehicleListRequest;

		struct GetWheelListRequest;

		struct GetVehicleListResponse;

		struct GetWheelListResponse;

		struct SwapOutCollisionWorldRequest;

		struct SwapInCollisionWorldRequest;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<512>;

		struct RequestInterface<512>;

		struct RequestQueue<8192>;

		struct RequestInterface<8192>;

		struct RequestQueue<2048>;

		struct RequestInterface<2048>;

		struct RequestQueue<1024>;

		struct RequestInterface<1024>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// BrnGameDataEvents.h:186
struct BrnResource::GameDataIO::GetVehicleGraphicsResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:204
	ResourceHandle mVehicleGraphicsObjectHandle;

public:
	// BrnGameDataEvents.h:195
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:198
	const ResourceHandle & GetVehicleGraphicsObjectHandle() const;

	// BrnGameDataEvents.h:201
	void SetVehicleGraphicsObjectHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:326
struct BrnResource::GameDataIO::GetPropInstancesResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:347
	ResourceHandle mPropInstancesHandle;

public:
	// BrnGameDataEvents.h:335
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:338
	const ResourceHandle & GetPropInstancesObjectHandle() const;

	// BrnGameDataEvents.h:341
	int32_t GetZoneId() const;

	// BrnGameDataEvents.h:344
	void SetPropInstancesObjectHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:361
struct BrnResource::GameDataIO::GetPropGraphicsListResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:382
	ResourceHandle mPropGraphicsListHandle;

public:
	// BrnGameDataEvents.h:370
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:373
	const ResourceHandle & GetPropGraphicsListObjectHandle() const;

	// BrnGameDataEvents.h:376
	int32_t GetZoneId() const;

	// BrnGameDataEvents.h:379
	void SetPropGraphicsListObjectHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:395
struct BrnResource::GameDataIO::GetWheelGraphicsResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:413
	ResourceHandle mWheelGraphicsObjectHandle;

public:
	// BrnGameDataEvents.h:404
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:407
	const ResourceHandle & GetWheelGraphicsObjectHandle() const;

	// BrnGameDataEvents.h:410
	void SetWheelGraphicsObjectHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:425
struct BrnResource::GameDataIO::GetVehiclePhysicsResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:443
	ResourceHandle mVehiclePhysicsObjectHandle;

public:
	// BrnGameDataEvents.h:434
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:437
	const ResourceHandle & GetVehiclePhysicsObjectHandle() const;

	// BrnGameDataEvents.h:440
	void SetVehiclePhysicsObjectHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:605
struct BrnResource::GameDataIO::GetPVSResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:623
	ResourceHandle mPVSHandle;

public:
	// BrnGameDataEvents.h:614
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:617
	const ResourceHandle & GetPVSHandle() const;

	// BrnGameDataEvents.h:620
	void SetPVSHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:635
struct BrnResource::GameDataIO::UnloadGameDataResponse : public GameDataAssetEvent {
public:
	// BrnGameDataEvents.h:642
	void Construct(int32_t, int32_t, CgsID, BrnResource::EAssetSet);

}

// BrnGameDataEvents.h:693
struct BrnResource::GameDataIO::GetWheelListRequest : public GameDataAssetEvent {
public:
	// BrnGameDataEvents.h:699
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// BrnGameDataEvents.h:711
struct BrnResource::GameDataIO::GetVehicleListResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:724
	const BrnResource::VehicleList * mpVehicleList;

public:
	// BrnGameDataEvents.h:718
	void Construct(int32_t, const BrnResource::VehicleList *, bool);

	// BrnGameDataEvents.h:721
	const BrnResource::VehicleList * GetVehicleListPtr() const;

}

// BrnGameDataEvents.h:807
struct BrnResource::GameDataIO::GetWheelListResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:820
	const BrnResource::WheelList * mpWheelList;

public:
	// BrnGameDataEvents.h:814
	void Construct(int32_t, const BrnResource::WheelList *, bool);

	// BrnGameDataEvents.h:817
	const BrnResource::WheelList * GetWheelListPtr() const;

}

// BrnGameDataEvents.h:833
struct BrnResource::GameDataIO::SwapOutCollisionWorldRequest : public GameDataEvent {
public:
	// BrnGameDataEvents.h:837
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// BrnGameDataEvents.h:850
struct BrnResource::GameDataIO::SwapInCollisionWorldRequest : public GameDataEvent {
public:
	// BrnGameDataEvents.h:854
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// BrnGameDataEvents.h:675
struct BrnResource::GameDataIO::GetFreeburnChallengeListRequest : public GameDataAssetEvent {
public:
	// BrnGameDataEvents.h:681
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// BrnGameDataEvents.h:737
struct BrnResource::GameDataIO::GetFreeburnChallengeListResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:750
	const ChallengeList * mpChallengeList;

public:
	// BrnGameDataEvents.h:744
	void Construct(int32_t, const ChallengeList *, bool);

	// BrnGameDataEvents.h:747
	const ChallengeList * GetFreeburnChallengeListPtr() const;

}

// BrnGameDataEvents.h:867
struct BrnResource::GameDataIO::SwapOutCollisionWorldResponse : public GameDataEvent {
private:
	// BrnGameDataEvents.h:884
	ResourceHandle::Resource mResource;

	// BrnGameDataEvents.h:885
	Entry::ResourceDescriptor mDescriptor;

public:
	// BrnGameDataEvents.h:874
	void Construct(int32_t, const ResourceHandle::Resource &, const Entry::ResourceDescriptor &);

	// BrnGameDataEvents.h:877
	const ResourceHandle::Resource & GetResource() const;

	// BrnGameDataEvents.h:880
	const Entry::ResourceDescriptor & GetDescriptor() const;

}

// BrnGameDataEvents.h:154
struct BrnResource::GameDataIO::UnloadGameDataEvent : public GameDataAssetEvent {
}

// BrnGameDataEvents.h:217
struct BrnResource::GameDataIO::GetTrafficVehicleGraphicsResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:232
	ResourceHandle mVehicleGraphicsObjectHandle;

public:
	// BrnGameDataEvents.h:226
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:229
	const ResourceHandle & GetTrafficVehicleGraphicsObjectHandle() const;

}

// BrnGameDataEvents.h:246
struct BrnResource::GameDataIO::LoadICEMovieResponse : public GameDataAssetEvent {
}

// BrnGameDataEvents.h:263
struct BrnResource::GameDataIO::GetICEMovieResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:281
	ResourceHandle mICEMovieObjectHandle;

public:
	// BrnGameDataEvents.h:272
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:275
	const ResourceHandle & GetICEMovieObjectHandle() const;

	// BrnGameDataEvents.h:278
	void SetICEMovieObjectHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:455
struct BrnResource::GameDataIO::GetVehicleAttribsResponse : public GameDataAssetEvent {
public:
	// BrnGameDataEvents.h:463
	void Construct(int32_t, int32_t, CgsID, bool);

}

// BrnGameDataEvents.h:475
struct BrnResource::GameDataIO::GetSurfaceListResponse : public GameDataAssetEvent {
public:
	// BrnGameDataEvents.h:482
	void Construct(int32_t, int32_t, CgsID, bool);

}

// BrnGameDataEvents.h:554
struct BrnResource::GameDataIO::GetWorldUnitGraphicsResponse : public GameDataAssetEvent {
private:
	// BrnGameDataEvents.h:572
	ResourceHandle mWorldUnitGraphicsHandle;

public:
	// BrnGameDataEvents.h:563
	void Construct(int32_t, int32_t, CgsID, const ResourceHandle &, bool);

	// BrnGameDataEvents.h:566
	const ResourceHandle & GetWorldUnitGraphicsHandle() const;

	// BrnGameDataEvents.h:569
	void SetWorldUnitGraphicsHandle(const ResourceHandle &);

}

// BrnGameDataEvents.h:584
struct BrnResource::GameDataIO::LoadWorldCollisionResponse : public GameDataAssetEvent {
public:
	// BrnGameDataEvents.h:592
	void Construct(int32_t, int32_t, CgsID, bool);

}

// BrnGameDataEvents.h:897
struct BrnResource::GameDataIO::SwapInCollisionWorldResponse : public GameDataEvent {
public:
	// BrnGameDataEvents.h:902
	void Construct(int32_t);

}

// BrnGameDataEvents.h:917
struct BrnResource::GameDataIO::CheckDLCVersionRequest : public GameDataEvent {
public:
	// BrnGameDataEvents.h:921
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// BrnGameDataEvents.h:934
struct BrnResource::GameDataIO::CheckDLCVersionResponse : public GameDataEvent {
private:
	// BrnGameDataEvents.h:947
	int32_t miDLCVersion;

public:
	// BrnGameDataEvents.h:940
	void Construct(int32_t, int32_t);

	// BrnGameDataEvents.h:943
	int32_t GetDLCVersion() const;

}

