// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredTexturedVertex;

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct OcclusionCullManager;

	struct DispatchPacketInterpreter;

	struct DispatchList;

}

// CgsCamera.h:47
struct CgsGraphics::Camera {
protected:
	// CgsCamera.h:202
	Matrix44Affine m_viewMatrix;

	// CgsCamera.h:203
	Matrix44 m_projectionMatrix;

	// CgsCamera.h:204
	Matrix44 m_viewProjectionMatrix;

	// Unknown accessibility
	// matrix44.h:339
	typedef Matrix44Template<double> Matrix44_64;

	// CgsCamera.h:206
	Camera::Matrix44_64 m_viewMatrix_64bit;

	// CgsCamera.h:209
	float32_t m_fovHorizontal;

	// CgsCamera.h:210
	float32_t m_oneOverTanHalfFovHorizontal;

	// CgsCamera.h:211
	float32_t m_tanHalfFovHorizontal;

	// CgsCamera.h:213
	float32_t m_fovVertical;

	// CgsCamera.h:214
	float32_t m_oneOverTanHalfFovVertical;

	// CgsCamera.h:215
	float32_t m_tanHalfFovVertical;

	// CgsCamera.h:217
	float32_t m_aspectRatio;

	// CgsCamera.h:218
	float32_t m_nearClipPlane;

	// CgsCamera.h:219
	float32_t m_farClipPlane;

public:
	// CgsCamera.h:59
	void Construct();

	// CgsCamera.h:66
	void Construct(float32_t, float32_t, float32_t, float32_t);

	// CgsCamera.h:69
	void Prepare();

	// CgsCamera.h:72
	void Update();

	// CgsCamera.h:75
	void Destruct();

	// CgsCamera.h:78
	void Release();

	// CgsCamera.h:82
	void Clone(Camera &) const;

	// CgsCamera.h:89
	void LookAt(Vector3, Vector3, Vector3);

	// CgsCamera.h:94
	void SetFovHorizontal(float32_t);

	// CgsCamera.h:97
	void SetAspectRatio(float32_t);

	// CgsCamera.h:100
	void SetNearClipPlane(float32_t);

	// CgsCamera.h:103
	void SetFarClipPlane(float32_t);

	// CgsCamera.h:107
	float32_t GetFovHorizontal() const;

	// CgsCamera.h:109
	float32_t GetOneOverTanHalfFovHorizontal() const;

	// CgsCamera.h:111
	float32_t GetTanHalfFovHorizontal() const;

	// CgsCamera.h:114
	float32_t GetFovVertical() const;

	// CgsCamera.h:116
	float32_t GetOneOverTanHalfFovVertical() const;

	// CgsCamera.h:118
	float32_t GetTanHalfFovVertical() const;

	// CgsCamera.h:121
	float32_t GetAspectRatio() const;

	// CgsCamera.h:123
	float32_t GetNearClipPlane() const;

	// CgsCamera.h:125
	float32_t GetFarClipPlane() const;

	// CgsCamera.h:129
	const rw::math::vpu::Matrix44Affine & GetViewMatrix() const;

	// CgsCamera.h:131
	const rw::math::vpu::Matrix44 & GetProjectionMatrix() const;

	// CgsCamera.h:133
	const rw::math::vpu::Matrix44 & GetViewProjectionMatrix() const;

	// CgsCamera.h:136
	Matrix44 GetViewProjectionMatrixModified() const;

	// CgsCamera.h:139
	void SetPerspectiveProjectionMatrixRightHanded();

	// CgsCamera.h:144
	void GetCgsFrustum(Frustum &) const;

	// CgsCamera.h:149
	void GetCgsFrustumPerspective(Frustum &, bool) const;

	// CgsCamera.h:153
	void GetCgsFrustumParallel(Frustum &) const;

	// CgsCamera.h:158
	void GetFrustum(Frustum &) const;

	// CgsCamera.h:166
	void GetFrustumPerspective(Frustum &, bool) const;

	// CgsCamera.h:170
	void GetFrustumParallel(Frustum &) const;

	// CgsCamera.h:174
	void GetFrustumPerspectiveVertices(Vector3 *) const;

	// CgsCamera.h:180
	CgsGraphics::Camera::eCGSCameraClipCodes PerspectiveClip(Vector4, Vector4, Matrix44);

	// CgsCamera.h:184
	void UpdateOrthogonalProjectionMatrix(float32_t);

	// CgsCamera.h:188
	void SetProjectionMatrix(Matrix44);

	// CgsCamera.h:191
	void UpdatePerspectiveProjectionMatrix();

protected:
	// CgsCamera.h:195
	void UpdateViewProjectionMatrix();

	// CgsCamera.h:198
	int32_t GetOutCode(Vector4) const;

}

// _built-in_
namespace :: {
	// CgsCamera.h:26
	const float32_t KF_ASPECTRATIO_WIDESCREEN;

	// CgsCamera.h:27
	const float32_t KF_ASPECTRATIO_STANDARD;

	// CgsCamera.h:28
	const float32_t KF_ASPECTRATIO_SQUARE;

	// CgsCamera.h:30
	const float32_t KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME;

	// CgsCamera.h:32
	const float32_t KF_DEFAULT_FOVHORIZONTAL;

	// CgsCamera.h:33
	const float32_t KF_DEFAULT_ASPECTRATIO;

	// CgsCamera.h:34
	const float32_t KF_DEFAULT_NEARCLIPPLANE;

	// CgsCamera.h:35
	const float32_t KF_DEFAULT_FARCLIPPLANE;

	// CgsCamera.h:36
	const float32_t KF_DEFAULT_DEPTHOFFIELD;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Im2d;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct TextureScopeTableElement;

	struct TextureScopeTable;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct ImCommandBatchTransformTextureBlendRender;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct Im3dRenderBufferUntex;

	struct EacChunkDef;

	struct ChunkBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

	struct ImCommand;

	struct ImCommandSetStateBlend;

	struct ImCommandSetStateDepthStencil;

	struct ImCommandSetStateDepthStencilStencilRef;

	struct ImCommandSetStateRasterizer;

	struct ImCommandSetStateRenderTarget;

	struct ImCommandSetStateTexture;

	struct ImCommandSetStateSampler;

	struct ImCommandSetScissor;

	struct ImCommandSetTexture;

	struct PackedOobb;

	struct MaterialAssembly;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommandSetTransform3dVp;

	struct ImCommandSetTransform3dMtwVp;

	struct ImCommandPushMaskTextureState<CgsGraphics::BasicColouredTexturedVertex>;

	struct ImCommandPushMaskTexture<CgsGraphics::BasicColouredTexturedVertex>;

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct Im2dUntex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	// Declaration
	struct Im2dRenderBuffer {
	public:
		Im2dRenderBuffer();

	}

	struct Im3dRenderBuffer;

	struct MoviePlayerCoreAllocator;

	struct EacChunkDef;

	struct ChunkBuffer;

	struct MovieVideoRenderer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchObjectContext;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct DispatchObjectContext_JobState;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

	struct Instance;

	struct InstanceList;

	struct ImCommandRenderPrimitives<CgsGraphics::BasicColouredTexturedVertex>;

	struct Im3dBase<BrnGraphics::LionBlendVertex>;

	struct ImRenderer<BrnGraphics::LionBlendVertex>;

	struct ImRenderer<CgsGraphics::BasicColouredTexturedVertex>;

	struct ImRenderer<BrnGraphics::SkidVertex>;

	struct ImRenderer<BrnGraphics::WorldTexturedVertex>;

	struct Im3dBase<BrnGraphics::Im3dSkyDomeVertex>;

	struct ImRenderer<BrnGraphics::Im3dSkyDomeVertex>;

	struct Im2dBase<CgsGraphics::Basic2dColouredVertex>;

	struct ImRenderer<CgsGraphics::Basic2dColouredVertex>;

	struct Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex>;

	struct Im3dBase<CgsGraphics::BasicColouredVertex>;

	struct Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>;

	struct Im3dBase<CgsGraphics::BasicColouredTexturedVertex>;

	struct Im3dBase<CgsGraphics::PositionOnlyVertex>;

	struct ImRenderer<CgsGraphics::PositionOnlyVertex>;

	struct ImRenderer<CgsGraphics::BasicColouredVertex>;

	struct ImCommandRenderPrimitives<CgsGraphics::BasicColouredVertex>;

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

}

// CgsCamera.h:47
struct CgsGraphics::Camera {
protected:
	// CgsCamera.h:202
	Matrix44Affine m_viewMatrix;

	// CgsCamera.h:203
	Matrix44 m_projectionMatrix;

	// CgsCamera.h:204
	Matrix44 m_viewProjectionMatrix;

	// Unknown accessibility
	// matrix44.h:339
	typedef Matrix44Template<double> Matrix44_64;

	// CgsCamera.h:206
	Camera::Matrix44_64 m_viewMatrix_64bit;

	// CgsCamera.h:209
	float32_t m_fovHorizontal;

	// CgsCamera.h:210
	float32_t m_oneOverTanHalfFovHorizontal;

	// CgsCamera.h:211
	float32_t m_tanHalfFovHorizontal;

	// CgsCamera.h:213
	float32_t m_fovVertical;

	// CgsCamera.h:214
	float32_t m_oneOverTanHalfFovVertical;

	// CgsCamera.h:215
	float32_t m_tanHalfFovVertical;

	// CgsCamera.h:217
	float32_t m_aspectRatio;

	// CgsCamera.h:218
	float32_t m_nearClipPlane;

	// CgsCamera.h:219
	float32_t m_farClipPlane;

public:
	// CgsCamera.h:59
	void Construct();

	// CgsCamera.h:66
	void Construct(float32_t, float32_t, float32_t, float32_t);

	// CgsCamera.h:69
	void Prepare();

	// CgsCamera.h:72
	void Update();

	// CgsCamera.h:75
	void Destruct();

	// CgsCamera.h:78
	void Release();

	// CgsCamera.h:82
	void Clone(Camera &) const;

	// CgsCamera.h:89
	void LookAt(Vector3, Vector3, Vector3);

	// CgsCamera.h:94
	void SetFovHorizontal(float32_t);

	// CgsCamera.h:97
	void SetAspectRatio(float32_t);

	// CgsCamera.h:100
	void SetNearClipPlane(float32_t);

	// CgsCamera.h:103
	void SetFarClipPlane(float32_t);

	// CgsCamera.h:107
	float32_t GetFovHorizontal() const;

	// CgsCamera.h:109
	float32_t GetOneOverTanHalfFovHorizontal() const;

	// CgsCamera.h:111
	float32_t GetTanHalfFovHorizontal() const;

	// CgsCamera.h:114
	float32_t GetFovVertical() const;

	// CgsCamera.h:116
	float32_t GetOneOverTanHalfFovVertical() const;

	// CgsCamera.h:118
	float32_t GetTanHalfFovVertical() const;

	// CgsCamera.h:121
	float32_t GetAspectRatio() const;

	// CgsCamera.h:123
	float32_t GetNearClipPlane() const;

	// CgsCamera.h:125
	float32_t GetFarClipPlane() const;

	// CgsCamera.h:129
	const rw::math::vpu::Matrix44Affine & GetViewMatrix() const;

	// CgsCamera.h:131
	const rw::math::vpu::Matrix44 & GetProjectionMatrix() const;

	// CgsCamera.h:133
	const rw::math::vpu::Matrix44 & GetViewProjectionMatrix() const;

	// CgsCamera.h:136
	Matrix44 GetViewProjectionMatrixModified() const;

	// CgsCamera.h:139
	void SetPerspectiveProjectionMatrixRightHanded();

	// CgsCamera.h:144
	void GetCgsFrustum(Frustum &) const;

	// CgsCamera.h:149
	void GetCgsFrustumPerspective(Frustum &, bool) const;

	// CgsCamera.h:153
	void GetCgsFrustumParallel(Frustum &) const;

	// CgsCamera.h:158
	void GetFrustum(Frustum &) const;

	// CgsCamera.h:166
	// Declaration
	void GetFrustumPerspective(Frustum &, bool) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCamera.cpp:281
		using namespace rw::math;

		// CgsCamera.cpp:282
		using namespace rw::collision;

	}

	// CgsCamera.h:170
	// Declaration
	void GetFrustumParallel(Frustum &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCamera.cpp:384
		using namespace rw::math;

		// CgsCamera.cpp:385
		using namespace rw::collision;

	}

	// CgsCamera.h:174
	// Declaration
	void GetFrustumPerspectiveVertices(Vector3 *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCamera.cpp:458
		using namespace rw::math;

		// CgsCamera.cpp:459
		using namespace rw::collision;

	}

	// CgsCamera.h:180
	CgsGraphics::Camera::eCGSCameraClipCodes PerspectiveClip(Vector4, Vector4, Matrix44);

	// CgsCamera.h:184
	void UpdateOrthogonalProjectionMatrix(float32_t);

	// CgsCamera.h:188
	void SetProjectionMatrix(Matrix44);

	// CgsCamera.h:191
	void UpdatePerspectiveProjectionMatrix();

protected:
	// CgsCamera.h:195
	void UpdateViewProjectionMatrix();

	// CgsCamera.h:198
	int32_t GetOutCode(Vector4) const;

}

// CgsCamera.h:44
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredTexturedVertex;

	struct ImCommand;

	struct ImCommandBatchTransformTextureBlendRender;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// Declaration
	struct Camera {
		// CgsCamera.h:50
		enum eCGSCameraClipCodes {
			eCGSCamera_ClipCode_Inside = 0,
			eCGSCamera_ClipCode_Intersection = 1,
			eCGSCamera_ClipCode_Outside = 2,
			eCGSCamera_ClipCodes_Max = 3,
		}

	}

}

