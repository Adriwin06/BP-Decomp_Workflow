// CgsUniquePlayerIDPS3.h:46
struct CgsNetwork::UniquePlayerIDPS3 {
private:
	// CgsUniquePlayerIDPS3.h:72
	PlayerName mPlayerName;

public:
	// CgsUniquePlayerIDPS3.h:52
	void Construct(const char *);

	// CgsUniquePlayerIDPS3.h:56
	void Construct(CgsNetwork::ServerInterfacePlayerParams *);

	// CgsUniquePlayerIDPS3.h:60
	bool IsEqualTo(const UniquePlayerIDPS3 &) const;

	// CgsUniquePlayerIDPS3.h:63
	const PlayerName * GetPlayerName() const;

	// CgsUniquePlayerIDPS3.h:66
	void Clear();

	// CgsUniquePlayerIDPS3.h:69
	bool IsValid() const;

}

