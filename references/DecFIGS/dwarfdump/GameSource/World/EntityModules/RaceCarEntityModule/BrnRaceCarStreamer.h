// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct RaceCarStreamer {
		// BrnRaceCarStreamer.h:263
		enum ELoadFlags {
			E_LOADFLAG_ACTIVE = 1,
			E_LOADFLAG_UNUSED = 2,
			E_LOADFLAG_LOADEDGFX = 4,
			E_LOADFLAG_LOADEDPHYSICS = 8,
			E_LOADFLAG_LOADEDATTRS = 16,
			E_LOADFLAG_LOADEDWHEELGFX = 32,
			E_LOADFLAG_LOADEDAUDIO = 64,
			E_LOADFLAG_ALLRESOURCES = 124,
			E_LOADFLAG_ALL_EXCEPT_AUDIO = 60,
		}

	}

}

// BrnRaceCarStreamer.h:56
struct BrnWorld::RaceCarStreamer {
private:
	// BrnRaceCarStreamer.h:278
	extern const float32_t KF_TIME_BETWEEN_DESIRED_LOADS;

	// BrnRaceCarStreamer.h:280
	const BrnResource::VehicleList * mpVehicleList;

	// BrnRaceCarStreamer.h:282
	uint8_t[8] maxLoadFlags;

	// BrnRaceCarStreamer.h:284
	BrnWorld::RaceCarGraphicsStreamer mGraphicsStreamer;

	// BrnRaceCarStreamer.h:285
	BrnWorld::RaceCarAttributeStreamer mAttributeStreamer;

	// BrnRaceCarStreamer.h:286
	BrnWorld::RaceCarPhysicsStreamer mPhysicsStreamer;

	// BrnRaceCarStreamer.h:287
	BrnWorld::RaceCarWheelGraphicsStreamer mWheelGraphicsStreamer;

	// BrnRaceCarStreamer.h:288
	BrnWorld::RaceCarAudioStreamer mAudioStreamer;

	// BrnRaceCarStreamer.h:291
	ResourcePtr<BrnVehicle::GraphicsSpec>[8] maGraphicsResources;

	// BrnRaceCarStreamer.h:292
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>[8] maPhysicsResources;

	// BrnRaceCarStreamer.h:293
	bool[8] mabAttribsLoaded;

	// BrnRaceCarStreamer.h:294
	ResourcePtr<BrnWheel::GraphicsSpec>[8] maWheelGraphicsResources;

	// BrnRaceCarStreamer.h:295
	bool[8] mabAudioLoaded;

	// BrnRaceCarStreamer.h:297
	CgsID[8] maDesiredCarIds;

	// BrnRaceCarStreamer.h:298
	CgsID[8] maDesiredWheelIds;

	// BrnRaceCarStreamer.h:299
	int32_t[8] maDesiredPriorities;

	// BrnRaceCarStreamer.h:301
	float32_t mfTimeSinceLastLoad;

	// BrnRaceCarStreamer.h:303
	bool mbHACK_WaitingForAudioAfterCarSelect;

public:
	// BrnRaceCarStreamer.h:68
	void Construct();

	// BrnRaceCarStreamer.h:74
	void Prepare(const BrnResource::VehicleList *, const BrnResource::WheelList *);

	// BrnRaceCarStreamer.h:78
	void Destruct();

	// BrnRaceCarStreamer.h:86
	void AddVehicleData(int32_t, CgsID, CgsID, bool);

	// BrnRaceCarStreamer.h:93
	void PrefetchVehicleData(int32_t, CgsID, CgsID);

	// BrnRaceCarStreamer.h:98
	void RemoveVehicleData(int32_t);

	// BrnRaceCarStreamer.h:106
	void SetRequiredVehicleData(int32_t, CgsID, CgsID, bool);

	// BrnRaceCarStreamer.h:113
	void SetDesiredVehicleData(int32_t, CgsID, CgsID, int32_t);

	// BrnRaceCarStreamer.h:120
	void Update(const InputBuffer_PreScene *, OutputBuffer_PreScene *, float32_t);

	// BrnRaceCarStreamer.h:126
	void AppendGameDataRequests(OutputBuffer_Prepare::ResourceRequestInterface *) const;

	// BrnRaceCarStreamer.h:132
	bool IsRaceCarLoaded(int32_t) const;

	// BrnRaceCarStreamer.h:137
	bool IsRaceCarActive(int32_t) const;

	// BrnRaceCarStreamer.h:142
	bool IsDesiredRaceCarLoadedForCarSelect(int32_t) const;

	// BrnRaceCarStreamer.h:147
	CgsID GetCarModelId(int32_t) const;

	// BrnRaceCarStreamer.h:152
	const ResourcePtr<BrnVehicle::GraphicsSpec> & GetGraphicsResource(int32_t) const;

	// BrnRaceCarStreamer.h:157
	const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> & GetPhysicsResource(int32_t) const;

	// BrnRaceCarStreamer.h:162
	const ResourcePtr<BrnWheel::GraphicsSpec> & GetWheelGraphicsResource(int32_t) const;

	// BrnRaceCarStreamer.h:171
	void OnGraphicsLoaded(int32_t, ResourcePtr<BrnVehicle::GraphicsSpec>);

	// BrnRaceCarStreamer.h:177
	void OnPhysicsLoaded(int32_t, ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>);

	// BrnRaceCarStreamer.h:182
	void OnAttributesLoaded(int32_t);

	// BrnRaceCarStreamer.h:188
	void OnWheelGraphicsLoaded(int32_t, ResourcePtr<BrnWheel::GraphicsSpec>);

	// BrnRaceCarStreamer.h:193
	void OnAudioLoaded(int32_t);

	// BrnRaceCarStreamer.h:198
	void OnGraphicsUnloading(int32_t);

	// BrnRaceCarStreamer.h:203
	void OnPhysicsUnloading(int32_t);

	// BrnRaceCarStreamer.h:208
	void OnAttributesUnloading(int32_t);

	// BrnRaceCarStreamer.h:213
	void OnWheelGraphicsUnloading(int32_t);

	// BrnRaceCarStreamer.h:218
	void OnAudioUnloading(int32_t);

	// BrnRaceCarStreamer.h:223
	bool GetAudioLoadDataStatus(int32_t);

	// BrnRaceCarStreamer.h:226
	BrnWorld::RaceCarAudioStreamer * GetAudioCarStreamer();

	// BrnRaceCarStreamer.h:233
	void SetAudioLoadDataStatus(int32_t, bool);

	// BrnRaceCarStreamer.h:237
	const BrnResource::VehicleList * GetVehicleList() const;

	// BrnRaceCarStreamer.h:240
	bool HACK_IsWaitingForAudioAfterCarSelect() const;

	// BrnRaceCarStreamer.h:244
	void HACK_SetWaitingForAudioAfterCarSelect(bool);

	// BrnRaceCarStreamer.h:250
	void HACKGetValidModelIds(CgsID &, CgsID &);

private:
	// BrnRaceCarStreamer.h:310
	bool IsFlagSet(int32_t, BrnWorld::RaceCarStreamer::ELoadFlags) const;

	// BrnRaceCarStreamer.h:314
	uint8_t GetFlags(int32_t) const;

	// BrnRaceCarStreamer.h:321
	void OnResourceLoaded(int32_t, uint8_t);

	// BrnRaceCarStreamer.h:327
	void OnResourceUnloading(int32_t, uint8_t);

	// BrnRaceCarStreamer.h:330
	void UpdateDesiredCars();

}

// BrnRaceCarStreamer.h:278
extern const float32_t KF_TIME_BETWEEN_DESIRED_LOADS;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct RaceCarStreamer {
		// BrnRaceCarStreamer.h:263
		enum ELoadFlags {
			E_LOADFLAG_ACTIVE = 1,
			E_LOADFLAG_UNUSED = 2,
			E_LOADFLAG_LOADEDGFX = 4,
			E_LOADFLAG_LOADEDPHYSICS = 8,
			E_LOADFLAG_LOADEDATTRS = 16,
			E_LOADFLAG_LOADEDWHEELGFX = 32,
			E_LOADFLAG_LOADEDAUDIO = 64,
			E_LOADFLAG_ALLRESOURCES = 124,
			E_LOADFLAG_ALL_EXCEPT_AUDIO = 60,
		}

	}

}

// BrnRaceCarStreamer.h:56
struct BrnWorld::RaceCarStreamer {
private:
	// BrnRaceCarStreamer.h:278
	extern const float32_t KF_TIME_BETWEEN_DESIRED_LOADS;

	// BrnRaceCarStreamer.h:280
	const VehicleList * mpVehicleList;

	// BrnRaceCarStreamer.h:282
	uint8_t[8] maxLoadFlags;

	// BrnRaceCarStreamer.h:284
	BrnWorld::RaceCarGraphicsStreamer mGraphicsStreamer;

	// BrnRaceCarStreamer.h:285
	BrnWorld::RaceCarAttributeStreamer mAttributeStreamer;

	// BrnRaceCarStreamer.h:286
	BrnWorld::RaceCarPhysicsStreamer mPhysicsStreamer;

	// BrnRaceCarStreamer.h:287
	BrnWorld::RaceCarWheelGraphicsStreamer mWheelGraphicsStreamer;

	// BrnRaceCarStreamer.h:288
	BrnWorld::RaceCarAudioStreamer mAudioStreamer;

	// BrnRaceCarStreamer.h:291
	ResourcePtr<BrnVehicle::GraphicsSpec>[8] maGraphicsResources;

	// BrnRaceCarStreamer.h:292
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>[8] maPhysicsResources;

	// BrnRaceCarStreamer.h:293
	bool[8] mabAttribsLoaded;

	// BrnRaceCarStreamer.h:294
	ResourcePtr<BrnWheel::GraphicsSpec>[8] maWheelGraphicsResources;

	// BrnRaceCarStreamer.h:295
	bool[8] mabAudioLoaded;

	// BrnRaceCarStreamer.h:297
	CgsID[8] maDesiredCarIds;

	// BrnRaceCarStreamer.h:298
	CgsID[8] maDesiredWheelIds;

	// BrnRaceCarStreamer.h:299
	int32_t[8] maDesiredPriorities;

	// BrnRaceCarStreamer.h:301
	float32_t mfTimeSinceLastLoad;

	// BrnRaceCarStreamer.h:303
	bool mbHACK_WaitingForAudioAfterCarSelect;

public:
	// BrnRaceCarStreamer.h:68
	void Construct();

	// BrnRaceCarStreamer.h:74
	void Prepare(const VehicleList *, const BrnResource::WheelList *);

	// BrnRaceCarStreamer.h:78
	void Destruct();

	// BrnRaceCarStreamer.h:86
	void AddVehicleData(int32_t, CgsID, CgsID, bool);

	// BrnRaceCarStreamer.h:93
	void PrefetchVehicleData(int32_t, CgsID, CgsID);

	// BrnRaceCarStreamer.h:98
	void RemoveVehicleData(int32_t);

	// BrnRaceCarStreamer.h:106
	void SetRequiredVehicleData(int32_t, CgsID, CgsID, bool);

	// BrnRaceCarStreamer.h:113
	void SetDesiredVehicleData(int32_t, CgsID, CgsID, int32_t);

	// BrnRaceCarStreamer.h:120
	void Update(const InputBuffer_PreScene *, OutputBuffer_PreScene *, float32_t);

	// BrnRaceCarStreamer.h:126
	void AppendGameDataRequests(OutputBuffer_Prepare::ResourceRequestInterface *) const;

	// BrnRaceCarStreamer.h:132
	bool IsRaceCarLoaded(int32_t) const;

	// BrnRaceCarStreamer.h:137
	bool IsRaceCarActive(int32_t) const;

	// BrnRaceCarStreamer.h:142
	bool IsDesiredRaceCarLoadedForCarSelect(int32_t) const;

	// BrnRaceCarStreamer.h:147
	CgsID GetCarModelId(int32_t) const;

	// BrnRaceCarStreamer.h:152
	const ResourcePtr<BrnVehicle::GraphicsSpec> & GetGraphicsResource(int32_t) const;

	// BrnRaceCarStreamer.h:157
	const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> & GetPhysicsResource(int32_t) const;

	// BrnRaceCarStreamer.h:162
	const ResourcePtr<BrnWheel::GraphicsSpec> & GetWheelGraphicsResource(int32_t) const;

	// BrnRaceCarStreamer.h:171
	void OnGraphicsLoaded(int32_t, ResourcePtr<BrnVehicle::GraphicsSpec>);

	// BrnRaceCarStreamer.h:177
	void OnPhysicsLoaded(int32_t, ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>);

	// BrnRaceCarStreamer.h:182
	void OnAttributesLoaded(int32_t);

	// BrnRaceCarStreamer.h:188
	void OnWheelGraphicsLoaded(int32_t, ResourcePtr<BrnWheel::GraphicsSpec>);

	// BrnRaceCarStreamer.h:193
	void OnAudioLoaded(int32_t);

	// BrnRaceCarStreamer.h:198
	void OnGraphicsUnloading(int32_t);

	// BrnRaceCarStreamer.h:203
	void OnPhysicsUnloading(int32_t);

	// BrnRaceCarStreamer.h:208
	void OnAttributesUnloading(int32_t);

	// BrnRaceCarStreamer.h:213
	void OnWheelGraphicsUnloading(int32_t);

	// BrnRaceCarStreamer.h:218
	void OnAudioUnloading(int32_t);

	// BrnRaceCarStreamer.h:223
	bool GetAudioLoadDataStatus(int32_t);

	// BrnRaceCarStreamer.h:226
	BrnWorld::RaceCarAudioStreamer * GetAudioCarStreamer();

	// BrnRaceCarStreamer.h:233
	void SetAudioLoadDataStatus(int32_t, bool);

	// BrnRaceCarStreamer.h:237
	const VehicleList * GetVehicleList() const;

	// BrnRaceCarStreamer.h:240
	bool HACK_IsWaitingForAudioAfterCarSelect() const;

	// BrnRaceCarStreamer.h:244
	void HACK_SetWaitingForAudioAfterCarSelect(bool);

	// BrnRaceCarStreamer.h:250
	void HACKGetValidModelIds(CgsID &, CgsID &);

private:
	// BrnRaceCarStreamer.h:310
	bool IsFlagSet(int32_t, BrnWorld::RaceCarStreamer::ELoadFlags) const;

	// BrnRaceCarStreamer.h:314
	uint8_t GetFlags(int32_t) const;

	// BrnRaceCarStreamer.h:321
	void OnResourceLoaded(int32_t, uint8_t);

	// BrnRaceCarStreamer.h:327
	void OnResourceUnloading(int32_t, uint8_t);

	// BrnRaceCarStreamer.h:330
	void UpdateDesiredCars();

}

