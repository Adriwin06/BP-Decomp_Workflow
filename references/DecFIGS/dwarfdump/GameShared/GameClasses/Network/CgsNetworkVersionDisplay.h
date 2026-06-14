// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct VersionDisplay {
	public:
		// CgsNetworkVersionDisplay.h:106
		void SetGameServerGame(bool);

	}

}

// CgsNetworkVersionDisplay.h:50
void CgsNetwork::VersionDisplay::VersionDisplay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkVersionDisplay.h:50
struct CgsNetwork::VersionDisplay : public CgsDev::DebugComponent {
private:
	// CgsNetworkVersionDisplay.h:92
	const char * mpcVersion;

	// CgsNetworkVersionDisplay.h:93
	CgsNetwork::EServerType meServerType;

	// CgsNetworkVersionDisplay.h:94
	bool mbGameServerGame;

public:
	// CgsNetworkVersionDisplay.cpp:68
	void Construct();

	// CgsNetworkVersionDisplay.cpp:91
	bool Prepare(const char *, CgsNetwork::EServerType);

	// CgsNetworkVersionDisplay.h:62
	bool Release();

	// CgsNetworkVersionDisplay.cpp:110
	void Destruct();

	// CgsNetworkVersionDisplay.h:106
	void SetGameServerGame(bool);

protected:
	// CgsNetworkVersionDisplay.cpp:128
	virtual const char * GetName() const;

	// CgsNetworkVersionDisplay.cpp:141
	virtual const char * GetPath() const;

	// CgsNetworkVersionDisplay.cpp:154
	virtual void OnActivate();

	// CgsNetworkVersionDisplay.cpp:166
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsNetworkVersionDisplay.cpp:233
	virtual bool IsSimple() const;

}

