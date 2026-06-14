// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex> {
	public:
		// CgsIm3dRenderBuffer.h:101
		void Dispatch(CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex> *) const;

	}

	// Declaration
	struct Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex> {
	public:
		// CgsIm3dRenderBuffer.h:101
		void Dispatch(CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> *) const;

	}

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct Im3dRenderBuffer {
	public:
		// CgsIm3dRenderBuffer.h:349
		void PushMask(TextureState *, Im3dVertex *);

		// CgsIm3dRenderBuffer.h:389
		void PopMask();

	}

	// Declaration
	struct Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex> {
	public:
		// CgsIm3dRenderBuffer.h:110
		void SetTransform(Matrix44, Matrix44);

	}

	// Declaration
	struct Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex> {
	public:
		// CgsIm3dRenderBuffer.h:105
		void SetTransform(Matrix44);

	}

}

// CgsIm3dRenderBuffer.h:55
struct CgsGraphics::ImCommandSetTransform3dVp : public ImCommand {
	// CgsIm3dRenderBuffer.h:57
	Matrix44 mViewProjectionMatrix;

}

// CgsIm3dRenderBuffer.h:62
struct CgsGraphics::ImCommandSetTransform3dMtwVp : public ImCommand {
	// CgsIm3dRenderBuffer.h:64
	Matrix44 mModelToWorldMatrix;

	// CgsIm3dRenderBuffer.h:65
	Matrix44 mViewProjectionMatrix;

}

// CgsIm3dRenderBuffer.h:163
struct CgsGraphics::Im3dRenderBufferUntex : public CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex> {
public:
	void Im3dRenderBufferUntex(const Im3dRenderBufferUntex &);

	void Im3dRenderBufferUntex();

}

// CgsIm3dRenderBuffer.h:96
struct CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex> : public ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
	int (*)(...) * _vptr.Im3dRenderBufferBase;

public:
	void Im3dRenderBufferBase(const Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex> &);

	void Im3dRenderBufferBase();

	// CgsIm3dRenderBuffer.h:101
	void Dispatch(CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex> *) const;

	// CgsIm3dRenderBuffer.h:105
	void SetTransform(Matrix44);

	// CgsIm3dRenderBuffer.h:110
	void SetTransform(Matrix44, Matrix44);

protected:
	// CgsIm3dRenderBuffer.h:117
	virtual bool HandleCommand(const ImCommand *, CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex> *) const;

}

// CgsIm3dRenderBuffer.h:130
struct CgsGraphics::Im3dRenderBuffer : public CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex> {
public:
	void Im3dRenderBuffer(const Im3dRenderBuffer &);

	void Im3dRenderBuffer();

	// CgsIm3dRenderBuffer.h:349
	void PushMask(TextureState *, Im3dVertex *);

	// CgsIm3dRenderBuffer.h:370
	void PushMask(renderengine::Texture *, Im3dVertex *);

	// CgsIm3dRenderBuffer.h:389
	void PopMask();

protected:
	// CgsIm3dRenderBuffer.h:313
	virtual bool HandleCommand(const ImCommand *, CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> *) const;

}

// CgsIm3dRenderBuffer.h:96
struct CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex> : public ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
	int (*)(...) * _vptr.Im3dRenderBufferBase;

public:
	void Im3dRenderBufferBase(const Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex> &);

	void Im3dRenderBufferBase();

	// CgsIm3dRenderBuffer.h:101
	void Dispatch(CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> *) const;

	// CgsIm3dRenderBuffer.h:105
	void SetTransform(Matrix44);

	// CgsIm3dRenderBuffer.h:110
	void SetTransform(Matrix44, Matrix44);

protected:
	// CgsIm3dRenderBuffer.h:117
	virtual bool HandleCommand(const ImCommand *, CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> *) const;

}

// CgsIm3dRenderBuffer.h:130
void CgsGraphics::Im3dRenderBuffer::Im3dRenderBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3dRenderBuffer.h:96
void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::Im3dRenderBufferBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3dRenderBuffer.h:163
void CgsGraphics::Im3dRenderBufferUntex::Im3dRenderBufferUntex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3dRenderBuffer.h:96
void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex>::Im3dRenderBufferBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex> {
	public:
		// CgsIm3dRenderBuffer.h:105
		void SetTransform(Matrix44);

	}

}

