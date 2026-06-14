// BrnSystemHWPS3.h:26
namespace BrnHW {
	struct LaunchData;

}

// BrnSystemHWPS3.h:43
struct BrnHW::LaunchData {
}

// BrnSystemHWPS3.h:26
namespace BrnHW {
	struct LaunchData;

	// Declaration
	struct SystemPS3HW {
		// BrnSystemHWPS3.h:59
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnSystemHWPS3.h:65
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

	}

}

// BrnSystemHWPS3.h:57
struct BrnHW::SystemPS3HW {
private:
	// BrnSystemHWPS3.h:89
	BrnHW::SystemPS3HW::EPrepareStage mePrepareStage;

	// BrnSystemHWPS3.h:90
	BrnHW::SystemPS3HW::EReleaseStage meReleaseStage;

public:
	// BrnSystemHWPS3.h:73
	// Declaration
	void Construct() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSystemHWPS3.cpp:105
		using namespace CgsDev::Message;

		// BrnSystemHWPS3.cpp:119
		using namespace CgsDev::Message;

		// BrnSystemHWPS3.cpp:126
		using namespace CgsDev::Message;

	}

	// BrnSystemHWPS3.h:77
	bool Prepare();

	// BrnSystemHWPS3.h:81
	bool Release();

	// BrnSystemHWPS3.h:85
	void Destruct();

}

