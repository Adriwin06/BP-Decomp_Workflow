// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex> {
	public:
		// CgsIm2d.h:76
		void SetTransform(const Im2dTransform &);

	}

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct Im2dBase<CgsGraphics::Basic2dColouredVertex> {
	public:
		// CgsIm2d.h:76
		void SetTransform(const Im2dTransform &);

	}

	// Declaration
	struct ImRenderer<CgsGraphics::Basic2dColouredVertex> {
	public:
		// CgsImRenderer.h:586
		void BeginRendering();

		// CgsImRenderer.h:524
		virtual bool SetProgram(signed char);

		// CgsImRenderer.h:665
		// Declaration
		void Render(renderengine::PrimitiveType, const Im2dUntexVertex *, unsigned int) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsIm2d.h:45
			typedef Basic2dColouredVertex Im2dUntexVertex;

		}

		// CgsImRenderer.h:643
		void EndRendering();

		// Unknown accessibility
		// CgsImRenderer.h:241
		extern const int8_t KI8_MAX_PROGRAMS = 8;

	}

	// Declaration
	struct Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex> {
	public:
		// CgsIm2d.h:76
		void SetTransform(const Im2dTransform &);

	}

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Im2d {
		// CgsIm2d.h:163
		struct Im2dMask {
			// CgsIm2d.h:166
			struct Im2dMaskLayer {
				// CgsIm2d.h:168
				ProgramVariableHandle mPixelMaskPositionMinMax;

				// CgsIm2d.h:169
				ProgramVariableHandle mPixelMaskUVStartEnd;

				// CgsIm2d.h:170
				ProgramVariableHandle mPixelMaskUVDifference;

				// CgsIm2d.h:171
				Vector4 mvPixelMaskPositionMinMax;

				// CgsIm2d.h:172
				Vector4 mvPixelMaskUVStartEnd;

				// CgsIm2d.h:173
				Vector4 mvPixelMaskUVDifference;

				// CgsIm2d.h:174
				TextureState * mpMaskTextureState;

				// CgsIm2d.h:175
				renderengine::Texture * mpMaskTexture;

			}

			// CgsIm2d.h:178
			CgsGraphics::Im2d::Im2dMask::Im2dMaskLayer[2] maPixelMaskHandles;

			// CgsIm2d.h:179
			Vector4 mvPixelMask;

			// CgsIm2d.h:180
			ProgramVariableHandle mPixelMaskUseHandle;

		}

	public:
		Im2d();

	}

}

// CgsIm2d.h:218
struct CgsGraphics::Im2dUntex : public CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredVertex> {
public:
	void Im2dUntex(const Im2dUntex &);

	void Im2dUntex();

	// CgsIm2d.h:224
	void Construct(rw::IResourceAllocator *);

}

// CgsIm2d.h:58
struct CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredVertex> : public CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex> {
protected:
	// CgsIm2d.h:86
	ProgramVariableHandle[8] maHandleOffsetXYZ;

	// CgsIm2d.h:87
	ProgramVariableHandle[8] maHandleRightUp;

	// CgsIm2d.h:88
	ProgramVariableHandle[8] maHandleColourShift;

	// CgsIm2d.h:89
	ProgramVariableHandle[8] maHandleColourScale;

	// CgsIm2d.h:90
	Im2dTransform mCurrentTransform;

public:
	void Im2dBase(const Im2dBase<CgsGraphics::Basic2dColouredVertex> &);

	void Im2dBase();

	// CgsIm2d.h:71
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm2d.h:76
	void SetTransform(const Im2dTransform &);

	// CgsIm2d.h:83
	void SetTransform(Vector2, Vector2, Vector2, float);

}

// CgsIm2d.h:58
struct CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex> : public CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex> {
protected:
	// CgsIm2d.h:86
	ProgramVariableHandle[8] maHandleOffsetXYZ;

	// CgsIm2d.h:87
	ProgramVariableHandle[8] maHandleRightUp;

	// CgsIm2d.h:88
	ProgramVariableHandle[8] maHandleColourShift;

	// CgsIm2d.h:89
	ProgramVariableHandle[8] maHandleColourScale;

	// CgsIm2d.h:90
	Im2dTransform mCurrentTransform;

public:
	void Im2dBase(const Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex> &);

	void Im2dBase();

	// CgsIm2d.h:71
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm2d.h:76
	void SetTransform(const Im2dTransform &);

	// CgsIm2d.h:83
	void SetTransform(Vector2, Vector2, Vector2, float);

}

// CgsIm2d.h:102
void CgsGraphics::Im2d::Im2d() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm2d.h:58
void CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex>::Im2dBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm2d.h:218
void CgsGraphics::Im2dUntex::Im2dUntex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm2d.h:58
void CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredVertex>::Im2dBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct Im2d {
		// CgsIm2d.h:148
		enum EShaders {
			E_SHADERS_DEFAULT = 0,
			E_SHADERS_DEFAULT_MASK = 1,
			E_SHADERS_YUY2 = 2,
			E_SHADERS_YUY2_MASK = 3,
			E_SHADERS_YCBCR = 4,
			E_SHADERS_YCBCR_MASK = 5,
			E_SHADERS_BOOSTBAR = 6,
			E_SHADERS_BOOSTBAR_MASK = 7,
			E_SHADERS_COUNT = 8,
		}

		// CgsIm2d.h:163
		struct Im2dMask {
			// CgsIm2d.h:166
			struct Im2dMaskLayer {
				// CgsIm2d.h:168
				ProgramVariableHandle mPixelMaskPositionMinMax;

				// CgsIm2d.h:169
				ProgramVariableHandle mPixelMaskUVStartEnd;

				// CgsIm2d.h:170
				ProgramVariableHandle mPixelMaskUVDifference;

				// CgsIm2d.h:171
				Vector4 mvPixelMaskPositionMinMax;

				// CgsIm2d.h:172
				Vector4 mvPixelMaskUVStartEnd;

				// CgsIm2d.h:173
				Vector4 mvPixelMaskUVDifference;

				// CgsIm2d.h:174
				TextureState * mpMaskTextureState;

				// CgsIm2d.h:175
				renderengine::Texture * mpMaskTexture;

			}

			// CgsIm2d.h:178
			CgsGraphics::Im2d::Im2dMask::Im2dMaskLayer[2] maPixelMaskHandles;

			// CgsIm2d.h:179
			Vector4 mvPixelMask;

			// CgsIm2d.h:180
			ProgramVariableHandle mPixelMaskUseHandle;

		}

	}

	// Declaration
	struct Im2dBase<CgsGraphics::Basic2dColouredVertex> {
	public:
		// CgsIm2d.h:71
		void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	}

}

// CgsIm2d.h:102
struct CgsGraphics::Im2d : public CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex> {
protected:
	// CgsIm2d.h:183
	CgsGraphics::Im2d::Im2dMask[4] maMask;

	// CgsIm2d.h:185
	uint32_t mu32NumMasks;

	// CgsIm2d.h:205
	ProgramVariableHandle[2] maBoostBarOuterColours;

	// CgsIm2d.h:206
	ProgramVariableHandle[2] maBoostBarInnerColours;

public:
	// CgsIm2d.cpp:112
	void Construct(rw::IResourceAllocator *);

	// CgsIm2d.h:465
	void PushMask(TextureState *, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *);

	// CgsIm2d.h:482
	void PushMask(renderengine::Texture *, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *);

	// CgsIm2d.h:530
	void PopMask();

	// CgsIm2d.h:570
	void PushBoostBarColours(Vector3, Vector3);

	// CgsIm2d.cpp:265
	virtual bool SetProgram(int8_t);

protected:
	// CgsIm2d.h:500
	void PushMask(TextureState *, renderengine::Texture *, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *);

	// CgsIm2d.h:376
	void SaveMaskShaderConstants(const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, TextureState *, renderengine::Texture *);

	// CgsIm2d.h:417
	void SetMaskPixelShaderState();

}

// CgsIm2d.h:58
struct CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex> : public CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex> {
protected:
	// CgsIm2d.h:86
	ProgramVariableHandle[8] maHandleOffsetXYZ;

	// CgsIm2d.h:87
	ProgramVariableHandle[8] maHandleRightUp;

	// CgsIm2d.h:88
	ProgramVariableHandle[8] maHandleColourShift;

	// CgsIm2d.h:89
	ProgramVariableHandle[8] maHandleColourScale;

	// CgsIm2d.h:90
	Im2dTransform mCurrentTransform;

public:
	// CgsIm2d.h:71
	void Construct(rw::IResourceAllocator *, const void *const*, const uint32_t *, const void *const*, const uint32_t *, signed char);

	// CgsIm2d.h:76
	void SetTransform(const Im2dTransform &);

	// CgsIm2d.h:83
	void SetTransform(Vector2, Vector2, Vector2, float);

}

