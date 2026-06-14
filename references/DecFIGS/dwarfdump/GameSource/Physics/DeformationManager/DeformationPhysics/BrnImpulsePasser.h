// BrnImpulsePasser.h:53
struct BrnPhysics::Deformation::ImpulsePasser {
private:
	// BrnImpulsePasser.h:85
	BrnPhysics::Deformation::CollidableBody *[25] mapCollidableBodies;

public:
	// BrnImpulsePasser.h:56
	void Construct();

	// BrnImpulsePasser.h:59
	void Destruct();

	// BrnImpulsePasser.h:62
	bool Prepare();

	// BrnImpulsePasser.h:65
	bool Release();

	// BrnImpulsePasser.h:70
	void SetCollidableBodyMap(int32_t, BrnPhysics::Deformation::CollidableBody *);

	// BrnImpulsePasser.h:76
	void PassOnImpulse(uint8_t, const BrnPhysics::Deformation::ImpulseParams *, VecFloat);

	// BrnImpulsePasser.h:81
	void ApplyLocalImpulse(BrnPhysics::Deformation::CollidableBody *, BrnPhysics::Deformation::ImpulseParams *);

private:
	// BrnImpulsePasser.h:88
	void ClearVariables();

}

