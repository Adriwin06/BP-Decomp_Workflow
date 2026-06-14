// CgsCapsule.h:42
struct CgsGeometric::Capsule {
private:
	// CgsCapsule.h:73
	Vector3Plus mPositionAndRadius;

	// CgsCapsule.h:74
	Vector3Plus mDirectionAndLength;

public:
	// CgsCapsule.h:49
	void Set(Vector3, Vector3, VecFloat, VecFloat);

	// CgsCapsule.h:54
	void Set(Vector3Plus, Vector3Plus);

	// CgsCapsule.h:57
	Vector3 GetPosition() const;

	// CgsCapsule.h:61
	Vector3 GetDirection() const;

	// CgsCapsule.h:65
	VecFloat GetRadius() const;

	// CgsCapsule.h:69
	VecFloat GetLength() const;

}

