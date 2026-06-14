// CgsPlayerName.h:39
struct CgsNetwork::PlayerName {
private:
	// CgsPlayerName.h:65
	char[20] macName;

public:
	// CgsPlayerName.h:45
	void Construct(const char *);

	// CgsPlayerName.h:49
	void Clear();

	// CgsPlayerName.h:54
	bool IsEqualTo(const PlayerName &) const;

	// CgsPlayerName.h:58
	bool IsEmpty() const;

	// CgsPlayerName.h:62
	const char * GetPlayerName() const;

}

