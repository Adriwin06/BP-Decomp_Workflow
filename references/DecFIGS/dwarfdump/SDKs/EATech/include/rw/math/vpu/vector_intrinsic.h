// vector_intrinsic.h:50
union rw::math::vpu::detail::VectorIntrinsicUnion {
	// vector_intrinsic.h:51
	uint32_t[4] scalarUInt;

	// vector_intrinsic.h:52
	int32_t[4] scalarInt;

	// vector_intrinsic.h:53
	float[4] scalarFloat;

	// vector_intrinsic.h:54
	uint16_t[8] scalarUShort;

	// vector_intrinsic.h:55
	int16_t[8] scalarShort;

	// vector_intrinsic.h:56
	uint8_t[16] scalarUChar;

	// vector_intrinsic.h:57
	int8_t[16] scalarChar;

	// vector_intrinsic.h:13
	typedef float[4] VectorIntrinsic;

	// vector_intrinsic.h:58
	VectorIntrinsicUnion::VectorIntrinsic vector;

}
