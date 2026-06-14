// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct Im3dBase<BrnGraphics::LionBlendVertex> {
	public:
		// CgsIm3d.h:267
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	}

	// Declaration
	struct Im3dBase<CgsGraphics::BasicColouredTexturedVertex> {
	public:
		// CgsIm3d.h:74
		void SetTransform(Matrix44);

	}

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct Im3dBase<CgsGraphics::BasicColouredTexturedVertex> {
	public:
		// CgsIm3d.h:74
		void SetTransform(Matrix44);

	}

	// Declaration
	struct Im3dBase<BrnGraphics::Im3dSkyDomeVertex> {
	public:
		// CgsIm3d.h:293
		void SetTransform(Matrix44);

		// CgsIm3d.h:318
		void SetTransform(Matrix44, Matrix44);

	}

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Im3d {
		// CgsIm3d.h:144
		struct Im3dMask {
			// CgsIm3d.h:147
			struct Im3dMaskLayer {
				// CgsIm3d.h:149
				ProgramVariableHandle mPixelMaskPositionMinMax;

				// CgsIm3d.h:150
				ProgramVariableHandle mPixelMaskUVStartEnd;

				// CgsIm3d.h:151
				ProgramVariableHandle mPixelMaskUVDifference;

				// CgsIm3d.h:152
				Vector4 mvPixelMaskPositionMinMax;

				// CgsIm3d.h:153
				Vector4 mvPixelMaskUVStartEnd;

				// CgsIm3d.h:154
				Vector4 mvPixelMaskUVDifference;

				// CgsIm3d.h:155
				TextureState * mpMaskTextureState;

				// CgsIm3d.h:156
				renderengine::Texture * mpMaskTexture;

			}

			// CgsIm3d.h:159
			CgsGraphics::Im3d::Im3dMask::Im3dMaskLayer[2] maPixelMaskHandles;

			// CgsIm3d.h:161
			ProgramVariableHandle mPixelMaskUseHandle;

			// CgsIm3d.h:162
			Vector4 mvPixelMask;

		}

	public:
		// CgsIm3d.h:336
		void PushMask(TextureState *, const Im3dVertex *);

	protected:
		// CgsIm3d.h:372
		void PushMask(TextureState *, renderengine::Texture *, const Im3dVertex *);

	public:
		// CgsIm3d.h:354
		void PushMask(renderengine::Texture *, const Im3dVertex *);

		// CgsIm3d.h:402
		void PopMask();

		Im3d();

	}

}

// CgsIm3d.h:56
struct CgsGraphics::Im3dBase<BrnGraphics::LionBlendVertex> : public CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex> {
protected:
	// CgsIm3d.h:84
	ProgramVariableHandle[8] maWorldViewProjStateHandle;

	// CgsIm3d.h:85
	Matrix44 mCurrentTransform;

public:
	void Im3dBase(const Im3dBase<BrnGraphics::LionBlendVertex> &);

	void Im3dBase();

	// CgsIm3d.h:267
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm3d.h:293
	void SetTransform(Matrix44);

	// CgsIm3d.h:318
	void SetTransform(Matrix44, Matrix44);

}

// CgsIm3d.h:56
struct CgsGraphics::Im3dBase<BrnGraphics::Im3dSkyDomeVertex> : public CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex> {
protected:
	// CgsIm3d.h:84
	ProgramVariableHandle[8] maWorldViewProjStateHandle;

	// CgsIm3d.h:85
	Matrix44 mCurrentTransform;

public:
	void Im3dBase(const Im3dBase<BrnGraphics::Im3dSkyDomeVertex> &);

	void Im3dBase();

	// CgsIm3d.h:267
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm3d.h:293
	void SetTransform(Matrix44);

	// CgsIm3d.h:318
	void SetTransform(Matrix44, Matrix44);

}

// CgsIm3d.h:226
struct CgsGraphics::Im3dZOnly : public CgsGraphics::Im3dBase<CgsGraphics::PositionOnlyVertex> {
public:
	void Im3dZOnly(const Im3dZOnly &);

	void Im3dZOnly();

	// CgsIm3d.h:232
	void Construct(rw::IResourceAllocator *);

}

// CgsIm3d.h:56
struct CgsGraphics::Im3dBase<CgsGraphics::PositionOnlyVertex> : public CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex> {
protected:
	// CgsIm3d.h:84
	ProgramVariableHandle[8] maWorldViewProjStateHandle;

	// CgsIm3d.h:85
	Matrix44 mCurrentTransform;

public:
	void Im3dBase(const Im3dBase<CgsGraphics::PositionOnlyVertex> &);

	void Im3dBase();

	// CgsIm3d.h:69
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm3d.h:74
	void SetTransform(Matrix44);

	// CgsIm3d.h:80
	void SetTransform(Matrix44, Matrix44);

}

// CgsIm3d.h:199
struct CgsGraphics::Im3dUntex : public CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex> {
public:
	void Im3dUntex(const Im3dUntex &);

	void Im3dUntex();

	// CgsIm3d.h:205
	void Construct(rw::IResourceAllocator *);

}

// CgsIm3d.h:56
struct CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex> : public CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex> {
protected:
	// CgsIm3d.h:84
	ProgramVariableHandle[8] maWorldViewProjStateHandle;

	// CgsIm3d.h:85
	Matrix44 mCurrentTransform;

public:
	void Im3dBase(const Im3dBase<CgsGraphics::BasicColouredVertex> &);

	void Im3dBase();

	// CgsIm3d.h:69
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm3d.h:74
	void SetTransform(Matrix44);

	// CgsIm3d.h:80
	void SetTransform(Matrix44, Matrix44);

}

// CgsIm3d.h:56
struct CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> : public CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex> {
protected:
	// CgsIm3d.h:84
	ProgramVariableHandle[8] maWorldViewProjStateHandle;

	// CgsIm3d.h:85
	Matrix44 mCurrentTransform;

public:
	void Im3dBase(const Im3dBase<CgsGraphics::BasicColouredTexturedVertex> &);

	void Im3dBase();

	// CgsIm3d.h:69
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm3d.h:74
	void SetTransform(Matrix44);

	// CgsIm3d.h:80
	void SetTransform(Matrix44, Matrix44);

}

// CgsIm3d.h:100
void CgsGraphics::Im3d::Im3d() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3d.h:56
void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::Im3dBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3d.h:56
void CgsGraphics::Im3dBase<BrnGraphics::LionBlendVertex>::Im3dBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3d.h:199
void CgsGraphics::Im3dUntex::Im3dUntex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3d.h:56
void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex>::Im3dBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3d.h:56
void CgsGraphics::Im3dBase<BrnGraphics::Im3dSkyDomeVertex>::Im3dBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3d.h:226
void CgsGraphics::Im3dZOnly::Im3dZOnly() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm3d.h:56
void CgsGraphics::Im3dBase<CgsGraphics::PositionOnlyVertex>::Im3dBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct Im3d {
		// CgsIm3d.h:135
		enum EShaders {
			E_SHADERS_DEFAULT = 0,
			E_SHADERS_DEFAULT_MASK = 1,
			E_SHADERS_COUNT = 2,
		}

		// CgsIm3d.h:144
		struct Im3dMask {
			// CgsIm3d.h:147
			struct Im3dMaskLayer {
				// CgsIm3d.h:149
				ProgramVariableHandle mPixelMaskPositionMinMax;

				// CgsIm3d.h:150
				ProgramVariableHandle mPixelMaskUVStartEnd;

				// CgsIm3d.h:151
				ProgramVariableHandle mPixelMaskUVDifference;

				// CgsIm3d.h:152
				Vector4 mvPixelMaskPositionMinMax;

				// CgsIm3d.h:153
				Vector4 mvPixelMaskUVStartEnd;

				// CgsIm3d.h:154
				Vector4 mvPixelMaskUVDifference;

				// CgsIm3d.h:155
				TextureState * mpMaskTextureState;

				// CgsIm3d.h:156
				renderengine::Texture * mpMaskTexture;

			}

			// CgsIm3d.h:159
			CgsGraphics::Im3d::Im3dMask::Im3dMaskLayer[2] maPixelMaskHandles;

			// CgsIm3d.h:161
			ProgramVariableHandle mPixelMaskUseHandle;

			// CgsIm3d.h:162
			Vector4 mvPixelMask;

		}

	}

	// Declaration
	struct Im3dBase<CgsGraphics::PositionOnlyVertex> {
	public:
		// CgsIm3d.h:69
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

		// CgsIm3d.h:74
		void SetTransform(Matrix44);

	}

	// Declaration
	struct Im3dBase<CgsGraphics::BasicColouredVertex> {
	public:
		// CgsIm3d.h:69
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

		// CgsIm3d.h:74
		void SetTransform(Matrix44);

	}

}

// CgsIm3d.h:100
struct CgsGraphics::Im3d : public CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> {
protected:
	// CgsIm3d.h:165
	CgsGraphics::Im3d::Im3dMask[1] maMask;

	// CgsIm3d.h:166
	uint32_t mu32NumMasks;

public:
	// CgsIm3d.cpp:87
	void Construct(rw::IResourceAllocator *);

	// CgsIm3d.h:336
	void PushMask(TextureState *, const Im3dVertex *);

	// CgsIm3d.h:354
	void PushMask(renderengine::Texture *, const Im3dVertex *);

	// CgsIm3d.h:402
	void PopMask();

	// CgsIm3d.cpp:268
	virtual bool SetProgram(int8_t);

protected:
	// CgsIm3d.h:372
	void PushMask(TextureState *, renderengine::Texture *, const Im3dVertex *);

	// CgsIm3d.cpp:316
	void SaveMaskShaderConstants(const Im3dVertex *, TextureState *, renderengine::Texture *);

	// CgsIm3d.cpp:370
	void SetMaskPixelShaderState();

}

// CgsIm3d.h:56
struct CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> : public CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex> {
protected:
	// CgsIm3d.h:84
	ProgramVariableHandle[8] maWorldViewProjStateHandle;

	// CgsIm3d.h:85
	Matrix44 mCurrentTransform;

public:
	// CgsIm3d.h:69
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm3d.h:74
	void SetTransform(Matrix44);

	// CgsIm3d.h:80
	void SetTransform(Matrix44, Matrix44);

}

