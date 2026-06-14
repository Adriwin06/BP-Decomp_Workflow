// ICEWidgetColorPicker.hpp:33
struct ICE::ICEWidgetColorPicker {
private:
	// ICEWidgetColorPicker.hpp:83
	float32_t mfX;

	// ICEWidgetColorPicker.hpp:84
	float32_t mfY;

	// ICEWidgetColorPicker.hpp:85
	float32_t mfRadius;

	// ICEWidgetColorPicker.hpp:86
	float32_t mfWheelPosX;

	// ICEWidgetColorPicker.hpp:87
	float32_t mfWheelPosY;

	// ICEWidgetColorPicker.hpp:88
	float32_t mfWheelPosZ;

	// ICEWidgetColorPicker.hpp:89
	float32_t mfIntensity;

	// ICEWidgetColorPicker.hpp:90
	float32_t mfGain;

	// ICEWidgetColorPicker.hpp:91
	float32_t mfBloom;

public:
	// ICEWidgetColorPicker.hpp:38
	void Construct(float32_t, float32_t, float32_t);

	// ICEWidgetColorPicker.hpp:39
	void Destruct();

	// ICEWidgetColorPicker.hpp:41
	void Render(ICERender *);

	// ICEWidgetColorPicker.hpp:44
	void SetColorXDelta(float32_t);

	// ICEWidgetColorPicker.hpp:45
	void SetColorYDelta(float32_t);

	// ICEWidgetColorPicker.hpp:46
	void SetColorZDelta(float32_t);

	// ICEWidgetColorPicker.hpp:47
	void SetSelectedColorPos(float32_t, float32_t, float32_t);

	// ICEWidgetColorPicker.hpp:48
	float32_t GetSelectedColorX();

	// ICEWidgetColorPicker.hpp:49
	float32_t GetSelectedColorY();

	// ICEWidgetColorPicker.hpp:50
	float32_t GetSelectedColorZ();

	// ICEWidgetColorPicker.hpp:52
	void SetIntensityDelta(float32_t);

	// ICEWidgetColorPicker.hpp:53
	void SetIntensity(float32_t);

	// ICEWidgetColorPicker.hpp:54
	float32_t GetIntensity();

	// ICEWidgetColorPicker.hpp:56
	void SetGainDelta(float32_t);

	// ICEWidgetColorPicker.hpp:57
	void SetGain(float32_t);

	// ICEWidgetColorPicker.hpp:58
	float32_t GetGain();

	// ICEWidgetColorPicker.hpp:60
	void SetBloomDelta(float32_t);

	// ICEWidgetColorPicker.hpp:61
	void SetBloom(float32_t);

	// ICEWidgetColorPicker.hpp:62
	float32_t GetBloom();

private:
	// ICEWidgetColorPicker.hpp:65
	void RGB2HSV(float32_t, float32_t, float32_t, float32_t &, float32_t &, float32_t &);

	// ICEWidgetColorPicker.hpp:66
	void RGB2HSV(uint8_t, uint8_t, uint8_t, float32_t &, float32_t &, float32_t &);

	// ICEWidgetColorPicker.hpp:67
	void HSV2RGB(float32_t, float32_t, float32_t, float32_t &, float32_t &, float32_t &);

	// ICEWidgetColorPicker.hpp:68
	void HSV2XYZ(float32_t, float32_t, float32_t, float32_t &, float32_t &, float32_t &);

	// ICEWidgetColorPicker.hpp:69
	void XYZ2HSV(float32_t, float32_t, float32_t, float32_t &, float32_t &, float32_t &);

	// ICEWidgetColorPicker.hpp:74
	void RenderColorWheel(float32_t, float32_t, float32_t, ICERender *);

	// ICEWidgetColorPicker.hpp:78
	void RenderIntensityBar(float32_t, bool, ICERender *);

	// ICEWidgetColorPicker.hpp:81
	void RenderContrastBar(float32_t, ICERender *);

}

