// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vec_float.h:10
		namespace fpu {
			// matrix44affine_operation.h:448
			extern Vector3Template<float> TransformPoint<float>(const Vector3Template<float> &, const Matrix44AffineTemplate<float> &);

			// matrix44affine_operation.h:291
			extern Vector4Template<float> Mult<float>(const Vector4Template<float> &, const Matrix44AffineTemplate<float> &);

			// matrix44affine_operation.h:60
			extern Vector4Template<float> operator*<float>(const Vector4Template<float> &, const Matrix44AffineTemplate<float> &);

			// matrix44affine_operation.h:795
			extern Matrix44AffineTemplate<float> Matrix44AffineFromTranslation<float>(const Vector3Template<float> &);

			// matrix44affine_operation.h:983
			extern Matrix44AffineTemplate<float> Matrix44AffineFromQuaternionTranslation<float>(const QuaternionTemplate<float> &, const Vector3Template<float> &);

			// matrix44affine_operation.h:465
			extern Vector3Template<float> TransformVector<float>(const Vector3Template<float> &, const Matrix44AffineTemplate<float> &);

			// matrix44affine_operation.h:302
			extern Matrix44AffineTemplate<float> Mult<float>(const Matrix44AffineTemplate<float> &, const Matrix44AffineTemplate<float> &);

			// matrix44affine_operation.h:106
			extern Matrix44AffineTemplate<float> operator*<float>(const Matrix44AffineTemplate<float> &, const Matrix44AffineTemplate<float> &);

		}

	}

}

