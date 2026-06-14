// drvvertexiterator.h:57
struct renderengine::VertexIteratorBaseClass {
protected:
	// drvvertexiterator.h:67
	void * m_dest;

public:
	// drvvertexiterator.h:59
	void SetBuffer(void *);

}

// drvvertexiterator.h:76
struct renderengine::VertexIterator<renderengine::VertexTypeFloat3> : public VertexIteratorBaseClass {
public:
	// drvvertexiterator.h:103
	uint32_t GetStride();

}

// drvvertexiterator.h:76
struct renderengine::VertexIterator<renderengine::VertexTypeFloat4> : public VertexIteratorBaseClass {
public:
	// drvvertexiterator.h:103
	uint32_t GetStride();

}

// drvvertexiterator.h:76
struct renderengine::VertexIterator<renderengine::VertexTypePS3Color> : public VertexIteratorBaseClass {
public:
	// drvvertexiterator.h:103
	uint32_t GetStride();

}

// drvvertexiterator.h:80
extern void Write<rw::math::vpu::Vector4>(const const rw::math::vpu::Vector4 &  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// drvvertexiterator.h:580
extern void Write<renderengine::RGBA8>(const const RGBA8 &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// drvvertexiterator.h:272
extern void Write<rw::math::vpu::Vector3>(const const rw::math::vpu::Vector3 &  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// drvvertexiterator.h:276
		float[4] v;

		// drvvertexiterator.h:277
		unsigned char[16] permFlags;

		// drvvertexiterator.h:280
		float32_t * vbData;

	}
}

// drvvertexiterator.h:76
struct renderengine::VertexIterator<renderengine::VertexTypeFloat2> : public VertexIteratorBaseClass {
public:
	// drvvertexiterator.h:103
	uint32_t GetStride();

}

// drvvertexiterator.h:80
extern void Write<rw::math::fpu::Vector2U_32>(const const BasicColouredTexturedVertex::Vector2U_32 &  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// drvvertexiterator.h:80
extern void Write<rw::math::fpu::Vector3>(const const SmoothStep::Vector3 &  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// drvvertexiterator.h:218
extern void Write<rw::math::vpu::Vector2>(const const rw::math::vpu::Vector2 &  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// drvvertexiterator.h:222
		float[4] v;

		// drvvertexiterator.h:223
		unsigned char[16] permFlags;

		// drvvertexiterator.h:226
		float32_t * vbData;

	}
}

// drvvertexiterator.h:80
extern void Write<rw::math::fpu::Vector4U_32>(const const Contact::Vector4U_32 &  val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

