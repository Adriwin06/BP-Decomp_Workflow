// BrnDirectorDataJournal.h:42
struct BrnDirector::DataJournal<BrnDirector::GameState::EEventState,2> {
private:
	// BrnDirectorDataJournal.h:82
	BrnDirector::GameState::EEventState[2] maData;

	// BrnDirectorDataJournal.h:83
	int32_t miHead;

	// BrnDirectorDataJournal.h:84
	int32_t miSize;

public:
	// BrnDirectorDataJournal.h:91
	void Construct();

	// BrnDirectorDataJournal.h:101
	const BrnDirector::GameState::EEventState & GetCurrent() const;

	// BrnDirectorDataJournal.h:112
	const BrnDirector::GameState::EEventState & GetPrevious(int) const;

	// BrnDirectorDataJournal.h:125
	bool IsNewestValueDifferent() const;

	// BrnDirectorDataJournal.h:135
	const BrnDirector::GameState::EEventState GetDelta() const;

	// BrnDirectorDataJournal.h:146
	void SetCurrent(const BrnDirector::GameState::EEventState &);

	// BrnDirectorDataJournal.h:166
	void SetAll(const BrnDirector::GameState::EEventState &);

	// BrnDirectorDataJournal.h:182
	int32_t GetSize() const;

	// BrnDirectorDataJournal.h:191
	int32_t GetCapacity() const;

	// BrnDirectorDataJournal.h:202
	const BrnDirector::GameState::EEventState & operator[](int) const;

}

// BrnDirectorDataJournal.h:42
struct BrnDirector::DataJournal<rw::math::vpu::Vector3,8> {
private:
	// BrnDirectorDataJournal.h:82
	Vector3[8] maData;

	// BrnDirectorDataJournal.h:83
	int32_t miHead;

	// BrnDirectorDataJournal.h:84
	int32_t miSize;

public:
	// BrnDirectorDataJournal.h:91
	void Construct();

	// BrnDirectorDataJournal.h:101
	const rw::math::vpu::Vector3 & GetCurrent() const;

	// BrnDirectorDataJournal.h:112
	const rw::math::vpu::Vector3 & GetPrevious(int) const;

	// BrnDirectorDataJournal.h:125
	bool IsNewestValueDifferent() const;

	// BrnDirectorDataJournal.h:135
	const rw::math::vpu::Vector3 GetDelta() const;

	// BrnDirectorDataJournal.h:146
	void SetCurrent(const rw::math::vpu::Vector3 &);

	// BrnDirectorDataJournal.h:166
	void SetAll(const rw::math::vpu::Vector3 &);

	// BrnDirectorDataJournal.h:182
	int32_t GetSize() const;

	// BrnDirectorDataJournal.h:191
	int32_t GetCapacity() const;

	// BrnDirectorDataJournal.h:202
	const rw::math::vpu::Vector3 & operator[](int) const;

}

// BrnDirectorDataJournal.h:42
struct BrnDirector::DataJournal<float32_t,8> {
private:
	// BrnDirectorDataJournal.h:82
	float32_t[8] maData;

	// BrnDirectorDataJournal.h:83
	int32_t miHead;

	// BrnDirectorDataJournal.h:84
	int32_t miSize;

public:
	// BrnDirectorDataJournal.h:91
	void Construct();

	// BrnDirectorDataJournal.h:101
	const float32_t & GetCurrent() const;

	// BrnDirectorDataJournal.h:112
	const float32_t & GetPrevious(int) const;

	// BrnDirectorDataJournal.h:125
	bool IsNewestValueDifferent() const;

	// BrnDirectorDataJournal.h:135
	const float32_t GetDelta() const;

	// BrnDirectorDataJournal.h:146
	void SetCurrent(const float32_t &);

	// BrnDirectorDataJournal.h:166
	void SetAll(const float32_t &);

	// BrnDirectorDataJournal.h:182
	int32_t GetSize() const;

	// BrnDirectorDataJournal.h:191
	int32_t GetCapacity() const;

	// BrnDirectorDataJournal.h:202
	const float32_t & operator[](int) const;

}

