// BrnReplayRequestInterface.h:46
struct BrnReplays::ReplayIO::RequestInterface {
private:
	// BrnReplayRequestInterface.h:66
	BaseSerialiser *[5] mapSerialisers;

public:
	// BrnReplayRequestInterface.h:50
	void Construct();

	// BrnReplayRequestInterface.h:53
	void Destruct();

	// BrnReplayRequestInterface.h:56
	void Append(const RequestInterface *);

	// BrnReplayRequestInterface.h:59
	void RegisterSerialiser(BaseSerialiser *);

	// BrnReplayRequestInterface.h:62
	BaseSerialiser * GetSerialiser(int32_t) const;

}

