// BrnBoostMessageSlot.h:145
extern char[] mpacMessageItemName;

// BrnBoostMessageSlot.h:146
extern char[] mpacAptTriggerTrans;

// BrnBoostMessageSlot.h:147
extern char[] mpacAptTriggerType;

// BrnBoostMessageSlot.h:148
extern char[] mpacAptSnapPos;

// BrnBoostMessageSlot.h:149
extern char[] mpacAptSnapToPos;

// BrnBoostMessageSlot.h:150
extern char[] mpacAptStartPosName;

// BrnBoostMessageSlot.h:49
struct BrnGui::BaseBoostMessageSlotComponent : public BrnFlaptComponent {
}

// BrnBoostMessageSlot.h:61
struct BrnGui::BoostMessageSlot : public BaseBoostMessageSlotComponent {
	// BrnBoostMessageSlot.h:64
	extern const int32_t KI_MAX_SLOT_POSITION = 3;

private:
	// BrnBoostMessageSlot.h:145
	extern char[] mpacMessageItemName;

	// BrnBoostMessageSlot.h:146
	extern char[] mpacAptTriggerTrans;

	// BrnBoostMessageSlot.h:147
	extern char[] mpacAptTriggerType;

	// BrnBoostMessageSlot.h:148
	extern char[] mpacAptSnapPos;

	// BrnBoostMessageSlot.h:149
	extern char[] mpacAptSnapToPos;

	// BrnBoostMessageSlot.h:150
	extern char[] mpacAptStartPosName;

	// BrnBoostMessageSlot.h:152
	BoostMessageItem mItem;

	// BrnBoostMessageSlot.h:153
	bool mbInUse;

	// BrnBoostMessageSlot.h:154
	bool mbInTransition;

	// BrnBoostMessageSlot.h:155
	int32_t miMessageId;

	// BrnBoostMessageSlot.h:156
	int32_t miSlotPosition;

	// BrnBoostMessageSlot.h:158
	float32_t mfTimeToLive;

public:
	// BrnBoostMessageSlot.h:71
	void Construct(const char *, StateInterface *, const char *);

	// BrnBoostMessageSlot.h:78
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnBoostMessageSlot.h:96
	void SetMessage(const char *, int32_t, float32_t, BrnWorld::EBoostType, int32_t);

	// BrnBoostMessageSlot.h:102
	void SetMessageText(const char *, int32_t);

	// BrnBoostMessageSlot.h:108
	void Refresh(float32_t, bool);

	// BrnBoostMessageSlot.h:113
	void Update(float32_t);

	// BrnBoostMessageSlot.h:117
	bool IsInUse() const;

	// BrnBoostMessageSlot.h:121
	bool IsInTransition() const;

	// BrnBoostMessageSlot.h:125
	int32_t GetMessageId() const;

	// BrnBoostMessageSlot.h:129
	int32_t GetSlotPosition() const;

	// BrnBoostMessageSlot.h:133
	void ShuffleUp();

	// BrnBoostMessageSlot.h:137
	void ShuffleDown();

private:
	// BrnBoostMessageSlot.h:143
	void ResetSlotPosition();

}

// BrnBoostMessageSlot.h:64
extern const int32_t KI_MAX_SLOT_POSITION = 3;

