// CgsGuiDispatchBuffer.h:64
extern const int32_t kiMaxCustomComponentTextures = 16;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct DispatchBuffer {
		// CgsGuiDispatchBuffer.h:47
		struct SingleBuffer {
			// CgsGuiDispatchBuffer.h:54
			CgsGui::ViewModule * mpViewModule;

			// CgsGuiDispatchBuffer.h:57
			bool mbAptPrepared;

			// CgsGuiDispatchBuffer.h:61
			uint32_t muElapsedTime;

			// CgsGuiDispatchBuffer.h:64
			extern const int32_t kiMaxCustomComponentTextures = 16;

			// CgsGuiDispatchBuffer.h:65
			CgsID[16] maCustomRendererIDs;

			// CgsGuiDispatchBuffer.h:66
			int8_t[16] mai8CustomRendererTextureIndices;

			// CgsGuiDispatchBuffer.h:67
			renderengine::Texture *[16] mapCustomRendererTextures;

			// CgsGuiDispatchBuffer.h:68
			int32_t[16] maiCustomRendererShaders;

		public:
			// CgsGuiDispatchBuffer.h:51
			void Construct();

		}

	}

}

// CgsGuiDispatchBuffer.h:37
struct CgsGui::DispatchBuffer {
protected:
	// CgsGuiDispatchBuffer.h:108
	CgsGui::DispatchBuffer::SingleBuffer[2] maBuffers;

public:
	// CgsGuiDispatchBuffer.h:74
	void Construct();

	// CgsGuiDispatchBuffer.h:77
	void Swap();

	// CgsGuiDispatchBuffer.h:80
	void SetViewModule(CgsGui::ViewModule *);

	// CgsGuiDispatchBuffer.h:83
	CgsGui::ViewModule * GetViewModule() const;

	// CgsGuiDispatchBuffer.h:86
	void SetIsAptPrepared(bool);

	// CgsGuiDispatchBuffer.h:89
	bool GetIsAptPrepared() const;

	// CgsGuiDispatchBuffer.h:92
	void SetElapsedTime(uint32_t);

	// CgsGuiDispatchBuffer.h:95
	uint32_t GetElapsedTime() const;

	// CgsGuiDispatchBuffer.h:101
	void SetCustomRendererTexture(CgsID, int8_t, renderengine::Texture *, int32_t);

	// CgsGuiDispatchBuffer.h:104
	renderengine::Texture * GetCustomRendererTexture(CgsID, int8_t, int32_t *) const;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct DispatchBuffer {
		// CgsGuiDispatchBuffer.h:47
		struct SingleBuffer {
			// CgsGuiDispatchBuffer.h:54
			CgsGui::ViewModule * mpViewModule;

			// CgsGuiDispatchBuffer.h:57
			bool mbAptPrepared;

			// CgsGuiDispatchBuffer.h:61
			uint32_t muElapsedTime;

			// CgsGuiDispatchBuffer.h:64
			extern const int32_t kiMaxCustomComponentTextures = 16;

			// CgsGuiDispatchBuffer.h:65
			CgsID[16] maCustomRendererIDs;

			// CgsGuiDispatchBuffer.h:66
			int8_t[16] mai8CustomRendererTextureIndices;

			// CgsGuiDispatchBuffer.h:67
			renderengine::Texture *[16] mapCustomRendererTextures;

			// CgsGuiDispatchBuffer.h:68
			int32_t[16] maiCustomRendererShaders;

		public:
			// CgsGuiDispatchBuffer.h:51
			void Construct();

		}

	}

}

