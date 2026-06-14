// CgsUtils.h:28
namespace Sound {
	// CgsUtils.h:29
	namespace Development {
		struct Utils;

		struct PointLabel;

		// CgsUtils.h:42
		const float32_t KF_DRAW_FREQ_CONTENT_Y_BASE;

		// CgsUtils.h:43
		const float32_t KF_DRAW_FREQ_CONTENT_X_BASE;

		// CgsUtils.h:44
		const float32_t KF_DRAW_FREQ_CONTENT_TOTAL_WIDTH;

		// CgsUtils.h:45
		const float32_t KF_DRAW_FREQ_CONTENT_TOTAL_HEIGHT;

	}

}

// CgsUtils.h:62
struct Sound::Development::Utils {
public:
	// CgsUtils.h:75
	RGBA GetColourForGain(float32_t);

	// CgsUtils.h:109
	void DrawFreqContent(const float32_t *, int32_t, float32_t, const Sound::Development::PointLabel *, int32_t);

}

// CgsUtils.h:128
struct Sound::Development::PointLabel {
	// CgsUtils.h:132
	const char8_t * mpcString;

}

