// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vec_float.h:10
		namespace fpu {
			// quaternion_operation.h:773
			extern QuaternionTemplate<float> QuaternionFromAxisRotationAngle<float>(const Vector3Template<float> &, float);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vec_float.h:10
		namespace fpu {
			// quaternion_operation.h:94
			extern QuaternionTemplate<float> operator*<float>(const QuaternionTemplate<float> &, const float &);

			// quaternion_operation.h:243
			extern bool IsSimilar<float>(const QuaternionTemplate<float> &, const QuaternionTemplate<float> &, float);

			// quaternion_operation.h:108
			extern QuaternionTemplate<float> operator/<float>(const QuaternionTemplate<float> &, const float &);

			// quaternion_operation.h:137
			extern QuaternionTemplate<float> operator-<float>(const QuaternionTemplate<float> &, const QuaternionTemplate<float> &);

			// quaternion_operation.h:116
			extern QuaternionTemplate<float> operator+<float>(const QuaternionTemplate<float> &, const QuaternionTemplate<float> &);

		}

	}

}

