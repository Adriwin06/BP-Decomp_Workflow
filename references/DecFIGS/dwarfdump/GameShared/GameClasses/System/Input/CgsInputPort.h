// CgsInputPort.h:42
struct CgsInput::InputPort {
private:
	// CgsInputPort.h:88
	int32_t miPlayerID;

public:
	// CgsInputPort.h:47
	void Construct();

	// CgsInputPort.h:51
	void Destruct();

	// CgsInputPort.h:55
	bool Prepare();

	// CgsInputPort.h:59
	void Release();

	// CgsInputPort.h:63
	void Clear();

	// CgsInputPort.h:67
	bool IsBound();

	// CgsInputPort.h:71
	bool IsUnbound();

	// CgsInputPort.h:75
	void Bind(int32_t);

	// CgsInputPort.h:79
	void UnBind();

	// CgsInputPort.h:83
	int32_t GetPlayerID();

}

