// BrnRivalTableCell.h:111
extern char[] KAC_RIVALRY_STAGE_VAR;

// BrnRivalTableCell.h:112
extern char[] KAC_RIVAL_VEHICLE_VAR;

// BrnRivalTableCell.h:48
struct BrnGui::RivalTableCell : public CgsGui::GuiComponent {
private:
	// BrnRivalTableCell.h:106
	BrnGui::ERivalryStage meRivalryStage;

	// BrnRivalTableCell.h:107
	CgsID mCarID;

	// BrnRivalTableCell.h:108
	bool mbDriven;

	// BrnRivalTableCell.h:109
	bool mbWrecked;

	// BrnRivalTableCell.cpp:24
	extern const char[17] KAC_RIVALRY_STAGE_VAR;

	// BrnRivalTableCell.cpp:25
	extern const char[18] KAC_RIVAL_VEHICLE_VAR;

	// BrnRivalTableCell.h:116
	bool mbEmpty;

public:
	// BrnRivalTableCell.cpp:48
	virtual void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnRivalTableCell.cpp:78
	virtual void Update();

	// BrnRivalTableCell.h:135
	virtual void Select();

	// BrnRivalTableCell.h:150
	void SetRivalryStage(BrnGui::ERivalryStage);

	// BrnRivalTableCell.h:167
	void SetCarID(CgsID);

	// BrnRivalTableCell.h:183
	const BrnGui::ERivalryStage GetRivalryStage() const;

	// BrnRivalTableCell.h:197
	const CgsID GetCarID() const;

	// BrnRivalTableCell.h:214
	void SetEmpty(bool);

	// BrnRivalTableCell.h:233
	void SetDriven(bool);

	// BrnRivalTableCell.cpp:154
	void SetWrecked(bool);

	// BrnRivalTableCell.cpp:130
	void SetScreenPosition(Vector2);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct RivalTableCell {
	public:
		// BrnRivalTableCell.h:214
		void SetEmpty(bool);

		// BrnRivalTableCell.h:167
		void SetCarID(CgsID);

		// BrnRivalTableCell.h:233
		void SetDriven(bool);

	private:
		// BrnRivalTableCell.h:111
		extern char[] KAC_RIVALRY_STAGE_VAR;

		// BrnRivalTableCell.h:112
		extern char[] KAC_RIVAL_VEHICLE_VAR;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RivalTableCell {
	public:
		RivalTableCell();

	private:
		// BrnRivalTableCell.h:111
		extern char[] KAC_RIVALRY_STAGE_VAR;

		// BrnRivalTableCell.h:112
		extern char[] KAC_RIVAL_VEHICLE_VAR;

	}

}

// BrnRivalTableCell.h:48
void BrnGui::RivalTableCell::RivalTableCell() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

