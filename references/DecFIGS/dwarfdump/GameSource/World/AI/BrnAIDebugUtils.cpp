// BrnRoute.h:26
namespace BrnAI {
	// BrnAIDebugUtils.h:32
	namespace BrnAIDebugUtils {
		// BrnAIDebugUtils.cpp:295
		extern void DrawSectionExtraHNGGeometry(CgsDev::Debug3DImmediateRender *, const AISection *, bool);

		// BrnAIDebugUtils.cpp:346
		extern void DrawSectionBoundingBoxes(CgsDev::Debug3DImmediateRender *, const AISection *, bool);

		// BrnAIDebugUtils.cpp:388
		extern void DrawSectionClippedTris(CgsDev::Debug3DImmediateRender *, const AISection *, bool);

		// BrnAIDebugUtils.cpp:434
		extern void DrawSectionPreClippedTris(CgsDev::Debug3DImmediateRender *, const AISection *, bool);

		// BrnAIDebugUtils.cpp:485
		extern void DrawBoundryLineWithY(CgsDev::Debug3DImmediateRender *, const BoundaryLine *, RGBA, float32_t *, float32_t *);

		// BrnAIDebugUtils.cpp:520
		extern void DrawBoundryLine(CgsDev::Debug3DImmediateRender *, const BoundaryLine *, RGBA, float32_t);

		// BrnAIDebugUtils.cpp:88
		extern void DrawPortalGeometry(CgsDev::Debug3DImmediateRender *, const Portal *, bool);

		// BrnAIDebugUtils.cpp:230
		extern void DrawSectionEdges(CgsDev::Debug3DImmediateRender *, const AISection *, bool);

		// BrnAIDebugUtils.cpp:114
		extern void DrawSectionHNGGeometry(CgsDev::Debug3DImmediateRender *, const AISection *, bool);

		// BrnAIDebugUtils.cpp:61
		extern void DrawAllSectionData(CgsDev::Debug3DImmediateRender *, const AISection *, bool);

		// BrnAIDebugUtils.cpp:28
		extern uint32_t _guLineToHighlight;

		// BrnAIDebugUtils.cpp:29
		extern bool _gbHighlightOneLine;

		// BrnAIDebugUtils.cpp:33
		const float KF_BLINE_HALF_HEIGHT;

		// BrnAIDebugUtils.cpp:35
		const RGBA KU_RED_COLOUR;

		// BrnAIDebugUtils.cpp:36
		const RGBA KU_GREEN_COLOUR;

		// BrnAIDebugUtils.cpp:37
		const RGBA KU_BLUE_COLOUR;

		// BrnAIDebugUtils.cpp:38
		const RGBA KU_PURPLE_COLOUR;

		// BrnAIDebugUtils.cpp:39
		const RGBA KU_ORANGE_COLOUR;

		// BrnAIDebugUtils.cpp:40
		const RGBA KU_YELLOW_COLOUR;

		// BrnAIDebugUtils.cpp:41
		const RGBA KU_BROWN_COLOUR;

	}

}

