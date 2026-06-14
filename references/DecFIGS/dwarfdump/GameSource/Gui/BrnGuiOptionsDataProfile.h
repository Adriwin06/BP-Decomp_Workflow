// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OptionsDataProfile {
		// BrnGuiOptionsDataProfile.h:307
		struct OnlineSaveRoute {
			// BrnGuiOptionsDataProfile.h:326
			struct OnlineSaveRouteEvent {
			private:
				// BrnGuiOptionsDataProfile.h:352
				CgsID[16] maLandmarkIndices;

				// BrnGuiOptionsDataProfile.h:353
				uint32_t mJunctionId;

				// BrnGuiOptionsDataProfile.h:354
				int32_t miNumLandmarks;

				// BrnGuiOptionsDataProfile.h:355
				int32_t miEventID;

			public:
				// BrnGuiOptionsDataProfile.h:334
				void Construct(int32_t, uint32_t, CgsID *, int32_t);

				// BrnGuiOptionsDataProfile.h:337
				int32_t GetEventID() const;

				// BrnGuiOptionsDataProfile.h:340
				uint32_t GetJunctionID() const;

				// BrnGuiOptionsDataProfile.h:343
				int32_t GetNumLandmarks() const;

				// BrnGuiOptionsDataProfile.h:347
				CgsID GetLandmark(int32_t) const;

			}

		private:
			// BrnGuiOptionsDataProfile.h:358
			BrnGui::OptionsDataProfile::OnlineSaveRoute::OnlineSaveRouteEvent[10] maEvents;

			// BrnGuiOptionsDataProfile.h:359
			BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

			// BrnGuiOptionsDataProfile.h:360
			BrnNetwork::EBoostType meBoostType;

			// BrnGuiOptionsDataProfile.h:361
			BrnNetwork::EVehicleChoice meVehicleChoice;

			// BrnGuiOptionsDataProfile.h:362
			int32_t miTimeLimit;

			// BrnGuiOptionsDataProfile.h:363
			int32_t miNumRounds;

			// BrnGuiOptionsDataProfile.h:364
			int32_t miVehicleClass;

			// BrnGuiOptionsDataProfile.h:365
			int32_t miNumRunnerCrashes;

			// BrnGuiOptionsDataProfile.h:366
			bool mbInfiniteBoost;

			// BrnGuiOptionsDataProfile.h:367
			bool mbTrafficOn;

			// BrnGuiOptionsDataProfile.h:368
			bool mbTrafficCheckingOn;

		public:
			// BrnGuiOptionsDataProfile.h:311
			void Construct();

			// BrnGuiOptionsDataProfile.h:316
			void SetFromGameParams(BrnGui::GuiCache *, const BrnGui::GuiEventNetworkGameParams *);

			// BrnGuiOptionsDataProfile.h:321
			void SetToGameParams(BrnGui::GuiCache *, GuiEventNetworkGameParams *) const;

		}

	}

	// BrnGuiOptionsDataProfile.h:31
	const int32_t KI_MIN_BRIGHTNESS = 1;

	// BrnGuiOptionsDataProfile.h:32
	const int32_t KI_MIN_CONTRAST = 1;

	// BrnGuiOptionsDataProfile.h:33
	const int32_t KI_DEFAULT_BRIGHTNESS = 50;

	// BrnGuiOptionsDataProfile.h:35
	const int32_t KI_DEFAULT_MUSIC_VOLUME = 8;

	// BrnGuiOptionsDataProfile.h:36
	const int32_t KI_DEFAULT_SFX_VOLUME = 8;

	// BrnGuiOptionsDataProfile.h:37
	const int32_t KI_DEFAULT_VOIP_VOLUME = 10;

	// BrnGuiOptionsDataProfile.h:39
	const int32_t KI_MAX_BRIGHTNESS = 100;

	// BrnGuiOptionsDataProfile.h:40
	const int32_t KI_MAX_CONTRAST = 100;

	// BrnGuiOptionsDataProfile.h:41
	const int32_t KI_DEFAULT_CONTRAST = 50;

}

// BrnGuiOptionsDataProfile.h:50
struct BrnGui::OptionsDataProfile {
	// BrnGuiOptionsDataProfile.h:53
	extern const int32_t KI_VERSION_NUMBER = 12;

	// BrnGuiOptionsDataProfile.h:54
	extern const int32_t KI_MAX_CREATED_ONLINE_GAME_OPTIONS = 10;

	// BrnGuiOptionsDataProfile.h:55
	extern const int32_t KI_MAX_RECEIVED_ONLINE_GAME_OPTIONS = 10;

protected:
	// BrnGuiOptionsDataProfile.h:372
	int32_t miVersionNumber;

	// BrnGuiOptionsDataProfile.h:374
	BrnGui::OptionsDataProfile::OnlineSaveRoute[10] maCreatedOnlineGameOptions;

	// BrnGuiOptionsDataProfile.h:375
	BrnGui::OptionsDataProfile::OnlineSaveRoute[10] maReceivedOnlineGameOptions;

	// BrnGuiOptionsDataProfile.h:377
	int32_t miNumCreatedOnlineGameOptions;

	// BrnGuiOptionsDataProfile.h:378
	int32_t miNumReceivedOnlineGameOptions;

	// BrnGuiOptionsDataProfile.h:381
	GuiEventAudioTraxUpdate::EATraxArrayType mTraxAvailableInFreeBurn;

	// BrnGuiOptionsDataProfile.h:382
	GuiEventAudioTraxUpdate::EATraxArrayType mTraxAvailableInEvents;

	// BrnGuiOptionsDataProfile.h:383
	GuiEventAudioTraxUpdate::EATraxArrayType mTraxFullyPlayed;

	// BrnGuiOptionsDataProfile.h:385
	BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode meTraxPlayOrderMode;

	// BrnGuiOptionsDataProfile.h:386
	int32_t miLastPlayedSongIndex;

	// BrnGuiOptionsDataProfile.h:387
	int32_t miLastPictureParadiseMusicIndex;

	// BrnGuiOptionsDataProfile.h:390
	BrnDirector::GameState::DirectorProfileData mDirectorProfileData;

	// BrnGuiOptionsDataProfile.h:393
	int32_t mBrightness;

	// BrnGuiOptionsDataProfile.h:394
	int32_t mContrast;

	// BrnGuiOptionsDataProfile.h:395
	int32_t miVoipVolume;

	// BrnGuiOptionsDataProfile.h:396
	int32_t mMusicVolume;

	// BrnGuiOptionsDataProfile.h:397
	int32_t mSFXVolume;

	// BrnGuiOptionsDataProfile.h:398
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraFeedSetting;

	// BrnGuiOptionsDataProfile.h:399
	bool mbIsNewsUnread;

	// BrnGuiOptionsDataProfile.h:400
	bool mbSixAxisShowtime;

	// BrnGuiOptionsDataProfile.h:401
	bool mbSixAxisSteering;

	// BrnGuiOptionsDataProfile.h:402
	bool mbForceFeedback;

	// BrnGuiOptionsDataProfile.h:403
	bool mbDefaultGameCamera;

	// BrnGuiOptionsDataProfile.h:404
	bool mbTips;

	// BrnGuiOptionsDataProfile.h:407
	bool mbIsLocked;

public:
	// BrnGuiOptionsDataProfile.h:59
	void Construct();

	// BrnGuiOptionsDataProfile.h:63
	void Destruct();

	// BrnGuiOptionsDataProfile.h:67
	void LockData();

	// BrnGuiOptionsDataProfile.h:71
	void UnlockData();

	// BrnGuiOptionsDataProfile.h:75
	bool GetIsLocked();

	// BrnGuiOptionsDataProfile.h:79
	bool ValidateProfile();

	// BrnGuiOptionsDataProfile.h:83
	bool IsIncorrectVersion() const;

	// BrnGuiOptionsDataProfile.h:87
	bool IsUpgradable() const;

	// BrnGuiOptionsDataProfile.h:93
	bool UpgradeFrom(const void *, int32_t *);

	// BrnGuiOptionsDataProfile.h:97
	void NotifyOtherModulesLoadComplete(GuiEventQueueSmall *);

	// BrnGuiOptionsDataProfile.h:101
	void SetTraxAvailableInFreeBurn(const GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnGuiOptionsDataProfile.h:105
	GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxAvailableInFreeBurn();

	// BrnGuiOptionsDataProfile.h:109
	void SetTraxAvailableInEvents(const GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnGuiOptionsDataProfile.h:113
	GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxAvailableInEvents();

	// BrnGuiOptionsDataProfile.h:118
	void SetTraxRemaining(const GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnGuiOptionsDataProfile.h:123
	GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxRemaining();

	// BrnGuiOptionsDataProfile.h:127
	void SetTraxPlayOrderMode(BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode);

	// BrnGuiOptionsDataProfile.h:131
	BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode GetTraxPlayOrderMode();

	// BrnGuiOptionsDataProfile.h:135
	void SetCameraFeed(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions);

	// BrnGuiOptionsDataProfile.h:139
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions GetCameraFeed();

	// BrnGuiOptionsDataProfile.h:143
	void SetDefaultGameCamera(bool);

	// BrnGuiOptionsDataProfile.h:147
	bool GetDefaultGameCamera();

	// BrnGuiOptionsDataProfile.h:151
	void SetVoipVolume(int32_t);

	// BrnGuiOptionsDataProfile.h:155
	int32_t GetVoipVolume();

	// BrnGuiOptionsDataProfile.h:159
	void SetMusicVolume(int32_t);

	// BrnGuiOptionsDataProfile.h:163
	int32_t GetMusicVolume();

	// BrnGuiOptionsDataProfile.h:168
	void SetLastPlayedSongIndex(int32_t);

	// BrnGuiOptionsDataProfile.h:172
	int32_t GetLastPlayedSongIndex();

	// BrnGuiOptionsDataProfile.h:177
	void SetLastPlayedPictureParadiseMusicIndex(int32_t);

	// BrnGuiOptionsDataProfile.h:181
	int32_t GetLastPlayedPictureParadiseMusicIndex();

	// BrnGuiOptionsDataProfile.h:185
	void SetSFXVolume(int32_t);

	// BrnGuiOptionsDataProfile.h:189
	int32_t GetSFXVolume();

	// BrnGuiOptionsDataProfile.h:193
	void SetBrightness(int32_t);

	// BrnGuiOptionsDataProfile.h:197
	int32_t GetBrightness() const;

	// BrnGuiOptionsDataProfile.h:201
	void SetContrast(int32_t);

	// BrnGuiOptionsDataProfile.h:205
	int32_t GetContrast() const;

	// BrnGuiOptionsDataProfile.h:209
	void SetSixAxisShowtime(bool);

	// BrnGuiOptionsDataProfile.h:213
	bool GetSixAxisShowtime();

	// BrnGuiOptionsDataProfile.h:217
	void SetSixAxisSteering(bool);

	// BrnGuiOptionsDataProfile.h:221
	bool GetSixAxisSteering();

	// BrnGuiOptionsDataProfile.h:225
	void SetForceFeedback(bool);

	// BrnGuiOptionsDataProfile.h:229
	bool GetForceFeedback();

	// BrnGuiOptionsDataProfile.h:233
	void SetTips(bool);

	// BrnGuiOptionsDataProfile.h:237
	bool GetTips();

	// BrnGuiOptionsDataProfile.h:241
	uint64_t GetUintFromBits(GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnGuiOptionsDataProfile.h:245
	int32_t GetNumCreatedOnlineGameOptions() const;

	// BrnGuiOptionsDataProfile.h:249
	int32_t GetNumReceivedOnlineGameOptions() const;

	// BrnGuiOptionsDataProfile.h:256
	void GetCreatedOnlineGameOptions(int32_t, BrnGui::GuiCache *, GuiEventNetworkGameParams *) const;

	// BrnGuiOptionsDataProfile.h:263
	void GetReceivedOnlineGameOptions(int32_t, BrnGui::GuiCache *, GuiEventNetworkGameParams *) const;

	// BrnGuiOptionsDataProfile.h:267
	const BrnDirector::GameState::DirectorProfileData * GetDirectorProfileData() const;

	// BrnGuiOptionsDataProfile.h:274
	void SetCreatedOnlineGameOptions(int32_t, BrnGui::GuiCache *, const BrnGui::GuiEventNetworkGameParams *);

	// BrnGuiOptionsDataProfile.h:280
	void AddReceivedOnlineGameOptions(BrnGui::GuiCache *, const BrnGui::GuiEventNetworkGameParams *);

	// BrnGuiOptionsDataProfile.h:285
	void SetUnreadNews(bool);

	// BrnGuiOptionsDataProfile.h:290
	void SetDirectorProfileData(const BrnDirector::GameState::DirectorProfileData *);

	// BrnGuiOptionsDataProfile.h:294
	bool IsThereUnreadNews() const;

}

// BrnGuiOptionsDataProfile.h:54
extern const int32_t KI_MAX_CREATED_ONLINE_GAME_OPTIONS = 10;

// BrnGuiOptionsDataProfile.h:55
extern const int32_t KI_MAX_RECEIVED_ONLINE_GAME_OPTIONS = 10;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OptionsDataProfile {
		// BrnGuiOptionsDataProfile.h:307
		struct OnlineSaveRoute {
			// BrnGuiOptionsDataProfile.h:326
			struct OnlineSaveRouteEvent {
			private:
				// BrnGuiOptionsDataProfile.h:352
				CgsID[16] maLandmarkIndices;

				// BrnGuiOptionsDataProfile.h:353
				uint32_t mJunctionId;

				// BrnGuiOptionsDataProfile.h:354
				int32_t miNumLandmarks;

				// BrnGuiOptionsDataProfile.h:355
				int32_t miEventID;

			public:
				// BrnGuiOptionsDataProfile.h:334
				void Construct(int32_t, uint32_t, CgsID *, int32_t);

				// BrnGuiOptionsDataProfile.h:337
				int32_t GetEventID() const;

				// BrnGuiOptionsDataProfile.h:340
				uint32_t GetJunctionID() const;

				// BrnGuiOptionsDataProfile.h:343
				int32_t GetNumLandmarks() const;

				// BrnGuiOptionsDataProfile.h:347
				CgsID GetLandmark(int32_t) const;

			}

		private:
			// BrnGuiOptionsDataProfile.h:358
			BrnGui::OptionsDataProfile::OnlineSaveRoute::OnlineSaveRouteEvent[10] maEvents;

			// BrnGuiOptionsDataProfile.h:359
			BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

			// BrnGuiOptionsDataProfile.h:360
			BrnNetwork::EBoostType meBoostType;

			// BrnGuiOptionsDataProfile.h:361
			BrnNetwork::EVehicleChoice meVehicleChoice;

			// BrnGuiOptionsDataProfile.h:362
			int32_t miTimeLimit;

			// BrnGuiOptionsDataProfile.h:363
			int32_t miNumRounds;

			// BrnGuiOptionsDataProfile.h:364
			int32_t miVehicleClass;

			// BrnGuiOptionsDataProfile.h:365
			int32_t miNumRunnerCrashes;

			// BrnGuiOptionsDataProfile.h:366
			bool mbInfiniteBoost;

			// BrnGuiOptionsDataProfile.h:367
			bool mbTrafficOn;

			// BrnGuiOptionsDataProfile.h:368
			bool mbTrafficCheckingOn;

		public:
			// BrnGuiOptionsDataProfile.h:311
			void Construct();

			// BrnGuiOptionsDataProfile.h:316
			void SetFromGameParams(BrnGui::GuiCache *, const BrnGui::GuiEventNetworkGameParams *);

			// BrnGuiOptionsDataProfile.h:321
			void SetToGameParams(BrnGui::GuiCache *, GuiEventNetworkGameParams *) const;

		}

	}

	// BrnGuiOptionsDataProfile.h:31
	const int32_t KI_MIN_BRIGHTNESS = 1;

	// BrnGuiOptionsDataProfile.h:32
	const int32_t KI_MIN_CONTRAST = 1;

	// BrnGuiOptionsDataProfile.h:33
	const int32_t KI_DEFAULT_BRIGHTNESS = 50;

	// BrnGuiOptionsDataProfile.h:35
	const int32_t KI_DEFAULT_MUSIC_VOLUME = 8;

	// BrnGuiOptionsDataProfile.h:36
	const int32_t KI_DEFAULT_SFX_VOLUME = 8;

	// BrnGuiOptionsDataProfile.h:37
	const int32_t KI_DEFAULT_VOIP_VOLUME = 10;

	// BrnGuiOptionsDataProfile.h:39
	const int32_t KI_MAX_BRIGHTNESS = 100;

	// BrnGuiOptionsDataProfile.h:40
	const int32_t KI_MAX_CONTRAST = 100;

	// BrnGuiOptionsDataProfile.h:41
	const int32_t KI_DEFAULT_CONTRAST = 50;

}

// BrnGuiOptionsDataProfile.h:50
struct BrnGui::OptionsDataProfile {
	// BrnGuiOptionsDataProfile.h:53
	extern const int32_t KI_VERSION_NUMBER = 12;

	// BrnGuiOptionsDataProfile.h:54
	extern const int32_t KI_MAX_CREATED_ONLINE_GAME_OPTIONS = 10;

	// BrnGuiOptionsDataProfile.h:55
	extern const int32_t KI_MAX_RECEIVED_ONLINE_GAME_OPTIONS = 10;

protected:
	// BrnGuiOptionsDataProfile.h:372
	int32_t miVersionNumber;

	// BrnGuiOptionsDataProfile.h:374
	BrnGui::OptionsDataProfile::OnlineSaveRoute[10] maCreatedOnlineGameOptions;

	// BrnGuiOptionsDataProfile.h:375
	BrnGui::OptionsDataProfile::OnlineSaveRoute[10] maReceivedOnlineGameOptions;

	// BrnGuiOptionsDataProfile.h:377
	int32_t miNumCreatedOnlineGameOptions;

	// BrnGuiOptionsDataProfile.h:378
	int32_t miNumReceivedOnlineGameOptions;

	// BrnGuiOptionsDataProfile.h:381
	GuiEventAudioTraxUpdate::EATraxArrayType mTraxAvailableInFreeBurn;

	// BrnGuiOptionsDataProfile.h:382
	GuiEventAudioTraxUpdate::EATraxArrayType mTraxAvailableInEvents;

	// BrnGuiOptionsDataProfile.h:383
	GuiEventAudioTraxUpdate::EATraxArrayType mTraxFullyPlayed;

	// BrnGuiOptionsDataProfile.h:385
	BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode meTraxPlayOrderMode;

	// BrnGuiOptionsDataProfile.h:386
	int32_t miLastPlayedSongIndex;

	// BrnGuiOptionsDataProfile.h:387
	int32_t miLastPictureParadiseMusicIndex;

	// BrnGuiOptionsDataProfile.h:390
	BrnDirector::GameState::DirectorProfileData mDirectorProfileData;

	// BrnGuiOptionsDataProfile.h:393
	int32_t mBrightness;

	// BrnGuiOptionsDataProfile.h:394
	int32_t mContrast;

	// BrnGuiOptionsDataProfile.h:395
	int32_t miVoipVolume;

	// BrnGuiOptionsDataProfile.h:396
	int32_t mMusicVolume;

	// BrnGuiOptionsDataProfile.h:397
	int32_t mSFXVolume;

	// BrnGuiOptionsDataProfile.h:398
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraFeedSetting;

	// BrnGuiOptionsDataProfile.h:399
	bool mbIsNewsUnread;

	// BrnGuiOptionsDataProfile.h:400
	bool mbSixAxisShowtime;

	// BrnGuiOptionsDataProfile.h:401
	bool mbSixAxisSteering;

	// BrnGuiOptionsDataProfile.h:402
	bool mbForceFeedback;

	// BrnGuiOptionsDataProfile.h:403
	bool mbDefaultGameCamera;

	// BrnGuiOptionsDataProfile.h:404
	bool mbTips;

	// BrnGuiOptionsDataProfile.h:407
	bool mbIsLocked;

public:
	// BrnGuiOptionsDataProfile.h:59
	void Construct();

	// BrnGuiOptionsDataProfile.h:63
	void Destruct();

	// BrnGuiOptionsDataProfile.h:67
	void LockData();

	// BrnGuiOptionsDataProfile.h:71
	void UnlockData();

	// BrnGuiOptionsDataProfile.h:75
	bool GetIsLocked();

	// BrnGuiOptionsDataProfile.h:79
	// Declaration
	bool ValidateProfile() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiOptionsDataProfile.cpp:178
		using namespace CgsDev::Message;

	}

	// BrnGuiOptionsDataProfile.h:83
	bool IsIncorrectVersion() const;

	// BrnGuiOptionsDataProfile.h:87
	bool IsUpgradable() const;

	// BrnGuiOptionsDataProfile.h:93
	bool UpgradeFrom(const void *, int32_t *);

	// BrnGuiOptionsDataProfile.h:97
	void NotifyOtherModulesLoadComplete(GuiEventQueueSmall *);

	// BrnGuiOptionsDataProfile.h:101
	void SetTraxAvailableInFreeBurn(const GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnGuiOptionsDataProfile.h:105
	GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxAvailableInFreeBurn();

	// BrnGuiOptionsDataProfile.h:109
	void SetTraxAvailableInEvents(const GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnGuiOptionsDataProfile.h:113
	GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxAvailableInEvents();

	// BrnGuiOptionsDataProfile.h:118
	void SetTraxRemaining(const GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnGuiOptionsDataProfile.h:123
	GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxRemaining();

	// BrnGuiOptionsDataProfile.h:127
	void SetTraxPlayOrderMode(BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode);

	// BrnGuiOptionsDataProfile.h:131
	BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode GetTraxPlayOrderMode();

	// BrnGuiOptionsDataProfile.h:135
	void SetCameraFeed(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions);

	// BrnGuiOptionsDataProfile.h:139
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions GetCameraFeed();

	// BrnGuiOptionsDataProfile.h:143
	void SetDefaultGameCamera(bool);

	// BrnGuiOptionsDataProfile.h:147
	bool GetDefaultGameCamera();

	// BrnGuiOptionsDataProfile.h:151
	void SetVoipVolume(int32_t);

	// BrnGuiOptionsDataProfile.h:155
	int32_t GetVoipVolume();

	// BrnGuiOptionsDataProfile.h:159
	void SetMusicVolume(int32_t);

	// BrnGuiOptionsDataProfile.h:163
	int32_t GetMusicVolume();

	// BrnGuiOptionsDataProfile.h:168
	void SetLastPlayedSongIndex(int32_t);

	// BrnGuiOptionsDataProfile.h:172
	int32_t GetLastPlayedSongIndex();

	// BrnGuiOptionsDataProfile.h:177
	void SetLastPlayedPictureParadiseMusicIndex(int32_t);

	// BrnGuiOptionsDataProfile.h:181
	int32_t GetLastPlayedPictureParadiseMusicIndex();

	// BrnGuiOptionsDataProfile.h:185
	void SetSFXVolume(int32_t);

	// BrnGuiOptionsDataProfile.h:189
	int32_t GetSFXVolume();

	// BrnGuiOptionsDataProfile.h:193
	void SetBrightness(int32_t);

	// BrnGuiOptionsDataProfile.h:197
	int32_t GetBrightness() const;

	// BrnGuiOptionsDataProfile.h:201
	void SetContrast(int32_t);

	// BrnGuiOptionsDataProfile.h:205
	int32_t GetContrast() const;

	// BrnGuiOptionsDataProfile.h:209
	void SetSixAxisShowtime(bool);

	// BrnGuiOptionsDataProfile.h:213
	bool GetSixAxisShowtime();

	// BrnGuiOptionsDataProfile.h:217
	void SetSixAxisSteering(bool);

	// BrnGuiOptionsDataProfile.h:221
	bool GetSixAxisSteering();

	// BrnGuiOptionsDataProfile.h:225
	void SetForceFeedback(bool);

	// BrnGuiOptionsDataProfile.h:229
	bool GetForceFeedback();

	// BrnGuiOptionsDataProfile.h:233
	void SetTips(bool);

	// BrnGuiOptionsDataProfile.h:237
	bool GetTips();

	// BrnGuiOptionsDataProfile.h:241
	uint64_t GetUintFromBits(GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnGuiOptionsDataProfile.h:245
	int32_t GetNumCreatedOnlineGameOptions() const;

	// BrnGuiOptionsDataProfile.h:249
	int32_t GetNumReceivedOnlineGameOptions() const;

	// BrnGuiOptionsDataProfile.h:256
	void GetCreatedOnlineGameOptions(int32_t, BrnGui::GuiCache *, GuiEventNetworkGameParams *) const;

	// BrnGuiOptionsDataProfile.h:263
	void GetReceivedOnlineGameOptions(int32_t, BrnGui::GuiCache *, GuiEventNetworkGameParams *) const;

	// BrnGuiOptionsDataProfile.h:267
	const BrnDirector::GameState::DirectorProfileData * GetDirectorProfileData() const;

	// BrnGuiOptionsDataProfile.h:274
	void SetCreatedOnlineGameOptions(int32_t, BrnGui::GuiCache *, const BrnGui::GuiEventNetworkGameParams *);

	// BrnGuiOptionsDataProfile.h:280
	void AddReceivedOnlineGameOptions(BrnGui::GuiCache *, const BrnGui::GuiEventNetworkGameParams *);

	// BrnGuiOptionsDataProfile.h:285
	void SetUnreadNews(bool);

	// BrnGuiOptionsDataProfile.h:290
	void SetDirectorProfileData(const BrnDirector::GameState::DirectorProfileData *);

	// BrnGuiOptionsDataProfile.h:294
	bool IsThereUnreadNews() const;

}

// BrnGuiOptionsDataProfile.h:53
extern const int32_t KI_VERSION_NUMBER = 12;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiOptionsDataProfile.h:31
	const int32_t KI_MIN_BRIGHTNESS = 1;

	// BrnGuiOptionsDataProfile.h:32
	const int32_t KI_MIN_CONTRAST = 1;

	// BrnGuiOptionsDataProfile.h:33
	const int32_t KI_DEFAULT_BRIGHTNESS = 50;

	// BrnGuiOptionsDataProfile.h:35
	const int32_t KI_DEFAULT_MUSIC_VOLUME = 8;

	// BrnGuiOptionsDataProfile.h:36
	const int32_t KI_DEFAULT_SFX_VOLUME = 8;

	// BrnGuiOptionsDataProfile.h:37
	const int32_t KI_DEFAULT_VOIP_VOLUME = 10;

	// BrnGuiOptionsDataProfile.h:39
	const int32_t KI_MAX_BRIGHTNESS = 100;

	// BrnGuiOptionsDataProfile.h:40
	const int32_t KI_MAX_CONTRAST = 100;

	// BrnGuiOptionsDataProfile.h:41
	const int32_t KI_DEFAULT_CONTRAST = 50;

}

