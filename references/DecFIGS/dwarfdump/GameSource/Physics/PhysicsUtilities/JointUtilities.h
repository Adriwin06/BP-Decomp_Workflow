// JointUtilities.h:43
struct BrnPhysics::JointUtilities {
public:
	// JointUtilities.h:54
	void ConstructHingeFrames(Matrix44Affine, Matrix44Affine, Vector3, Vector3, Vector3, float32_t, JointFrames *);

	// JointUtilities.h:65
	void ConstructHinge(Matrix44Affine, Matrix44Affine, Vector3, Vector3, Vector3, float32_t, JointLimits *, JointFrames *);

private:
	// JointUtilities.h:69
	void JointUtilities();

}

