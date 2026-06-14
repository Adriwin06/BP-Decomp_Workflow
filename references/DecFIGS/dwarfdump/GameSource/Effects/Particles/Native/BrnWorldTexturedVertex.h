// BrnWorldTexturedVertex.h:44
struct BrnGraphics::WorldTexturedVertex {
	// BrnWorldTexturedVertex.h:46
	Contact::Vector4U_32 mv3PosPlusTransformIndex;

	// BrnWorldTexturedVertex.h:47
	RigidBody::Vector3U_32 mv3Normal;

	// BrnWorldTexturedVertex.h:48
	BasicColouredTexturedVertex::Vector2U_32 mv2UVs;

public:
	// BrnWorldTexturedVertex.h:68
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

