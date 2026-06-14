// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavBorough {
		// BrnCrashNavBorough.h:53
		struct BoroughPositions {
			// BrnCrashNavBorough.h:55
			Vector2 mv2Position;

			// BrnCrashNavBorough.h:56
			Vector2 mv2WidthHeight;

			// BrnCrashNavBorough.h:57
			Vector2 mv2CenterPosition;

			// BrnCrashNavBorough.h:58
			BrnGui::MainMapComponent::ZoomFactor meZoomFactor;

		}

	}

}

// BrnCrashNavBorough.h:93
extern BrnGui::CrashNavBorough::BoroughPositions[6] maBoroughPositions;

// BrnCrashNavBorough.h:97
extern char[] macIconState;

// BrnCrashNavBorough.h:98
extern char[] macXposVar;

// BrnCrashNavBorough.h:99
extern char[] macYposVar;

// BrnCrashNavBorough.h:100
extern char[] macWidthposVar;

// BrnCrashNavBorough.h:101
extern char[] macHeightposVar;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavBorough {
		// BrnCrashNavBorough.h:53
		struct BoroughPositions {
			// BrnCrashNavBorough.h:55
			Vector2 mv2Position;

			// BrnCrashNavBorough.h:56
			Vector2 mv2WidthHeight;

			// BrnCrashNavBorough.h:57
			Vector2 mv2CenterPosition;

			// BrnCrashNavBorough.h:58
			BrnGui::MainMapComponent::ZoomFactor meZoomFactor;

		}

	}

}

// BrnCrashNavBorough.h:49
struct BrnGui::CrashNavBorough : public CgsGui::GuiComponent {
private:
	// BrnCrashNavBorough.cpp:30
	extern BrnGui::CrashNavBorough::BoroughPositions[6] maBoroughPositions;

	// BrnCrashNavBorough.h:95
	BrnWorld::ECounty meCurrentlySelectedBorough;

	// BrnCrashNavBorough.cpp:24
	extern const char[10] macIconState;

	// BrnCrashNavBorough.cpp:25
	extern const char[3] macXposVar;

	// BrnCrashNavBorough.cpp:26
	extern const char[3] macYposVar;

	// BrnCrashNavBorough.cpp:27
	extern const char[7] macWidthposVar;

	// BrnCrashNavBorough.cpp:28
	extern const char[8] macHeightposVar;

public:
	// BrnCrashNavBorough.cpp:60
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnCrashNavBorough.cpp:91
	void SetActive();

	// BrnCrashNavBorough.cpp:106
	void SetInactive();

	// BrnCrashNavBorough.cpp:123
	void SetCurrentBorough(BrnWorld::ECounty);

	// BrnCrashNavBorough.h:121
	Vector2 GetBoroughCenterPoint(BrnWorld::ECounty) const;

	// BrnCrashNavBorough.h:137
	BrnGui::MainMapComponent::ZoomFactor GetBoroughZoomFactor(BrnWorld::ECounty) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavBorough {
		// BrnCrashNavBorough.h:53
		struct BoroughPositions {
			// BrnCrashNavBorough.h:55
			Vector2 mv2Position;

			// BrnCrashNavBorough.h:56
			Vector2 mv2WidthHeight;

			// BrnCrashNavBorough.h:57
			Vector2 mv2CenterPosition;

			// BrnCrashNavBorough.h:58
			BrnGui::MainMapComponent::ZoomFactor meZoomFactor;

		}

	private:
		// BrnCrashNavBorough.h:93
		extern BrnGui::CrashNavBorough::BoroughPositions[6] maBoroughPositions;

		// BrnCrashNavBorough.h:97
		extern char[] macIconState;

		// BrnCrashNavBorough.h:98
		extern char[] macXposVar;

		// BrnCrashNavBorough.h:99
		extern char[] macYposVar;

		// BrnCrashNavBorough.h:100
		extern char[] macWidthposVar;

		// BrnCrashNavBorough.h:101
		extern char[] macHeightposVar;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavBorough {
		// BrnCrashNavBorough.h:53
		struct BoroughPositions {
			// BrnCrashNavBorough.h:55
			Vector2 mv2Position;

			// BrnCrashNavBorough.h:56
			Vector2 mv2WidthHeight;

			// BrnCrashNavBorough.h:57
			Vector2 mv2CenterPosition;

			// BrnCrashNavBorough.h:58
			BrnGui::MainMapComponent::ZoomFactor meZoomFactor;

		}

	public:
		CrashNavBorough();

	private:
		// BrnCrashNavBorough.h:93
		extern BrnGui::CrashNavBorough::BoroughPositions[6] maBoroughPositions;

		// BrnCrashNavBorough.h:97
		extern char[] macIconState;

		// BrnCrashNavBorough.h:98
		extern char[] macXposVar;

		// BrnCrashNavBorough.h:99
		extern char[] macYposVar;

		// BrnCrashNavBorough.h:100
		extern char[] macWidthposVar;

		// BrnCrashNavBorough.h:101
		extern char[] macHeightposVar;

	}

}

// BrnCrashNavBorough.h:49
void BrnGui::CrashNavBorough::CrashNavBorough() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

