// rwgpfxrendertargetdebugger.h:31
struct rw::graphics::postfx::RenderTargetDebugger {
private:
	// rwgpfxrendertargetdebugger.h:44
	VertexDescriptor * m_quadVertexDescriptor;

	// rwgpfxrendertargetdebugger.h:45
	ProgramBuffer * m_quadVertexProgram;

	// rwgpfxrendertargetdebugger.h:46
	ProgramBuffer * m_quadPixelProgram;

public:
	// rwgpfxrendertargetdebugger.h:33
	ResourceDescriptor GetResourceDescriptor();

	// rwgpfxrendertargetdebugger.h:34
	rw::graphics::postfx::RenderTargetDebugger * Initialize(const Resource &);

	// rwgpfxrendertargetdebugger.h:35
	void Release();

	// rwgpfxrendertargetdebugger.h:37
	void Render(TextureState *, uint32_t);

protected:
	// rwgpfxrendertargetdebugger.h:41
	void RenderTargetDebugger();

}

