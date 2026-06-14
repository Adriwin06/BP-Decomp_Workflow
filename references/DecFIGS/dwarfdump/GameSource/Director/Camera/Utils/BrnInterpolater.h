// BrnInterpolater.h:47
struct BrnDirector::Camera::Utils::Interpolater {
private:
	// BrnInterpolater.h:67
	Vector3 mLastAxis;

	// BrnInterpolater.h:68
	bool mbWasInvertedLastTime;

public:
	// BrnInterpolater.h:51
	void Construct();

	// BrnInterpolater.h:57
	Matrix33 Interpolate(Matrix33, Matrix33, VecFloat);

	// BrnInterpolater.h:63
	Matrix44Affine Interpolate(Matrix44Affine, Matrix44Affine, VecFloat);

}

