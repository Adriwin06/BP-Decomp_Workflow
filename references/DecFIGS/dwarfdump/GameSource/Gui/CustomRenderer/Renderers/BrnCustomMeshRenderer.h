// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CustomMeshRenderer {
		// BrnCustomMeshRenderer.h:54
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnCustomMeshRenderer.h:60
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

	}

}

// BrnCustomMeshRenderer.h:51
struct BrnGui::CustomMeshRenderer : public CgsGui::CustomRenderComponentInterface {
private:
	// BrnCustomMeshRenderer.h:96
	BrnGui::CustomMeshRenderer::EPrepareStage mePrepareStage;

	// BrnCustomMeshRenderer.h:97
	BrnGui::CustomMeshRenderer::EReleaseStage meReleaseStage;

	// BrnCustomMeshRenderer.h:101
	ImCommandBatchTransformTextureBlendRender::Im2dVertex * mpI2VVertexList;

	// BrnCustomMeshRenderer.h:102
	Im2dTransform * mpRenderTransform;

	// BrnCustomMeshRenderer.h:103
	renderengine::PrimitiveType mePrimitiveType;

	// BrnCustomMeshRenderer.h:104
	Texture2D * mpTexture;

public:
	// BrnCustomMeshRenderer.cpp:44
	virtual void Construct();

	// BrnCustomMeshRenderer.cpp:71
	virtual bool Prepare();

	// BrnCustomMeshRenderer.cpp:113
	virtual bool Release();

	// BrnCustomMeshRenderer.cpp:151
	virtual void Destruct();

	// BrnCustomMeshRenderer.cpp:189
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnCustomMeshRenderer.cpp:169
	virtual void Update();

private:
	// BrnCustomMeshRenderer.cpp:208
	virtual void RenderComponent(ImRendererSet *);

}

