// vertexiterator.h:80
struct renderengine::VertexIterator3<renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color,renderengine::VertexTypeFloat4> : public VertexIteratorBaseClass {
public:
	// vertexiterator.h:96
	uint32_t GetStride();

}

// vertexiterator.h:83
extern void Write<rw::math::vpu::Vector4, renderengine::RGBA8, rw::math::vpu::Vector4>(const const rw::math::vpu::Vector4 &  val1, const const RGBA8 &  val2, const const rw::math::vpu::Vector4 &  val3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexiterator.h:105
struct renderengine::VertexIterator4<renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color> : public VertexIteratorBaseClass {
public:
	// vertexiterator.h:123
	uint32_t GetStride();

}

// vertexiterator.h:59
struct renderengine::VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2> : public VertexIteratorBaseClass {
public:
	// vertexiterator.h:71
	uint32_t GetStride();

}

// vertexiterator.h:132
struct renderengine::VertexIterator5<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4> : public VertexIteratorBaseClass {
public:
	// vertexiterator.h:153
	uint32_t GetStride();

}

// vertexiterator.h:80
struct renderengine::VertexIterator3<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2,renderengine::VertexTypeFloat4> : public VertexIteratorBaseClass {
public:
	// vertexiterator.h:96
	uint32_t GetStride();

}

// vertexiterator.h:136
extern void Write<rw::math::fpu::Vector3, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4>(const const SmoothStep::Vector3 &  val1, const const rw::math::vpu::Vector4 &  val2, const const rw::math::vpu::Vector4 &  val3, const const rw::math::vpu::Vector4 &  val4, const const rw::math::vpu::Vector4 &  val5) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexiterator.h:61
extern void Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(const const rw::math::vpu::Vector3 &  val1, const const rw::math::vpu::Vector2 &  val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexiterator.h:108
extern void Write<rw::math::vpu::Vector4, rw::math::vpu::Vector3, rw::math::vpu::Vector4, renderengine::RGBA8>(const const rw::math::vpu::Vector4 &  val1, const const rw::math::vpu::Vector3 &  val2, const const rw::math::vpu::Vector4 &  val3, const const RGBA8 &  val4) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexiterator.h:61
extern void Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2>(const const SmoothStep::Vector3 &  val1, const const SmoothStep::Vector2 &  val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexiterator.h:83
extern void Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(const const SmoothStep::Vector3 &  val1, const const SmoothStep::Vector2 &  val2, const const Vector4 &  val3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexiterator.h:687
struct renderengine::StrideVertexIterator : public VertexIteratorBaseClass {
protected:
	// vertexiterator.h:728
	const VertexDescriptor & m_vbDesc;

public:
	// vertexiterator.h:689
	void StrideVertexIterator(VertexDescriptor &);

	// vertexiterator.h:694
	void * GetBuffer();

	// vertexiterator.h:700
	uint32_t GetStride() const;

	// vertexiterator.h:706
	void RestartAtElementOffset(renderengine::VertexBuffer::BatchIterator &, uint32_t);

	// vertexiterator.h:713
	void Increment();

protected:
	// vertexiterator.h:721
	StrideVertexIterator & operator=(const StrideVertexIterator &);

}

