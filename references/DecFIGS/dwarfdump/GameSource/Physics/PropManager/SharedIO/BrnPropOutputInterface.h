// BrnPropOutputInterface.h:34
struct BrnPhysics::Props::PropOutputInterface {
private:
	// BrnPropOutputInterface.h:73
	InputBuffer::InAddRigidBodyQueue mAddRigidBodyQueue;

	// BrnPropOutputInterface.h:76
	InputBuffer::InRemoveRigidBodyQueue mRemoveRigidBodyQueue;

	// Unknown accessibility
	// BrnPropQueues.h:45
	typedef EventQueue<BrnPhysics::Props::UpdatePropEvent,200> UpdatePropEventQueue;

	// BrnPropOutputInterface.h:79
	PropOutputInterface::UpdatePropEventQueue mUpdatedProps;

	// Unknown accessibility
	// BrnPropQueues.h:49
	typedef EventQueue<BrnPhysics::Props::PropUpdateNotification,200> PropUpdateNotificationQueue;

	// BrnPropOutputInterface.h:81
	PropOutputInterface::PropUpdateNotificationQueue mPropUpdateNotificationQueue;

public:
	// BrnPropOutputInterface.h:39
	void Construct();

	// BrnPropOutputInterface.h:43
	bool Prepare();

	// BrnPropOutputInterface.h:47
	bool Release();

	// BrnPropOutputInterface.h:51
	void Destruct();

	// BrnPropOutputInterface.h:55
	void Append(const PropOutputInterface *);

	// BrnPropOutputInterface.h:59
	void AppendUpdatedProps(const PropOutputInterface::UpdatePropEventQueue *);

	// BrnPropOutputInterface.h:62
	void Clear();

	// BrnPropOutputInterface.h:65
	const PropOutputInterface::UpdatePropEventQueue & GetUpdatedProps() const;

	// BrnPropOutputInterface.h:68
	const PropOutputInterface::PropUpdateNotificationQueue & GetUpdatePropNotifications() const;

}

