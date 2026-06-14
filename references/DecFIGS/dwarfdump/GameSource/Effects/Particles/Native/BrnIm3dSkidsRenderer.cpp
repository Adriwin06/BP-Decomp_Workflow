// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// Declaration
	struct Im3dSkidsRenderer {
	public:
		// BrnIm3dSkidsRenderer.cpp:66
		void Construct(rw::IResourceAllocator *);

		// BrnIm3dSkidsRenderer.h:99
		void SetTransform(Matrix44);

		// BrnIm3dSkidsRenderer.h:111
		void SetBlendStartColour(Vector4);

		// BrnIm3dSkidsRenderer.h:124
		void SetBlendEndColour(Vector4);

	}

}

