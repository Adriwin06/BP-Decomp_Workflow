// CgsGuiShared.h:45
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

}

