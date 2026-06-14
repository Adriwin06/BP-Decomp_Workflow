// BrnGameStateRichPresenceManagerPS3.h:45
struct BrnGameState::RichPresenceManagerPS3 : public BrnGameState::RichPresenceManagerBase {
private:
	// BrnGameStateRichPresenceManagerPS3.h:123
	char[100] macRichPresenceString;

	// BrnGameStateRichPresenceManagerPS3.h:126
	bool mbNewRichPresence;

public:
	// BrnGameStateRichPresenceManagerPS3.cpp:108
	void Construct(BrnGameState::GameStateModule *, BrnGameState::NetworkRoundManager *, BrnGameState::ModeManager *);

	// BrnGameStateRichPresenceManagerPS3.cpp:125
	bool Prepare();

	// BrnGameStateRichPresenceManagerPS3.cpp:147
	bool Release();

	// BrnGameStateRichPresenceManagerPS3.cpp:164
	void Destruct();

	// BrnGameStateRichPresenceManagerPS3.cpp:298
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

private:
	// BrnGameStateRichPresenceManagerPS3.cpp:182
	virtual void SetRichPresenceState(BrnGameState::RichPresenceManagerBase::ERichPresenceStates);

	// BrnGameStateRichPresenceManagerPS3.cpp:201
	virtual void SetCurrentRound(int32_t);

	// BrnGameStateRichPresenceManagerPS3.cpp:220
	virtual void SetTotalRounds(int32_t);

	// BrnGameStateRichPresenceManagerPS3.cpp:239
	virtual void SetCurrentPosition(int32_t);

	// BrnGameStateRichPresenceManagerPS3.cpp:384
	virtual void SetDistrict(BrnWorld::EDistrict);

	// BrnGameStateRichPresenceManagerPS3.cpp:278
	virtual void SetLobbyType(BrnGameState::RichPresenceManagerBase::ERichPresenceStates);

	// BrnGameStateRichPresenceManagerPS3.cpp:258
	virtual void SetRankedStatus(BrnGameState::RichPresenceManagerBase::EGameRankedType);

	// BrnGameStateRichPresenceManagerPS3.cpp:324
	void SendNewRichPresenceStringToNetwork();

	// BrnGameStateRichPresenceManagerPS3.cpp:342
	void AddParameter(const char *);

	// BrnGameStateRichPresenceManagerPS3.cpp:364
	void AddParameter(int32_t);

}

// BrnGameStateRichPresenceManagerPS3.h:45
void BrnGameState::RichPresenceManagerPS3::RichPresenceManagerPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

