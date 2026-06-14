// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// Declaration
			struct DepthOfField {
				// rwgpfxdof.h:35
				struct State {
					// rwgpfxdof.h:37
					float32_t[4] m_focalPlanes;

					// rwgpfxdof.h:38
					float32_t m_projNearPlane;

					// rwgpfxdof.h:39
					float32_t m_projFarPlane;

					// rwgpfxdof.h:40
					float32_t m_dofAmount;

					// rwgpfxdof.h:41
					float32_t m_blurRadius;

				public:
					// rwgpfxdof.h:43
					State();

					// rwgpfxdof.h:55
					void SetFocalNearPlane(float32_t);

					// rwgpfxdof.h:60
					void SetFocalPlane1(float32_t);

					// rwgpfxdof.h:65
					void SetFocalPlane2(float32_t);

					// rwgpfxdof.h:70
					void SetFocalFarPlane(float32_t);

					// rwgpfxdof.h:75
					void SetProjectionNearPlane(float32_t);

					// rwgpfxdof.h:80
					void SetProjectionFarPlane(float32_t);

					// rwgpfxdof.h:85
					void SetDofAmount(float32_t);

					// rwgpfxdof.h:90
					void SetBlurRadius(float32_t);

				}

				// rwgpfxdof.h:97
				struct Parameters {
					// rwgpfxdof.h:99
					rw::graphics::postfx::DepthOfField::State m_state;

				public:
					// rwgpfxdof.h:101
					Parameters();

					// rwgpfxdof.h:106
					const rw::graphics::postfx::DepthOfField::State & GetState() const;

					// rwgpfxdof.h:111
					rw::graphics::postfx::DepthOfField::State & GetState();

					// rwgpfxdof.h:116
					void SetState(rw::graphics::postfx::DepthOfField::State &);

				}

			}

		}

	}

}

// rwgpfxdof.h:31
struct rw::graphics::postfx::DepthOfField {
protected:
	// rwgpfxdof.h:158
	ProgramBuffer * m_depthOfFieldProgram;

	// rwgpfxdof.h:160
	ProgramVariableHandle m_focalConstants1Handle;

	// rwgpfxdof.h:161
	ProgramVariableHandle m_focalConstants2Handle;

	// rwgpfxdof.h:163
	rw::graphics::postfx::DepthOfField::State m_state;

	// rwgpfxdof.h:165
	bool m_bParametersDirty;

public:
	// rwgpfxdof.h:123
	ResourceDescriptor GetResourceDescriptor(const rw::graphics::postfx::DepthOfField::Parameters &);

	// rwgpfxdof.h:124
	DepthOfField * Initialize(const Resource &, const rw::graphics::postfx::DepthOfField::Parameters &);

	// rwgpfxdof.h:125
	void Release();

	// rwgpfxdof.h:130
	void SetState(const rw::graphics::postfx::DepthOfField::State &);

	// rwgpfxdof.h:136
	RenderTarget * DownSampleAndGaussianBlur(RenderTarget *, RenderTarget *, RenderTarget *);

	// rwgpfxdof.h:144
	RenderTarget * Apply(RenderTarget *, RenderTarget *, RenderTarget *, RenderTarget *, bool);

	// rwgpfxdof.h:150
	RenderTarget * PostProcess(RenderTarget *, RenderTarget *, RenderTarget *);

protected:
	// rwgpfxdof.h:154
	void DepthOfField(const rw::graphics::postfx::DepthOfField::Parameters &);

}

