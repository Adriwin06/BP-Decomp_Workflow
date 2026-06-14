// CgsInputPlayer.h:39
struct CgsInput::InputPlayer {
private:
	// CgsInputPlayer.h:77
	bool mbConnected;

	// CgsInputPlayer.h:78
	int32_t miPortID;

public:
	// CgsInputPlayer.h:44
	void Construct();

	// CgsInputPlayer.h:48
	void Destruct();

	// CgsInputPlayer.h:52
	void Clear();

	// CgsInputPlayer.h:56
	bool IsConnected();

	// CgsInputPlayer.h:60
	bool IsDisconnected();

	// CgsInputPlayer.h:64
	int32_t GetPort();

	// CgsInputPlayer.h:68
	void Bind(int32_t);

	// CgsInputPlayer.h:72
	void UnBind();

}

