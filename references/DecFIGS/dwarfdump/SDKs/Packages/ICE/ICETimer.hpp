// ICETimer.hpp:33
struct ICE::ICETimer {
private:
	// ICETimer.hpp:48
	float32_t mfTimestep;

public:
	// ICETimer.hpp:37
	void Construct();

	// ICETimer.hpp:41
	void Update(const TimerStatusInterface *);

	// ICETimer.hpp:44
	float32_t GetTimestep();

}

