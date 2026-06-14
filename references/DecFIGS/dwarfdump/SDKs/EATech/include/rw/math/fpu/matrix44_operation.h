// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vec_float.h:10
		namespace fpu {
			// matrix44_operation.h:201
			extern double Determinant<double>(const rw::math::fpu::Matrix44Template<double> &);

			// matrix44_operation.h:247
			extern Vector4Template<double> Mult<double>(const rw::math::fpu::Vector4Template<double> &, const rw::math::fpu::Matrix44Template<double> &);

			// matrix44_operation.h:259
			extern Matrix44Template<double> Mult<double>(const rw::math::fpu::Matrix44Template<double> &, const rw::math::fpu::Matrix44Template<double> &);

			// matrix44_operation.h:1743
			extern Matrix44Template<double> operator*<double>(const rw::math::fpu::Matrix44Template<double> &, const rw::math::fpu::Matrix44Template<double> &);

			// matrix44_operation.h:295
			extern Matrix44Template<double> Subtract<double>(const rw::math::fpu::Matrix44Template<double> &, const rw::math::fpu::Matrix44Template<double> &);

			// matrix44_operation.h:1737
			extern Matrix44Template<double> operator-<double>(const rw::math::fpu::Matrix44Template<double> &, const rw::math::fpu::Matrix44Template<double> &);

			// matrix44_operation.h:235
			extern Matrix44Template<double> Mult<double>(const rw::math::fpu::Matrix44Template<double> &, double);

			// matrix44_operation.h:1713
			extern Matrix44Template<double> operator*<double>(const rw::math::fpu::Matrix44Template<double> &, double);

			// matrix44_operation.h:323
			extern Matrix44Template<double> Inverse<double>(const rw::math::fpu::Matrix44Template<double> &, double &);

			// matrix44_operation.h:316
			extern Matrix44Template<double> Inverse<double>(const rw::math::fpu::Matrix44Template<double> &);

		}

	}

}

