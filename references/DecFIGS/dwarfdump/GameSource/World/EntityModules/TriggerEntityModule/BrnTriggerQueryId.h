// BrnTriggerQueryId.h:43
struct BrnWorld::TriggerQueryId {
private:
	// BrnTriggerQueryId.h:74
	uint32_t mID;

public:
	// BrnTriggerQueryId.h:47
	uint8_t GetOwner() const;

	// BrnTriggerQueryId.h:50
	uint32_t GetIndex() const;

	// BrnTriggerQueryId.h:55
	void Set(uint8_t, uint32_t);

	// BrnTriggerQueryId.h:59
	void SetOwner(uint8_t);

	// BrnTriggerQueryId.h:63
	void SetIndex(uint32_t);

	// BrnTriggerQueryId.h:67
	void SetId(uint32_t);

	// BrnTriggerQueryId.h:70
	uint32_t operator uint32_t() const;

}

