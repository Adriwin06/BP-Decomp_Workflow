// BrnSkyDomeVertex.h:41
struct BrnGraphics::Im3dSkyDomeVertex {
	// BrnSkyDomeVertex.h:43
	SmoothStep::Vector3 mDirection;

	// BrnSkyDomeVertex.h:44
	BasicColouredTexturedVertex::Vector2U_32 mDistances;

public:
	// BrnSkyDomeVertex.h:46
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// BrnSkyDomeVertex.h:41
struct BrnGraphics::Im3dSkyDomeVertex {
	// BrnSkyDomeVertex.h:43
	Road::Vector3 mDirection;

	// BrnSkyDomeVertex.h:44
	BasicColouredTexturedVertex::Vector2U_32 mDistances;

public:
	// BrnSkyDomeVertex.h:46
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

