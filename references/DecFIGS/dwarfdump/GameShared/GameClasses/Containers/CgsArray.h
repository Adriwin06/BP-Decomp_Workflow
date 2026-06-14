// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::HookNameStringWrapper,100u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	HookNameStringWrapper[100] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const HookNameStringWrapper &);

	// CgsArray.h:279
	HookNameStringWrapper * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, HookNameStringWrapper &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const HookNameStringWrapper &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const HookNameStringWrapper &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const HookNameStringWrapper &) const;

	// CgsArray.h:496
	bool Contains(const HookNameStringWrapper &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const HookNameStringWrapper & GetItem(unsigned int) const;

	// CgsArray.h:546
	HookNameStringWrapper & GetItem(unsigned int);

	// CgsArray.h:593
	HookNameStringWrapper * Begin();

	// CgsArray.h:610
	HookNameStringWrapper * End();

	// CgsArray.h:563
	const HookNameStringWrapper & operator[](unsigned int) const;

	// CgsArray.h:577
	HookNameStringWrapper & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*>*,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *const&);

	// CgsArray.h:279
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *const&) const;

	// CgsArray.h:496
	bool Contains(BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *& GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> ** Begin();

	// CgsArray.h:610
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> ** End();

	// CgsArray.h:563
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *const& operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>*,40u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *[40] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *const&);

	// CgsArray.h:279
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *const&) const;

	// CgsArray.h:496
	bool Contains(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *& GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> ** Begin();

	// CgsArray.h:610
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> ** End();

	// CgsArray.h:563
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *const& operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>*,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *const&);

	// CgsArray.h:279
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *const&) const;

	// CgsArray.h:496
	bool Contains(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *& GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> ** Begin();

	// CgsArray.h:610
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> ** End();

	// CgsArray.h:563
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *const& operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult>*,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *const&);

	// CgsArray.h:279
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *const&) const;

	// CgsArray.h:496
	bool Contains(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *& GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> ** Begin();

	// CgsArray.h:610
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> ** End();

	// CgsArray.h:563
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *const& operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult>*,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *const&);

	// CgsArray.h:279
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *const&) const;

	// CgsArray.h:496
	bool Contains(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *& GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> ** Begin();

	// CgsArray.h:610
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> ** End();

	// CgsArray.h:563
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *const& operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult>*,1u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *[1] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *const&);

	// CgsArray.h:279
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *const&) const;

	// CgsArray.h:496
	bool Contains(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *& GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> ** Begin();

	// CgsArray.h:610
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> ** End();

	// CgsArray.h:563
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *const& operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	TrafficDirectorEntity[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const TrafficDirectorEntity &);

	// CgsArray.h:279
	TrafficDirectorEntity * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, TrafficDirectorEntity &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const TrafficDirectorEntity &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const TrafficDirectorEntity &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const TrafficDirectorEntity &) const;

	// CgsArray.h:496
	bool Contains(const TrafficDirectorEntity &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const TrafficDirectorEntity & GetItem(unsigned int) const;

	// CgsArray.h:546
	TrafficDirectorEntity & GetItem(unsigned int);

	// CgsArray.h:593
	TrafficDirectorEntity * Begin();

	// CgsArray.h:610
	TrafficDirectorEntity * End();

	// CgsArray.h:563
	const TrafficDirectorEntity & operator[](unsigned int) const;

	// CgsArray.h:577
	TrafficDirectorEntity & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::AllVehicleData::NearestCarInfo,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::AllVehicleData::NearestCarInfo[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnDirector::AllVehicleData::NearestCarInfo &);

	// CgsArray.h:279
	BrnDirector::AllVehicleData::NearestCarInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::AllVehicleData::NearestCarInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnDirector::AllVehicleData::NearestCarInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnDirector::AllVehicleData::NearestCarInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnDirector::AllVehicleData::NearestCarInfo &) const;

	// CgsArray.h:496
	bool Contains(const BrnDirector::AllVehicleData::NearestCarInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnDirector::AllVehicleData::NearestCarInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::AllVehicleData::NearestCarInfo & GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::AllVehicleData::NearestCarInfo * Begin();

	// CgsArray.h:610
	BrnDirector::AllVehicleData::NearestCarInfo * End();

	// CgsArray.h:563
	const BrnDirector::AllVehicleData::NearestCarInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::AllVehicleData::NearestCarInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnAI::AISectionId,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	AISection::AISectionId[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const AISection::AISectionId &);

	// CgsArray.h:279
	AISection::AISectionId * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, AISection::AISectionId &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const AISection::AISectionId &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const AISection::AISectionId &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const AISection::AISectionId &) const;

	// CgsArray.h:496
	bool Contains(const AISection::AISectionId &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const AISection::AISectionId & GetItem(unsigned int) const;

	// CgsArray.h:546
	AISection::AISectionId & GetItem(unsigned int);

	// CgsArray.h:593
	AISection::AISectionId * Begin();

	// CgsArray.h:610
	AISection::AISectionId * End();

	// CgsArray.h:563
	const AISection::AISectionId & operator[](unsigned int) const;

	// CgsArray.h:577
	AISection::AISectionId & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<std::uint32_t,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint32_t[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint32_t &);

	// CgsArray.h:279
	uint32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint32_t &) const;

	// CgsArray.h:496
	bool Contains(const uint32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint32_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint32_t * Begin();

	// CgsArray.h:610
	uint32_t * End();

	// CgsArray.h:563
	const uint32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::CheckpointData,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CheckpointData[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CheckpointData &);

	// CgsArray.h:279
	CheckpointData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CheckpointData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CheckpointData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CheckpointData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CheckpointData &) const;

	// CgsArray.h:496
	bool Contains(const CheckpointData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CheckpointData & GetItem(unsigned int) const;

	// CgsArray.h:546
	CheckpointData & GetItem(unsigned int);

	// CgsArray.h:593
	CheckpointData * Begin();

	// CgsArray.h:610
	CheckpointData * End();

	// CgsArray.h:563
	const CheckpointData & operator[](unsigned int) const;

	// CgsArray.h:577
	CheckpointData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::StartLocation,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	StartLocation[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const StartLocation &);

	// CgsArray.h:279
	StartLocation * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, StartLocation &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const StartLocation &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const StartLocation &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const StartLocation &) const;

	// CgsArray.h:496
	bool Contains(const StartLocation &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const StartLocation & GetItem(unsigned int) const;

	// CgsArray.h:546
	StartLocation & GetItem(unsigned int);

	// CgsArray.h:593
	StartLocation * Begin();

	// CgsArray.h:610
	StartLocation * End();

	// CgsArray.h:563
	const StartLocation & operator[](unsigned int) const;

	// CgsArray.h:577
	StartLocation & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::OpponentData,7u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	OpponentData[7] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const OpponentData &);

	// CgsArray.h:279
	OpponentData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, OpponentData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const OpponentData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const OpponentData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const OpponentData &) const;

	// CgsArray.h:496
	bool Contains(const OpponentData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const OpponentData & GetItem(unsigned int) const;

	// CgsArray.h:546
	OpponentData & GetItem(unsigned int);

	// CgsArray.h:593
	OpponentData * Begin();

	// CgsArray.h:610
	OpponentData * End();

	// CgsArray.h:563
	const OpponentData & operator[](unsigned int) const;

	// CgsArray.h:577
	OpponentData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsID,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CgsID[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CgsID &);

	// CgsArray.h:279
	CgsID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CgsID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CgsID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CgsID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CgsID &) const;

	// CgsArray.h:496
	bool Contains(const CgsID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CgsID & GetItem(unsigned int) const;

	// CgsArray.h:546
	CgsID & GetItem(unsigned int);

	// CgsArray.h:593
	CgsID * Begin();

	// CgsArray.h:610
	CgsID * End();

	// CgsArray.h:563
	const CgsID & operator[](unsigned int) const;

	// CgsArray.h:577
	CgsID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnResource::VehicleListEntry::ELiveryType[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnResource::VehicleListEntry::ELiveryType &);

	// CgsArray.h:279
	BrnResource::VehicleListEntry::ELiveryType * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnResource::VehicleListEntry::ELiveryType &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnResource::VehicleListEntry::ELiveryType &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnResource::VehicleListEntry::ELiveryType &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnResource::VehicleListEntry::ELiveryType &) const;

	// CgsArray.h:496
	bool Contains(const BrnResource::VehicleListEntry::ELiveryType &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnResource::VehicleListEntry::ELiveryType & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnResource::VehicleListEntry::ELiveryType & GetItem(unsigned int);

	// CgsArray.h:593
	BrnResource::VehicleListEntry::ELiveryType * Begin();

	// CgsArray.h:610
	BrnResource::VehicleListEntry::ELiveryType * End();

	// CgsArray.h:563
	const BrnResource::VehicleListEntry::ELiveryType & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnResource::VehicleListEntry::ELiveryType & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<int32_t,20u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	int32_t[20] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const int32_t &);

	// CgsArray.h:279
	int32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, int32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const int32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const int32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const int32_t &) const;

	// CgsArray.h:496
	bool Contains(const int32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const int32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	int32_t & GetItem(unsigned int);

	// CgsArray.h:593
	int32_t * Begin();

	// CgsArray.h:610
	int32_t * End();

	// CgsArray.h:563
	const int32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	int32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<EGlobalRaceCarIndex,34u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	EGlobalRaceCarIndex[34] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const EGlobalRaceCarIndex &);

	// CgsArray.h:279
	EGlobalRaceCarIndex * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, EGlobalRaceCarIndex &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const EGlobalRaceCarIndex &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const EGlobalRaceCarIndex &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const EGlobalRaceCarIndex &) const;

	// CgsArray.h:496
	bool Contains(const EGlobalRaceCarIndex &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const EGlobalRaceCarIndex & GetItem(unsigned int) const;

	// CgsArray.h:546
	EGlobalRaceCarIndex & GetItem(unsigned int);

	// CgsArray.h:593
	EGlobalRaceCarIndex * Begin();

	// CgsArray.h:610
	EGlobalRaceCarIndex * End();

	// CgsArray.h:563
	const EGlobalRaceCarIndex & operator[](unsigned int) const;

	// CgsArray.h:577
	EGlobalRaceCarIndex & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<int32_t,28u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	int32_t[28] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const int32_t &);

	// CgsArray.h:279
	int32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, int32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const int32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const int32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const int32_t &) const;

	// CgsArray.h:496
	bool Contains(const int32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const int32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	int32_t & GetItem(unsigned int);

	// CgsArray.h:593
	int32_t * Begin();

	// CgsArray.h:610
	int32_t * End();

	// CgsArray.h:563
	const int32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	int32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BehaviourHelperIndex[28] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BehaviourHelperIndex &);

	// CgsArray.h:279
	BehaviourHelperIndex * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BehaviourHelperIndex &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BehaviourHelperIndex &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BehaviourHelperIndex &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BehaviourHelperIndex &) const;

	// CgsArray.h:496
	bool Contains(const BehaviourHelperIndex &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BehaviourHelperIndex & GetItem(unsigned int) const;

	// CgsArray.h:546
	BehaviourHelperIndex & GetItem(unsigned int);

	// CgsArray.h:593
	BehaviourHelperIndex * Begin();

	// CgsArray.h:610
	BehaviourHelperIndex * End();

	// CgsArray.h:563
	const BehaviourHelperIndex & operator[](unsigned int) const;

	// CgsArray.h:577
	BehaviourHelperIndex & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	Array<BrnDirector::Camera::BehaviourHelperIndex,28u>[28] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const Array<BrnDirector::Camera::BehaviourHelperIndex,28u> &);

	// CgsArray.h:279
	Array<BrnDirector::Camera::BehaviourHelperIndex,28u> * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Array<BrnDirector::Camera::BehaviourHelperIndex,28u> &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const Array<BrnDirector::Camera::BehaviourHelperIndex,28u> &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const Array<BrnDirector::Camera::BehaviourHelperIndex,28u> &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const Array<BrnDirector::Camera::BehaviourHelperIndex,28u> &) const;

	// CgsArray.h:496
	bool Contains(const Array<BrnDirector::Camera::BehaviourHelperIndex,28u> &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const Array<BrnDirector::Camera::BehaviourHelperIndex,28u> & GetItem(unsigned int) const;

	// CgsArray.h:546
	Array<BrnDirector::Camera::BehaviourHelperIndex,28u> & GetItem(unsigned int);

	// CgsArray.h:593
	Array<BrnDirector::Camera::BehaviourHelperIndex,28u> * Begin();

	// CgsArray.h:610
	Array<BrnDirector::Camera::BehaviourHelperIndex,28u> * End();

	// CgsArray.h:563
	const Array<BrnDirector::Camera::BehaviourHelperIndex,28u> & operator[](unsigned int) const;

	// CgsArray.h:577
	Array<BrnDirector::Camera::BehaviourHelperIndex,28u> & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam, BrnDirector::Camera::BehaviourBystanderCam::Parameters, 2>::Shot,2u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot[2] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot &);

	// CgsArray.h:279
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot &) const;

	// CgsArray.h:496
	bool Contains(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot & GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot * Begin();

	// CgsArray.h:610
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot * End();

	// CgsArray.h:563
	const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2>::Shot & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig, BrnDirector::Camera::BehaviourRig::Parameters, 4>::Shot,4u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot[4] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot &);

	// CgsArray.h:279
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot &) const;

	// CgsArray.h:496
	bool Contains(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot & GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot * Begin();

	// CgsArray.h:610
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot * End();

	// CgsArray.h:563
	const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4>::Shot & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig, BrnDirector::Camera::BehaviourRig::Parameters, 6>::Shot,6u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot[6] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot &);

	// CgsArray.h:279
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot &) const;

	// CgsArray.h:496
	bool Contains(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot & GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot * Begin();

	// CgsArray.h:610
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot * End();

	// CgsArray.h:563
	const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6>::Shot & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim, const Attrib::RefSpec, 5>::Shot,5u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot[5] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot &);

	// CgsArray.h:279
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot &) const;

	// CgsArray.h:496
	bool Contains(const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot & GetItem(unsigned int);

	// CgsArray.h:593
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot * Begin();

	// CgsArray.h:610
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot * End();

	// CgsArray.h:563
	const BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5>::Shot & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::MomentDescription,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	MomentDescription[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const MomentDescription &);

	// CgsArray.h:279
	MomentDescription * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, MomentDescription &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const MomentDescription &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const MomentDescription &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const MomentDescription &) const;

	// CgsArray.h:496
	bool Contains(const MomentDescription &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const MomentDescription & GetItem(unsigned int) const;

	// CgsArray.h:546
	MomentDescription & GetItem(unsigned int);

	// CgsArray.h:593
	MomentDescription * Begin();

	// CgsArray.h:610
	MomentDescription * End();

	// CgsArray.h:563
	const MomentDescription & operator[](unsigned int) const;

	// CgsArray.h:577
	MomentDescription & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	MomentHandle[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const MomentHandle &);

	// CgsArray.h:279
	MomentHandle * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, MomentController::MomentHandle &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const MomentHandle &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const MomentHandle &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const MomentHandle &) const;

	// CgsArray.h:496
	bool Contains(const MomentHandle &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const MomentHandle & GetItem(unsigned int) const;

	// CgsArray.h:546
	MomentController::MomentHandle & GetItem(unsigned int);

	// CgsArray.h:593
	MomentHandle * Begin();

	// CgsArray.h:610
	MomentHandle * End();

	// CgsArray.h:563
	const MomentHandle & operator[](unsigned int) const;

	// CgsArray.h:577
	MomentController::MomentHandle & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<float32_t,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	float32_t[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const float32_t &);

	// CgsArray.h:279
	float32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, float32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const float32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const float32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const float32_t &) const;

	// CgsArray.h:496
	bool Contains(const float32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const float32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	float32_t & GetItem(unsigned int);

	// CgsArray.h:593
	float32_t * Begin();

	// CgsArray.h:610
	float32_t * End();

	// CgsArray.h:563
	const float32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	float32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<int32_t,50u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	int32_t[50] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const int32_t &);

	// CgsArray.h:279
	int32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, int32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const int32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const int32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const int32_t &) const;

	// CgsArray.h:496
	bool Contains(const int32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const int32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	int32_t & GetItem(unsigned int);

	// CgsArray.h:593
	int32_t * Begin();

	// CgsArray.h:610
	int32_t * End();

	// CgsArray.h:563
	const int32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	int32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint32_t,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint32_t[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint32_t &);

	// CgsArray.h:279
	uint32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint32_t &) const;

	// CgsArray.h:496
	bool Contains(const uint32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint32_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint32_t * Begin();

	// CgsArray.h:610
	uint32_t * End();

	// CgsArray.h:563
	const uint32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<float32_t,9u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	float32_t[9] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const float32_t &);

	// CgsArray.h:279
	float32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, float32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const float32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const float32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const float32_t &) const;

	// CgsArray.h:496
	bool Contains(const float32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const float32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	float32_t & GetItem(unsigned int);

	// CgsArray.h:593
	float32_t * Begin();

	// CgsArray.h:610
	float32_t * End();

	// CgsArray.h:563
	const float32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	float32_t & operator[](unsigned int);

}

// CgsArray.h:49
extern const uint32_t KU_INVALID = 4294967295;

// CgsArray.h:49
extern const uint32_t KU_INVALID;

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CarsInTheRaceData[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CarsInTheRaceData &);

	// CgsArray.h:279
	CarsInTheRaceData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CarsInTheRaceData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CarsInTheRaceData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CarsInTheRaceData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CarsInTheRaceData &) const;

	// CgsArray.h:496
	bool Contains(const CarsInTheRaceData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CarsInTheRaceData & GetItem(unsigned int) const;

	// CgsArray.h:546
	CarsInTheRaceData & GetItem(unsigned int);

	// CgsArray.h:593
	CarsInTheRaceData * Begin();

	// CgsArray.h:610
	CarsInTheRaceData * End();

	// CgsArray.h:563
	const CarsInTheRaceData & operator[](unsigned int) const;

	// CgsArray.h:577
	CarsInTheRaceData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	SimpleParticleBatch[13] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const SimpleParticleBatch &);

	// CgsArray.h:279
	SimpleParticleBatch * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, SimpleParticleBatch &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const SimpleParticleBatch &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const SimpleParticleBatch &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const SimpleParticleBatch &) const;

	// CgsArray.h:496
	bool Contains(const SimpleParticleBatch &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const SimpleParticleBatch & GetItem(unsigned int) const;

	// CgsArray.h:546
	SimpleParticleBatch & GetItem(unsigned int);

	// CgsArray.h:593
	SimpleParticleBatch * Begin();

	// CgsArray.h:610
	SimpleParticleBatch * End();

	// CgsArray.h:563
	const SimpleParticleBatch & operator[](unsigned int) const;

	// CgsArray.h:577
	SimpleParticleBatch & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<LionBatch,512u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	LionBatch[512] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const LionBatch &);

	// CgsArray.h:279
	LionBatch * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, LionBatch &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const LionBatch &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const LionBatch &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const LionBatch &) const;

	// CgsArray.h:496
	bool Contains(const LionBatch &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const LionBatch & GetItem(unsigned int) const;

	// CgsArray.h:546
	LionBatch & GetItem(unsigned int);

	// CgsArray.h:593
	LionBatch * Begin();

	// CgsArray.h:610
	LionBatch * End();

	// CgsArray.h:563
	const LionBatch & operator[](unsigned int) const;

	// CgsArray.h:577
	LionBatch & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnParticle::Native::SparkBatch,4u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	SparkBatch[4] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const SparkBatch &);

	// CgsArray.h:279
	SparkBatch * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, SparkBatch &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const SparkBatch &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const SparkBatch &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const SparkBatch &) const;

	// CgsArray.h:496
	bool Contains(const SparkBatch &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const SparkBatch & GetItem(unsigned int) const;

	// CgsArray.h:546
	SparkBatch & GetItem(unsigned int);

	// CgsArray.h:593
	SparkBatch * Begin();

	// CgsArray.h:610
	SparkBatch * End();

	// CgsArray.h:563
	const SparkBatch & operator[](unsigned int) const;

	// CgsArray.h:577
	SparkBatch & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnProgression::InterestData,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	InterestData[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const InterestData &);

	// CgsArray.h:279
	InterestData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, InterestData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const InterestData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const InterestData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const InterestData &) const;

	// CgsArray.h:496
	bool Contains(const InterestData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const InterestData & GetItem(unsigned int) const;

	// CgsArray.h:546
	InterestData & GetItem(unsigned int);

	// CgsArray.h:593
	InterestData * Begin();

	// CgsArray.h:610
	InterestData * End();

	// CgsArray.h:563
	const InterestData & operator[](unsigned int) const;

	// CgsArray.h:577
	InterestData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart[175] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart &);

	// CgsArray.h:279
	BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart &) const;

	// CgsArray.h:496
	bool Contains(const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * Begin();

	// CgsArray.h:610
	BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * End();

	// CgsArray.h:563
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event[175] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event &);

	// CgsArray.h:279
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event &) const;

	// CgsArray.h:496
	bool Contains(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * Begin();

	// CgsArray.h:610
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * End();

	// CgsArray.h:563
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BufferedNewHighScore[5] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BufferedNewHighScore &);

	// CgsArray.h:279
	BufferedNewHighScore * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BufferedNewHighScore &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BufferedNewHighScore &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BufferedNewHighScore &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BufferedNewHighScore &) const;

	// CgsArray.h:496
	bool Contains(const BufferedNewHighScore &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BufferedNewHighScore & GetItem(unsigned int) const;

	// CgsArray.h:546
	BufferedNewHighScore & GetItem(unsigned int);

	// CgsArray.h:593
	BufferedNewHighScore * Begin();

	// CgsArray.h:610
	BufferedNewHighScore * End();

	// CgsArray.h:563
	const BufferedNewHighScore & operator[](unsigned int) const;

	// CgsArray.h:577
	BufferedNewHighScore & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsID,2000u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CgsID[2000] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CgsID &);

	// CgsArray.h:279
	CgsID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CgsID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CgsID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CgsID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CgsID &) const;

	// CgsArray.h:496
	bool Contains(const CgsID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CgsID & GetItem(unsigned int) const;

	// CgsArray.h:546
	CgsID & GetItem(unsigned int);

	// CgsArray.h:593
	CgsID * Begin();

	// CgsArray.h:610
	CgsID * End();

	// CgsArray.h:563
	const CgsID & operator[](unsigned int) const;

	// CgsArray.h:577
	CgsID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnProgression::MugshotInfo,30u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	MugshotInfo[30] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const MugshotInfo &);

	// CgsArray.h:279
	MugshotInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, MugshotInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const MugshotInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const MugshotInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const MugshotInfo &) const;

	// CgsArray.h:496
	bool Contains(const MugshotInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const MugshotInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	MugshotInfo & GetItem(unsigned int);

	// CgsArray.h:593
	MugshotInfo * Begin();

	// CgsArray.h:610
	MugshotInfo * End();

	// CgsArray.h:563
	const MugshotInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	MugshotInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsID,7u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CgsID[7] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CgsID &);

	// CgsArray.h:279
	CgsID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CgsID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CgsID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CgsID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CgsID &) const;

	// CgsArray.h:496
	bool Contains(const CgsID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CgsID & GetItem(unsigned int) const;

	// CgsArray.h:546
	CgsID & GetItem(unsigned int);

	// CgsArray.h:593
	CgsID * Begin();

	// CgsArray.h:610
	CgsID * End();

	// CgsArray.h:563
	const CgsID & operator[](unsigned int) const;

	// CgsArray.h:577
	CgsID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnProgression::ProfileEvent,175u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	ProfileEvent[175] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const ProfileEvent &);

	// CgsArray.h:279
	ProfileEvent * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, ProfileEvent &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const ProfileEvent &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const ProfileEvent &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const ProfileEvent &) const;

	// CgsArray.h:496
	bool Contains(const ProfileEvent &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const ProfileEvent & GetItem(unsigned int) const;

	// CgsArray.h:546
	ProfileEvent & GetItem(unsigned int);

	// CgsArray.h:593
	ProfileEvent * Begin();

	// CgsArray.h:610
	ProfileEvent * End();

	// CgsArray.h:563
	const ProfileEvent & operator[](unsigned int) const;

	// CgsArray.h:577
	ProfileEvent & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	RoadRulesRecvData::NetworkPlayerID[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const RoadRulesRecvData::NetworkPlayerID &);

	// CgsArray.h:279
	RoadRulesRecvData::NetworkPlayerID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, RoadRulesRecvData::NetworkPlayerID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const RoadRulesRecvData::NetworkPlayerID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const RoadRulesRecvData::NetworkPlayerID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const RoadRulesRecvData::NetworkPlayerID &) const;

	// CgsArray.h:496
	bool Contains(const RoadRulesRecvData::NetworkPlayerID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const RoadRulesRecvData::NetworkPlayerID & GetItem(unsigned int) const;

	// CgsArray.h:546
	RoadRulesRecvData::NetworkPlayerID & GetItem(unsigned int);

	// CgsArray.h:593
	RoadRulesRecvData::NetworkPlayerID * Begin();

	// CgsArray.h:610
	RoadRulesRecvData::NetworkPlayerID * End();

	// CgsArray.h:563
	const RoadRulesRecvData::NetworkPlayerID & operator[](unsigned int) const;

	// CgsArray.h:577
	RoadRulesRecvData::NetworkPlayerID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	VehicleScoreData[20] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const VehicleScoreData &);

	// CgsArray.h:279
	VehicleScoreData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, VehicleScoreData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const VehicleScoreData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const VehicleScoreData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const VehicleScoreData &) const;

	// CgsArray.h:496
	bool Contains(const VehicleScoreData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const VehicleScoreData & GetItem(unsigned int) const;

	// CgsArray.h:546
	VehicleScoreData & GetItem(unsigned int);

	// CgsArray.h:593
	VehicleScoreData * Begin();

	// CgsArray.h:610
	VehicleScoreData * End();

	// CgsArray.h:563
	const VehicleScoreData & operator[](unsigned int) const;

	// CgsArray.h:577
	VehicleScoreData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGui::OverheadSignScore,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	OverheadSignScore[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const OverheadSignScore &);

	// CgsArray.h:279
	OverheadSignScore * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, OverheadSignScore &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const OverheadSignScore &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const OverheadSignScore &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const OverheadSignScore &) const;

	// CgsArray.h:496
	bool Contains(const OverheadSignScore &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const OverheadSignScore & GetItem(unsigned int) const;

	// CgsArray.h:546
	OverheadSignScore & GetItem(unsigned int);

	// CgsArray.h:593
	OverheadSignScore * Begin();

	// CgsArray.h:610
	OverheadSignScore * End();

	// CgsArray.h:563
	const OverheadSignScore & operator[](unsigned int) const;

	// CgsArray.h:577
	OverheadSignScore & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,25u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[25] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	HashTableElement<uint32_t,renderengine::TextureState*>[256] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const HashTableElement<uint32_t,renderengine::TextureState*> &);

	// CgsArray.h:279
	CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*> * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, HashTableElement<uint32_t,renderengine::TextureState*> &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const HashTableElement<uint32_t,renderengine::TextureState*> &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const HashTableElement<uint32_t,renderengine::TextureState*> &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const HashTableElement<uint32_t,renderengine::TextureState*> &) const;

	// CgsArray.h:496
	bool Contains(const HashTableElement<uint32_t,renderengine::TextureState*> &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const HashTableElement<uint32_t,renderengine::TextureState*> & GetItem(unsigned int) const;

	// CgsArray.h:546
	HashTableElement<uint32_t,renderengine::TextureState*> & GetItem(unsigned int);

	// CgsArray.h:593
	CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*> * Begin();

	// CgsArray.h:610
	CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*> * End();

	// CgsArray.h:563
	const HashTableElement<uint32_t,renderengine::TextureState*> & operator[](unsigned int) const;

	// CgsArray.h:577
	HashTableElement<uint32_t,renderengine::TextureState*> & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	NearMissData[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const NearMissData &);

	// CgsArray.h:279
	NearMissData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, NearMissData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const NearMissData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const NearMissData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const NearMissData &) const;

	// CgsArray.h:496
	bool Contains(const NearMissData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const NearMissData & GetItem(unsigned int) const;

	// CgsArray.h:546
	NearMissData & GetItem(unsigned int);

	// CgsArray.h:593
	NearMissData * Begin();

	// CgsArray.h:610
	NearMissData * End();

	// CgsArray.h:563
	const NearMissData & operator[](unsigned int) const;

	// CgsArray.h:577
	NearMissData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	NearMissData[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const NearMissData &);

	// CgsArray.h:279
	NearMissData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, NearMissData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const NearMissData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const NearMissData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const NearMissData &) const;

	// CgsArray.h:496
	bool Contains(const NearMissData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const NearMissData & GetItem(unsigned int) const;

	// CgsArray.h:546
	NearMissData & GetItem(unsigned int);

	// CgsArray.h:593
	NearMissData * Begin();

	// CgsArray.h:610
	NearMissData * End();

	// CgsArray.h:563
	const NearMissData & operator[](unsigned int) const;

	// CgsArray.h:577
	NearMissData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<rw::math::vpu::Vector3,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	Vector3[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const rw::math::vpu::Vector3 &);

	// CgsArray.h:279
	Vector3 * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Vector3 &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const rw::math::vpu::Vector3 &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:496
	bool Contains(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const rw::math::vpu::Vector3 & GetItem(unsigned int) const;

	// CgsArray.h:546
	Vector3 & GetItem(unsigned int);

	// CgsArray.h:593
	Vector3 * Begin();

	// CgsArray.h:610
	Vector3 * End();

	// CgsArray.h:563
	const rw::math::vpu::Vector3 & operator[](unsigned int) const;

	// CgsArray.h:577
	Vector3 & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnAI::AISectionId,4u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	AISection::AISectionId[4] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const AISection::AISectionId &);

	// CgsArray.h:279
	AISection::AISectionId * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, AISection::AISectionId &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const AISection::AISectionId &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const AISection::AISectionId &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const AISection::AISectionId &) const;

	// CgsArray.h:496
	bool Contains(const AISection::AISectionId &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const AISection::AISectionId & GetItem(unsigned int) const;

	// CgsArray.h:546
	AISection::AISectionId & GetItem(unsigned int);

	// CgsArray.h:593
	AISection::AISectionId * Begin();

	// CgsArray.h:610
	AISection::AISectionId * End();

	// CgsArray.h:563
	const AISection::AISectionId & operator[](unsigned int) const;

	// CgsArray.h:577
	AISection::AISectionId & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,4u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair[4] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &);

	// CgsArray.h:279
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnWorld::NearMissData<4u,8u>::VehicleTimePair &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &) const;

	// CgsArray.h:496
	bool Contains(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnWorld::NearMissData<4u,8u>::VehicleTimePair & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair & GetItem(unsigned int);

	// CgsArray.h:593
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair * Begin();

	// CgsArray.h:610
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair * End();

	// CgsArray.h:563
	const BrnWorld::NearMissData<4u,8u>::VehicleTimePair & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &);

	// CgsArray.h:279
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnWorld::NearMissData<4u,8u>::VehicleTimePair &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &) const;

	// CgsArray.h:496
	bool Contains(const BrnWorld::NearMissData<4u,8u>::VehicleTimePair &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnWorld::NearMissData<4u,8u>::VehicleTimePair & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair & GetItem(unsigned int);

	// CgsArray.h:593
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair * Begin();

	// CgsArray.h:610
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair * End();

	// CgsArray.h:563
	const BrnWorld::NearMissData<4u,8u>::VehicleTimePair & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnWorld::NearMissData<4u,8u>::VehicleTimePair & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,4u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair[4] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &);

	// CgsArray.h:279
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnWorld::NearMissData<4u,7u>::VehicleTimePair &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &) const;

	// CgsArray.h:496
	bool Contains(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnWorld::NearMissData<4u,7u>::VehicleTimePair & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair & GetItem(unsigned int);

	// CgsArray.h:593
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair * Begin();

	// CgsArray.h:610
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair * End();

	// CgsArray.h:563
	const BrnWorld::NearMissData<4u,7u>::VehicleTimePair & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,7u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair[7] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &);

	// CgsArray.h:279
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnWorld::NearMissData<4u,7u>::VehicleTimePair &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &) const;

	// CgsArray.h:496
	bool Contains(const BrnWorld::NearMissData<4u,7u>::VehicleTimePair &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnWorld::NearMissData<4u,7u>::VehicleTimePair & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair & GetItem(unsigned int);

	// CgsArray.h:593
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair * Begin();

	// CgsArray.h:610
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair * End();

	// CgsArray.h:563
	const BrnWorld::NearMissData<4u,7u>::VehicleTimePair & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnWorld::NearMissData<4u,7u>::VehicleTimePair & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnAI::RaceBalancingGraph,7u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	RaceBalancingGraph[7] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const RaceBalancingGraph &);

	// CgsArray.h:279
	RaceBalancingGraph * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, RaceBalancingGraph &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const RaceBalancingGraph &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const RaceBalancingGraph &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const RaceBalancingGraph &) const;

	// CgsArray.h:496
	bool Contains(const RaceBalancingGraph &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const RaceBalancingGraph & GetItem(unsigned int) const;

	// CgsArray.h:546
	RaceBalancingGraph & GetItem(unsigned int);

	// CgsArray.h:593
	RaceBalancingGraph * Begin();

	// CgsArray.h:610
	RaceBalancingGraph * End();

	// CgsArray.h:563
	const RaceBalancingGraph & operator[](unsigned int) const;

	// CgsArray.h:577
	RaceBalancingGraph & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnAI::RaceBalancingRoute,7u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	RaceBalancingRoute[7] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const RaceBalancingRoute &);

	// CgsArray.h:279
	RaceBalancingRoute * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, RaceBalancingRoute &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const RaceBalancingRoute &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const RaceBalancingRoute &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const RaceBalancingRoute &) const;

	// CgsArray.h:496
	bool Contains(const RaceBalancingRoute &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const RaceBalancingRoute & GetItem(unsigned int) const;

	// CgsArray.h:546
	RaceBalancingRoute & GetItem(unsigned int);

	// CgsArray.h:593
	RaceBalancingRoute * Begin();

	// CgsArray.h:610
	RaceBalancingRoute * End();

	// CgsArray.h:563
	const RaceBalancingRoute & operator[](unsigned int) const;

	// CgsArray.h:577
	RaceBalancingRoute & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint32_t,80u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint32_t[80] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint32_t &);

	// CgsArray.h:279
	uint32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint32_t &) const;

	// CgsArray.h:496
	bool Contains(const uint32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint32_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint32_t * Begin();

	// CgsArray.h:610
	uint32_t * End();

	// CgsArray.h:563
	const uint32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::PropEntityID,15u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	PropEntityID[15] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const PropEntityID &);

	// CgsArray.h:279
	PropEntityID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, PropEntityID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const PropEntityID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const PropEntityID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const PropEntityID &) const;

	// CgsArray.h:496
	bool Contains(const PropEntityID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const PropEntityID & GetItem(unsigned int) const;

	// CgsArray.h:546
	PropEntityID & GetItem(unsigned int);

	// CgsArray.h:593
	PropEntityID * Begin();

	// CgsArray.h:610
	PropEntityID * End();

	// CgsArray.h:563
	const PropEntityID & operator[](unsigned int) const;

	// CgsArray.h:577
	PropEntityID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::PropEntityID,30u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	PropEntityID[30] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const PropEntityID &);

	// CgsArray.h:279
	PropEntityID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, PropEntityID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const PropEntityID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const PropEntityID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const PropEntityID &) const;

	// CgsArray.h:496
	bool Contains(const PropEntityID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const PropEntityID & GetItem(unsigned int) const;

	// CgsArray.h:546
	PropEntityID & GetItem(unsigned int);

	// CgsArray.h:593
	PropEntityID * Begin();

	// CgsArray.h:610
	PropEntityID * End();

	// CgsArray.h:563
	const PropEntityID & operator[](unsigned int) const;

	// CgsArray.h:577
	PropEntityID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsSceneManager::EntityId,4500u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	EntityId[4500] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const EntityId &);

	// CgsArray.h:279
	EntityId * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, EntityId &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const EntityId &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const EntityId &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const EntityId &) const;

	// CgsArray.h:496
	bool Contains(const EntityId &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const EntityId & GetItem(unsigned int) const;

	// CgsArray.h:546
	EntityId & GetItem(unsigned int);

	// CgsArray.h:593
	EntityId * Begin();

	// CgsArray.h:610
	EntityId * End();

	// CgsArray.h:563
	const EntityId & operator[](unsigned int) const;

	// CgsArray.h:577
	EntityId & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsSceneManager::EntityId,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	EntityId[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const EntityId &);

	// CgsArray.h:279
	EntityId * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, EntityId &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const EntityId &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const EntityId &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const EntityId &) const;

	// CgsArray.h:496
	bool Contains(const EntityId &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const EntityId & GetItem(unsigned int) const;

	// CgsArray.h:546
	EntityId & GetItem(unsigned int);

	// CgsArray.h:593
	EntityId * Begin();

	// CgsArray.h:610
	EntityId * End();

	// CgsArray.h:563
	const EntityId & operator[](unsigned int) const;

	// CgsArray.h:577
	EntityId & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsSceneManager::EntityId,5400u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	EntityId[5400] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const EntityId &);

	// CgsArray.h:279
	EntityId * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, EntityId &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const EntityId &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const EntityId &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const EntityId &) const;

	// CgsArray.h:496
	bool Contains(const EntityId &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const EntityId & GetItem(unsigned int) const;

	// CgsArray.h:546
	EntityId & GetItem(unsigned int);

	// CgsArray.h:593
	EntityId * Begin();

	// CgsArray.h:610
	EntityId * End();

	// CgsArray.h:563
	const EntityId & operator[](unsigned int) const;

	// CgsArray.h:577
	EntityId & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

	// BrnSoundLogicModule.h:43
	typedef SoundTriggerAction SoundTriggerAction;

private:
	// CgsArray.h:171
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &);

	// CgsArray.h:279
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &) const;

	// CgsArray.h:496
	bool Contains(const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction & GetItem(unsigned int) const;

	// CgsArray.h:546
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction & GetItem(unsigned int);

	// CgsArray.h:593
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction * Begin();

	// CgsArray.h:610
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction * End();

	// CgsArray.h:563
	const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction & operator[](unsigned int) const;

	// CgsArray.h:577
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<rw::math::vpu::Vector3,5120u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	Vector3[5120] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const rw::math::vpu::Vector3 &);

	// CgsArray.h:279
	Vector3 * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Vector3 &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const rw::math::vpu::Vector3 &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:496
	bool Contains(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const rw::math::vpu::Vector3 & GetItem(unsigned int) const;

	// CgsArray.h:546
	Vector3 & GetItem(unsigned int);

	// CgsArray.h:593
	Vector3 * Begin();

	// CgsArray.h:610
	Vector3 * End();

	// CgsArray.h:563
	const rw::math::vpu::Vector3 & operator[](unsigned int) const;

	// CgsArray.h:577
	Vector3 & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint32_t,228u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint32_t[228] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint32_t &);

	// CgsArray.h:279
	uint32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint32_t &) const;

	// CgsArray.h:496
	bool Contains(const uint32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint32_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint32_t * Begin();

	// CgsArray.h:610
	uint32_t * End();

	// CgsArray.h:563
	const uint32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	LiveRevengeRelationship[250] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const LiveRevengeRelationship &);

	// CgsArray.h:279
	LiveRevengeRelationship * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, LiveRevengeRelationship &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const LiveRevengeRelationship &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const LiveRevengeRelationship &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const LiveRevengeRelationship &) const;

	// CgsArray.h:496
	bool Contains(const LiveRevengeRelationship &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const LiveRevengeRelationship & GetItem(unsigned int) const;

	// CgsArray.h:546
	LiveRevengeRelationship & GetItem(unsigned int);

	// CgsArray.h:593
	LiveRevengeRelationship * Begin();

	// CgsArray.h:610
	LiveRevengeRelationship * End();

	// CgsArray.h:563
	const LiveRevengeRelationship & operator[](unsigned int) const;

	// CgsArray.h:577
	LiveRevengeRelationship & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,256u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[256] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::LandmarkIndex,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	LandmarkIndex[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const LandmarkIndex &);

	// CgsArray.h:279
	LandmarkIndex * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, LandmarkIndex &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const LandmarkIndex &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const LandmarkIndex &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const LandmarkIndex &) const;

	// CgsArray.h:496
	bool Contains(const LandmarkIndex &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const LandmarkIndex & GetItem(unsigned int) const;

	// CgsArray.h:546
	LandmarkIndex & GetItem(unsigned int);

	// CgsArray.h:593
	LandmarkIndex * Begin();

	// CgsArray.h:610
	LandmarkIndex * End();

	// CgsArray.h:563
	const LandmarkIndex & operator[](unsigned int) const;

	// CgsArray.h:577
	LandmarkIndex & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsID,80u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CgsID[80] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CgsID &);

	// CgsArray.h:279
	CgsID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CgsID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CgsID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CgsID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CgsID &) const;

	// CgsArray.h:496
	bool Contains(const CgsID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CgsID & GetItem(unsigned int) const;

	// CgsArray.h:546
	CgsID & GetItem(unsigned int);

	// CgsArray.h:593
	CgsID * Begin();

	// CgsArray.h:610
	CgsID * End();

	// CgsArray.h:563
	const CgsID & operator[](unsigned int) const;

	// CgsArray.h:577
	CgsID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGameState::CrashModeScoring::RecentCrash[64] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGameState::CrashModeScoring::RecentCrash &);

	// CgsArray.h:279
	BrnGameState::CrashModeScoring::RecentCrash * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGameState::CrashModeScoring::RecentCrash &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGameState::CrashModeScoring::RecentCrash &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGameState::CrashModeScoring::RecentCrash &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGameState::CrashModeScoring::RecentCrash &) const;

	// CgsArray.h:496
	bool Contains(const BrnGameState::CrashModeScoring::RecentCrash &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGameState::CrashModeScoring::RecentCrash & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGameState::CrashModeScoring::RecentCrash & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGameState::CrashModeScoring::RecentCrash * Begin();

	// CgsArray.h:610
	BrnGameState::CrashModeScoring::RecentCrash * End();

	// CgsArray.h:563
	const BrnGameState::CrashModeScoring::RecentCrash & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGameState::CrashModeScoring::RecentCrash & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<EActiveRaceCarIndex,7u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	EActiveRaceCarIndex[7] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const EActiveRaceCarIndex &);

	// CgsArray.h:279
	EActiveRaceCarIndex * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, EActiveRaceCarIndex &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const EActiveRaceCarIndex &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const EActiveRaceCarIndex &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const EActiveRaceCarIndex &) const;

	// CgsArray.h:496
	bool Contains(const EActiveRaceCarIndex &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const EActiveRaceCarIndex & GetItem(unsigned int) const;

	// CgsArray.h:546
	EActiveRaceCarIndex & GetItem(unsigned int);

	// CgsArray.h:593
	EActiveRaceCarIndex * Begin();

	// CgsArray.h:610
	EActiveRaceCarIndex * End();

	// CgsArray.h:563
	const EActiveRaceCarIndex & operator[](unsigned int) const;

	// CgsArray.h:577
	EActiveRaceCarIndex & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<std::uint16_t,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnProgression::Race,64u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	Race[64] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const Race &);

	// CgsArray.h:279
	Race * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Race &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const Race &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const Race &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const Race &) const;

	// CgsArray.h:496
	bool Contains(const Race &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const Race & GetItem(unsigned int) const;

	// CgsArray.h:546
	Race & GetItem(unsigned int);

	// CgsArray.h:593
	Race * Begin();

	// CgsArray.h:610
	Race * End();

	// CgsArray.h:563
	const Race & operator[](unsigned int) const;

	// CgsArray.h:577
	Race & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	TrophyUnlockAction[12] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const TrophyUnlockAction &);

	// CgsArray.h:279
	TrophyUnlockAction * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, TrophyUnlockAction &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const TrophyUnlockAction &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const TrophyUnlockAction &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const TrophyUnlockAction &) const;

	// CgsArray.h:496
	bool Contains(const TrophyUnlockAction &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const TrophyUnlockAction & GetItem(unsigned int) const;

	// CgsArray.h:546
	TrophyUnlockAction & GetItem(unsigned int);

	// CgsArray.h:593
	TrophyUnlockAction * Begin();

	// CgsArray.h:610
	TrophyUnlockAction * End();

	// CgsArray.h:563
	const TrophyUnlockAction & operator[](unsigned int) const;

	// CgsArray.h:577
	TrophyUnlockAction & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	HullToActivateInfo[7] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const HullToActivateInfo &);

	// CgsArray.h:279
	HullToActivateInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, HullToActivateInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const HullToActivateInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const HullToActivateInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const HullToActivateInfo &) const;

	// CgsArray.h:496
	bool Contains(const HullToActivateInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const HullToActivateInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	HullToActivateInfo & GetItem(unsigned int);

	// CgsArray.h:593
	HullToActivateInfo * Begin();

	// CgsArray.h:610
	HullToActivateInfo * End();

	// CgsArray.h:563
	const HullToActivateInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	HullToActivateInfo & operator[](unsigned int);

}

// CgsArray.h:235
extern void AppendArray<32u>(const const Array<BrnGui::OverheadSignScore,32u> &  lOtherArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:240
		uint32_t luIndex;

	}
}

// CgsArray.h:46
struct CgsContainers::Array<float32_t,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	float32_t[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const float32_t &);

	// CgsArray.h:279
	float32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, float32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const float32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const float32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const float32_t &) const;

	// CgsArray.h:496
	bool Contains(const float32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const float32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	float32_t & GetItem(unsigned int);

	// CgsArray.h:593
	float32_t * Begin();

	// CgsArray.h:610
	float32_t * End();

	// CgsArray.h:563
	const float32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	float32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	SoundTriggerAction[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const SoundTriggerAction &);

	// CgsArray.h:279
	SoundTriggerAction * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, SoundTriggerAction &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const SoundTriggerAction &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const SoundTriggerAction &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const SoundTriggerAction &) const;

	// CgsArray.h:496
	bool Contains(const SoundTriggerAction &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const SoundTriggerAction & GetItem(unsigned int) const;

	// CgsArray.h:546
	SoundTriggerAction & GetItem(unsigned int);

	// CgsArray.h:593
	SoundTriggerAction * Begin();

	// CgsArray.h:610
	SoundTriggerAction * End();

	// CgsArray.h:563
	const SoundTriggerAction & operator[](unsigned int) const;

	// CgsArray.h:577
	SoundTriggerAction & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GameModeState*,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGameState::GameModeState *[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(BrnGameState::GameModeState *const&);

	// CgsArray.h:279
	BrnGameState::GameModeState ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGameState::GameModeState *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(BrnGameState::GameModeState *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(BrnGameState::GameModeState *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(BrnGameState::GameModeState *const&) const;

	// CgsArray.h:496
	bool Contains(BrnGameState::GameModeState *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	BrnGameState::GameModeState *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGameState::GameModeState *& GetItem(unsigned int);

	// CgsArray.h:593
	BrnGameState::GameModeState ** Begin();

	// CgsArray.h:610
	BrnGameState::GameModeState ** End();

	// CgsArray.h:563
	BrnGameState::GameModeState *const& operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGameState::GameModeState *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	GridPositionAndScoreData[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const GridPositionAndScoreData &);

	// CgsArray.h:279
	GridPositionAndScoreData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, GridPositionAndScoreData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const GridPositionAndScoreData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const GridPositionAndScoreData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const GridPositionAndScoreData &) const;

	// CgsArray.h:496
	bool Contains(const GridPositionAndScoreData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const GridPositionAndScoreData & GetItem(unsigned int) const;

	// CgsArray.h:546
	GridPositionAndScoreData & GetItem(unsigned int);

	// CgsArray.h:593
	GridPositionAndScoreData * Begin();

	// CgsArray.h:610
	GridPositionAndScoreData * End();

	// CgsArray.h:563
	const GridPositionAndScoreData & operator[](unsigned int) const;

	// CgsArray.h:577
	GridPositionAndScoreData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo[46] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo &);

	// CgsArray.h:279
	BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo &) const;

	// CgsArray.h:496
	bool Contains(const BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo * Begin();

	// CgsArray.h:610
	BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo * End();

	// CgsArray.h:563
	const BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsID,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CgsID[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CgsID &);

	// CgsArray.h:279
	CgsID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CgsID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CgsID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CgsID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CgsID &) const;

	// CgsArray.h:496
	bool Contains(const CgsID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CgsID & GetItem(unsigned int) const;

	// CgsArray.h:546
	CgsID & GetItem(unsigned int);

	// CgsArray.h:593
	CgsID * Begin();

	// CgsArray.h:610
	CgsID * End();

	// CgsArray.h:563
	const CgsID & operator[](unsigned int) const;

	// CgsArray.h:577
	CgsID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsID,92u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CgsID[92] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CgsID &);

	// CgsArray.h:279
	CgsID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CgsID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CgsID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CgsID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CgsID &) const;

	// CgsArray.h:496
	bool Contains(const CgsID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CgsID & GetItem(unsigned int) const;

	// CgsArray.h:546
	CgsID & GetItem(unsigned int);

	// CgsArray.h:593
	CgsID * Begin();

	// CgsArray.h:610
	CgsID * End();

	// CgsArray.h:563
	const CgsID & operator[](unsigned int) const;

	// CgsArray.h:577
	CgsID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGameState::GameStateImageManagerBase::ImageLoadRequest[3] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGameState::GameStateImageManagerBase::ImageLoadRequest &);

	// CgsArray.h:279
	BrnGameState::GameStateImageManagerBase::ImageLoadRequest * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGameState::GameStateImageManagerBase::ImageLoadRequest &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGameState::GameStateImageManagerBase::ImageLoadRequest &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGameState::GameStateImageManagerBase::ImageLoadRequest &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGameState::GameStateImageManagerBase::ImageLoadRequest &) const;

	// CgsArray.h:496
	bool Contains(const BrnGameState::GameStateImageManagerBase::ImageLoadRequest &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGameState::GameStateImageManagerBase::ImageLoadRequest & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGameState::GameStateImageManagerBase::ImageLoadRequest & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGameState::GameStateImageManagerBase::ImageLoadRequest * Begin();

	// CgsArray.h:610
	BrnGameState::GameStateImageManagerBase::ImageLoadRequest * End();

	// CgsArray.h:563
	const BrnGameState::GameStateImageManagerBase::ImageLoadRequest & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGameState::GameStateImageManagerBase::ImageLoadRequest & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGameState::OnlineFlybyManager::ENewRivalryCompare[4] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGameState::OnlineFlybyManager::ENewRivalryCompare &);

	// CgsArray.h:279
	BrnGameState::OnlineFlybyManager::ENewRivalryCompare * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGameState::OnlineFlybyManager::ENewRivalryCompare &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGameState::OnlineFlybyManager::ENewRivalryCompare &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGameState::OnlineFlybyManager::ENewRivalryCompare &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGameState::OnlineFlybyManager::ENewRivalryCompare &) const;

	// CgsArray.h:496
	bool Contains(const BrnGameState::OnlineFlybyManager::ENewRivalryCompare &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGameState::OnlineFlybyManager::ENewRivalryCompare & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGameState::OnlineFlybyManager::ENewRivalryCompare & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGameState::OnlineFlybyManager::ENewRivalryCompare * Begin();

	// CgsArray.h:610
	BrnGameState::OnlineFlybyManager::ENewRivalryCompare * End();

	// CgsArray.h:563
	const BrnGameState::OnlineFlybyManager::ENewRivalryCompare & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGameState::OnlineFlybyManager::ENewRivalryCompare & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare[6] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &);

	// CgsArray.h:279
	BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &) const;

	// CgsArray.h:496
	bool Contains(const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare * Begin();

	// CgsArray.h:610
	BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare * End();

	// CgsArray.h:563
	const BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnProgression_2007_10_04::MugshotInfo,30u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	MugshotInfo[30] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const MugshotInfo &);

	// CgsArray.h:279
	MugshotInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, MugshotInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const MugshotInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const MugshotInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const MugshotInfo &) const;

	// CgsArray.h:496
	bool Contains(const MugshotInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const MugshotInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	MugshotInfo & GetItem(unsigned int);

	// CgsArray.h:593
	MugshotInfo * Begin();

	// CgsArray.h:610
	MugshotInfo * End();

	// CgsArray.h:563
	const MugshotInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	MugshotInfo & operator[](unsigned int);

}

// CgsArray.h:235
extern void AppendArray<32u>(const const Array<uint16_t,32u> &  lOtherArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:240
		uint32_t luIndex;

	}
}

// CgsArray.h:46
struct CgsContainers::Array<MainGameFlowState*,7u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	MainGameFlowState *[7] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(MainGameFlowState *const&);

	// CgsArray.h:279
	MainGameFlowState ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, MainGameFlowState *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(MainGameFlowState *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(MainGameFlowState *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(MainGameFlowState *const&) const;

	// CgsArray.h:496
	bool Contains(MainGameFlowState *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	MainGameFlowState *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	MainGameFlowState *& GetItem(unsigned int);

	// CgsArray.h:593
	MainGameFlowState ** Begin();

	// CgsArray.h:610
	MainGameFlowState ** End();

	// CgsArray.h:563
	MainGameFlowState *const& operator[](unsigned int) const;

	// CgsArray.h:577
	MainGameFlowState *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGui::BoostMessageSlot,3u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BoostMessageSlot[3] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BoostMessageSlot &);

	// CgsArray.h:279
	BoostMessageSlot * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BoostMessageSlot &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BoostMessageSlot &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BoostMessageSlot &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BoostMessageSlot &) const;

	// CgsArray.h:496
	bool Contains(const BoostMessageSlot &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BoostMessageSlot & GetItem(unsigned int) const;

	// CgsArray.h:546
	BoostMessageSlot & GetItem(unsigned int);

	// CgsArray.h:593
	BoostMessageSlot * Begin();

	// CgsArray.h:610
	BoostMessageSlot * End();

	// CgsArray.h:563
	const BoostMessageSlot & operator[](unsigned int) const;

	// CgsArray.h:577
	BoostMessageSlot & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint32_t,5u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint32_t[5] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint32_t &);

	// CgsArray.h:279
	uint32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint32_t &) const;

	// CgsArray.h:496
	bool Contains(const uint32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint32_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint32_t * Begin();

	// CgsArray.h:610
	uint32_t * End();

	// CgsArray.h:563
	const uint32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsGui::BillboardInfo,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BillboardInfo[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BillboardInfo &);

	// CgsArray.h:279
	BillboardInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BillboardInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BillboardInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BillboardInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BillboardInfo &) const;

	// CgsArray.h:496
	bool Contains(const BillboardInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BillboardInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	BillboardInfo & GetItem(unsigned int);

	// CgsArray.h:593
	BillboardInfo * Begin();

	// CgsArray.h:610
	BillboardInfo * End();

	// CgsArray.h:563
	const BillboardInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	BillboardInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGui::BankingScore,6u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BankingScore[6] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BankingScore &);

	// CgsArray.h:279
	BankingScore * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BankingScore &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BankingScore &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BankingScore &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BankingScore &) const;

	// CgsArray.h:496
	bool Contains(const BankingScore &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BankingScore & GetItem(unsigned int) const;

	// CgsArray.h:546
	BankingScore & GetItem(unsigned int);

	// CgsArray.h:593
	BankingScore * Begin();

	// CgsArray.h:610
	BankingScore * End();

	// CgsArray.h:563
	const BankingScore & operator[](unsigned int) const;

	// CgsArray.h:577
	BankingScore & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	GuiEventNetworkLaunching::NetworkPlayerID[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const GuiEventNetworkLaunching::NetworkPlayerID &);

	// CgsArray.h:279
	GuiEventNetworkLaunching::NetworkPlayerID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, GuiEventNetworkLaunching::NetworkPlayerID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const GuiEventNetworkLaunching::NetworkPlayerID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const GuiEventNetworkLaunching::NetworkPlayerID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const GuiEventNetworkLaunching::NetworkPlayerID &) const;

	// CgsArray.h:496
	bool Contains(const GuiEventNetworkLaunching::NetworkPlayerID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const GuiEventNetworkLaunching::NetworkPlayerID & GetItem(unsigned int) const;

	// CgsArray.h:546
	GuiEventNetworkLaunching::NetworkPlayerID & GetItem(unsigned int);

	// CgsArray.h:593
	GuiEventNetworkLaunching::NetworkPlayerID * Begin();

	// CgsArray.h:610
	GuiEventNetworkLaunching::NetworkPlayerID * End();

	// CgsArray.h:563
	const GuiEventNetworkLaunching::NetworkPlayerID & operator[](unsigned int) const;

	// CgsArray.h:577
	GuiEventNetworkLaunching::NetworkPlayerID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsGui::AnimChannelData,6u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	AnimChannelData[6] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const AnimChannelData &);

	// CgsArray.h:279
	AnimChannelData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, AnimChannelData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const AnimChannelData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const AnimChannelData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const AnimChannelData &) const;

	// CgsArray.h:496
	bool Contains(const AnimChannelData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const AnimChannelData & GetItem(unsigned int) const;

	// CgsArray.h:546
	AnimChannelData & GetItem(unsigned int);

	// CgsArray.h:593
	AnimChannelData * Begin();

	// CgsArray.h:610
	AnimChannelData * End();

	// CgsArray.h:563
	const AnimChannelData & operator[](unsigned int) const;

	// CgsArray.h:577
	AnimChannelData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CgsGui::AnimData::AnimatorChannel[6] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CgsGui::AnimData::AnimatorChannel &);

	// CgsArray.h:279
	CgsGui::AnimData::AnimatorChannel * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CgsGui::AnimData::AnimatorChannel &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CgsGui::AnimData::AnimatorChannel &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CgsGui::AnimData::AnimatorChannel &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CgsGui::AnimData::AnimatorChannel &) const;

	// CgsArray.h:496
	bool Contains(const CgsGui::AnimData::AnimatorChannel &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CgsGui::AnimData::AnimatorChannel & GetItem(unsigned int) const;

	// CgsArray.h:546
	CgsGui::AnimData::AnimatorChannel & GetItem(unsigned int);

	// CgsArray.h:593
	CgsGui::AnimData::AnimatorChannel * Begin();

	// CgsArray.h:610
	CgsGui::AnimData::AnimatorChannel * End();

	// CgsArray.h:563
	const CgsGui::AnimData::AnimatorChannel & operator[](unsigned int) const;

	// CgsArray.h:577
	CgsGui::AnimData::AnimatorChannel & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsGui::AnimChannel,6u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	AnimChannel[6] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const AnimChannel &);

	// CgsArray.h:279
	AnimChannel * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, AnimChannel &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const AnimChannel &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const AnimChannel &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const AnimChannel &) const;

	// CgsArray.h:496
	bool Contains(const AnimChannel &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const AnimChannel & GetItem(unsigned int) const;

	// CgsArray.h:546
	AnimChannel & GetItem(unsigned int);

	// CgsArray.h:593
	AnimChannel * Begin();

	// CgsArray.h:610
	AnimChannel * End();

	// CgsArray.h:563
	const AnimChannel & operator[](unsigned int) const;

	// CgsArray.h:577
	AnimChannel & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsGui::AnimData,2u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	AnimData[2] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const AnimData &);

	// CgsArray.h:279
	AnimData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, AnimData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const AnimData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const AnimData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const AnimData &) const;

	// CgsArray.h:496
	bool Contains(const AnimData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const AnimData & GetItem(unsigned int) const;

	// CgsArray.h:546
	AnimData & GetItem(unsigned int);

	// CgsArray.h:593
	AnimData * Begin();

	// CgsArray.h:610
	AnimData * End();

	// CgsArray.h:563
	const AnimData & operator[](unsigned int) const;

	// CgsArray.h:577
	AnimData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsGui::AnimChannelData,2u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	AnimChannelData[2] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const AnimChannelData &);

	// CgsArray.h:279
	AnimChannelData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, AnimChannelData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const AnimChannelData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const AnimChannelData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const AnimChannelData &) const;

	// CgsArray.h:496
	bool Contains(const AnimChannelData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const AnimChannelData & GetItem(unsigned int) const;

	// CgsArray.h:546
	AnimChannelData & GetItem(unsigned int);

	// CgsArray.h:593
	AnimChannelData * Begin();

	// CgsArray.h:610
	AnimChannelData * End();

	// CgsArray.h:563
	const AnimChannelData & operator[](unsigned int) const;

	// CgsArray.h:577
	AnimChannelData & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGui::ScrollableSelectionItem[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGui::ScrollableSelectionItem &);

	// CgsArray.h:279
	BrnGui::ScrollableSelectionItem * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGui::ScrollableSelectionItem &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGui::ScrollableSelectionItem &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGui::ScrollableSelectionItem &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGui::ScrollableSelectionItem &) const;

	// CgsArray.h:496
	bool Contains(const BrnGui::ScrollableSelectionItem &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGui::ScrollableSelectionItem & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGui::ScrollableSelectionItem & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGui::ScrollableSelectionItem * Begin();

	// CgsArray.h:610
	BrnGui::ScrollableSelectionItem * End();

	// CgsArray.h:563
	const BrnGui::ScrollableSelectionItem & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGui::ScrollableSelectionItem & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<float32_t,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	float32_t[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const float32_t &);

	// CgsArray.h:279
	float32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, float32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const float32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const float32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const float32_t &) const;

	// CgsArray.h:496
	bool Contains(const float32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const float32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	float32_t & GetItem(unsigned int);

	// CgsArray.h:593
	float32_t * Begin();

	// CgsArray.h:610
	float32_t * End();

	// CgsArray.h:563
	const float32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	float32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnGui::Animator,32u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnGui::Animator[32] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnGui::Animator &);

	// CgsArray.h:279
	BrnGui::Animator * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnGui::Animator &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnGui::Animator &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnGui::Animator &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnGui::Animator &) const;

	// CgsArray.h:496
	bool Contains(const BrnGui::Animator &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnGui::Animator & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnGui::Animator & GetItem(unsigned int);

	// CgsArray.h:593
	BrnGui::Animator * Begin();

	// CgsArray.h:610
	BrnGui::Animator * End();

	// CgsArray.h:563
	const BrnGui::Animator & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnGui::Animator & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	AggressiveMoveData::NetworkPlayerID[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const AggressiveMoveData::NetworkPlayerID &);

	// CgsArray.h:279
	AggressiveMoveData::NetworkPlayerID * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, AggressiveMoveData::NetworkPlayerID &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const AggressiveMoveData::NetworkPlayerID &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const AggressiveMoveData::NetworkPlayerID &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const AggressiveMoveData::NetworkPlayerID &) const;

	// CgsArray.h:496
	bool Contains(const AggressiveMoveData::NetworkPlayerID &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const AggressiveMoveData::NetworkPlayerID & GetItem(unsigned int) const;

	// CgsArray.h:546
	AggressiveMoveData::NetworkPlayerID & GetItem(unsigned int);

	// CgsArray.h:593
	AggressiveMoveData::NetworkPlayerID * Begin();

	// CgsArray.h:610
	AggressiveMoveData::NetworkPlayerID * End();

	// CgsArray.h:563
	const AggressiveMoveData::NetworkPlayerID & operator[](unsigned int) const;

	// CgsArray.h:577
	AggressiveMoveData::NetworkPlayerID & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsSceneManager::EntityId,20u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	EntityId[20] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const EntityId &);

	// CgsArray.h:279
	EntityId * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, EntityId &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const EntityId &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const EntityId &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const EntityId &) const;

	// CgsArray.h:496
	bool Contains(const EntityId &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const EntityId & GetItem(unsigned int) const;

	// CgsArray.h:546
	EntityId & GetItem(unsigned int);

	// CgsArray.h:593
	EntityId * Begin();

	// CgsArray.h:610
	EntityId * End();

	// CgsArray.h:563
	const EntityId & operator[](unsigned int) const;

	// CgsArray.h:577
	EntityId & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar[5] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar &);

	// CgsArray.h:279
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar &) const;

	// CgsArray.h:496
	bool Contains(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar & GetItem(unsigned int);

	// CgsArray.h:593
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar * Begin();

	// CgsArray.h:610
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar * End();

	// CgsArray.h:563
	const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector[10] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector &);

	// CgsArray.h:279
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector &) const;

	// CgsArray.h:496
	bool Contains(const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector & GetItem(unsigned int);

	// CgsArray.h:593
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector * Begin();

	// CgsArray.h:610
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector * End();

	// CgsArray.h:563
	const BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsSound::Io::QueueElement,3u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	Command::QueueElement[3] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const Command::QueueElement &);

	// CgsArray.h:279
	Command::QueueElement * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Command::QueueElement &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const Command::QueueElement &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const Command::QueueElement &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const Command::QueueElement &) const;

	// CgsArray.h:496
	bool Contains(const Command::QueueElement &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const Command::QueueElement & GetItem(unsigned int) const;

	// CgsArray.h:546
	Command::QueueElement & GetItem(unsigned int);

	// CgsArray.h:593
	Command::QueueElement * Begin();

	// CgsArray.h:610
	Command::QueueElement * End();

	// CgsArray.h:563
	const Command::QueueElement & operator[](unsigned int) const;

	// CgsArray.h:577
	Command::QueueElement & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *[124] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *const&);

	// CgsArray.h:279
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *const&) const;

	// CgsArray.h:496
	bool Contains(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *& GetItem(unsigned int);

	// CgsArray.h:593
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> ** Begin();

	// CgsArray.h:610
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> ** End();

	// CgsArray.h:563
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *const& operator[](unsigned int) const;

	// CgsArray.h:577
	LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *& operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord,5u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord[5] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord &);

	// CgsArray.h:279
	BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord &) const;

	// CgsArray.h:496
	bool Contains(const BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord & GetItem(unsigned int);

	// CgsArray.h:593
	BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord * Begin();

	// CgsArray.h:610
	BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord * End();

	// CgsArray.h:563
	const BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnSound::Logic::Collision::OutputCollision*,64u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	OutputCollision *[64] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(OutputCollision *const&);

	// CgsArray.h:279
	OutputCollision ** Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, OutputCollision *&);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(OutputCollision *const&);

	// CgsArray.h:443
	uint32_t CountInstancesOf(OutputCollision *const&) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(OutputCollision *const&) const;

	// CgsArray.h:496
	bool Contains(OutputCollision *const&) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	OutputCollision *const& GetItem(unsigned int) const;

	// CgsArray.h:546
	OutputCollision *& GetItem(unsigned int);

	// CgsArray.h:593
	OutputCollision ** Begin();

	// CgsArray.h:610
	OutputCollision ** End();

	// CgsArray.h:563
	OutputCollision *const& operator[](unsigned int) const;

	// CgsArray.h:577
	OutputCollision *& operator[](unsigned int);

}

// CgsArray.h:235
extern void AppendArray<3u>(const const Array<CgsSound::Io::QueueElement,3u> &  lOtherArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:240
		uint32_t luIndex;

	}
}

// CgsArray.h:235
extern void AppendArray<124u>(const const Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u> &  lOtherArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:240
		uint32_t luIndex;

	}
}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	PhysicalRequestInfo[25] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const PhysicalRequestInfo &);

	// CgsArray.h:279
	PhysicalRequestInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, PhysicalRequestInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const PhysicalRequestInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const PhysicalRequestInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const PhysicalRequestInfo &) const;

	// CgsArray.h:496
	bool Contains(const PhysicalRequestInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const PhysicalRequestInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	PhysicalRequestInfo & GetItem(unsigned int);

	// CgsArray.h:593
	PhysicalRequestInfo * Begin();

	// CgsArray.h:610
	PhysicalRequestInfo * End();

	// CgsArray.h:563
	const PhysicalRequestInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	PhysicalRequestInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsSceneManager::EntityId,650u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	EntityId[650] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const EntityId &);

	// CgsArray.h:279
	EntityId * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, EntityId &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const EntityId &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const EntityId &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const EntityId &) const;

	// CgsArray.h:496
	bool Contains(const EntityId &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const EntityId & GetItem(unsigned int) const;

	// CgsArray.h:546
	EntityId & GetItem(unsigned int);

	// CgsArray.h:593
	EntityId * Begin();

	// CgsArray.h:610
	EntityId * End();

	// CgsArray.h:563
	const EntityId & operator[](unsigned int) const;

	// CgsArray.h:577
	EntityId & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	VehicleRenderInfo[64] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const VehicleRenderInfo &);

	// CgsArray.h:279
	VehicleRenderInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, VehicleRenderInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const VehicleRenderInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const VehicleRenderInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const VehicleRenderInfo &) const;

	// CgsArray.h:496
	bool Contains(const VehicleRenderInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const VehicleRenderInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	VehicleRenderInfo & GetItem(unsigned int);

	// CgsArray.h:593
	VehicleRenderInfo * Begin();

	// CgsArray.h:610
	VehicleRenderInfo * End();

	// CgsArray.h:563
	const VehicleRenderInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	VehicleRenderInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<rw::math::vpu::Vector3,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	Vector3[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const rw::math::vpu::Vector3 &);

	// CgsArray.h:279
	Vector3 * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Vector3 &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const rw::math::vpu::Vector3 &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:496
	bool Contains(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const rw::math::vpu::Vector3 & GetItem(unsigned int) const;

	// CgsArray.h:546
	Vector3 & GetItem(unsigned int);

	// CgsArray.h:593
	Vector3 * Begin();

	// CgsArray.h:610
	Vector3 * End();

	// CgsArray.h:563
	const rw::math::vpu::Vector3 & operator[](unsigned int) const;

	// CgsArray.h:577
	Vector3 & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<rw::math::vpu::VecFloat,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	VecFloat[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const VecFloat &);

	// CgsArray.h:279
	VecFloat * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, VecFloat &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const VecFloat &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const VecFloat &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const VecFloat &) const;

	// CgsArray.h:496
	bool Contains(const VecFloat &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const VecFloat & GetItem(unsigned int) const;

	// CgsArray.h:546
	VecFloat & GetItem(unsigned int);

	// CgsArray.h:593
	VecFloat * Begin();

	// CgsArray.h:610
	VecFloat * End();

	// CgsArray.h:563
	const VecFloat & operator[](unsigned int) const;

	// CgsArray.h:577
	VecFloat & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,1u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[1] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	PurgatoryInfo[400] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const PurgatoryInfo &);

	// CgsArray.h:279
	PurgatoryInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, PurgatoryInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const PurgatoryInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const PurgatoryInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const PurgatoryInfo &) const;

	// CgsArray.h:496
	bool Contains(const PurgatoryInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const PurgatoryInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	PurgatoryInfo & GetItem(unsigned int);

	// CgsArray.h:593
	PurgatoryInfo * Begin();

	// CgsArray.h:610
	PurgatoryInfo * End();

	// CgsArray.h:563
	const PurgatoryInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	PurgatoryInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	PurgatoryInfo[200] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const PurgatoryInfo &);

	// CgsArray.h:279
	PurgatoryInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, PurgatoryInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const PurgatoryInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const PurgatoryInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const PurgatoryInfo &) const;

	// CgsArray.h:496
	bool Contains(const PurgatoryInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const PurgatoryInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	PurgatoryInfo & GetItem(unsigned int);

	// CgsArray.h:593
	PurgatoryInfo * Begin();

	// CgsArray.h:610
	PurgatoryInfo * End();

	// CgsArray.h:563
	const PurgatoryInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	PurgatoryInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	PurgatoryInfo[1] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const PurgatoryInfo &);

	// CgsArray.h:279
	PurgatoryInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, PurgatoryInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const PurgatoryInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const PurgatoryInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const PurgatoryInfo &) const;

	// CgsArray.h:496
	bool Contains(const PurgatoryInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const PurgatoryInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	PurgatoryInfo & GetItem(unsigned int);

	// CgsArray.h:593
	PurgatoryInfo * Begin();

	// CgsArray.h:610
	PurgatoryInfo * End();

	// CgsArray.h:563
	const PurgatoryInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	PurgatoryInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,72u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[72] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::HullChangeInfo,400u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	HullChangeInfo[400] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const HullChangeInfo &);

	// CgsArray.h:279
	HullChangeInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, HullChangeInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const HullChangeInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const HullChangeInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const HullChangeInfo &) const;

	// CgsArray.h:496
	bool Contains(const HullChangeInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const HullChangeInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	HullChangeInfo & GetItem(unsigned int);

	// CgsArray.h:593
	HullChangeInfo * Begin();

	// CgsArray.h:610
	HullChangeInfo * End();

	// CgsArray.h:563
	const HullChangeInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	HullChangeInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,9u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[9] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	TrafficCrashInfo[160] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const TrafficCrashInfo &);

	// CgsArray.h:279
	TrafficCrashInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, TrafficCrashInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const TrafficCrashInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const TrafficCrashInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const TrafficCrashInfo &) const;

	// CgsArray.h:496
	bool Contains(const TrafficCrashInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const TrafficCrashInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	TrafficCrashInfo & GetItem(unsigned int);

	// CgsArray.h:593
	TrafficCrashInfo * Begin();

	// CgsArray.h:610
	TrafficCrashInfo * End();

	// CgsArray.h:563
	const TrafficCrashInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	TrafficCrashInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,160u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[160] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CollidableVehicleInfo4[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CollidableVehicleInfo4 &);

	// CgsArray.h:279
	CollidableVehicleInfo4 * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CollidableVehicleInfo4 &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CollidableVehicleInfo4 &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CollidableVehicleInfo4 &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CollidableVehicleInfo4 &) const;

	// CgsArray.h:496
	bool Contains(const CollidableVehicleInfo4 &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CollidableVehicleInfo4 & GetItem(unsigned int) const;

	// CgsArray.h:546
	CollidableVehicleInfo4 & GetItem(unsigned int);

	// CgsArray.h:593
	CollidableVehicleInfo4 * Begin();

	// CgsArray.h:610
	CollidableVehicleInfo4 * End();

	// CgsArray.h:563
	const CollidableVehicleInfo4 & operator[](unsigned int) const;

	// CgsArray.h:577
	CollidableVehicleInfo4 & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	FiredKillZoneInfo[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const FiredKillZoneInfo &);

	// CgsArray.h:279
	FiredKillZoneInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, FiredKillZoneInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const FiredKillZoneInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const FiredKillZoneInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const FiredKillZoneInfo &) const;

	// CgsArray.h:496
	bool Contains(const FiredKillZoneInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const FiredKillZoneInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	FiredKillZoneInfo & GetItem(unsigned int);

	// CgsArray.h:593
	FiredKillZoneInfo * Begin();

	// CgsArray.h:610
	FiredKillZoneInfo * End();

	// CgsArray.h:563
	const FiredKillZoneInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	FiredKillZoneInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<rw::math::vpu::Vector3,33u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	Vector3[33] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const rw::math::vpu::Vector3 &);

	// CgsArray.h:279
	Vector3 * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Vector3 &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const rw::math::vpu::Vector3 &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:496
	bool Contains(const rw::math::vpu::Vector3 &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const rw::math::vpu::Vector3 & GetItem(unsigned int) const;

	// CgsArray.h:546
	Vector3 & GetItem(unsigned int);

	// CgsArray.h:593
	Vector3 * Begin();

	// CgsArray.h:610
	Vector3 * End();

	// CgsArray.h:563
	const rw::math::vpu::Vector3 & operator[](unsigned int) const;

	// CgsArray.h:577
	Vector3 & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,64u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[64] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint8_t,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint8_t[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint8_t &);

	// CgsArray.h:279
	uint8_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint8_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint8_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint8_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint8_t &) const;

	// CgsArray.h:496
	bool Contains(const uint8_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint8_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint8_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint8_t * Begin();

	// CgsArray.h:610
	uint8_t * End();

	// CgsArray.h:563
	const uint8_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint8_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	PhysicalVehicleInfo[33] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const PhysicalVehicleInfo &);

	// CgsArray.h:279
	PhysicalVehicleInfo * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, PhysicalVehicleInfo &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const PhysicalVehicleInfo &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const PhysicalVehicleInfo &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const PhysicalVehicleInfo &) const;

	// CgsArray.h:496
	bool Contains(const PhysicalVehicleInfo &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const PhysicalVehicleInfo & GetItem(unsigned int) const;

	// CgsArray.h:546
	PhysicalVehicleInfo & GetItem(unsigned int);

	// CgsArray.h:593
	PhysicalVehicleInfo * Begin();

	// CgsArray.h:610
	PhysicalVehicleInfo * End();

	// CgsArray.h:563
	const PhysicalVehicleInfo & operator[](unsigned int) const;

	// CgsArray.h:577
	PhysicalVehicleInfo & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnTraffic::CrashingThingData,168u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	CrashingThingData[168] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const CrashingThingData &);

	// CgsArray.h:279
	CrashingThingData * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, CrashingThingData &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const CrashingThingData &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const CrashingThingData &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const CrashingThingData &) const;

	// CgsArray.h:496
	bool Contains(const CrashingThingData &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const CrashingThingData & GetItem(unsigned int) const;

	// CgsArray.h:546
	CrashingThingData & GetItem(unsigned int);

	// CgsArray.h:593
	CrashingThingData * Begin();

	// CgsArray.h:610
	CrashingThingData * End();

	// CgsArray.h:563
	const CrashingThingData & operator[](unsigned int) const;

	// CgsArray.h:577
	CrashingThingData & operator[](unsigned int);

}

// CgsArray.h:258
extern void AppendSet<72u>(const const Set<uint16_t,72u> &  lSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:263
		uint32_t luIndex;

	}
}

// CgsArray.h:46
struct CgsContainers::Array<uint16_t,400u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[400] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<uint32_t,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint32_t[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint32_t &);

	// CgsArray.h:279
	uint32_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint32_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint32_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint32_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint32_t &) const;

	// CgsArray.h:496
	bool Contains(const uint32_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint32_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint32_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint32_t * Begin();

	// CgsArray.h:610
	uint32_t * End();

	// CgsArray.h:563
	const uint32_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint32_t & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	ResetOnTrackRequest[35] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const ResetOnTrackRequest &);

	// CgsArray.h:279
	ResetOnTrackRequest * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, ResetOnTrackRequest &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const ResetOnTrackRequest &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const ResetOnTrackRequest &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const ResetOnTrackRequest &) const;

	// CgsArray.h:496
	bool Contains(const ResetOnTrackRequest &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const ResetOnTrackRequest & GetItem(unsigned int) const;

	// CgsArray.h:546
	ResetOnTrackRequest & GetItem(unsigned int);

	// CgsArray.h:593
	ResetOnTrackRequest * Begin();

	// CgsArray.h:610
	ResetOnTrackRequest * End();

	// CgsArray.h:563
	const ResetOnTrackRequest & operator[](unsigned int) const;

	// CgsArray.h:577
	ResetOnTrackRequest & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	SectionAndPortalIndices[16] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const SectionAndPortalIndices &);

	// CgsArray.h:279
	SectionAndPortalIndices * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, SectionAndPortalIndices &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const SectionAndPortalIndices &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const SectionAndPortalIndices &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const SectionAndPortalIndices &) const;

	// CgsArray.h:496
	bool Contains(const SectionAndPortalIndices &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const SectionAndPortalIndices & GetItem(unsigned int) const;

	// CgsArray.h:546
	SectionAndPortalIndices & GetItem(unsigned int);

	// CgsArray.h:593
	SectionAndPortalIndices * Begin();

	// CgsArray.h:610
	SectionAndPortalIndices * End();

	// CgsArray.h:563
	const SectionAndPortalIndices & operator[](unsigned int) const;

	// CgsArray.h:577
	SectionAndPortalIndices & operator[](unsigned int);

}

// CgsArray.h:235
extern void AppendArray<8u>(const const Array<uint32_t,8u> &  lOtherArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:240
		uint32_t luIndex;

	}
}

// CgsArray.h:235
extern void AppendArray<7u>(const const Array<BrnAI::RaceBalancingGraph,7u> &  lOtherArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:240
		uint32_t luIndex;

	}
}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::RaceCarCrash,8u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	RaceCarCrash[8] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const RaceCarCrash &);

	// CgsArray.h:279
	RaceCarCrash * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, RaceCarCrash &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const RaceCarCrash &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const RaceCarCrash &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const RaceCarCrash &) const;

	// CgsArray.h:496
	bool Contains(const RaceCarCrash &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const RaceCarCrash & GetItem(unsigned int) const;

	// CgsArray.h:546
	RaceCarCrash & GetItem(unsigned int);

	// CgsArray.h:593
	RaceCarCrash * Begin();

	// CgsArray.h:610
	RaceCarCrash * End();

	// CgsArray.h:563
	const RaceCarCrash & operator[](unsigned int) const;

	// CgsArray.h:577
	RaceCarCrash & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::TrafficCrash,160u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	TrafficCrash[160] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const TrafficCrash &);

	// CgsArray.h:279
	TrafficCrash * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, TrafficCrash &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const TrafficCrash &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const TrafficCrash &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const TrafficCrash &) const;

	// CgsArray.h:496
	bool Contains(const TrafficCrash &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const TrafficCrash & GetItem(unsigned int) const;

	// CgsArray.h:546
	TrafficCrash & GetItem(unsigned int);

	// CgsArray.h:593
	TrafficCrash * Begin();

	// CgsArray.h:610
	TrafficCrash * End();

	// CgsArray.h:563
	const TrafficCrash & operator[](unsigned int) const;

	// CgsArray.h:577
	TrafficCrash & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<BrnWorld::CrashModule::FrozenTrafficTransform,160u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	BrnWorld::CrashModule::FrozenTrafficTransform[160] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const BrnWorld::CrashModule::FrozenTrafficTransform &);

	// CgsArray.h:279
	BrnWorld::CrashModule::FrozenTrafficTransform * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, BrnWorld::CrashModule::FrozenTrafficTransform &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const BrnWorld::CrashModule::FrozenTrafficTransform &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const BrnWorld::CrashModule::FrozenTrafficTransform &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const BrnWorld::CrashModule::FrozenTrafficTransform &) const;

	// CgsArray.h:496
	bool Contains(const BrnWorld::CrashModule::FrozenTrafficTransform &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const BrnWorld::CrashModule::FrozenTrafficTransform & GetItem(unsigned int) const;

	// CgsArray.h:546
	BrnWorld::CrashModule::FrozenTrafficTransform & GetItem(unsigned int);

	// CgsArray.h:593
	BrnWorld::CrashModule::FrozenTrafficTransform * Begin();

	// CgsArray.h:610
	BrnWorld::CrashModule::FrozenTrafficTransform * End();

	// CgsArray.h:563
	const BrnWorld::CrashModule::FrozenTrafficTransform & operator[](unsigned int) const;

	// CgsArray.h:577
	BrnWorld::CrashModule::FrozenTrafficTransform & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	Im3dVertex[512] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const Im3dVertex &);

	// CgsArray.h:279
	Im3dVertex * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, Im3dVertex &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const Im3dVertex &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const Im3dVertex &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const Im3dVertex &) const;

	// CgsArray.h:496
	bool Contains(const Im3dVertex &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const Im3dVertex & GetItem(unsigned int) const;

	// CgsArray.h:546
	Im3dVertex & GetItem(unsigned int);

	// CgsArray.h:593
	Im3dVertex * Begin();

	// CgsArray.h:610
	Im3dVertex * End();

	// CgsArray.h:563
	const Im3dVertex & operator[](unsigned int) const;

	// CgsArray.h:577
	Im3dVertex & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<CgsSceneManager::LineTestIntersection,256u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	LineTestIntersection[256] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const LineTestIntersection &);

	// CgsArray.h:279
	LineTestIntersection * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, LineTestIntersection &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const LineTestIntersection &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const LineTestIntersection &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const LineTestIntersection &) const;

	// CgsArray.h:496
	bool Contains(const LineTestIntersection &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const LineTestIntersection & GetItem(unsigned int) const;

	// CgsArray.h:546
	LineTestIntersection & GetItem(unsigned int);

	// CgsArray.h:593
	LineTestIntersection * Begin();

	// CgsArray.h:610
	LineTestIntersection * End();

	// CgsArray.h:563
	const LineTestIntersection & operator[](unsigned int) const;

	// CgsArray.h:577
	LineTestIntersection & operator[](unsigned int);

}

// CgsArray.h:46
struct CgsContainers::Array<std::uint16_t,16384u> {
	// CgsArray.h:49
	extern const uint32_t KU_INVALID;

private:
	// CgsArray.h:171
	uint16_t[16384] maElements;

	// CgsArray.h:172
	uint32_t muLength;

public:
	// CgsArray.h:52
	void Array();

	// CgsArray.h:186
	void Construct();

	// CgsArray.h:201
	void Construct(unsigned int);

	// CgsArray.h:215
	void Append(const uint16_t &);

	// CgsArray.h:279
	uint16_t * Grow();

	// CgsArray.h:302
	void InsertBefore(unsigned int, uint16_t &);

	// CgsArray.h:326
	uint32_t GetLength() const;

	// CgsArray.h:341
	uint32_t GetCapacity() const;

	// CgsArray.h:355
	void Clear();

	// CgsArray.h:370
	void Erase(unsigned int);

	// CgsArray.h:395
	void EraseFast(unsigned int);

	// CgsArray.h:416
	void EraseInstancesOf(const uint16_t &);

	// CgsArray.h:443
	uint32_t CountInstancesOf(const uint16_t &) const;

	// CgsArray.h:470
	uint32_t FindFirstInstanceOf(const uint16_t &) const;

	// CgsArray.h:496
	bool Contains(const uint16_t &) const;

	// CgsArray.h:512
	bool IsFull() const;

	// CgsArray.h:528
	const uint16_t & GetItem(unsigned int) const;

	// CgsArray.h:546
	uint16_t & GetItem(unsigned int);

	// CgsArray.h:593
	uint16_t * Begin();

	// CgsArray.h:610
	uint16_t * End();

	// CgsArray.h:563
	const uint16_t & operator[](unsigned int) const;

	// CgsArray.h:577
	uint16_t & operator[](unsigned int);

}

