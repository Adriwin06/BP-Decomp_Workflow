// ICEOverlays.hpp:45
struct ICE::ICEOverlay {
private:
	// ICEOverlays.hpp:69
	uint32_t muOverlay;

public:
	// ICEOverlays.hpp:49
	void Construct();

	// ICEOverlays.hpp:53
	BrnDirector::OverlayEnums::EOverlay GetOverlay();

	// ICEOverlays.hpp:57
	void SetOverlay(int32_t);

	// ICEOverlays.hpp:60
	void UnSetOverlay();

}

// Behaviour.h:50
namespace ICE {
	// ICEOverlays.hpp:26
	using BrnDirector::OverlayEnums;

}

// ICEActionQueue.hpp:21
namespace ICE {
	// ICEOverlays.hpp:26
	using BrnDirector::OverlayEnums;

}

// ICEMath.hpp:43
namespace ICE {
	// ICEOverlays.hpp:26
	using BrnDirector::OverlayEnums;

}

