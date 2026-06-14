// BrnMomentController.h:43
struct BrnDirector::MomentController {
private:
	// BrnMomentController.h:82
	BrnDirector::AbstractPool<70u,20u,rw::math::vpu::Vector4> mMomentPool;

	// BrnMomentController.h:83
	MomentParameterBank mMomentParameterBank;

	// Unknown accessibility
	struct MomentHandle;

public:
	// BrnMomentController.h:55
	void Construct();

	// BrnMomentController.h:58
	bool Prepare();

	// BrnMomentController.h:63
	void UpdateAllMoments(BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentController.h:66
	bool Release();

	// BrnMomentController.h:69
	void Destruct();

	// BrnMomentController.h:76
	bool NewMoment(BrnDirector::Moment::EType, BrnDirector::MomentParameterBank::EMomentParamID, MomentController::MomentHandle &, BehaviourManager &);

}

// BrnMomentController.h:89
struct BrnDirector::MomentController::MomentHandle {
private:
	// BrnMomentController.h:123
	bool mbIsAllocated;

	// BrnMomentController.h:124
	AbstractPoolVoidHandle mMomentPoolHandle;

	// BrnMomentController.h:125
	BrnDirector::MomentController * mpParentMomentController;

public:
	// BrnMomentController.h:93
	void Construct();

	// BrnMomentController.h:99
	bool Prepare(AbstractPoolVoidHandle, MomentController &, BehaviourManager &);

	// BrnMomentController.h:102
	bool IsAllocated() const;

	// BrnMomentController.h:105
	BrnDirector::Moment & GetMoment();

	// BrnMomentController.h:108
	const BrnDirector::Moment & GetMoment() const;

	// BrnMomentController.h:111
	bool Release();

	// BrnMomentController.h:115
	void GiveControlTo(MomentController::MomentHandle &);

	// BrnMomentController.h:119
	bool CompareHandlesIgnoringIsAllocatedFlag(const MomentHandle &) const;

}

