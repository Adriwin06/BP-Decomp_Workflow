// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct Selectable {
		// BrnSelectable.h:43
		enum StateFlags {
			E_FLAG_ACTIVE = 1,
			E_FLAG_HIGHLIGHTABLE = 2,
			E_FLAG_SELECTABLE = 4,
			E_FLAG_HIGHLIGHTED = 8,
			E_FLAG_DIRTY = 16,
		}

	}

}

// BrnSelectable.h:38
struct BrnGui::Selectable {
	int (*)(...) * _vptr.Selectable;

	// BrnSelectable.h:52
	extern const uint64_t K_INVALID_ID = 4294967295;

protected:
	// BrnSelectable.h:156
	const char * mpcSelectionText;

private:
	// BrnSelectable.h:160
	uint8_t mxFlags;

	// BrnSelectable.h:161
	uint64_t mId;

public:
	// BrnSelectable.h:60
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnSelectable.h:238
	bool IsActive() const;

	// BrnSelectable.h:251
	bool IsHighlightable() const;

	// BrnSelectable.h:264
	bool IsSelectable() const;

	// BrnSelectable.h:277
	bool IsHighlighted() const;

	// BrnSelectable.h:291
	bool IsDirty() const;

	// BrnSelectable.h:304
	uint64_t GetId() const;

	// BrnSelectable.h:318
	void SetId(uint64_t);

	// BrnSelectable.h:333
	virtual bool SetActive(bool);

	// BrnSelectable.h:352
	virtual bool SetHighlightable(bool);

	// BrnSelectable.h:372
	virtual bool SetSelectable(bool);

	// BrnSelectable.h:391
	virtual bool SetHighlighted(bool);

	// BrnSelectable.h:412
	void SetDirty();

	// BrnSelectable.h:126
	virtual void Select();

	// BrnSelectable.h:426
	virtual void Update();

	// BrnSelectable.h:180
	bool GetFlag(BrnGui::Selectable::StateFlags) const;

	// BrnSelectable.h:195
	void SetFlag(BrnGui::Selectable::StateFlags);

	// BrnSelectable.h:210
	void ClearFlag(BrnGui::Selectable::StateFlags);

	// BrnSelectable.h:224
	void ClearFlags();

}

// BrnSelectable.h:52
extern const uint64_t K_INVALID_ID = 4294967295;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct Selectable {
		// BrnSelectable.h:43
		enum StateFlags {
			E_FLAG_ACTIVE = 1,
			E_FLAG_HIGHLIGHTABLE = 2,
			E_FLAG_SELECTABLE = 4,
			E_FLAG_HIGHLIGHTED = 8,
			E_FLAG_DIRTY = 16,
		}

	}

}

// BrnSelectable.h:38
struct BrnGui::Selectable {
	int (*)(...) * _vptr.Selectable;

	// BrnSelectable.h:52
	extern const uint64_t K_INVALID_ID = 4294967295;

protected:
	// BrnSelectable.h:156
	const char * mpcSelectionText;

private:
	// BrnSelectable.h:160
	uint8_t mxFlags;

	// BrnSelectable.h:161
	uint64_t mId;

public:
	Selectable & operator=(const BrnGui::Selectable &);

	void Selectable(const BrnGui::Selectable &);

	void Selectable();

	// BrnSelectable.cpp:41
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnSelectable.h:238
	bool IsActive() const;

	// BrnSelectable.h:251
	bool IsHighlightable() const;

	// BrnSelectable.h:264
	bool IsSelectable() const;

	// BrnSelectable.h:277
	bool IsHighlighted() const;

	// BrnSelectable.h:291
	bool IsDirty() const;

	// BrnSelectable.h:304
	uint64_t GetId() const;

	// BrnSelectable.h:318
	void SetId(uint64_t);

	// BrnSelectable.h:333
	virtual bool SetActive(bool);

	// BrnSelectable.h:352
	virtual bool SetHighlightable(bool);

	// BrnSelectable.h:372
	virtual bool SetSelectable(bool);

	// BrnSelectable.h:391
	virtual bool SetHighlighted(bool);

	// BrnSelectable.h:412
	void SetDirty();

	// BrnSelectable.h:126
	virtual void Select();

	// BrnSelectable.h:426
	virtual void Update();

	// BrnSelectable.h:180
	bool GetFlag(BrnGui::Selectable::StateFlags) const;

	// BrnSelectable.h:195
	void SetFlag(BrnGui::Selectable::StateFlags);

	// BrnSelectable.h:210
	void ClearFlag(BrnGui::Selectable::StateFlags);

	// BrnSelectable.h:224
	void ClearFlags();

}

// BrnSelectable.h:38
void BrnGui::Selectable::Selectable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSelectable.h:38
void BrnGui::Selectable::operator=(const const BrnGui::Selectable &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSelectable.h:38
struct BrnGui::Selectable {
	int (*)(...) * _vptr.Selectable;

	// BrnSelectable.h:52
	extern const uint64_t K_INVALID_ID = 4294967295;

protected:
	// BrnSelectable.h:156
	const char * mpcSelectionText;

private:
	// BrnSelectable.h:160
	uint8_t mxFlags;

	// BrnSelectable.h:161
	uint64_t mId;

public:
	void Selectable(const Selectable &);

	void Selectable();

	// BrnSelectable.h:60
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnSelectable.h:238
	bool IsActive() const;

	// BrnSelectable.h:251
	bool IsHighlightable() const;

	// BrnSelectable.h:264
	bool IsSelectable() const;

	// BrnSelectable.h:277
	bool IsHighlighted() const;

	// BrnSelectable.h:291
	bool IsDirty() const;

	// BrnSelectable.h:304
	uint64_t GetId() const;

	// BrnSelectable.h:318
	void SetId(uint64_t);

	// BrnSelectable.h:333
	virtual bool SetActive(bool);

	// BrnSelectable.h:352
	virtual bool SetHighlightable(bool);

	// BrnSelectable.h:372
	virtual bool SetSelectable(bool);

	// BrnSelectable.h:391
	virtual bool SetHighlighted(bool);

	// BrnSelectable.h:412
	void SetDirty();

	// BrnSelectable.h:126
	virtual void Select();

	// BrnSelectable.h:426
	virtual void Update();

	// BrnSelectable.h:180
	bool GetFlag(BrnGui::Selectable::StateFlags) const;

	// BrnSelectable.h:195
	void SetFlag(BrnGui::Selectable::StateFlags);

	// BrnSelectable.h:210
	void ClearFlag(BrnGui::Selectable::StateFlags);

	// BrnSelectable.h:224
	void ClearFlags();

}

