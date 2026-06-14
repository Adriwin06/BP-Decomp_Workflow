// BrnPhysicalReactionController.h:51
struct BrnDirector::PhysicalReactionController : public BrnDirector::ShotController {
public:
	// BrnPhysicalReactionController.cpp:35
	void Construct();

	// BrnPhysicalReactionController.cpp:51
	virtual void Update(const ShotContext &, Camera *);

}

