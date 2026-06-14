// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// Declaration
		struct Camera {
			// drvcam.h:73
			enum Projection {
				PROJECTION_NA = 0,
				PROJECTION_PERSPECTIVE = 1,
				PROJECTION_PARALLEL = 2,
				PROJECTION_PERSPECTIVE_INFINITE = 3,
				PROJECTION_FORCEENUMSIZEINT = 2147483647,
			}

			// drvcam.h:92
			struct PSGLViewport {
				// drvcam.h:93
				int32_t x;

				// drvcam.h:94
				int32_t y;

				// drvcam.h:95
				int32_t width;

				// drvcam.h:96
				int32_t height;

			}

		}

	}

}

// drvcam.h:70
struct rw::graphics::Camera {
private:
	// drvcam.h:111
	Matrix44Affine m_transform;

	// drvcam.h:112
	Matrix44 m_projectionMatrix;

	// drvcam.h:114
	rw::graphics::Raster * m_raster;

	// drvcam.h:115
	rw::graphics::Raster * m_zBuffer;

	// drvcam.h:116
	rw::graphics::Raster * m_stencilBuffer;

	// Unknown accessibility
	// vector2.h:129
	typedef Vector2Template<float> Vector2U_32;

	// drvcam.h:118
	Camera::Vector2U_32 m_viewOffset;

	// drvcam.h:119
	Camera::Vector2U_32 m_viewWindow;

	// drvcam.h:120
	Camera::Vector2U_32 m_recipViewWindow;

	// drvcam.h:121
	uint32_t m_frameBufferObject;

	// drvcam.h:122
	rw::graphics::Camera::Projection m_projectionType;

	// drvcam.h:123
	float32_t m_nearPlane;

	// drvcam.h:124
	float32_t m_farPlane;

	// drvcam.h:125
	rw::graphics::Camera::PSGLViewport m_viewport;

public:
	// drvcam.h:100
	ResourceDescriptor GetResourceDescriptor();

	// drvcam.h:100
	uint32_t GetAlignment();

	// drvcam.h:100
	uint32_t GetSize();

	// drvcam.h:100
	Camera * Initialize(const Resource &);

	// drvcam.h:100
	Camera * Initialize(void *, uint32_t);

	// drvcam.h:100
	void Release();

	// drvcam.h:100
	void SetViewOffset(float32_t, float32_t);

	// drvcam.h:100
	void SetViewWindow(float32_t, float32_t);

	// drvcam.h:100
	void SetRaster(rw::graphics::Raster *);

	// drvcam.h:100
	void SetZRaster(rw::graphics::Raster *);

	// drvcam.h:100
	void SetProjectionType(rw::graphics::Camera::Projection);

	// drvcam.h:100
	void SetNearClip(float32_t);

	// drvcam.h:100
	void SetFarClip(float32_t);

	// drvcam.h:100
	void SetTransform(const rw::math::vpu::Matrix44Affine &);

	// drvcam.h:100
	void GetViewOffset(float32_t &, float32_t &) const;

	// drvcam.h:100
	void GetViewWindow(float32_t &, float32_t &) const;

	// drvcam.h:100
	rw::graphics::Raster * GetRaster() const;

	// drvcam.h:100
	rw::graphics::Raster * GetZRaster() const;

	// drvcam.h:100
	rw::graphics::Camera::Projection GetProjectionType() const;

	// drvcam.h:100
	float32_t GetNearClip() const;

	// drvcam.h:100
	float32_t GetFarClip() const;

	// drvcam.h:100
	Matrix44Affine GetTransform() const;

	// drvcam.h:100
	void SetViewport(uint16_t, uint16_t, uint16_t, uint16_t);

	// drvcam.h:100
	void GetViewport(uint16_t &, uint16_t &, uint16_t &, uint16_t &) const;

	// drvcam.h:100
	RwBool Clear(const RwRGBAReal *, uint32_t);

	// drvcam.h:100
	RwBool BeginUpdate();

	// drvcam.h:100
	RwBool EndUpdate();

	// drvcam.h:100
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// drvcam.h:100
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// drvcam.h:100
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// drvcam.h:100
	void RegisterArenaReadCallbacks();

	// drvcam.h:100
	void RegisterArenaWriteCallbacks();

	// drvcam.h:103
	const rw::math::vpu::Matrix44 & PSGLGetProjectionMatrix() const;

	// drvcam.h:104
	void PSGLSetStencil(rw::graphics::Raster *);

private:
	// drvcam.h:109
	void PSGLCreateFrameBuffer();

	// drvcam.h:128
	void Camera();

	// drvcam.h:129
	void Camera(const Camera &);

	// drvcam.h:130
	void ~Camera();

}

