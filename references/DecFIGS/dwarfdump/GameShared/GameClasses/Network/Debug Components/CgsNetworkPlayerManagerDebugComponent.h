// CgsNetworkPlayerManagerDebugComponent.h:50
void CgsNetwork::PlayerManagerDebugComponent::PlayerManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct PlayerManagerDebugComponent {
		// CgsNetworkPlayerManagerDebugComponent.h:102
		struct MessageTypeAndMax {
			// CgsNetworkPlayerManagerDebugComponent.h:104
			EMessageType meMessageType;

			// CgsNetworkPlayerManagerDebugComponent.h:105
			int32_t miMaxBytes;

		}

	}

}

// CgsNetworkPlayerManagerDebugComponent.h:50
struct CgsNetwork::PlayerManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// CgsNetworkPlayerManagerDebugComponent.h:108
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsNetworkPlayerManagerDebugComponent.h:110
	float32_t mfMaxBandwidthForGraph;

	// CgsNetworkPlayerManagerDebugComponent.h:111
	float32_t mfMaxBandwidth;

	// CgsNetworkPlayerManagerDebugComponent.h:112
	bool mbDrawBandwidthUsage;

	// CgsNetworkPlayerManagerDebugComponent.h:113
	bool mbShowUsedRegisteredMessages;

	// CgsNetworkPlayerManagerDebugComponent.h:116
	int32_t miAverageType;

	// CgsNetworkPlayerManagerDebugComponent.h:120
	CompressionAndEncryptionUtils mCompressionUtils;

public:
	// CgsNetworkPlayerManagerDebugComponent.cpp:53
	void Construct(CgsNetwork::PlayerManager *);

	// CgsNetworkPlayerManagerDebugComponent.cpp:78
	void Prepare();

	// CgsNetworkPlayerManagerDebugComponent.cpp:99
	void Release();

	// CgsNetworkPlayerManagerDebugComponent.cpp:122
	void Destruct();

protected:
	// CgsNetworkPlayerManagerDebugComponent.cpp:145
	virtual void OnActivate();

	// CgsNetworkPlayerManagerDebugComponent.cpp:213
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsNetworkPlayerManagerDebugComponent.cpp:174
	void DrawRow(int32_t, int32_t, int32_t, CgsNetwork::NetworkPlayer *, CgsDev::Debug2DImmediateRender *);

	// CgsNetworkPlayerManagerDebugComponent.cpp:315
	void DrawBar(int32_t, const char *, float32_t, float32_t, float32_t, float32_t, CgsDev::Debug2DImmediateRender *);

	// CgsNetworkPlayerManagerDebugComponent.h:148
	virtual const char * GetPath() const;

	// CgsNetworkPlayerManagerDebugComponent.h:162
	virtual const char * GetName() const;

private:
	// CgsNetworkPlayerManagerDebugComponent.h:177
	float32_t BytesToKiloBits(int32_t);

	// CgsNetworkPlayerManagerDebugComponent.cpp:382
	int _QSortMessageAndMax(const void *, const void *);

}

