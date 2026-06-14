// ExternallySimulatedBody.h:43
struct BrnPhysics::ExternallySimulatedBody {
protected:
	// ExternallySimulatedBody.h:131
	Matrix44Affine mTransform;

	// ExternallySimulatedBody.h:132
	Vector3 mLinearVelocity;

	// ExternallySimulatedBody.h:133
	Vector3 mAngularVelocity;

	// ExternallySimulatedBody.h:134
	bool mbFrozen;

public:
	// ExternallySimulatedBody.h:47
	void Construct();

	// ExternallySimulatedBody.h:50
	void Destruct();

	// ExternallySimulatedBody.h:53
	bool Prepare();

	// ExternallySimulatedBody.h:56
	void Release();

	// ExternallySimulatedBody.h:60
	void WriteIntoRenderware(RigidBody *);

	// ExternallySimulatedBody.h:64
	void WriteVelocityIntoRenderware(RigidBody *);

	// ExternallySimulatedBody.h:68
	void WriteTransformIntoRenderware(RigidBody *);

	// ExternallySimulatedBody.h:72
	// Declaration
	void ReadFromRenderware(const RigidBody *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ExternallySimulatedBody.cpp:206
		using namespace rw::math;

	}

	// ExternallySimulatedBody.h:76
	void ReadVelocityFromRenderware(const RigidBody *);

	// ExternallySimulatedBody.h:80
	void ReadTransformFromRenderware(const RigidBody *);

	// ExternallySimulatedBody.h:83
	void Translate(Vector3);

	// ExternallySimulatedBody.h:87
	Vector3 GetPosition() const;

	// ExternallySimulatedBody.h:91
	Matrix44Affine GetTransform() const;

	// ExternallySimulatedBody.h:95
	Vector3 GetLinearVelocity() const;

	// ExternallySimulatedBody.h:99
	Vector3 GetAngularVelocity() const;

	// ExternallySimulatedBody.h:103
	bool IsFrozen() const;

	// ExternallySimulatedBody.h:108
	void SetTransform(Matrix44Affine);

	// ExternallySimulatedBody.h:113
	void SetLinearVelocity(Vector3);

	// ExternallySimulatedBody.h:118
	void SetAngularVelocity(Vector3);

	// ExternallySimulatedBody.h:123
	void GetInverseTransform(Matrix44Affine &) const;

	// ExternallySimulatedBody.h:127
	void SetFrozen(bool);

}

// ExternallySimulatedBody.h:43
struct BrnPhysics::ExternallySimulatedBody {
protected:
	// ExternallySimulatedBody.h:131
	Matrix44Affine mTransform;

	// ExternallySimulatedBody.h:132
	Vector3 mLinearVelocity;

	// ExternallySimulatedBody.h:133
	Vector3 mAngularVelocity;

	// ExternallySimulatedBody.h:134
	bool mbFrozen;

public:
	// ExternallySimulatedBody.h:47
	void Construct();

	// ExternallySimulatedBody.h:50
	void Destruct();

	// ExternallySimulatedBody.h:53
	bool Prepare();

	// ExternallySimulatedBody.h:56
	void Release();

	// ExternallySimulatedBody.h:60
	void WriteIntoRenderware(RigidBody *);

	// ExternallySimulatedBody.h:64
	void WriteVelocityIntoRenderware(RigidBody *);

	// ExternallySimulatedBody.h:68
	void WriteTransformIntoRenderware(RigidBody *);

	// ExternallySimulatedBody.h:72
	void ReadFromRenderware(const RigidBody *);

	// ExternallySimulatedBody.h:76
	void ReadVelocityFromRenderware(const RigidBody *);

	// ExternallySimulatedBody.h:80
	void ReadTransformFromRenderware(const RigidBody *);

	// ExternallySimulatedBody.h:83
	void Translate(Vector3);

	// ExternallySimulatedBody.h:87
	Vector3 GetPosition() const;

	// ExternallySimulatedBody.h:91
	Matrix44Affine GetTransform() const;

	// ExternallySimulatedBody.h:95
	Vector3 GetLinearVelocity() const;

	// ExternallySimulatedBody.h:99
	Vector3 GetAngularVelocity() const;

	// ExternallySimulatedBody.h:103
	bool IsFrozen() const;

	// ExternallySimulatedBody.h:108
	void SetTransform(Matrix44Affine);

	// ExternallySimulatedBody.h:113
	void SetLinearVelocity(Vector3);

	// ExternallySimulatedBody.h:118
	void SetAngularVelocity(Vector3);

	// ExternallySimulatedBody.h:123
	void GetInverseTransform(Matrix44Affine &) const;

	// ExternallySimulatedBody.h:127
	void SetFrozen(bool);

}

