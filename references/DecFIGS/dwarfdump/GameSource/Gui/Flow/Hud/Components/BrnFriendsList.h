// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct FriendsListComponent {
		// BrnFriendsList.h:71
		enum EDataCollection {
			E_DATACOLLECTION_WAIT_FOR_NUMBER = 0,
			E_DATACOLLECTION_WAIT_FOR_DATA = 1,
			E_DATACOLLECTION_RUNNING = 2,
		}

		// BrnFriendsList.h:78
		enum EFriendListBranchState {
			E_FRIENDLISTBRANCH_INVISIBLE = 0,
			E_FRIENDLISTBRANCH_ONE_IN = 1,
			E_FRIENDLISTBRANCH_ONE_OUT = 2,
			E_FRIENDLISTBRANCH_TWO_IN = 3,
			E_FRIENDLISTBRANCH_TWO_OUT = 4,
			E_FRIENDLISTBRANCH_THREE_IN = 5,
			E_FRIENDLISTBRANCH_THREE_OUT = 6,
			E_FRIENDLISTBRANCH_FIRST_OF_ONE = 7,
			E_FRIENDLISTBRANCH_FIRST_OF_TWO = 8,
			E_FRIENDLISTBRANCH_SECOND_OF_TWO = 9,
			E_FRIENDLISTBRANCH_FIRST_OF_THREE = 10,
			E_FRIENDLISTBRANCH_SECOND_OF_THREE = 11,
			E_FRIENDLISTBRANCH_THIRD_OF_THREE = 12,
			E_FRIENDLISTBRANCH_COUNT = 13,
		}

		// BrnFriendsList.h:98
		enum EBranchOptions {
			E_BRANCHOPTION_INVISIBLE = 0,
			E_BRANCHOPTION_FRIEND_IN_LOBBY = 1,
			E_BRANCHOPTION_SIGNIN = 2,
			E_BRANCHOPTION_GAMERPROFILE = 3,
			E_BRANCHOPTION_SENDINVITE = 4,
			E_BRANCHOPTION_JOINGAME = 5,
			E_BRANCHOPTION_REVOKEINVITE = 6,
			E_BRANCHOPTION_ACCEPTINVITE = 7,
			E_BRANCHOPTION_CANTINVITE = 8,
			E_BRANCHOPTION_DECLINEINVITE = 9,
			E_BRANCHOPTION_INVITEINPROGRESS = 10,
			E_BRANCHOPTION_REVOKEINPROGRESS = 11,
			E_BRANCHOPTION_DECLINEINPROGRESS = 12,
			E_BRANCHOPTION_COUNT = 13,
		}

		// BrnFriendsList.h:117
		enum EShortcutOptions {
			E_SHORTCUT_OPTIONS_SHOW_FRIENDS = 0,
			E_SHORTCUT_OPTIONS_ROAD_RULES = 1,
			E_SHORTCUT_OPTIONS_FREEBURN = 2,
			E_SHORTCUT_OPTIONS_IMAGE_GALLERY = 3,
			E_SHORTCUT_OPTIONS_VIEW_CHALLENGES = 4,
			E_SHORTCUT_OPTIONS_UNRANKED = 5,
			E_SHORTCUT_OPTIONS_RANKED = 6,
			E_SHORTCUT_OPTIONS_SCOREBOARDS = 7,
			E_SHORTCUT_OPTIONS_NEWS = 8,
			E_SHORTCUT_OPTIONS_LAUNCH = 9,
			E_SHORTCUT_OPTIONS_CREATE_EVENT = 10,
			E_SHORTCUT_OPTIONS_CHANGE_TEAMS = 11,
			E_SHORTCUT_OPTIONS_VIEW_LOBBY = 12,
			E_SHORTCUT_OPTIONS_LEAVE_GAME = 13,
			E_SHORTCUT_OPTIONS_CANCEL_CHALLENGE = 14,
			E_SHORTCUT_OPTIONS_SELECT_CHALLENGE = 15,
			E_SHORTCUT_OPTIONS_VIEW_EVENT = 16,
			E_SHORTCUT_OPTIONS_CANCEL_EVENT = 17,
			E_SHORTCUT_OPTIONS_VIEW_MAP = 18,
			E_SHORTCUT_OPTIONS_CHANGE_SECURITY = 19,
			E_SHORTCUT_OPTIONS_SETTINGS = 20,
			E_SHORTCUT_OPTIONS_COUNT = 21,
		}

		// BrnFriendsList.h:149
		enum EShortcutBranchOptions {
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_OFF = 0,
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_TIME = 1,
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_CRASH = 2,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_PLAY_NOW = 3,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_CUSTOM_MATCH = 4,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_CREATE = 5,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_PLAY_NOW = 6,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_CUSTOM_MATCH = 7,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_CREATE = 8,
			E_SHORTCUT_BRANCHOPTION_RANKED_PLAY_NOW = 9,
			E_SHORTCUT_BRANCHOPTION_RANKED_CUSTOM_MATCH = 10,
			E_SHORTCUT_BRANCHOPTION_RANKED_CREATE = 11,
			E_SHORTCUT_BRANCHOPTION_SECURITY_ALLCOMERS = 12,
			E_SHORTCUT_BRANCHOPTION_SECURITY_FRIENDS_ONLY = 13,
			E_SHORTCUT_BRANCHOPTION_SECURITY_INVITE_ONLY = 14,
			E_SHORTCUT_BRANCHOPTION_COUNT = 15,
		}

		// BrnFriendsList.h:306
		enum EListType {
			E_LIST_TYPE_NONE = 0,
			E_LIST_TYPE_FRIENDS = 1,
			E_LIST_TYPE_SHORTCUTS = 2,
			E_LIST_TYPE_CHALLENGES = 3,
			E_LIST_TYPE_COUNT = 4,
		}

		// BrnFriendsList.h:317
		enum EFriendListState {
			E_FRIENDLIST_INVISIBLE = 0,
			E_FRIENDLIST_TRANSIN = 1,
			E_FRIENDLIST_IDLE = 2,
			E_FRIENDLIST_NEXT_PAGE = 3,
			E_FRIENDLIST_PREVIOUS_PAGE = 4,
			E_FRIENDLIST_TRANSOUT = 5,
			E_FRIENDLIST_COUNT = 6,
		}

		// BrnFriendsList.h:330
		enum EArrowConfigurations {
			E_ARROWS_NONE = 0,
			E_ARROWS_DOWN_ONLY = 1,
			E_ARROWS_UP_ONLY = 2,
			E_ARROWS_BOTH = 3,
			E_ARROWS_COUNT = 4,
		}

	}

}

// BrnFriendsList.h:49
struct BrnGui::BaseFriendsListComponent : public BrnFlaptComponent {
}

// BrnFriendsList.h:67
struct BrnGui::FriendsListComponent : public BaseFriendsListComponent {
	// BrnFriendsList.h:174
	extern const int32_t KI_NUM_OPTIONS_PER_PAGE = 5;

private:
	// BrnFriendsList.h:340
	extern const int32_t KI_NUM_BRANCHES = 3;

	// BrnFriendsList.h:341
	extern const int32_t KI_MAX_CHALLENGES_FOR_EACH_PLAYER_COUNT = 256;

	// BrnFriendsList.h:343
	extern char[] macStateChangeName;

	// BrnFriendsList.h:344
	extern char[] macBranchChangeName;

	// BrnFriendsList.h:345
	extern char[] macBranchAlignName;

	// BrnFriendsList.h:346
	extern char[] macArrowStateName;

	// BrnFriendsList.h:347
	extern char[] macArrowPositionName;

	// BrnFriendsList.h:348
	extern char[] macListTitleName;

	// BrnFriendsList.h:350
	extern const char *[] KAC_STATE_NAMES;

	// BrnFriendsList.h:351
	extern const char *[] KAC_ARROW_CONFIGURATION_NAMES;

	// BrnFriendsList.h:353
	extern const char *[] KAC_BRANCH_STATE_NAMES;

	// BrnFriendsList.h:354
	extern const char *[] KAC_BRANCH_LABELS;

	// BrnFriendsList.h:355
	extern const float32_t KF_BRANCH_START_Y_POSITION;

	// BrnFriendsList.h:356
	extern const float32_t KF_BRANCH_OFFSET_Y_POSITION;

	// BrnFriendsList.h:358
	extern char[] KAC_NOT_CONNECTED_STRINGID;

	// BrnFriendsList.h:359
	extern char[] KAC_NO_FRIENDS_STRINGID;

	// BrnFriendsList.h:360
	extern char[] KAC_INSTANT_FREEBURN_STRINGID;

	// BrnFriendsList.h:362
	extern const char *[] KPAC_LIST_TITLE_STRINGIDS;

	// BrnFriendsList.h:363
	extern const char *[] KPAC_SHORTCUT_OPTIONS_STRINGIDS;

	// BrnFriendsList.h:364
	extern const char *[] KAC_SHORTCUT_BRANCH_LABELS;

	// BrnFriendsList.h:366
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_INVISIBLE;

	// BrnFriendsList.h:367
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_YOU_OFFLINE;

	// BrnFriendsList.h:368
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_NO_FRIENDS;

	// BrnFriendsList.h:369
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_IN_LOBBY;

	// BrnFriendsList.h:370
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_OFFLINE;

	// BrnFriendsList.h:371
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_JOINABLE;

	// BrnFriendsList.h:372
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_NOT_JOINABLE;

	// BrnFriendsList.h:373
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_SENT_JOINABLE;

	// BrnFriendsList.h:374
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_SENT_NOT_JOINABLE;

	// BrnFriendsList.h:375
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_RECEIVED;

	// BrnFriendsList.h:376
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_NOT_INVITABLE_NOT_JOINABLE;

	// BrnFriendsList.h:377
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_NOT_INVITABLE_JOINABLE;

	// BrnFriendsList.h:378
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_INVITE_IN_PROGRESS;

	// BrnFriendsList.h:379
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_REVOKE_IN_PROGRESS;

	// BrnFriendsList.h:380
	extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_DECLINE_IN_PROGRESS;

	// BrnFriendsList.h:381
	extern const BrnGui::FriendsListComponent::EBranchOptions *[] KAPE_BRANCH_OPTIONS_BY_STATUS;

	// BrnFriendsList.h:383
	BrnGui::FriendsListComponent::EShortcutOptions[21] maeAvailableShortcutOptions;

	// BrnFriendsList.h:384
	BrnGui::FriendsListComponent::EShortcutBranchOptions[3] maeAvailableShortcutBranchOptions;

	// BrnFriendsList.h:386
	CgsID[256] maChallengesAvailable;

	// BrnFriendsList.h:387
	int32_t miPlayerCount;

	// BrnFriendsList.h:389
	BrnGui::FriendsListComponent::EListType meListType;

	// BrnFriendsList.h:390
	BrnGui::FriendsListComponent::EFriendListState meCurrentState;

	// BrnFriendsList.h:391
	BrnGui::FriendsListComponent::EFriendListBranchState meBranchState;

	// BrnFriendsList.h:392
	int8_t miCurrentlyActiveSlots;

	// BrnFriendsList.h:393
	int8_t miCurrentlyHighlightedSlot;

	// BrnFriendsList.h:394
	int8_t miCurrentlyHighlightedOption;

	// BrnFriendsList.h:395
	int8_t miCurrentlyHighlightedBranch;

	// BrnFriendsList.h:396
	PlayerName mCurrentlySelectedName;

	// BrnFriendsList.h:398
	int32_t miTotalOptions;

	// BrnFriendsList.h:400
	bool mbVisible;

	// BrnFriendsList.h:401
	bool mbCanSendInvites;

	// BrnFriendsList.h:403
	BrnGui::FriendsListComponent::EDataCollection meDataCollectionState;

	// BrnFriendsList.h:405
	BrnGui::FriendsListEntry[5] maEntries;

	// BrnFriendsList.h:406
	extern char[] macEntryNameBase;

	// BrnFriendsList.h:411
	TextFieldRef[3] mBranchTextfields;

	// BrnFriendsList.h:413
	TextFieldRef mListTitleTextfield;

	// BrnFriendsList.h:415
	MovieClipRef mBranchRef;

	// BrnFriendsList.h:416
	MovieClipRef mUpArrowRef;

	// BrnFriendsList.h:417
	MovieClipRef mDownArrowRef;

	// BrnFriendsList.h:420
	extern const char *[] KAC_BRANCH_TEXTFIELD_NAMES;

	// BrnFriendsList.h:421
	extern const char *[] KAC_BRANCH_TEXTFIELDS;

	// BrnFriendsList.h:423
	BuddyInformation[100] maFullBuddyList;

	// BrnFriendsList.h:424
	BrnGui::FriendsListEntry::EFriendListEntryState[100] maeFullBuddyEntryState;

	// BrnFriendsList.h:426
	BrnGui::GuiCache * mpGuiCache;

	// BrnFriendsList.h:428
	bool mbTriggerHideFriendsList;

	// BrnFriendsList.h:430
	BrnGui::FriendsListComponent::EFriendListState meDirtyCurrentState;

	// BrnFriendsList.h:431
	BrnGui::FriendsListComponent::EFriendListBranchState meDirtyBranchState;

	// BrnFriendsList.h:432
	BrnGui::FriendsListComponent::EListType meDirtyListType;

	// BrnFriendsList.h:433
	BrnGui::FriendsListComponent::EArrowConfigurations meDirtyArrowConfiguration;

	// BrnFriendsList.h:434
	bool mbDirty;

	// BrnFriendsList.h:435
	int8_t miDirtyCurrentlyActiveSlots;

	// BrnFriendsList.h:436
	int8_t miDirtyCurrentlyHighlightedSlot;

	// BrnFriendsList.h:439
	extern bool sbRestoreDataAvailable;

	// BrnFriendsList.h:440
	extern BrnGui::FriendsListComponent::EListType seStoredListType;

	// BrnFriendsList.h:441
	extern CgsID sStoredChallenge;

	// BrnFriendsList.h:442
	extern PlayerName sStoredFriend;

	// BrnFriendsList.h:443
	extern BrnGui::FriendsListComponent::EShortcutOptions seShortcutOption;

public:
	// BrnFriendsList.h:181
	void Construct(const char *, StateInterface *, const char *);

	// BrnFriendsList.h:189
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnFriendsList.h:209
	void DoTransitionComplete();

	// BrnFriendsList.h:213
	void Update();

	// BrnFriendsList.h:218
	void ProcessNewEntryData(const GuiEventOnlineReceiveFriendInfo *);

	// BrnFriendsList.h:223
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnFriendsList.h:227
	bool SelectPrevious();

	// BrnFriendsList.h:231
	bool SelectNext();

	// BrnFriendsList.h:235
	void RequestRefreshedData();

	// BrnFriendsList.h:240
	void SetVisible(bool);

	// BrnFriendsList.h:244
	bool IsVisible() const;

	// BrnFriendsList.h:249
	void SetTotalFriends(int32_t);

	// BrnFriendsList.h:253
	int32_t GetTotalFriends() const;

	// BrnFriendsList.h:258
	void SetCanSendInvites(bool);

	// BrnFriendsList.h:263
	void SetGuiCachePointer(BrnGui::GuiCache *);

	// BrnFriendsList.h:267
	void EndWait();

	// BrnFriendsList.h:272
	void ShowSpecificChallenge(CgsID);

	// BrnFriendsList.h:277
	void ShowSpecificFriend(PlayerName *);

	// BrnFriendsList.h:282
	void ShowSpecificShortcut(BrnGui::FriendsListComponent::EShortcutOptions);

	// BrnFriendsList.h:286
	void SaveCurrentState();

	// BrnFriendsList.h:290
	void AttemptStateRestore();

	// BrnFriendsList.h:294
	void UpdateAptVariables();

	// BrnFriendsList.h:298
	void ReshowShortcuts();

	// BrnFriendsList.h:302
	void Close();

private:
	// BrnFriendsList.h:451
	void SetEntryData(int8_t, const char *, BrnGui::FriendsListEntry::EFriendListEntryState, bool);

	// BrnFriendsList.h:456
	void HandleTableInteraction(int32_t);

	// BrnFriendsList.h:461
	void HandleBranchInteraction(int32_t);

	// BrnFriendsList.h:465
	void HandleDPadLeft();

	// BrnFriendsList.h:469
	void HandleDPadRight();

	// BrnFriendsList.h:473
	void HandleDPadRightFriends();

	// BrnFriendsList.h:477
	void HandleDPadRightShortcuts();

	// BrnFriendsList.h:481
	void HandleDPadRightChallenges();

	// BrnFriendsList.h:485
	void HandleBranchDPadRightFriends();

	// BrnFriendsList.h:489
	void HandleBranchDPadRightShortcuts();

	// BrnFriendsList.h:493
	void HandleBranchDPadRightChallenges();

	// BrnFriendsList.h:497
	void ShowFriendsListBranch();

	// BrnFriendsList.h:501
	void ShowShortcutsBranch();

	// BrnFriendsList.h:505
	void ShowFriendsList();

	// BrnFriendsList.h:509
	void ShowShortcutList();

	// BrnFriendsList.h:513
	void ShowChallengesList();

	// BrnFriendsList.h:517
	void Invalidate();

	// BrnFriendsList.h:521
	BrnGui::FriendsListComponent::EArrowConfigurations GetArrowState();

	// BrnFriendsList.h:525
	void WithdrawBranches();

	// BrnFriendsList.h:529
	void SetDirty();

	// BrnFriendsList.h:533
	void UpdateAllEntryData();

	// BrnFriendsList.h:537
	void UpdateAllFriendsEntryData();

	// BrnFriendsList.h:541
	void UpdateAllShortcutsEntryData();

	// BrnFriendsList.h:545
	void UpdateAllChallengesEntryData();

	// BrnFriendsList.h:549
	void BuildShortcutOptions();

	// BrnFriendsList.h:553
	void BuildChallengeList();

	// BrnFriendsList.h:557
	void SortFullList();

	// BrnFriendsList.h:561
	void RemoveUnneededFriends();

	// BrnFriendsList.h:565
	void HandleNotConnected();

	// BrnFriendsList.h:569
	void HandleNoFriends();

	// BrnFriendsList.h:575
	int32_t BuddySortFunction(const void *, const void *);

	// BrnFriendsList.h:579
	bool MoveHighlightDueToBranchOpen();

	// BrnFriendsList.h:584
	void Highlight(int8_t);

	// BrnFriendsList.h:588
	bool HasMultiplayerPrivileges();

	// BrnFriendsList.h:597
	void TransitionCompleteCallback(void *, uint16_t);

}

// BrnFriendsList.h:174
extern const int32_t KI_NUM_OPTIONS_PER_PAGE = 5;

// BrnFriendsList.h:340
extern const int32_t KI_NUM_BRANCHES = 3;

// BrnFriendsList.h:341
extern const int32_t KI_MAX_CHALLENGES_FOR_EACH_PLAYER_COUNT = 256;

// BrnFriendsList.h:343
extern char[] macStateChangeName;

// BrnFriendsList.h:344
extern char[] macBranchChangeName;

// BrnFriendsList.h:345
extern char[] macBranchAlignName;

// BrnFriendsList.h:346
extern char[] macArrowStateName;

// BrnFriendsList.h:347
extern char[] macArrowPositionName;

// BrnFriendsList.h:348
extern char[] macListTitleName;

// BrnFriendsList.h:355
extern const float32_t KF_BRANCH_START_Y_POSITION;

// BrnFriendsList.h:356
extern const float32_t KF_BRANCH_OFFSET_Y_POSITION;

// BrnFriendsList.h:358
extern char[] KAC_NOT_CONNECTED_STRINGID;

// BrnFriendsList.h:359
extern char[] KAC_NO_FRIENDS_STRINGID;

// BrnFriendsList.h:360
extern char[] KAC_INSTANT_FREEBURN_STRINGID;

// BrnFriendsList.h:366
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_INVISIBLE;

// BrnFriendsList.h:367
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_YOU_OFFLINE;

// BrnFriendsList.h:368
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_NO_FRIENDS;

// BrnFriendsList.h:369
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_IN_LOBBY;

// BrnFriendsList.h:370
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_OFFLINE;

// BrnFriendsList.h:371
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_JOINABLE;

// BrnFriendsList.h:372
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_NOT_JOINABLE;

// BrnFriendsList.h:373
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_SENT_JOINABLE;

// BrnFriendsList.h:374
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_SENT_NOT_JOINABLE;

// BrnFriendsList.h:375
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_RECEIVED;

// BrnFriendsList.h:376
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_NOT_INVITABLE_NOT_JOINABLE;

// BrnFriendsList.h:377
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_FRIEND_NOT_INVITABLE_JOINABLE;

// BrnFriendsList.h:378
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_INVITE_IN_PROGRESS;

// BrnFriendsList.h:379
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_REVOKE_IN_PROGRESS;

// BrnFriendsList.h:380
extern BrnGui::FriendsListComponent::EBranchOptions[] KAE_BRANCH_OPTION_DECLINE_IN_PROGRESS;

// BrnFriendsList.h:406
extern char[] macEntryNameBase;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FriendsListComponent {
		// BrnFriendsList.h:71
		enum EDataCollection {
			E_DATACOLLECTION_WAIT_FOR_NUMBER = 0,
			E_DATACOLLECTION_WAIT_FOR_DATA = 1,
			E_DATACOLLECTION_RUNNING = 2,
		}

		// BrnFriendsList.h:78
		enum EFriendListBranchState {
			E_FRIENDLISTBRANCH_INVISIBLE = 0,
			E_FRIENDLISTBRANCH_ONE_IN = 1,
			E_FRIENDLISTBRANCH_ONE_OUT = 2,
			E_FRIENDLISTBRANCH_TWO_IN = 3,
			E_FRIENDLISTBRANCH_TWO_OUT = 4,
			E_FRIENDLISTBRANCH_THREE_IN = 5,
			E_FRIENDLISTBRANCH_THREE_OUT = 6,
			E_FRIENDLISTBRANCH_FIRST_OF_ONE = 7,
			E_FRIENDLISTBRANCH_FIRST_OF_TWO = 8,
			E_FRIENDLISTBRANCH_SECOND_OF_TWO = 9,
			E_FRIENDLISTBRANCH_FIRST_OF_THREE = 10,
			E_FRIENDLISTBRANCH_SECOND_OF_THREE = 11,
			E_FRIENDLISTBRANCH_THIRD_OF_THREE = 12,
			E_FRIENDLISTBRANCH_COUNT = 13,
		}

		// BrnFriendsList.h:98
		enum EBranchOptions {
			E_BRANCHOPTION_INVISIBLE = 0,
			E_BRANCHOPTION_FRIEND_IN_LOBBY = 1,
			E_BRANCHOPTION_SIGNIN = 2,
			E_BRANCHOPTION_GAMERPROFILE = 3,
			E_BRANCHOPTION_SENDINVITE = 4,
			E_BRANCHOPTION_JOINGAME = 5,
			E_BRANCHOPTION_REVOKEINVITE = 6,
			E_BRANCHOPTION_ACCEPTINVITE = 7,
			E_BRANCHOPTION_CANTINVITE = 8,
			E_BRANCHOPTION_DECLINEINVITE = 9,
			E_BRANCHOPTION_INVITEINPROGRESS = 10,
			E_BRANCHOPTION_REVOKEINPROGRESS = 11,
			E_BRANCHOPTION_DECLINEINPROGRESS = 12,
			E_BRANCHOPTION_COUNT = 13,
		}

		// BrnFriendsList.h:117
		enum EShortcutOptions {
			E_SHORTCUT_OPTIONS_SHOW_FRIENDS = 0,
			E_SHORTCUT_OPTIONS_ROAD_RULES = 1,
			E_SHORTCUT_OPTIONS_FREEBURN = 2,
			E_SHORTCUT_OPTIONS_IMAGE_GALLERY = 3,
			E_SHORTCUT_OPTIONS_VIEW_CHALLENGES = 4,
			E_SHORTCUT_OPTIONS_UNRANKED = 5,
			E_SHORTCUT_OPTIONS_RANKED = 6,
			E_SHORTCUT_OPTIONS_SCOREBOARDS = 7,
			E_SHORTCUT_OPTIONS_NEWS = 8,
			E_SHORTCUT_OPTIONS_LAUNCH = 9,
			E_SHORTCUT_OPTIONS_CREATE_EVENT = 10,
			E_SHORTCUT_OPTIONS_CHANGE_TEAMS = 11,
			E_SHORTCUT_OPTIONS_VIEW_LOBBY = 12,
			E_SHORTCUT_OPTIONS_LEAVE_GAME = 13,
			E_SHORTCUT_OPTIONS_CANCEL_CHALLENGE = 14,
			E_SHORTCUT_OPTIONS_SELECT_CHALLENGE = 15,
			E_SHORTCUT_OPTIONS_VIEW_EVENT = 16,
			E_SHORTCUT_OPTIONS_CANCEL_EVENT = 17,
			E_SHORTCUT_OPTIONS_VIEW_MAP = 18,
			E_SHORTCUT_OPTIONS_CHANGE_SECURITY = 19,
			E_SHORTCUT_OPTIONS_SETTINGS = 20,
			E_SHORTCUT_OPTIONS_COUNT = 21,
		}

		// BrnFriendsList.h:149
		enum EShortcutBranchOptions {
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_OFF = 0,
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_TIME = 1,
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_CRASH = 2,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_PLAY_NOW = 3,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_CUSTOM_MATCH = 4,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_CREATE = 5,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_PLAY_NOW = 6,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_CUSTOM_MATCH = 7,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_CREATE = 8,
			E_SHORTCUT_BRANCHOPTION_RANKED_PLAY_NOW = 9,
			E_SHORTCUT_BRANCHOPTION_RANKED_CUSTOM_MATCH = 10,
			E_SHORTCUT_BRANCHOPTION_RANKED_CREATE = 11,
			E_SHORTCUT_BRANCHOPTION_SECURITY_ALLCOMERS = 12,
			E_SHORTCUT_BRANCHOPTION_SECURITY_FRIENDS_ONLY = 13,
			E_SHORTCUT_BRANCHOPTION_SECURITY_INVITE_ONLY = 14,
			E_SHORTCUT_BRANCHOPTION_COUNT = 15,
		}

		// BrnFriendsList.h:306
		enum EListType {
			E_LIST_TYPE_NONE = 0,
			E_LIST_TYPE_FRIENDS = 1,
			E_LIST_TYPE_SHORTCUTS = 2,
			E_LIST_TYPE_CHALLENGES = 3,
			E_LIST_TYPE_COUNT = 4,
		}

		// BrnFriendsList.h:317
		enum EFriendListState {
			E_FRIENDLIST_INVISIBLE = 0,
			E_FRIENDLIST_TRANSIN = 1,
			E_FRIENDLIST_IDLE = 2,
			E_FRIENDLIST_NEXT_PAGE = 3,
			E_FRIENDLIST_PREVIOUS_PAGE = 4,
			E_FRIENDLIST_TRANSOUT = 5,
			E_FRIENDLIST_COUNT = 6,
		}

		// BrnFriendsList.h:330
		enum EArrowConfigurations {
			E_ARROWS_NONE = 0,
			E_ARROWS_DOWN_ONLY = 1,
			E_ARROWS_UP_ONLY = 2,
			E_ARROWS_BOTH = 3,
			E_ARROWS_COUNT = 4,
		}

	}

	// BrnFriendsList.h:603
	extern BrnGui::FriendsListComponent::EFriendListBranchState operator--(BrnGui::FriendsListComponent::EFriendListBranchState &, int);

	// BrnFriendsList.h:603
	extern BrnGui::FriendsListComponent::EFriendListBranchState operator++(BrnGui::FriendsListComponent::EFriendListBranchState &, int);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FriendsListComponent {
		// BrnFriendsList.h:71
		enum EDataCollection {
			E_DATACOLLECTION_WAIT_FOR_NUMBER = 0,
			E_DATACOLLECTION_WAIT_FOR_DATA = 1,
			E_DATACOLLECTION_RUNNING = 2,
		}

		// BrnFriendsList.h:78
		enum EFriendListBranchState {
			E_FRIENDLISTBRANCH_INVISIBLE = 0,
			E_FRIENDLISTBRANCH_ONE_IN = 1,
			E_FRIENDLISTBRANCH_ONE_OUT = 2,
			E_FRIENDLISTBRANCH_TWO_IN = 3,
			E_FRIENDLISTBRANCH_TWO_OUT = 4,
			E_FRIENDLISTBRANCH_THREE_IN = 5,
			E_FRIENDLISTBRANCH_THREE_OUT = 6,
			E_FRIENDLISTBRANCH_FIRST_OF_ONE = 7,
			E_FRIENDLISTBRANCH_FIRST_OF_TWO = 8,
			E_FRIENDLISTBRANCH_SECOND_OF_TWO = 9,
			E_FRIENDLISTBRANCH_FIRST_OF_THREE = 10,
			E_FRIENDLISTBRANCH_SECOND_OF_THREE = 11,
			E_FRIENDLISTBRANCH_THIRD_OF_THREE = 12,
			E_FRIENDLISTBRANCH_COUNT = 13,
		}

		// BrnFriendsList.h:98
		enum EBranchOptions {
			E_BRANCHOPTION_INVISIBLE = 0,
			E_BRANCHOPTION_FRIEND_IN_LOBBY = 1,
			E_BRANCHOPTION_SIGNIN = 2,
			E_BRANCHOPTION_GAMERPROFILE = 3,
			E_BRANCHOPTION_SENDINVITE = 4,
			E_BRANCHOPTION_JOINGAME = 5,
			E_BRANCHOPTION_REVOKEINVITE = 6,
			E_BRANCHOPTION_ACCEPTINVITE = 7,
			E_BRANCHOPTION_CANTINVITE = 8,
			E_BRANCHOPTION_DECLINEINVITE = 9,
			E_BRANCHOPTION_INVITEINPROGRESS = 10,
			E_BRANCHOPTION_REVOKEINPROGRESS = 11,
			E_BRANCHOPTION_DECLINEINPROGRESS = 12,
			E_BRANCHOPTION_COUNT = 13,
		}

		// BrnFriendsList.h:117
		enum EShortcutOptions {
			E_SHORTCUT_OPTIONS_SHOW_FRIENDS = 0,
			E_SHORTCUT_OPTIONS_ROAD_RULES = 1,
			E_SHORTCUT_OPTIONS_FREEBURN = 2,
			E_SHORTCUT_OPTIONS_IMAGE_GALLERY = 3,
			E_SHORTCUT_OPTIONS_VIEW_CHALLENGES = 4,
			E_SHORTCUT_OPTIONS_UNRANKED = 5,
			E_SHORTCUT_OPTIONS_RANKED = 6,
			E_SHORTCUT_OPTIONS_SCOREBOARDS = 7,
			E_SHORTCUT_OPTIONS_NEWS = 8,
			E_SHORTCUT_OPTIONS_LAUNCH = 9,
			E_SHORTCUT_OPTIONS_CREATE_EVENT = 10,
			E_SHORTCUT_OPTIONS_CHANGE_TEAMS = 11,
			E_SHORTCUT_OPTIONS_VIEW_LOBBY = 12,
			E_SHORTCUT_OPTIONS_LEAVE_GAME = 13,
			E_SHORTCUT_OPTIONS_CANCEL_CHALLENGE = 14,
			E_SHORTCUT_OPTIONS_SELECT_CHALLENGE = 15,
			E_SHORTCUT_OPTIONS_VIEW_EVENT = 16,
			E_SHORTCUT_OPTIONS_CANCEL_EVENT = 17,
			E_SHORTCUT_OPTIONS_VIEW_MAP = 18,
			E_SHORTCUT_OPTIONS_CHANGE_SECURITY = 19,
			E_SHORTCUT_OPTIONS_SETTINGS = 20,
			E_SHORTCUT_OPTIONS_COUNT = 21,
		}

		// BrnFriendsList.h:149
		enum EShortcutBranchOptions {
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_OFF = 0,
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_TIME = 1,
			E_SHORTCUT_BRANCHOPTION_ROAD_RULE_CRASH = 2,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_PLAY_NOW = 3,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_CUSTOM_MATCH = 4,
			E_SHORTCUT_BRANCHOPTION_FREEBURN_CREATE = 5,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_PLAY_NOW = 6,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_CUSTOM_MATCH = 7,
			E_SHORTCUT_BRANCHOPTION_UNRANKED_CREATE = 8,
			E_SHORTCUT_BRANCHOPTION_RANKED_PLAY_NOW = 9,
			E_SHORTCUT_BRANCHOPTION_RANKED_CUSTOM_MATCH = 10,
			E_SHORTCUT_BRANCHOPTION_RANKED_CREATE = 11,
			E_SHORTCUT_BRANCHOPTION_SECURITY_ALLCOMERS = 12,
			E_SHORTCUT_BRANCHOPTION_SECURITY_FRIENDS_ONLY = 13,
			E_SHORTCUT_BRANCHOPTION_SECURITY_INVITE_ONLY = 14,
			E_SHORTCUT_BRANCHOPTION_COUNT = 15,
		}

		// BrnFriendsList.h:306
		enum EListType {
			E_LIST_TYPE_NONE = 0,
			E_LIST_TYPE_FRIENDS = 1,
			E_LIST_TYPE_SHORTCUTS = 2,
			E_LIST_TYPE_CHALLENGES = 3,
			E_LIST_TYPE_COUNT = 4,
		}

		// BrnFriendsList.h:317
		enum EFriendListState {
			E_FRIENDLIST_INVISIBLE = 0,
			E_FRIENDLIST_TRANSIN = 1,
			E_FRIENDLIST_IDLE = 2,
			E_FRIENDLIST_NEXT_PAGE = 3,
			E_FRIENDLIST_PREVIOUS_PAGE = 4,
			E_FRIENDLIST_TRANSOUT = 5,
			E_FRIENDLIST_COUNT = 6,
		}

		// BrnFriendsList.h:330
		enum EArrowConfigurations {
			E_ARROWS_NONE = 0,
			E_ARROWS_DOWN_ONLY = 1,
			E_ARROWS_UP_ONLY = 2,
			E_ARROWS_BOTH = 3,
			E_ARROWS_COUNT = 4,
		}

	}

}

