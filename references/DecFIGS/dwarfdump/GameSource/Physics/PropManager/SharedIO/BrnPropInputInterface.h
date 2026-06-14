// BrnPropInputInterface.h:37
struct BrnPhysics::Props::PropInputInterface {
	// BrnPropQueues.h:43
	typedef EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50> AddPhysicalPropEventQueue;

private:
	// BrnPropInputInterface.h:125
	PropInputInterface::AddPhysicalPropEventQueue mAddPropQueue;

	// Unknown accessibility
	// BrnPropQueues.h:44
	typedef EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50> AddPhysicalPartEventQueue;

	// BrnPropInputInterface.h:126
	PropInputInterface::AddPhysicalPartEventQueue mAddPartQueue;

	// Unknown accessibility
	// BrnPropQueues.h:47
	typedef EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300> RemovePropEventQueue;

	// BrnPropInputInterface.h:127
	PropInputInterface::RemovePropEventQueue mRemovePropQueue;

	// Unknown accessibility
	// BrnPropQueues.h:48
	typedef EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100> RemovePartEventQueue;

	// BrnPropInputInterface.h:128
	PropInputInterface::RemovePartEventQueue mRemovePartQueue;

	// BrnPropInputInterface.h:129
	ResourceHandle mpPhysicsData;

	// BrnPropInputInterface.h:130
	bool mbRemoveAllPropsAndParts;

public:
	// BrnPropInputInterface.h:42
	void Construct();

	// BrnPropInputInterface.h:46
	bool Prepare();

	// BrnPropInputInterface.h:50
	bool Release();

	// BrnPropInputInterface.h:54
	void Destruct();

	// BrnPropInputInterface.h:57
	void Append(const PropInputInterface *);

	// BrnPropInputInterface.h:60
	void Clear();

	// BrnPropInputInterface.h:65
	void SetPropPhysicsData(ResourceHandle);

	// BrnPropInputInterface.h:74
	void AddPropInstance(PropEntityID, int32_t, int32_t, Matrix44Affine, bool, BrnWorld::EPropState);

	// BrnPropInputInterface.h:82
	void AddPartInstance(PropEntityID, int32_t, int32_t, Matrix44Affine, int32_t);

	// BrnPropInputInterface.h:87
	void RemovePropInstance(PropEntityID, int32_t);

	// BrnPropInputInterface.h:92
	void RemovePartInstance(PropEntityID, int32_t);

	// BrnPropInputInterface.h:95
	void RemoveAllPropsAndParts();

	// BrnPropInputInterface.h:98
	bool ShouldRemoveAllPropsAndParts() const;

	// BrnPropInputInterface.h:102
	const PropInputInterface::AddPhysicalPropEventQueue & GetAddPhysicalPropQueue() const;

	// BrnPropInputInterface.h:105
	const PropInputInterface::AddPhysicalPartEventQueue & GetAddPhysicalPartQueue() const;

	// BrnPropInputInterface.h:108
	const PropInputInterface::RemovePropEventQueue & GetRemovePhysicalPropQueue() const;

	// BrnPropInputInterface.h:111
	PropInputInterface::RemovePropEventQueue & GetRemovePhysicalPropQueue();

	// BrnPropInputInterface.h:114
	const PropInputInterface::RemovePartEventQueue & GetRemovePhysicalPartQueue() const;

	// BrnPropInputInterface.h:117
	PropInputInterface::RemovePartEventQueue & GetRemovePhysicalPartQueue();

	// BrnPropInputInterface.h:120
	const ResourceHandle & GetPropPhysicsData() const;

}

