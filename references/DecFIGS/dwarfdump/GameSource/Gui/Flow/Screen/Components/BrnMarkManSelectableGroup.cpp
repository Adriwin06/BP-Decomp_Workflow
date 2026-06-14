// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MarkManSelectableGroup {
	public:
		// BrnMarkManSelectableGroup.cpp:44
		void Construct(const char *, StateInterface *, const char *, uint64_t);

		// BrnMarkManSelectableGroup.cpp:90
		bool HandleLoadNotification(const char *);

		// BrnMarkManSelectableGroup.cpp:119
		bool HandleTransitionComplete(const char *, int32_t);

		// BrnMarkManSelectableGroup.cpp:59
		void Mark();

	}

}

