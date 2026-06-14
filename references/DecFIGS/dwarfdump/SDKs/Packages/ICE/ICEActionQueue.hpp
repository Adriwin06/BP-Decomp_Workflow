// ICEActionQueue.hpp:70
struct ICE::EControlToICEAction {
	// ICEActionQueue.hpp:71
	int32_t mAction;

}

// ICEActionQueue.hpp:76
struct ICE::ActionRef {
private:
	// ICEActionQueue.hpp:83
	int32_t mID;

	// ICEActionQueue.hpp:84
	float32_t mData;

public:
	// ICEActionQueue.hpp:78
	int32_t ID();

	// ICEActionQueue.hpp:79
	float32_t Data();

	// ICEActionQueue.hpp:80
	void SetID(int32_t);

	// ICEActionQueue.hpp:81
	void SetData(float32_t);

}

// ICEActionQueue.hpp:91
struct ICE::ActionQueue : public Stack<ICE::ActionRef,20> {
public:
	// ICEActionQueue.hpp:93
	void PopAction();

	// ICEActionQueue.hpp:94
	const ActionRef GetAction();

	// ICEActionQueue.hpp:95
	void Flush();

}

// ICEActionQueue.hpp:21
namespace ICE {
	struct EControlToICEAction;

	struct ActionRef;

	struct ActionQueue;

	struct Angle;

	struct ICEOverlay;

	struct ICECamera;

	struct Cubic1D;

	struct Cubic2D;

	struct Cubic3D;

	struct ICEFileHandler;

	struct ICEMemory;

	struct ICEPointers;

	struct ICECameraAnchor;

	struct ICETimer;

	struct IResourceManager;

	struct bNode;

	struct bList;

	struct ICEParameter;

	struct ICEValue;

	struct ICEElementDescription;

	struct ICEChannelDescription;

	struct ICEChannel;

	struct ICEElementCount;

	struct bTNode<ICE::ICETakeData>;

	struct ICETakeData;

	struct ICETake;

	struct bTList<ICE::ICETakeData>;

	struct ICEGroup;

	struct CameraSpaceHandler;

	struct ICECameraMover;

	struct Poly;

	struct ICERender;

	struct ICEManager;

	struct ICEWidgetColorPicker;

	struct Point;

}

