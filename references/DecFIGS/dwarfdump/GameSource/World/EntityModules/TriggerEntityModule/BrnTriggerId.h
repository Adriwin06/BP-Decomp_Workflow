// BrnTriggerId.h:52
struct BrnWorld::TriggerId {
private:
	// BrnTriggerId.h:84
	uint32_t mID;

public:
	// BrnTriggerId.h:56
	uint8_t GetOwner() const;

	// BrnTriggerId.h:59
	uint32_t GetIndex() const;

	// BrnTriggerId.h:64
	void SetID(uint32_t);

	// BrnTriggerId.h:69
	void Set(uint8_t, uint32_t);

	// BrnTriggerId.h:73
	void SetOwner(uint8_t);

	// BrnTriggerId.h:77
	void SetIndex(uint32_t);

	// BrnTriggerId.h:80
	uint32_t operator std::uint32_t() const;

}

// BrnTriggerId.h:52
struct BrnWorld::TriggerId {
private:
	// BrnTriggerId.h:84
	uint32_t mID;

public:
	// BrnTriggerId.h:56
	uint8_t GetOwner() const;

	// BrnTriggerId.h:59
	uint32_t GetIndex() const;

	// BrnTriggerId.h:64
	void SetID(uint32_t);

	// BrnTriggerId.h:69
	void Set(uint8_t, uint32_t);

	// BrnTriggerId.h:73
	void SetOwner(uint8_t);

	// BrnTriggerId.h:77
	void SetIndex(uint32_t);

	// BrnTriggerId.h:80
	uint32_t operator uint32_t() const;

}

