// BrnCollisionPolicyStayOutOfWalls.h:38
struct BrnDirector::Camera::CollisionPolicyStayOutOfWalls : public BrnDirector::Camera::CollisionPolicy {
private:
	// BrnCollisionPolicyStayOutOfWalls.h:60
	Vector3 mLastPosition;

	// BrnCollisionPolicyStayOutOfWalls.h:62
	LineTestFinePostBox mStraightUpForward;

	// BrnCollisionPolicyStayOutOfWalls.h:63
	LineTestFinePostBox mStraightUpBackward;

	// BrnCollisionPolicyStayOutOfWalls.h:64
	LineTestNearestPostBox mOldToNew;

	// BrnCollisionPolicyStayOutOfWalls.h:65
	bool mbDoInsideGeometryTest;

public:
	// BrnCollisionPolicyStayOutOfWalls.cpp:36
	void Construct();

	// BrnCollisionPolicyStayOutOfWalls.cpp:51
	virtual void GenerateSceneQueries(const CollisionPolicySharedInfo &, Camera &);

	// BrnCollisionPolicyStayOutOfWalls.cpp:83
	virtual void ProcessSceneQueryResults(const CollisionPolicySharedInfo &, Camera &);

	// BrnCollisionPolicyStayOutOfWalls.h:72
	const rw::math::vpu::Vector3 & GetSafePosition(const rw::math::vpu::Vector3 &);

}

