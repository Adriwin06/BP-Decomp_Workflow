// BrnPropGraphicsList.h:46
struct BrnPhysics::Props::PropPartGraphics {
	// BrnPropGraphicsList.h:55
	uint32_t muTypeId;

	// BrnPropGraphicsList.h:56
	uint32_t muPartId;

	// BrnPropGraphicsList.h:57
	Model * mpPropModel;

public:
	// BrnPropGraphicsList.h:52
	void Construct(uint32_t, uint32_t, Model *);

}

// BrnPropGraphicsList.h:61
struct BrnPhysics::Props::PropGraphics {
	// BrnPropGraphicsList.h:77
	uint32_t muTypeId;

	// BrnPropGraphicsList.h:78
	Model * mpPropModel;

	// BrnPropGraphicsList.h:79
	PropPartGraphics * mpParts;

public:
	// BrnPropGraphicsList.h:66
	void Construct(uint32_t, Model *);

	// BrnPropGraphicsList.h:69
	void SetPartBuffer(PropPartGraphics *);

	// BrnPropGraphicsList.h:72
	bool operator==(const PropGraphics &);

}

// BrnPropGraphicsList.h:91
struct BrnPhysics::Props::PropGraphicsList {
private:
	// BrnPropGraphicsList.h:163
	uint32_t muSizeInBytes;

	// BrnPropGraphicsList.h:164
	uint32_t muZoneNumber;

	// BrnPropGraphicsList.h:165
	uint32_t muNumberOfPropModels;

	// BrnPropGraphicsList.h:166
	uint32_t muNumberOfPropPartModels;

	// BrnPropGraphicsList.h:167
	PropGraphics * mpaPropGraphics;

	// BrnPropGraphicsList.h:168
	PropPartGraphics * mpaPropPartGraphics;

public:
	// BrnPropGraphicsList.h:99
	void Construct(PropGraphics *, PropPartGraphics *, uint32_t, uint32_t);

	// BrnPropGraphicsList.h:103
	bool Prepare();

	// BrnPropGraphicsList.h:107
	bool Release();

	// BrnPropGraphicsList.h:111
	void Destruct();

	// BrnPropGraphicsList.h:114
	void CopyFrom(const PropGraphicsList *);

	// BrnPropGraphicsList.h:117
	uint32_t GetSizeInBytes() const;

	// BrnPropGraphicsList.h:120
	void FixUp(const Resource &);

	// BrnPropGraphicsList.h:123
	void FixDown(const Resource &);

	// BrnPropGraphicsList.h:127
	void Refix(const void *, void *);

	// BrnPropGraphicsList.h:130
	void AddPropGraphics(PropGraphics);

	// BrnPropGraphicsList.h:133
	uint32_t GetNumberOfPropModels() const;

	// BrnPropGraphicsList.h:136
	uint32_t GetNumberOfPartModels() const;

	// BrnPropGraphicsList.h:139
	uint32_t GetTotalNumberOfModels() const;

	// BrnPropGraphicsList.h:142
	const PropGraphics * GetPropGraphics(uint32_t) const;

	// BrnPropGraphicsList.h:145
	PropGraphics * GetPropGraphics(uint32_t);

	// BrnPropGraphicsList.h:148
	const PropPartGraphics * GetPartGraphics(uint32_t) const;

	// BrnPropGraphicsList.h:151
	PropPartGraphics * GetPartGraphics(uint32_t);

	// BrnPropGraphicsList.h:154
	PropGraphics * GetPropGraphicsForType(uint32_t);

	// BrnPropGraphicsList.h:157
	uint32_t GetZoneNumber() const;

	// BrnPropGraphicsList.h:160
	void SetNumberOfParts(uint32_t);

}

