// BrnServerInterface.h:51
struct BrnNetwork::GameSearchParams : public BrnNetwork::GameSearchParamsPS3 {
public:
	void GameSearchParams(const BrnNetwork::GameSearchParams &);

	void GameSearchParams();

	GameSearchParams & operator=(const BrnNetwork::GameSearchParams &);

	virtual void ~GameSearchParams();

}

// BrnServerInterface.h:50
struct BrnNetwork::PlayerParams : public BrnNetwork::PlayerParamsBase {
public:
	PlayerParams & operator=(const PlayerParams &);

	void PlayerParams(const PlayerParams &);

	void PlayerParams();

	virtual void ~PlayerParams();

}

// BrnServerInterface.h:50
void BrnNetwork::PlayerParams::~PlayerParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterface.h:51
void BrnNetwork::GameSearchParams::~GameSearchParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterface.h:50
void BrnNetwork::PlayerParams::PlayerParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterface.h:51
void BrnNetwork::GameSearchParams::operator=(const const BrnNetwork::GameSearchParams &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterface.h:50
void BrnNetwork::PlayerParams::operator=(const const PlayerParams &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterface.h:51
void BrnNetwork::GameSearchParams::GameSearchParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterface.h:50
struct BrnNetwork::PlayerParams : public PlayerParamsBase {
public:
	void PlayerParams(const BrnNetwork::PlayerParams &);

	void PlayerParams();

	virtual void ~PlayerParams();

}

// BrnServerInterface.h:51
struct BrnNetwork::GameSearchParams : public BrnNetwork::GameSearchParamsPS3 {
public:
	void GameSearchParams(const BrnNetwork::GameSearchParams &);

	void GameSearchParams();

	virtual void ~GameSearchParams();

}

// BrnServerInterface.h:50
struct BrnNetwork::PlayerParams : public BrnNetwork::PlayerParamsBase {
public:
	void PlayerParams(const PlayerParams &);

	void PlayerParams();

	virtual void ~PlayerParams();

}

// BrnServerInterface.h:49
struct BrnNetwork::BrnServerInterface : public BrnNetwork::BrnServerInterfacePS3 {
public:
	void BrnServerInterface(const BrnServerInterface &);

	void BrnServerInterface();

	virtual void ~BrnServerInterface();

}

// BrnServerInterface.h:49
void BrnNetwork::BrnServerInterface::~BrnServerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnServerInterface.h:49
void BrnNetwork::BrnServerInterface::BrnServerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

