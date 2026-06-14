// CgsInstanceCollision.h:44
struct CgsPhysics::InstanceCollision {
private:
	// CgsInstanceCollision.h:68
	Matrix44Affine mTransform;

public:
	// CgsInstanceCollision.h:48
	void Construct();

	// CgsInstanceCollision.h:51
	void Destruct();

	// CgsInstanceCollision.h:55
	void FixUp(void *);

	// CgsInstanceCollision.h:59
	void FixDown(void *);

	// CgsInstanceCollision.h:63
	Matrix44Affine & GetTransform();

}

