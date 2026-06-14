// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourcePtr.h:149
	const BaseResourcePtr NULLResourcePtr;

}

// CgsResourcePtr.h:65
struct CgsResource::BaseResourcePtr {
protected:
	// CgsResourcePtr.h:97
	ResourceHandle::Resource mResourceMemory;

	// CgsResourcePtr.h:98
	BaseResourcePtr * mpNext;

	// CgsResourcePtr.h:99
	BaseResourcePtr * mpPrev;

	// CgsResourcePtr.h:100
	ResourceHandle mHandle;

	// CgsResourcePtr.h:104
	BaseResourcePtr * mpThis;

	// CgsResourcePtr.h:107
	extern EAThreadDynamicData::ThreadId _mUThreadId;

public:
	// CgsResourcePtr.h:69
	void BaseResourcePtr();

	// CgsResourcePtr.h:72
	void ~BaseResourcePtr();

	// CgsResourcePtr.h:76
	void GetResource(ResourceHandle::Resource *) const;

	// CgsResourcePtr.h:80
	void GetResourceHandle(ResourceHandle *) const;

	// CgsResourcePtr.h:84
	ResourceHandle GetResourceHandle() const;

	// CgsResourcePtr.h:88
	void SetResource(const ResourceHandle::Resource *);

	// CgsResourcePtr.h:92
	bool IsEqual(const ResourceHandle::Resource *) const;

protected:
	// CgsResourcePtr.h:111
	void Reset();

	// CgsResourcePtr.h:115
	void RemoveFromCurrentList();

	// CgsResourcePtr.h:119
	void AddToNewList(BaseResourcePtr *);

	// CgsResourcePtr.h:123
	void CreateFromPointer(const BaseResourcePtr *);

	// CgsResourcePtr.h:127
	void CreateFromHandle(const ResourceHandle *);

	// CgsResourcePtr.h:131
	void Propogate();

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnResource::VehicleListResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnResource::VehicleListResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnResource::VehicleListResource> & operator=(const ResourcePtr<BrnResource::VehicleListResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnResource::VehicleListResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnResource::VehicleListResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	VehicleListResource * operator->();

	// CgsResourcePtr.h:557
	const VehicleListResource * operator->() const;

	// CgsResourcePtr.h:612
	VehicleListResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnResource::VehicleListResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnResource::VehicleListResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	VehicleListResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const VehicleListResource * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnAI::AISectionsData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnAI::AISectionsData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnAI::AISectionsData> & operator=(const ResourcePtr<BrnAI::AISectionsData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnAI::AISectionsData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnAI::AISectionsData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	AISectionsData * operator->();

	// CgsResourcePtr.h:557
	const AISectionsData * operator->() const;

	// CgsResourcePtr.h:612
	AISectionsData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnAI::AISectionsData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnAI::AISectionsData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	AISectionsData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const AISectionsData * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnTraffic::TrafficData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnTraffic::TrafficData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnTraffic::TrafficData> & operator=(const ResourcePtr<BrnTraffic::TrafficData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnTraffic::TrafficData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnTraffic::TrafficData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	TrafficData * operator->();

	// CgsResourcePtr.h:557
	const TrafficData * operator->() const;

	// CgsResourcePtr.h:612
	TrafficData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnTraffic::TrafficData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnTraffic::TrafficData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	TrafficData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const TrafficData * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnTrigger::TriggerData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnTrigger::TriggerData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnTrigger::TriggerData> & operator=(const ResourcePtr<BrnTrigger::TriggerData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnTrigger::TriggerData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnTrigger::TriggerData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	TriggerData * operator->();

	// CgsResourcePtr.h:557
	const TriggerData * operator->() const;

	// CgsResourcePtr.h:612
	TriggerData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnTrigger::TriggerData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnTrigger::TriggerData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	TriggerData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const TriggerData * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > & operator=(const ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > & operator=(const ResourceHandle &);

	// Unknown accessibility
	// ICEList.h:38
	typedef CgsContainers::Dictionary<ICE::ICETakeData> ICETakeDictionary;

	// CgsResourcePtr.h:538
	ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >::ICETakeDictionary * operator->();

	// CgsResourcePtr.h:557
	const ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >::ICETakeDictionary * operator->() const;

	// CgsResourcePtr.h:612
	ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >::ICETakeDictionary & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >::ICETakeDictionary * GetMemoryResource();

	// CgsResourcePtr.h:593
	const ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >::ICETakeDictionary * GetMemoryResource() const;

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourcePtr.h:149
	const BaseResourcePtr NULLResourcePtr;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> & operator=(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	StreamedDeformationSpec * operator->();

	// CgsResourcePtr.h:557
	const StreamedDeformationSpec * operator->() const;

	// CgsResourcePtr.h:612
	StreamedDeformationSpec & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	StreamedDeformationSpec * GetMemoryResource();

	// CgsResourcePtr.h:593
	const StreamedDeformationSpec * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnParticle::VFXPropCollection> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnParticle::VFXPropCollection> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnParticle::VFXPropCollection> & operator=(const ResourcePtr<BrnParticle::VFXPropCollection> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnParticle::VFXPropCollection> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnParticle::VFXPropCollection> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	VFXPropCollection * operator->();

	// CgsResourcePtr.h:557
	const VFXPropCollection * operator->() const;

	// CgsResourcePtr.h:612
	VFXPropCollection & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnParticle::VFXPropCollection> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnParticle::VFXPropCollection> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	VFXPropCollection * GetMemoryResource();

	// CgsResourcePtr.h:593
	const VFXPropCollection * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> & operator=(const ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	PropPhysicsDataHeader * operator->();

	// CgsResourcePtr.h:557
	const PropPhysicsDataHeader * operator->() const;

	// CgsResourcePtr.h:612
	PropPhysicsDataHeader & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	PropPhysicsDataHeader * GetMemoryResource();

	// CgsResourcePtr.h:593
	const PropPhysicsDataHeader * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnResource::ChallengeListResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnResource::ChallengeListResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnResource::ChallengeListResource> & operator=(const ResourcePtr<BrnResource::ChallengeListResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnResource::ChallengeListResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnResource::ChallengeListResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	ChallengeListResource * operator->();

	// CgsResourcePtr.h:557
	const ChallengeListResource * operator->() const;

	// CgsResourcePtr.h:612
	ChallengeListResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnResource::ChallengeListResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnResource::ChallengeListResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	ChallengeListResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const ChallengeListResource * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnStreetData::StreetData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnStreetData::StreetData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnStreetData::StreetData> & operator=(const ResourcePtr<BrnStreetData::StreetData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnStreetData::StreetData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnStreetData::StreetData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	StreetData * operator->();

	// CgsResourcePtr.h:557
	const StreetData * operator->() const;

	// CgsResourcePtr.h:612
	StreetData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnStreetData::StreetData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnStreetData::StreetData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	StreetData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const StreetData * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	GraphicsSpec * operator->();

	// CgsResourcePtr.h:557
	const GraphicsSpec * operator->() const;

	// CgsResourcePtr.h:612
	GraphicsSpec & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnVehicle::GraphicsSpec> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnVehicle::GraphicsSpec> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	GraphicsSpec * GetMemoryResource();

	// CgsResourcePtr.h:593
	const GraphicsSpec * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnWheel::GraphicsSpec> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnWheel::GraphicsSpec> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnWheel::GraphicsSpec> & operator=(const ResourcePtr<BrnWheel::GraphicsSpec> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnWheel::GraphicsSpec> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnWheel::GraphicsSpec> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	GraphicsSpec * operator->();

	// CgsResourcePtr.h:557
	const GraphicsSpec * operator->() const;

	// CgsResourcePtr.h:612
	GraphicsSpec & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnWheel::GraphicsSpec> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnWheel::GraphicsSpec> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	GraphicsSpec * GetMemoryResource();

	// CgsResourcePtr.h:593
	const GraphicsSpec * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnWorld::GlobalColourPalette> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnWorld::GlobalColourPalette> & operator=(const ResourcePtr<BrnWorld::GlobalColourPalette> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnWorld::GlobalColourPalette> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnWorld::GlobalColourPalette> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	GlobalColourPalette * operator->();

	// CgsResourcePtr.h:557
	const GlobalColourPalette * operator->() const;

	// CgsResourcePtr.h:612
	GlobalColourPalette & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnWorld::GlobalColourPalette> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnWorld::GlobalColourPalette> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	GlobalColourPalette * GetMemoryResource();

	// CgsResourcePtr.h:593
	const GlobalColourPalette * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnResource::WheelListResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnResource::WheelListResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnResource::WheelListResource> & operator=(const ResourcePtr<BrnResource::WheelListResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnResource::WheelListResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnResource::WheelListResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	WheelListResource * operator->();

	// CgsResourcePtr.h:557
	const WheelListResource * operator->() const;

	// CgsResourcePtr.h:612
	WheelListResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnResource::WheelListResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnResource::WheelListResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	WheelListResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const WheelListResource * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsSceneManager::ZoneList> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsSceneManager::ZoneList> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsSceneManager::ZoneList> & operator=(const ResourcePtr<CgsSceneManager::ZoneList> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsSceneManager::ZoneList> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsSceneManager::ZoneList> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	ZoneList * operator->();

	// CgsResourcePtr.h:557
	const ZoneList * operator->() const;

	// CgsResourcePtr.h:612
	ZoneList & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsSceneManager::ZoneList> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsSceneManager::ZoneList> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	ZoneList * GetMemoryResource();

	// CgsResourcePtr.h:593
	const ZoneList * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsGraphics::InstanceList> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsGraphics::InstanceList> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsGraphics::InstanceList> & operator=(const ResourcePtr<CgsGraphics::InstanceList> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsGraphics::InstanceList> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsGraphics::InstanceList> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	InstanceList * operator->();

	// CgsResourcePtr.h:557
	const InstanceList * operator->() const;

	// CgsResourcePtr.h:612
	InstanceList & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsGraphics::InstanceList> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsGraphics::InstanceList> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	InstanceList * GetMemoryResource();

	// CgsResourcePtr.h:593
	const InstanceList * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnPhysics::Props::PropGraphicsList> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnPhysics::Props::PropGraphicsList> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnPhysics::Props::PropGraphicsList> & operator=(const ResourcePtr<BrnPhysics::Props::PropGraphicsList> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnPhysics::Props::PropGraphicsList> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnPhysics::Props::PropGraphicsList> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	PropGraphicsList * operator->();

	// CgsResourcePtr.h:557
	const PropGraphicsList * operator->() const;

	// CgsResourcePtr.h:612
	PropGraphicsList & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnPhysics::Props::PropGraphicsList> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnPhysics::Props::PropGraphicsList> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	PropGraphicsList * GetMemoryResource();

	// CgsResourcePtr.h:593
	const PropGraphicsList * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsGui::GuiHudMessageResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsGui::GuiHudMessageResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsGui::GuiHudMessageResource> & operator=(const ResourcePtr<CgsGui::GuiHudMessageResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsGui::GuiHudMessageResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsGui::GuiHudMessageResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	GuiHudMessageResource * operator->();

	// CgsResourcePtr.h:557
	const GuiHudMessageResource * operator->() const;

	// CgsResourcePtr.h:612
	GuiHudMessageResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsGui::GuiHudMessageResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsGui::GuiHudMessageResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	GuiHudMessageResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const GuiHudMessageResource * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsGui::GuiPopupResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsGui::GuiPopupResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsGui::GuiPopupResource> & operator=(const ResourcePtr<CgsGui::GuiPopupResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsGui::GuiPopupResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsGui::GuiPopupResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	GuiPopupResource * operator->();

	// CgsResourcePtr.h:557
	const GuiPopupResource * operator->() const;

	// CgsResourcePtr.h:612
	GuiPopupResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsGui::GuiPopupResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsGui::GuiPopupResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	GuiPopupResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const GuiPopupResource * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnFlapt::FlaptFile> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnFlapt::FlaptFile> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnFlapt::FlaptFile> & operator=(const ResourcePtr<BrnFlapt::FlaptFile> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnFlapt::FlaptFile> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnFlapt::FlaptFile> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	BrnFlapt::FlaptFile * operator->();

	// CgsResourcePtr.h:557
	const FlaptFile * operator->() const;

	// CgsResourcePtr.h:612
	FlaptFile & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnFlapt::FlaptFile> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnFlapt::FlaptFile> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	BrnFlapt::FlaptFile * GetMemoryResource();

	// CgsResourcePtr.h:593
	const FlaptFile * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnProgression::ProgressionData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnProgression::ProgressionData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnProgression::ProgressionData> & operator=(const ResourcePtr<BrnProgression::ProgressionData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnProgression::ProgressionData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnProgression::ProgressionData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	ProgressionData * operator->();

	// CgsResourcePtr.h:557
	const BrnProgression::ProgressionData * operator->() const;

	// CgsResourcePtr.h:612
	ProgressionData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnProgression::ProgressionData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnProgression::ProgressionData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	ProgressionData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const BrnProgression::ProgressionData * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<Renderable> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<Renderable> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<Renderable> & operator=(const ResourcePtr<Renderable> &);

	// CgsResourcePtr.h:501
	ResourcePtr<Renderable> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<Renderable> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	Renderable * operator->();

	// CgsResourcePtr.h:557
	const Renderable * operator->() const;

	// CgsResourcePtr.h:612
	Renderable & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<Renderable> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<Renderable> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	Renderable * GetMemoryResource();

	// CgsResourcePtr.h:593
	const Renderable * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnPhysics::Props::PropZoneData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnPhysics::Props::PropZoneData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnPhysics::Props::PropZoneData> & operator=(const ResourcePtr<BrnPhysics::Props::PropZoneData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnPhysics::Props::PropZoneData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnPhysics::Props::PropZoneData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	PropZoneData * operator->();

	// CgsResourcePtr.h:557
	const PropZoneData * operator->() const;

	// CgsResourcePtr.h:612
	PropZoneData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnPhysics::Props::PropZoneData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnPhysics::Props::PropZoneData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	PropZoneData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const PropZoneData * GetMemoryResource() const;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourcePtr.h:149
	const BaseResourcePtr NULLResourcePtr;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnProgression::ProgressionData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnProgression::ProgressionData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnProgression::ProgressionData> & operator=(const ResourcePtr<BrnProgression::ProgressionData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnProgression::ProgressionData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnProgression::ProgressionData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	BrnProgression::ProgressionData * operator->();

	// CgsResourcePtr.h:557
	const BrnProgression::ProgressionData * operator->() const;

	// CgsResourcePtr.h:612
	BrnProgression::ProgressionData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnProgression::ProgressionData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnProgression::ProgressionData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	BrnProgression::ProgressionData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const BrnProgression::ProgressionData * GetMemoryResource() const;

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsResourcePtr.h:149
	const BaseResourcePtr NULLResourcePtr;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsResource::VideoDataResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsResource::VideoDataResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsResource::VideoDataResource> & operator=(const ResourcePtr<CgsResource::VideoDataResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsResource::VideoDataResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsResource::VideoDataResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	VideoDataResource * operator->();

	// CgsResourcePtr.h:557
	const VideoDataResource * operator->() const;

	// CgsResourcePtr.h:612
	VideoDataResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsResource::VideoDataResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsResource::VideoDataResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	VideoDataResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const VideoDataResource * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<rw::graphics::postfx::ColourCube> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<rw::graphics::postfx::ColourCube> & operator=(const ResourcePtr<rw::graphics::postfx::ColourCube> &);

	// CgsResourcePtr.h:501
	ResourcePtr<rw::graphics::postfx::ColourCube> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<rw::graphics::postfx::ColourCube> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	rw::graphics::postfx::ColourCube * operator->();

	// CgsResourcePtr.h:557
	const rw::graphics::postfx::ColourCube * operator->() const;

	// CgsResourcePtr.h:612
	rw::graphics::postfx::ColourCube & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<rw::graphics::postfx::ColourCube> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<rw::graphics::postfx::ColourCube> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	rw::graphics::postfx::ColourCube * GetMemoryResource();

	// CgsResourcePtr.h:593
	const rw::graphics::postfx::ColourCube * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnGui::PFXHookBundle> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnGui::PFXHookBundle> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnGui::PFXHookBundle> & operator=(const ResourcePtr<BrnGui::PFXHookBundle> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnGui::PFXHookBundle> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnGui::PFXHookBundle> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	PFXHookBundle * operator->();

	// CgsResourcePtr.h:557
	const PFXHookBundle * operator->() const;

	// CgsResourcePtr.h:612
	PFXHookBundle & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnGui::PFXHookBundle> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnGui::PFXHookBundle> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	PFXHookBundle * GetMemoryResource();

	// CgsResourcePtr.h:593
	const PFXHookBundle * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	BrnVehicle::GraphicsSpec * operator->();

	// CgsResourcePtr.h:557
	const BrnVehicle::GraphicsSpec * operator->() const;

	// CgsResourcePtr.h:612
	BrnVehicle::GraphicsSpec & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnVehicle::GraphicsSpec> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnVehicle::GraphicsSpec> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	BrnVehicle::GraphicsSpec * GetMemoryResource();

	// CgsResourcePtr.h:593
	const BrnVehicle::GraphicsSpec * GetMemoryResource() const;

}

// CgsResourceTypeIds.h:28
namespace CgsResource {
	// CgsResourcePtr.h:149
	const BaseResourcePtr NULLResourcePtr;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsResource::BinaryFileResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsResource::BinaryFileResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsResource::BinaryFileResource> & operator=(const ResourcePtr<CgsResource::BinaryFileResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsResource::BinaryFileResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsResource::BinaryFileResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	BinaryFileResource * operator->();

	// CgsResourcePtr.h:557
	const BinaryFileResource * operator->() const;

	// CgsResourcePtr.h:612
	BinaryFileResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsResource::BinaryFileResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsResource::BinaryFileResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	BinaryFileResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const BinaryFileResource * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsSound::Playback::Registry> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsSound::Playback::Registry> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsSound::Playback::Registry> & operator=(const ResourcePtr<CgsSound::Playback::Registry> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsSound::Playback::Registry> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsSound::Playback::Registry> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	Registry * operator->();

	// CgsResourcePtr.h:557
	const Registry * operator->() const;

	// CgsResourcePtr.h:612
	Registry & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsSound::Playback::Registry> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsSound::Playback::Registry> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	Registry * GetMemoryResource();

	// CgsResourcePtr.h:593
	const Registry * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData> & operator=(const ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	LoopModelData * operator->();

	// CgsResourcePtr.h:557
	const LoopModelData * operator->() const;

	// CgsResourcePtr.h:612
	LoopModelData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	LoopModelData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const LoopModelData * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsResource::AlignedBinaryFileResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsResource::AlignedBinaryFileResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsResource::AlignedBinaryFileResource> & operator=(const ResourcePtr<CgsResource::AlignedBinaryFileResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsResource::AlignedBinaryFileResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsResource::AlignedBinaryFileResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	AlignedBinaryFileResource * operator->();

	// CgsResourcePtr.h:557
	const AlignedBinaryFileResource * operator->() const;

	// CgsResourcePtr.h:612
	AlignedBinaryFileResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsResource::AlignedBinaryFileResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsResource::AlignedBinaryFileResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	AlignedBinaryFileResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const AlignedBinaryFileResource * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnTraffic::GraphicsStub> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnTraffic::GraphicsStub> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnTraffic::GraphicsStub> & operator=(const ResourcePtr<BrnTraffic::GraphicsStub> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnTraffic::GraphicsStub> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnTraffic::GraphicsStub> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	GraphicsStub * operator->();

	// CgsResourcePtr.h:557
	const GraphicsStub * operator->() const;

	// CgsResourcePtr.h:612
	GraphicsStub & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnTraffic::GraphicsStub> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnTraffic::GraphicsStub> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	GraphicsStub * GetMemoryResource();

	// CgsResourcePtr.h:593
	const GraphicsStub * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnVehicle::GraphicsSpec> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	BrnVehicle::GraphicsSpec * operator->();

	// CgsResourcePtr.h:557
	const GraphicsSpec * operator->() const;

	// CgsResourcePtr.h:612
	GraphicsSpec & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnVehicle::GraphicsSpec> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnVehicle::GraphicsSpec> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	BrnVehicle::GraphicsSpec * GetMemoryResource();

	// CgsResourcePtr.h:593
	const GraphicsSpec * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> & operator=(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	StreamedDeformationSpec * operator->();

	// CgsResourcePtr.h:557
	const BrnPhysics::Deformation::StreamedDeformationSpec * operator->() const;

	// CgsResourcePtr.h:612
	StreamedDeformationSpec & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	StreamedDeformationSpec * GetMemoryResource();

	// CgsResourcePtr.h:593
	const BrnPhysics::Deformation::StreamedDeformationSpec * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> & operator=(const ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	Dictionary * operator->();

	// CgsResourcePtr.h:557
	const Dictionary * operator->() const;

	// CgsResourcePtr.h:612
	Dictionary & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	Dictionary * GetMemoryResource();

	// CgsResourcePtr.h:593
	const Dictionary * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> & operator=(const ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> &);

	// CgsResourcePtr.h:501
	ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	TimeLine * operator->();

	// CgsResourcePtr.h:557
	const TimeLine * operator->() const;

	// CgsResourcePtr.h:612
	TimeLine & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	TimeLine * GetMemoryResource();

	// CgsResourcePtr.h:593
	const TimeLine * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsResource::AttribSysVaultResource> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsResource::AttribSysVaultResource> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsResource::AttribSysVaultResource> & operator=(const ResourcePtr<CgsResource::AttribSysVaultResource> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsResource::AttribSysVaultResource> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsResource::AttribSysVaultResource> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	AttribSysVaultResource * operator->();

	// CgsResourcePtr.h:557
	const AttribSysVaultResource * operator->() const;

	// CgsResourcePtr.h:612
	AttribSysVaultResource & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsResource::AttribSysVaultResource> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsResource::AttribSysVaultResource> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	AttribSysVaultResource * GetMemoryResource();

	// CgsResourcePtr.h:593
	const AttribSysVaultResource * GetMemoryResource() const;

}

// CgsPolygonSoupListSpatialMap.h:30
namespace CgsResource {
	// CgsResourcePtr.h:149
	const BaseResourcePtr NULLResourcePtr;

}

// CgsResourcePtr.h:65
struct CgsResource::BaseResourcePtr {
protected:
	// CgsResourcePtr.h:97
	ResourceHandle::Resource mResourceMemory;

	// CgsResourcePtr.h:98
	BaseResourcePtr * mpNext;

	// CgsResourcePtr.h:99
	BaseResourcePtr * mpPrev;

	// CgsResourcePtr.h:100
	ResourceHandle mHandle;

	// CgsResourcePtr.h:104
	BaseResourcePtr * mpThis;

	// CgsResourcePtr.h:107
	extern EAThreadDynamicData::ThreadId _mUThreadId;

public:
	// CgsResourcePtr.h:69
	void BaseResourcePtr();

	// CgsResourcePtr.h:72
	void ~BaseResourcePtr();

	// CgsResourcePtr.h:76
	void GetResource(ResourceHandle::Resource *) const;

	// CgsResourcePtr.h:80
	void GetResourceHandle(CgsResource::ResourceHandle *) const;

	// CgsResourcePtr.h:84
	ResourceHandle GetResourceHandle() const;

	// CgsResourcePtr.h:88
	void SetResource(const ResourceHandle::Resource *);

	// CgsResourcePtr.h:92
	bool IsEqual(const ResourceHandle::Resource *) const;

protected:
	// CgsResourcePtr.h:111
	void Reset();

	// CgsResourcePtr.h:115
	void RemoveFromCurrentList();

	// CgsResourcePtr.h:119
	void AddToNewList(BaseResourcePtr *);

	// CgsResourcePtr.h:123
	void CreateFromPointer(const BaseResourcePtr *);

	// CgsResourcePtr.h:127
	void CreateFromHandle(const ResourceHandle *);

	// CgsResourcePtr.h:131
	void Propogate();

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsPhysics::CollisionMeshData> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsPhysics::CollisionMeshData> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsPhysics::CollisionMeshData> & operator=(const ResourcePtr<CgsPhysics::CollisionMeshData> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsPhysics::CollisionMeshData> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsPhysics::CollisionMeshData> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	CollisionMeshData * operator->();

	// CgsResourcePtr.h:557
	const CollisionMeshData * operator->() const;

	// CgsResourcePtr.h:612
	CollisionMeshData & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsPhysics::CollisionMeshData> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsPhysics::CollisionMeshData> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	CollisionMeshData * GetMemoryResource();

	// CgsResourcePtr.h:593
	const CollisionMeshData * GetMemoryResource() const;

}

// CgsResourcePtr.h:160
struct CgsResource::ResourcePtr<CgsResource::ResourceIdList> : public BaseResourcePtr {
public:
	// CgsResourcePtr.h:417
	void ResourcePtr();

	// CgsResourcePtr.h:432
	void ResourcePtr(const ResourcePtr<CgsResource::ResourceIdList> &);

	// CgsResourcePtr.h:449
	void ResourcePtr(const BaseResourcePtr &);

	// CgsResourcePtr.h:466
	void ResourcePtr(const ResourceHandle &);

	// CgsResourcePtr.h:483
	ResourcePtr<CgsResource::ResourceIdList> & operator=(const ResourcePtr<CgsResource::ResourceIdList> &);

	// CgsResourcePtr.h:501
	ResourcePtr<CgsResource::ResourceIdList> & operator=(const BaseResourcePtr &);

	// CgsResourcePtr.h:519
	ResourcePtr<CgsResource::ResourceIdList> & operator=(const ResourceHandle &);

	// CgsResourcePtr.h:538
	ResourceIdList * operator->();

	// CgsResourcePtr.h:557
	const ResourceIdList * operator->() const;

	// CgsResourcePtr.h:612
	ResourceIdList & operator*();

	// CgsResourcePtr.h:631
	bool operator==(const ResourcePtr<CgsResource::ResourceIdList> &) const;

	// CgsResourcePtr.h:647
	bool operator==(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:663
	bool operator==(const ResourceHandle &) const;

	// CgsResourcePtr.h:679
	bool operator!=(const ResourcePtr<CgsResource::ResourceIdList> &) const;

	// CgsResourcePtr.h:695
	bool operator!=(const BaseResourcePtr &) const;

	// CgsResourcePtr.h:711
	bool operator!=(const ResourceHandle &) const;

	// CgsResourcePtr.h:575
	ResourceIdList * GetMemoryResource();

	// CgsResourcePtr.h:593
	const ResourceIdList * GetMemoryResource() const;

}

