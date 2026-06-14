// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MainMapComponent {
		// BrnMainMap.h:84
		enum ZoomFactor {
			E_ZOOMFACTOR_LOW = 0,
			E_ZOOMFACTOR_MEDIUM = 1,
			E_ZOOMFACTOR_HIGH = 2,
			E_ZOOMFACTOR_CUSTOM = 3,
			E_ZOOMFACTOR_COUNT = 4,
		}

	}

}

// BrnMainMap.h:218
extern float32_t[4] mfZoomScalFactors;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiEventRenderMainMap {
		// BrnMainMap.h:54
		enum EMapType {
			E_MAPTYPE_MAINMAP = 0,
			E_MAPTYPE_PRERACE = 1,
			E_MAPTYPE_LOADING_MAP = 2,
			E_MAPTYPE_COUNT = 3,
		}

	}

	// Declaration
	struct MainMapComponent {
		// BrnMainMap.h:84
		enum ZoomFactor {
			E_ZOOMFACTOR_LOW = 0,
			E_ZOOMFACTOR_MEDIUM = 1,
			E_ZOOMFACTOR_HIGH = 2,
			E_ZOOMFACTOR_CUSTOM = 3,
			E_ZOOMFACTOR_COUNT = 4,
		}

		// BrnMainMap.h:99
		struct MainMapParameterBundle {
			// BrnMainMap.h:102
			Vector4 mv4ViewRect;

			// BrnMainMap.h:103
			Vector4 mv4PaddingRect;

			// BrnMainMap.h:104
			BrnGui::GuiEventRenderMainMap::EMapType meMapType;

		}

	public:
		// BrnMainMap.h:379
		void SetDesiredWorldCentre(Vector2);

		// BrnMainMap.h:395
		bool IsZooming() const;

		// BrnMainMap.h:415
		void SetStickMapToScreenEdges(bool, bool, bool, bool);

	private:
		// BrnMainMap.h:218
		extern float32_t[4] mfZoomScalFactors;

	}

}

// BrnMainMap.h:52
struct BrnGui::GuiEventRenderMainMap : public GuiEvent<221> {
	// BrnMainMap.h:64
	Vector4 mv4MapRect;

	// BrnMainMap.h:65
	Vector4 mv4ViewRect;

	// BrnMainMap.h:66
	const BrnGui::MapManager::sActiveTextures * mpActiveTextures;

	// BrnMainMap.h:67
	float32_t mfZoomLevel;

	// BrnMainMap.h:68
	BrnGui::GuiEventRenderMainMap::EMapType meMapType;

	// BrnMainMap.h:69
	bool mbIsActive;

public:
	// BrnMainMap.h:63
	void Construct();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiEventRenderMainMap {
		// BrnMainMap.h:54
		enum EMapType {
			E_MAPTYPE_MAINMAP = 0,
			E_MAPTYPE_PRERACE = 1,
			E_MAPTYPE_LOADING_MAP = 2,
			E_MAPTYPE_COUNT = 3,
		}

	}

	// Declaration
	struct MainMapComponent {
		// BrnMainMap.h:84
		enum ZoomFactor {
			E_ZOOMFACTOR_LOW = 0,
			E_ZOOMFACTOR_MEDIUM = 1,
			E_ZOOMFACTOR_HIGH = 2,
			E_ZOOMFACTOR_CUSTOM = 3,
			E_ZOOMFACTOR_COUNT = 4,
		}

		// BrnMainMap.h:99
		struct MainMapParameterBundle {
			// BrnMainMap.h:102
			Vector4 mv4ViewRect;

			// BrnMainMap.h:103
			Vector4 mv4PaddingRect;

			// BrnMainMap.h:104
			BrnGui::GuiEventRenderMainMap::EMapType meMapType;

		}

		// BrnMainMap.h:202
		enum OffsetPadding {
			E_OFFSETPADDING_IN = 0,
			E_OFFSETPADDING_OUT = 1,
		}

	private:
		// BrnMainMap.cpp:661
		void SetStandardDefZoomParams();

		// BrnMainMap.cpp:527
		void SetZoomLevel(float32_t);

	public:
		// BrnMainMap.cpp:504
		void DecreaseZoom();

		// BrnMainMap.cpp:147
		bool Release();

	private:
		// BrnMainMap.cpp:301
		Vector2 CalculateViewPaddingOffset();

	public:
		// BrnMainMap.cpp:126
		bool Prepare();

		// BrnMainMap.cpp:484
		void IncreaseZoom();

	private:
		// BrnMainMap.cpp:273
		Vector2 CalculateOffsetWorldCentre(Vector2, BrnGui::MainMapComponent::OffsetPadding);

		// BrnMainMap.cpp:326
		Vector2 CalculatePositionedWorldRect(Vector2);

		// BrnMainMap.cpp:545
		Vector2 ApplyZoom(Vector2, float32_t);

	public:
		// BrnMainMap.cpp:395
		void SnapToLocation(Vector2);

		// BrnMainMap.cpp:63
		void Construct(StateInterface *, BrnGui::MainMapComponent::MainMapParameterBundle *);

		// BrnMainMap.cpp:165
		Vector2 Update(Vector2);

		// BrnMainMap.cpp:429
		void SetZoom(BrnGui::MainMapComponent::ZoomFactor, float32_t, bool);

		// BrnMainMap.cpp:230
		void RecvEvent(const CgsModule::Event *, int32_t);

	private:
		// BrnMainMap.cpp:27
		extern float32_t[4] mfZoomScalFactors;

		// BrnMainMap.cpp:35
		extern float32_t[4] mfStandardDefZoomScalFactors;

	}

	// BrnMainMap.h:265
	extern BrnGui::MainMapComponent::ZoomFactor operator++(BrnGui::MainMapComponent::ZoomFactor &, int);

	// BrnMainMap.h:265
	extern BrnGui::MainMapComponent::ZoomFactor operator--(BrnGui::MainMapComponent::ZoomFactor &, int);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiEventRenderMainMap {
		// BrnMainMap.h:54
		enum EMapType {
			E_MAPTYPE_MAINMAP = 0,
			E_MAPTYPE_PRERACE = 1,
			E_MAPTYPE_LOADING_MAP = 2,
			E_MAPTYPE_COUNT = 3,
		}

	}

	// Declaration
	struct MainMapComponent {
		// BrnMainMap.h:84
		enum ZoomFactor {
			E_ZOOMFACTOR_LOW = 0,
			E_ZOOMFACTOR_MEDIUM = 1,
			E_ZOOMFACTOR_HIGH = 2,
			E_ZOOMFACTOR_CUSTOM = 3,
			E_ZOOMFACTOR_COUNT = 4,
		}

		// BrnMainMap.h:99
		struct MainMapParameterBundle {
			// BrnMainMap.h:102
			Vector4 mv4ViewRect;

			// BrnMainMap.h:103
			Vector4 mv4PaddingRect;

			// BrnMainMap.h:104
			BrnGui::GuiEventRenderMainMap::EMapType meMapType;

		}

	public:
		// BrnMainMap.h:415
		void SetStickMapToScreenEdges(bool, bool, bool, bool);

		// BrnMainMap.h:449
		void SetActive(bool);

		// BrnMainMap.h:346
		const rw::math::vpu::Vector4 & GetDisplayRect() const;

		// BrnMainMap.h:314
		Vector4 GetWorldRect() const;

		// BrnMainMap.h:330
		Vector4 GetViewRect() const;

		// BrnMainMap.h:379
		void SetDesiredWorldCentre(Vector2);

		// BrnMainMap.h:395
		bool IsZooming() const;

	private:
		// BrnMainMap.h:218
		extern float32_t[4] mfZoomScalFactors;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiEventRenderMainMap {
		// BrnMainMap.h:54
		enum EMapType {
			E_MAPTYPE_MAINMAP = 0,
			E_MAPTYPE_PRERACE = 1,
			E_MAPTYPE_LOADING_MAP = 2,
			E_MAPTYPE_COUNT = 3,
		}

	}

	// Declaration
	struct MainMapComponent {
		// BrnMainMap.h:84
		enum ZoomFactor {
			E_ZOOMFACTOR_LOW = 0,
			E_ZOOMFACTOR_MEDIUM = 1,
			E_ZOOMFACTOR_HIGH = 2,
			E_ZOOMFACTOR_CUSTOM = 3,
			E_ZOOMFACTOR_COUNT = 4,
		}

		// BrnMainMap.h:99
		struct MainMapParameterBundle {
			// BrnMainMap.h:102
			Vector4 mv4ViewRect;

			// BrnMainMap.h:103
			Vector4 mv4PaddingRect;

			// BrnMainMap.h:104
			BrnGui::GuiEventRenderMainMap::EMapType meMapType;

		}

	public:
		// BrnMainMap.h:362
		BrnGui::MainMapComponent::ZoomFactor GetZoomLevel() const;

		// BrnMainMap.h:379
		void SetDesiredWorldCentre(Vector2);

		// BrnMainMap.h:314
		Vector4 GetWorldRect() const;

		// BrnMainMap.h:330
		Vector4 GetViewRect() const;

		// BrnMainMap.h:415
		void SetStickMapToScreenEdges(bool, bool, bool, bool);

		// BrnMainMap.h:435
		float32_t GetZoomFactor() const;

		// BrnMainMap.h:395
		bool IsZooming() const;

	private:
		// BrnMainMap.h:218
		extern float32_t[4] mfZoomScalFactors;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiEventRenderMainMap {
		// BrnMainMap.h:54
		enum EMapType {
			E_MAPTYPE_MAINMAP = 0,
			E_MAPTYPE_PRERACE = 1,
			E_MAPTYPE_LOADING_MAP = 2,
			E_MAPTYPE_COUNT = 3,
		}

	}

	// Declaration
	struct MainMapComponent {
		// BrnMainMap.h:84
		enum ZoomFactor {
			E_ZOOMFACTOR_LOW = 0,
			E_ZOOMFACTOR_MEDIUM = 1,
			E_ZOOMFACTOR_HIGH = 2,
			E_ZOOMFACTOR_CUSTOM = 3,
			E_ZOOMFACTOR_COUNT = 4,
		}

		// BrnMainMap.h:99
		struct MainMapParameterBundle {
			// BrnMainMap.h:102
			Vector4 mv4ViewRect;

			// BrnMainMap.h:103
			Vector4 mv4PaddingRect;

			// BrnMainMap.h:104
			BrnGui::GuiEventRenderMainMap::EMapType meMapType;

		}

		// BrnMainMap.h:202
		enum OffsetPadding {
			E_OFFSETPADDING_IN = 0,
			E_OFFSETPADDING_OUT = 1,
		}

	}

}

// BrnMainMap.h:81
struct BrnGui::MainMapComponent : public CgsGui::GuiComponent {
private:
	// BrnMainMap.h:209
	MapManager mMapManager;

	// BrnMainMap.h:210
	MapManager * mpMapManager;

	// BrnMainMap.h:212
	Vector4 mv4WorldRect;

	// BrnMainMap.h:213
	Vector4 mv4ViewRect;

	// BrnMainMap.h:214
	Vector4 mv4PaddingRect;

	// BrnMainMap.h:215
	Vector4 mv4DisplayRect;

	// BrnMainMap.h:216
	Vector2 mv2DesiredCentre;

	// BrnMainMap.h:218
	extern float32_t[4] mfZoomScalFactors;

	// BrnMainMap.h:219
	extern float32_t[4] mfStandardDefZoomScalFactors;

	// BrnMainMap.h:220
	float32_t mfWorldZoomScaleFactor;

	// BrnMainMap.h:221
	float32_t mfDesiredWorldZoomFactor;

	// BrnMainMap.h:222
	BrnGui::MainMapComponent::ZoomFactor meCurrentZoomFactor;

	// BrnMainMap.h:223
	BrnGui::GuiEventRenderMainMap::EMapType meMapType;

	// BrnMainMap.h:224
	bool mbIsZooming;

	// BrnMainMap.h:225
	BrnGui::GuiCache * mpGuiCache;

	// BrnMainMap.h:227
	bool mbStickMapUp;

	// BrnMainMap.h:228
	bool mbStickMapDown;

	// BrnMainMap.h:229
	bool mbStickMapLeft;

	// BrnMainMap.h:230
	bool mbStickMapRight;

	// BrnMainMap.h:232
	bool mbIsActive;

public:
	void MainMapComponent(const MainMapComponent &);

	void MainMapComponent();

	// BrnMainMap.h:111
	void Construct(StateInterface *, BrnGui::MainMapComponent::MainMapParameterBundle *);

	// BrnMainMap.h:115
	bool Prepare();

	// BrnMainMap.h:119
	bool Release();

	// BrnMainMap.h:124
	Vector2 Update(Vector2);

	// BrnMainMap.h:130
	void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnMainMap.h:297
	void SetMapManager(MapManager *);

	// BrnMainMap.h:314
	Vector4 GetWorldRect() const;

	// BrnMainMap.h:330
	Vector4 GetViewRect() const;

	// BrnMainMap.h:346
	const rw::math::vpu::Vector4 & GetDisplayRect() const;

	// BrnMainMap.h:379
	void SetDesiredWorldCentre(Vector2);

	// BrnMainMap.h:157
	void SnapToLocation(Vector2);

	// BrnMainMap.h:163
	void SetZoom(BrnGui::MainMapComponent::ZoomFactor, float32_t, bool);

	// BrnMainMap.h:167
	void IncreaseZoom();

	// BrnMainMap.h:171
	void DecreaseZoom();

	// BrnMainMap.h:362
	BrnGui::MainMapComponent::ZoomFactor GetZoomLevel() const;

	// BrnMainMap.h:435
	float32_t GetZoomFactor() const;

	// BrnMainMap.h:395
	bool IsZooming() const;

	// BrnMainMap.h:415
	void SetStickMapToScreenEdges(bool, bool, bool, bool);

	// BrnMainMap.h:449
	void SetActive(bool);

	// BrnMainMap.h:465
	bool IsActive() const;

private:
	// BrnMainMap.h:238
	Vector2 CalculateOffsetWorldCentre(Vector2, BrnGui::MainMapComponent::OffsetPadding);

	// BrnMainMap.h:243
	Vector2 CalculatePositionedWorldRect(Vector2);

	// BrnMainMap.h:247
	Vector2 CalculateViewPaddingOffset();

	// BrnMainMap.h:252
	void SetZoomLevel(float32_t);

	// BrnMainMap.h:258
	Vector2 ApplyZoom(Vector2, float32_t);

	// BrnMainMap.h:262
	void SetStandardDefZoomParams();

}

// BrnMainMap.h:81
void BrnGui::MainMapComponent::MainMapComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiEventRenderMainMap {
		// BrnMainMap.h:54
		enum EMapType {
			E_MAPTYPE_MAINMAP = 0,
			E_MAPTYPE_PRERACE = 1,
			E_MAPTYPE_LOADING_MAP = 2,
			E_MAPTYPE_COUNT = 3,
		}

	}

	// Declaration
	struct MainMapComponent {
		// BrnMainMap.h:84
		enum ZoomFactor {
			E_ZOOMFACTOR_LOW = 0,
			E_ZOOMFACTOR_MEDIUM = 1,
			E_ZOOMFACTOR_HIGH = 2,
			E_ZOOMFACTOR_CUSTOM = 3,
			E_ZOOMFACTOR_COUNT = 4,
		}

	}

}

