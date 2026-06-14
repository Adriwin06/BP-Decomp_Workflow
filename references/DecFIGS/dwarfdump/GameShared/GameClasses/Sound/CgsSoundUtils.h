// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundUtils.h:41
	namespace Utils {
		struct DataPoint<bool>;

	}

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<bool> {
private:
	// CgsSoundUtils.h:510
	bool mCurrentValue;

	// CgsSoundUtils.h:511
	bool mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const bool &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<bool> &);

	// CgsSoundUtils.h:435
	void DataPoint(const bool &, const bool &);

	// CgsSoundUtils.h:904
	const bool & GetCurrent() const;

	// CgsSoundUtils.h:911
	const bool & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const bool &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const bool &) const;

	// CgsSoundUtils.h:926
	bool GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(bool);

	// CgsSoundUtils.h:472
	void Flush(bool);

	// CgsSoundUtils.h:481
	const bool & operator[](int) const;

	// CgsSoundUtils.h:484
	bool operator bool() const;

	// CgsSoundUtils.h:492
	DataPoint<bool> & operator=(const bool &);

	// CgsSoundUtils.h:501
	DataPoint<bool> & operator=(const DataPoint<bool> &);

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundUtils.h:41
	namespace Utils {
		struct DataPoint<bool>;

		struct DataPoint<rw::math::vpu::Matrix44Affine>;

	}

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<rw::math::vpu::Matrix44Affine> {
private:
	// CgsSoundUtils.h:510
	Matrix44Affine mCurrentValue;

	// CgsSoundUtils.h:511
	Matrix44Affine mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const rw::math::vpu::Matrix44Affine &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<rw::math::vpu::Matrix44Affine> &);

	// CgsSoundUtils.h:435
	void DataPoint(const rw::math::vpu::Matrix44Affine &, const rw::math::vpu::Matrix44Affine &);

	// CgsSoundUtils.h:904
	const rw::math::vpu::Matrix44Affine & GetCurrent() const;

	// CgsSoundUtils.h:911
	const rw::math::vpu::Matrix44Affine & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const rw::math::vpu::Matrix44Affine &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const rw::math::vpu::Matrix44Affine &) const;

	// CgsSoundUtils.h:926
	Matrix44Affine GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(Matrix44Affine);

	// CgsSoundUtils.h:472
	void Flush(Matrix44Affine);

	// CgsSoundUtils.h:481
	const rw::math::vpu::Matrix44Affine & operator[](int) const;

	// CgsSoundUtils.h:484
	Matrix44Affine operator rw::math::vpu::Matrix44Affine() const;

	// CgsSoundUtils.h:492
	DataPoint<rw::math::vpu::Matrix44Affine> & operator=(const rw::math::vpu::Matrix44Affine &);

	// CgsSoundUtils.h:501
	DataPoint<rw::math::vpu::Matrix44Affine> & operator=(const DataPoint<rw::math::vpu::Matrix44Affine> &);

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundUtils.h:41
	namespace Utils {
	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundUtils.h:41
	namespace Utils {
		struct DataPoint<rw::math::vpu::Matrix44Affine>;

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundUtils.h:41
	namespace Utils {
		// Declaration
		struct Curve {
			// CgsSoundUtils.h:83
			enum ECurveType {
				E_LINEAR = 0,
				E_POWER = 1,
				E_EQ_PWR_SQ = 2,
				E_ONE_MINUS_EQPWR = 3,
				E_ONE_MINUS_EQPWR_SQ = 4,
			}

		}

		struct InterpolateLine;

		struct SlopeParams;

		struct Slope;

		struct Graph;

		struct MinMax;

		struct SqaureWave;

		struct DataPoint<bool>;

		struct AverageTraitsZero<rw::math::vpu::Vector3>;

		struct DataPoint<rw::math::vpu::Matrix44Affine>;

		struct DataPoint<CgsSound::Logic::State::EUpdateState>;

		struct DataPoint<BrnSound::Logic::EFatalityFlag>;

		struct DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>;

		struct DataPoint<float32_t>;

		struct DataPoint<rw::math::vpu::Vector3>;

		struct DataPoint<int32_t>;

		struct Average<5u,float32_t>;

		struct DataPoint<rw::math::vpu::Vector2>;

		struct Average<3u,float32_t>;

		// Declaration
		struct SelectionHistory<512u,uint16_t,uint16_t,65536ull> {
			// CgsSoundUtils.h:769
			struct Item {
				// CgsSoundUtils.h:770
				uint16_t mTimeStamp;

			public:
				// CgsSoundUtils.h:771
				Item();

			}

		}

		struct DataPoint<uint8_t>;

		struct PathLine<3u>;

		struct DataPoint<CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE>;

		struct DataPoint<BrnSound::EMusicType>;

		struct DataPoint<BrnSound::Logic::Collision::CollisionState::ELifetime>;

		struct DataPoint<BrnSound::Logic::Collision::ScrapeInfo>;

		struct Average<10u,float32_t>;

		struct Average<9u,float32_t>;

		struct Average<25u,float32_t>;

		struct Average<9u,rw::math::vpu::Vector3>;

		struct DataPoint<BrnSound::Vehicles::Engines::TurboEffect::eTurboState>;

		struct DataPoint<BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState>;

		struct PathLine<2u>;

		struct Average<4u,float32_t>;

		struct DataPoint<BrnSound::ECameraModes>;

		struct DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>;

		struct DataPoint<BrnSound::Logic::PresentationEffect::eMode>;

		struct AverageTraitsZero<float32_t>;

	}

}

// CgsSoundUtils.h:81
struct CgsSound::Utils::Curve {
public:
	// CgsSoundUtils.h:94
	int32_t GetOutput(int32_t, CgsSound::Utils::Curve::ECurveType);

	// CgsSoundUtils.h:99
	float32_t GetOutput(float32_t, CgsSound::Utils::Curve::ECurveType);

}

// CgsSoundUtils.h:195
struct CgsSound::Utils::InterpolateLine {
private:
	// CgsSoundUtils.h:243
	float32_t mfElapsedTime;

	// CgsSoundUtils.h:244
	float32_t mfLength;

	// CgsSoundUtils.h:245
	float32_t mfStart;

	// CgsSoundUtils.h:246
	float32_t mfFinish;

	// CgsSoundUtils.h:247
	CgsSound::Utils::Curve::ECurveType meCurveTypes;

	// CgsSoundUtils.h:249
	float32_t mfCurrentValue;

	// CgsSoundUtils.h:250
	bool mbComplete;

public:
	// CgsSoundUtils.h:198
	void InterpolateLine();

	// CgsSoundUtils.h:199
	void ~InterpolateLine();

	// CgsSoundUtils.h:204
	void Initialize(float32_t, float32_t, float32_t, CgsSound::Utils::Curve::ECurveType);

	// CgsSoundUtils.h:209
	void Reset(float32_t);

	// CgsSoundUtils.h:213
	float32_t GetValueFloat() const;

	// CgsSoundUtils.h:217
	int32_t GetValueInt() const;

	// CgsSoundUtils.h:221
	void Update(float32_t);

	// CgsSoundUtils.h:226
	void Update(float32_t, float32_t);

	// CgsSoundUtils.h:229
	bool IsFinished() const;

	// CgsSoundUtils.h:232
	float32_t GetElapsedTime() const;

	// CgsSoundUtils.h:235
	float32_t GetTotalDuration() const;

	// CgsSoundUtils.h:238
	float32_t GetTimeRemaining() const;

}

// CgsSoundUtils.h:258
struct CgsSound::Utils::SlopeParams {
	// CgsSoundUtils.h:287
	float32_t mfMinInput;

	// CgsSoundUtils.h:288
	float32_t mfMaxInput;

	// CgsSoundUtils.h:289
	float32_t mfMinOutput;

	// CgsSoundUtils.h:290
	float32_t mfMaxOutput;

public:
	// CgsSoundUtils.h:260
	void SlopeParams();

	// CgsSoundUtils.h:269
	void SlopeParams(float32_t, float32_t, float32_t, float32_t);

	// CgsSoundUtils.h:278
	void Reset();

}

// CgsSoundUtils.h:305
struct CgsSound::Utils::Slope {
private:
	// CgsSoundUtils.h:346
	SlopeParams mParams;

public:
	// CgsSoundUtils.h:307
	void Slope();

	// CgsSoundUtils.h:312
	void Slope(float32_t, float32_t, float32_t, float32_t);

	// CgsSoundUtils.h:317
	void Slope(const SlopeParams &);

	// CgsSoundUtils.h:320
	void ~Slope();

	// CgsSoundUtils.h:325
	float32_t GetValue(float32_t) const;

	// CgsSoundUtils.h:330
	float32_t GetValue(float32_t, CgsSound::Utils::Curve::ECurveType) const;

	// CgsSoundUtils.h:337
	void Initialize(float32_t, float32_t, float32_t, float32_t);

	// CgsSoundUtils.h:340
	void Initialize(const SlopeParams &);

	// CgsSoundUtils.h:343
	const SlopeParams & GetParams() const;

}

// CgsSoundUtils.h:387
struct CgsSound::Utils::Graph {
private:
	// CgsSoundUtils.h:400
	Vector2 * maPoints;

	// CgsSoundUtils.h:401
	uint8_t muNumOfPoints;

public:
	// CgsSoundUtils.h:391
	void Graph(Vector2 *, uint8_t);

	// CgsSoundUtils.h:395
	// Declaration
	float GetYValue(float32_t) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundUtils.cpp:662
		using namespace rw::math;

		// CgsSoundUtils.cpp:663
		using namespace rw::math::fpu;

	}

}

// CgsSoundUtils.h:526
struct CgsSound::Utils::MinMax {
	// CgsSoundUtils.h:542
	float32_t mfMin;

	// CgsSoundUtils.h:543
	float32_t mfMax;

public:
	// CgsSoundUtils.h:530
	void MinMax(float32_t, float32_t);

	// CgsSoundUtils.h:536
	void MinMax();

}

// CgsSoundUtils.h:557
struct CgsSound::Utils::SqaureWave {
private:
	// CgsSoundUtils.h:584
	MinMax mUpTimeWindow;

	// CgsSoundUtils.h:585
	MinMax mDownTimeWindow;

	// CgsSoundUtils.h:586
	float32_t mfTime;

	// CgsSoundUtils.h:587
	bool mbValueIsHigh;

	// CgsSoundUtils.h:589
	Random mRandom;

public:
	// CgsSoundUtils.h:559
	void SqaureWave();

	// CgsSoundUtils.h:569
	void Construct(uint64_t, MinMax, MinMax);

	// CgsSoundUtils.h:579
	CgsSound::Utils::DataPoint<bool> Update(float32_t);

}

// CgsSoundUtils.h:616
struct CgsSound::Utils::AverageTraitsZero<rw::math::vpu::Vector3> {
public:
	// CgsSoundUtils.h:618
	Vector3 GetZero();

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<CgsSound::Logic::State::EUpdateState> {
private:
	// CgsSoundUtils.h:510
	CgsSound::Logic::State::EUpdateState mCurrentValue;

	// CgsSoundUtils.h:511
	CgsSound::Logic::State::EUpdateState mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const CgsSound::Logic::State::EUpdateState &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<CgsSound::Logic::State::EUpdateState> &);

	// CgsSoundUtils.h:435
	void DataPoint(const CgsSound::Logic::State::EUpdateState &, const CgsSound::Logic::State::EUpdateState &);

	// CgsSoundUtils.h:904
	const CgsSound::Logic::State::EUpdateState & GetCurrent() const;

	// CgsSoundUtils.h:911
	const CgsSound::Logic::State::EUpdateState & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const CgsSound::Logic::State::EUpdateState &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const CgsSound::Logic::State::EUpdateState &) const;

	// CgsSoundUtils.h:926
	CgsSound::Logic::State::EUpdateState GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(CgsSound::Logic::State::EUpdateState);

	// CgsSoundUtils.h:472
	void Flush(CgsSound::Logic::State::EUpdateState);

	// CgsSoundUtils.h:481
	const CgsSound::Logic::State::EUpdateState & operator[](int) const;

	// CgsSoundUtils.h:484
	CgsSound::Logic::State::EUpdateState operator CgsSound::Logic::State::EUpdateState() const;

	// CgsSoundUtils.h:492
	DataPoint<CgsSound::Logic::State::EUpdateState> & operator=(const CgsSound::Logic::State::EUpdateState &);

	// CgsSoundUtils.h:501
	DataPoint<CgsSound::Logic::State::EUpdateState> & operator=(const DataPoint<CgsSound::Logic::State::EUpdateState> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<BrnSound::Logic::EFatalityFlag> {
private:
	// CgsSoundUtils.h:510
	BrnSound::Logic::EFatalityFlag mCurrentValue;

	// CgsSoundUtils.h:511
	BrnSound::Logic::EFatalityFlag mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const BrnSound::Logic::EFatalityFlag &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<BrnSound::Logic::EFatalityFlag> &);

	// CgsSoundUtils.h:435
	void DataPoint(const BrnSound::Logic::EFatalityFlag &, const BrnSound::Logic::EFatalityFlag &);

	// CgsSoundUtils.h:904
	const BrnSound::Logic::EFatalityFlag & GetCurrent() const;

	// CgsSoundUtils.h:911
	const BrnSound::Logic::EFatalityFlag & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const BrnSound::Logic::EFatalityFlag &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const BrnSound::Logic::EFatalityFlag &) const;

	// CgsSoundUtils.h:926
	BrnSound::Logic::EFatalityFlag GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(BrnSound::Logic::EFatalityFlag);

	// CgsSoundUtils.h:472
	void Flush(BrnSound::Logic::EFatalityFlag);

	// CgsSoundUtils.h:481
	const BrnSound::Logic::EFatalityFlag & operator[](int) const;

	// CgsSoundUtils.h:484
	BrnSound::Logic::EFatalityFlag operator BrnSound::Logic::EFatalityFlag() const;

	// CgsSoundUtils.h:492
	DataPoint<BrnSound::Logic::EFatalityFlag> & operator=(const BrnSound::Logic::EFatalityFlag &);

	// CgsSoundUtils.h:501
	DataPoint<BrnSound::Logic::EFatalityFlag> & operator=(const DataPoint<BrnSound::Logic::EFatalityFlag> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<AttribSys::Enums::eImpactTime::eImpactTime> {
	// eImpactTime.h:22
	typedef AttribSys::Enums::eImpactTime::eImpactTime EeImpactTime;

private:
	// CgsSoundUtils.h:510
	DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime mCurrentValue;

	// CgsSoundUtils.h:511
	DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime> &);

	// CgsSoundUtils.h:435
	void DataPoint(const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime &, const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime &);

	// CgsSoundUtils.h:904
	const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime & GetCurrent() const;

	// CgsSoundUtils.h:911
	const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime &) const;

	// CgsSoundUtils.h:926
	DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(AttribSys::Enums::eImpactTime::eImpactTime);

	// CgsSoundUtils.h:472
	void Flush(AttribSys::Enums::eImpactTime::eImpactTime);

	// CgsSoundUtils.h:481
	const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime & operator[](int) const;

	// CgsSoundUtils.h:484
	DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime operator AttribSys::Enums::EeImpactTime() const;

	// CgsSoundUtils.h:492
	DataPoint<AttribSys::Enums::eImpactTime::eImpactTime> & operator=(const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime &);

	// CgsSoundUtils.h:501
	DataPoint<AttribSys::Enums::eImpactTime::eImpactTime> & operator=(const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<float32_t> {
private:
	// CgsSoundUtils.h:510
	float32_t mCurrentValue;

	// CgsSoundUtils.h:511
	float32_t mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const float32_t &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<float32_t> &);

	// CgsSoundUtils.h:435
	void DataPoint(const float32_t &, const float32_t &);

	// CgsSoundUtils.h:904
	const float32_t & GetCurrent() const;

	// CgsSoundUtils.h:911
	const float32_t & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const float32_t &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const float32_t &) const;

	// CgsSoundUtils.h:926
	float32_t GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(float);

	// CgsSoundUtils.h:472
	void Flush(float);

	// CgsSoundUtils.h:481
	const float32_t & operator[](int) const;

	// CgsSoundUtils.h:484
	float32_t operator float32_t() const;

	// CgsSoundUtils.h:492
	DataPoint<float32_t> & operator=(const float32_t &);

	// CgsSoundUtils.h:501
	DataPoint<float32_t> & operator=(const DataPoint<float32_t> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<rw::math::vpu::Vector3> {
private:
	// CgsSoundUtils.h:510
	Vector3 mCurrentValue;

	// CgsSoundUtils.h:511
	Vector3 mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const rw::math::vpu::Vector3 &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<rw::math::vpu::Vector3> &);

	// CgsSoundUtils.h:435
	void DataPoint(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &);

	// CgsSoundUtils.h:904
	const rw::math::vpu::Vector3 & GetCurrent() const;

	// CgsSoundUtils.h:911
	const rw::math::vpu::Vector3 & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const rw::math::vpu::Vector3 &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const rw::math::vpu::Vector3 &) const;

	// CgsSoundUtils.h:926
	Vector3 GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(Vector3);

	// CgsSoundUtils.h:472
	void Flush(Vector3);

	// CgsSoundUtils.h:481
	const rw::math::vpu::Vector3 & operator[](int) const;

	// CgsSoundUtils.h:484
	Vector3 operator rw::math::vpu::Vector3() const;

	// CgsSoundUtils.h:492
	DataPoint<rw::math::vpu::Vector3> & operator=(const rw::math::vpu::Vector3 &);

	// CgsSoundUtils.h:501
	DataPoint<rw::math::vpu::Vector3> & operator=(const DataPoint<rw::math::vpu::Vector3> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<int32_t> {
private:
	// CgsSoundUtils.h:510
	int32_t mCurrentValue;

	// CgsSoundUtils.h:511
	int32_t mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const int32_t &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<int32_t> &);

	// CgsSoundUtils.h:435
	void DataPoint(const int32_t &, const int32_t &);

	// CgsSoundUtils.h:904
	const int32_t & GetCurrent() const;

	// CgsSoundUtils.h:911
	const int32_t & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const int32_t &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const int32_t &) const;

	// CgsSoundUtils.h:926
	int32_t GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(int);

	// CgsSoundUtils.h:472
	void Flush(int);

	// CgsSoundUtils.h:481
	const int32_t & operator[](int) const;

	// CgsSoundUtils.h:484
	int32_t operator int32_t() const;

	// CgsSoundUtils.h:492
	DataPoint<int32_t> & operator=(const int32_t &);

	// CgsSoundUtils.h:501
	DataPoint<int32_t> & operator=(const DataPoint<int32_t> &);

}

// CgsSoundUtils.h:627
struct CgsSound::Utils::Average<5u,float32_t> {
private:
	// CgsSoundUtils.h:643
	float32_t[5] maPoints;

	// CgsSoundUtils.h:644
	uint8_t muNextPoint;

	// CgsSoundUtils.h:645
	float32_t mfAverage;

public:
	// CgsSoundUtils.h:629
	void Average();

	// CgsSoundUtils.h:633
	void Record(float);

	// CgsSoundUtils.h:935
	float32_t GetAverage() const;

	// CgsSoundUtils.h:640
	void Flush(float);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<rw::math::vpu::Vector2> {
private:
	// CgsSoundUtils.h:510
	Vector2 mCurrentValue;

	// CgsSoundUtils.h:511
	Vector2 mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const rw::math::vpu::Vector2 &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<rw::math::vpu::Vector2> &);

	// CgsSoundUtils.h:435
	void DataPoint(const rw::math::vpu::Vector2 &, const rw::math::vpu::Vector2 &);

	// CgsSoundUtils.h:904
	const rw::math::vpu::Vector2 & GetCurrent() const;

	// CgsSoundUtils.h:911
	const rw::math::vpu::Vector2 & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const rw::math::vpu::Vector2 &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const rw::math::vpu::Vector2 &) const;

	// CgsSoundUtils.h:926
	Vector2 GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(Vector2);

	// CgsSoundUtils.h:472
	void Flush(Vector2);

	// CgsSoundUtils.h:481
	const rw::math::vpu::Vector2 & operator[](int) const;

	// CgsSoundUtils.h:484
	Vector2 operator rw::math::vpu::Vector2() const;

	// CgsSoundUtils.h:492
	DataPoint<rw::math::vpu::Vector2> & operator=(const rw::math::vpu::Vector2 &);

	// CgsSoundUtils.h:501
	DataPoint<rw::math::vpu::Vector2> & operator=(const DataPoint<rw::math::vpu::Vector2> &);

}

// CgsSoundUtils.h:627
struct CgsSound::Utils::Average<3u,float32_t> {
private:
	// CgsSoundUtils.h:643
	float32_t[3] maPoints;

	// CgsSoundUtils.h:644
	uint8_t muNextPoint;

	// CgsSoundUtils.h:645
	float32_t mfAverage;

public:
	// CgsSoundUtils.h:629
	void Average();

	// CgsSoundUtils.h:633
	void Record(float);

	// CgsSoundUtils.h:935
	float32_t GetAverage() const;

	// CgsSoundUtils.h:640
	void Flush(float);

}

// CgsSoundUtils.h:661
struct CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull> {
	// CgsSoundUtils.h:663
	extern const uint32_t KU_SIZE = 512;

private:
	// CgsSoundUtils.h:791
	uint16_t mCurrentTimeStamp;

	// CgsSoundUtils.h:792
	Random mRandom;

	// CgsSoundUtils.h:793
	CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull>::Item[512] maHistory;

	// Unknown accessibility
	struct FindResult;

public:
	// CgsSoundUtils.h:665
	void SelectionHistory();

	// CgsSoundUtils.h:673
	uint16_t FindOldest() const;

	// CgsSoundUtils.h:735
	void Randomize(unsigned int);

	// CgsSoundUtils.h:754
	void Update(short unsigned int);

private:
	// CgsSoundUtils.h:786
	bool LessThanTimeStamp(const SelectionHistory<512u,uint16_t,uint16_t,65536ull>::FindResult &, const SelectionHistory<512u,uint16_t,uint16_t,65536ull>::FindResult &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<uint8_t> {
private:
	// CgsSoundUtils.h:510
	uint8_t mCurrentValue;

	// CgsSoundUtils.h:511
	uint8_t mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const uint8_t &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<uint8_t> &);

	// CgsSoundUtils.h:435
	void DataPoint(const uint8_t &, const uint8_t &);

	// CgsSoundUtils.h:904
	const uint8_t & GetCurrent() const;

	// CgsSoundUtils.h:911
	const uint8_t & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const uint8_t &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const uint8_t &) const;

	// CgsSoundUtils.h:926
	uint8_t GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(unsigned char);

	// CgsSoundUtils.h:472
	void Flush(unsigned char);

	// CgsSoundUtils.h:481
	const uint8_t & operator[](int) const;

	// CgsSoundUtils.h:484
	uint8_t operator uint8_t() const;

	// CgsSoundUtils.h:492
	DataPoint<uint8_t> & operator=(const uint8_t &);

	// CgsSoundUtils.h:501
	DataPoint<uint8_t> & operator=(const DataPoint<uint8_t> &);

}

// CgsSoundUtils.h:117
struct CgsSound::Utils::PathLine<3u> {
private:
	// CgsSoundUtils.h:170
	float32_t[3] maLength;

	// CgsSoundUtils.h:171
	float32_t[3] maStart;

	// CgsSoundUtils.h:172
	float32_t[3] maFinish;

	// CgsSoundUtils.h:173
	bool[3] maIsLinked;

	// CgsSoundUtils.h:174
	CgsSound::Utils::Curve::ECurveType[3] maCurveTypes;

	// CgsSoundUtils.h:176
	int32_t mnNumStages;

	// CgsSoundUtils.h:177
	int32_t mnCurrentStage;

	// CgsSoundUtils.h:178
	float32_t mfElapsedTime;

	// CgsSoundUtils.h:180
	float32_t mfCurrentValue;

	// CgsSoundUtils.h:181
	bool mbComplete;

public:
	// CgsSoundUtils.h:120
	void PathLine();

	// CgsSoundUtils.h:121
	void ~PathLine();

	// CgsSoundUtils.h:127
	void Initialize(float, float, float, CgsSound::Utils::Curve::ECurveType);

	// CgsSoundUtils.h:130
	void ClearStages();

	// CgsSoundUtils.h:137
	int32_t AddStage(float, float, float, CgsSound::Utils::Curve::ECurveType);

	// CgsSoundUtils.h:142
	int32_t AddLinkedStage(float, float, CgsSound::Utils::Curve::ECurveType);

	// CgsSoundUtils.h:146
	void Reset();

	// CgsSoundUtils.h:821
	float32_t GetValueFloat() const;

	// CgsSoundUtils.h:827
	int32_t GetValueInt() const;

	// CgsSoundUtils.h:155
	void Update(float);

	// CgsSoundUtils.h:159
	void Update(float, float);

	// CgsSoundUtils.h:814
	bool IsFinished() const;

	// CgsSoundUtils.h:808
	int32_t GetStageNumber() const;

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE> {
private:
	// CgsSoundUtils.h:510
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE mCurrentValue;

	// CgsSoundUtils.h:511
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE> &);

	// CgsSoundUtils.h:435
	void DataPoint(const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE &, const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE &);

	// CgsSoundUtils.h:904
	const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE & GetCurrent() const;

	// CgsSoundUtils.h:911
	const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE &) const;

	// CgsSoundUtils.h:926
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE);

	// CgsSoundUtils.h:472
	void Flush(CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE);

	// CgsSoundUtils.h:481
	const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE & operator[](int) const;

	// CgsSoundUtils.h:484
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE operator CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE() const;

	// CgsSoundUtils.h:492
	DataPoint<CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE> & operator=(const CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE &);

	// CgsSoundUtils.h:501
	DataPoint<CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE> & operator=(const DataPoint<CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<BrnSound::EMusicType> {
private:
	// CgsSoundUtils.h:510
	BrnSound::EMusicType mCurrentValue;

	// CgsSoundUtils.h:511
	BrnSound::EMusicType mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const BrnSound::EMusicType &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<BrnSound::EMusicType> &);

	// CgsSoundUtils.h:435
	void DataPoint(const BrnSound::EMusicType &, const BrnSound::EMusicType &);

	// CgsSoundUtils.h:904
	const BrnSound::EMusicType & GetCurrent() const;

	// CgsSoundUtils.h:911
	const BrnSound::EMusicType & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const BrnSound::EMusicType &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const BrnSound::EMusicType &) const;

	// CgsSoundUtils.h:926
	BrnSound::EMusicType GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(BrnSound::EMusicType);

	// CgsSoundUtils.h:472
	void Flush(BrnSound::EMusicType);

	// CgsSoundUtils.h:481
	const BrnSound::EMusicType & operator[](int) const;

	// CgsSoundUtils.h:484
	BrnSound::EMusicType operator BrnSound::EMusicType() const;

	// CgsSoundUtils.h:492
	DataPoint<BrnSound::EMusicType> & operator=(const BrnSound::EMusicType &);

	// CgsSoundUtils.h:501
	DataPoint<BrnSound::EMusicType> & operator=(const DataPoint<BrnSound::EMusicType> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<BrnSound::Logic::Collision::CollisionState::ELifetime> {
private:
	// CgsSoundUtils.h:510
	BrnSound::Logic::Collision::CollisionState::ELifetime mCurrentValue;

	// CgsSoundUtils.h:511
	BrnSound::Logic::Collision::CollisionState::ELifetime mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const BrnSound::Logic::Collision::CollisionState::ELifetime &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<BrnSound::Logic::Collision::CollisionState::ELifetime> &);

	// CgsSoundUtils.h:435
	void DataPoint(const BrnSound::Logic::Collision::CollisionState::ELifetime &, const BrnSound::Logic::Collision::CollisionState::ELifetime &);

	// CgsSoundUtils.h:904
	const BrnSound::Logic::Collision::CollisionState::ELifetime & GetCurrent() const;

	// CgsSoundUtils.h:911
	const BrnSound::Logic::Collision::CollisionState::ELifetime & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const BrnSound::Logic::Collision::CollisionState::ELifetime &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const BrnSound::Logic::Collision::CollisionState::ELifetime &) const;

	// CgsSoundUtils.h:926
	BrnSound::Logic::Collision::CollisionState::ELifetime GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(BrnSound::Logic::Collision::CollisionState::ELifetime);

	// CgsSoundUtils.h:472
	void Flush(BrnSound::Logic::Collision::CollisionState::ELifetime);

	// CgsSoundUtils.h:481
	const BrnSound::Logic::Collision::CollisionState::ELifetime & operator[](int) const;

	// CgsSoundUtils.h:484
	BrnSound::Logic::Collision::CollisionState::ELifetime operator BrnSound::Logic::Collision::CollisionState::ELifetime() const;

	// CgsSoundUtils.h:492
	DataPoint<BrnSound::Logic::Collision::CollisionState::ELifetime> & operator=(const BrnSound::Logic::Collision::CollisionState::ELifetime &);

	// CgsSoundUtils.h:501
	DataPoint<BrnSound::Logic::Collision::CollisionState::ELifetime> & operator=(const DataPoint<BrnSound::Logic::Collision::CollisionState::ELifetime> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<BrnSound::Logic::Collision::ScrapeInfo> {
private:
	// CgsSoundUtils.h:510
	ScrapeInfo mCurrentValue;

	// CgsSoundUtils.h:511
	ScrapeInfo mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const ScrapeInfo &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<BrnSound::Logic::Collision::ScrapeInfo> &);

	// CgsSoundUtils.h:435
	void DataPoint(const ScrapeInfo &, const ScrapeInfo &);

	// CgsSoundUtils.h:904
	const ScrapeInfo & GetCurrent() const;

	// CgsSoundUtils.h:911
	const ScrapeInfo & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const ScrapeInfo &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const ScrapeInfo &) const;

	// CgsSoundUtils.h:926
	ScrapeInfo GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(ScrapeInfo);

	// CgsSoundUtils.h:472
	void Flush(ScrapeInfo);

	// CgsSoundUtils.h:481
	const ScrapeInfo & operator[](int) const;

	// CgsSoundUtils.h:484
	ScrapeInfo operator BrnSound::Logic::Collision::ScrapeInfo() const;

	// CgsSoundUtils.h:492
	DataPoint<BrnSound::Logic::Collision::ScrapeInfo> & operator=(const ScrapeInfo &);

	// CgsSoundUtils.h:501
	DataPoint<BrnSound::Logic::Collision::ScrapeInfo> & operator=(const DataPoint<BrnSound::Logic::Collision::ScrapeInfo> &);

}

// CgsSoundUtils.h:627
struct CgsSound::Utils::Average<10u,float32_t> {
private:
	// CgsSoundUtils.h:643
	float32_t[10] maPoints;

	// CgsSoundUtils.h:644
	uint8_t muNextPoint;

	// CgsSoundUtils.h:645
	float32_t mfAverage;

public:
	// CgsSoundUtils.h:629
	void Average();

	// CgsSoundUtils.h:633
	void Record(float);

	// CgsSoundUtils.h:935
	float32_t GetAverage() const;

	// CgsSoundUtils.h:640
	void Flush(float);

}

// CgsSoundUtils.h:627
struct CgsSound::Utils::Average<9u,float32_t> {
private:
	// CgsSoundUtils.h:643
	float32_t[9] maPoints;

	// CgsSoundUtils.h:644
	uint8_t muNextPoint;

	// CgsSoundUtils.h:645
	float32_t mfAverage;

public:
	// CgsSoundUtils.h:629
	void Average();

	// CgsSoundUtils.h:633
	void Record(float);

	// CgsSoundUtils.h:935
	float32_t GetAverage() const;

	// CgsSoundUtils.h:640
	void Flush(float);

}

// CgsSoundUtils.h:627
struct CgsSound::Utils::Average<25u,float32_t> {
private:
	// CgsSoundUtils.h:643
	float32_t[25] maPoints;

	// CgsSoundUtils.h:644
	uint8_t muNextPoint;

	// CgsSoundUtils.h:645
	float32_t mfAverage;

public:
	// CgsSoundUtils.h:629
	void Average();

	// CgsSoundUtils.h:633
	void Record(float);

	// CgsSoundUtils.h:935
	float32_t GetAverage() const;

	// CgsSoundUtils.h:640
	void Flush(float);

}

// CgsSoundUtils.h:627
struct CgsSound::Utils::Average<9u,rw::math::vpu::Vector3> {
private:
	// CgsSoundUtils.h:643
	Vector3[9] maPoints;

	// CgsSoundUtils.h:644
	uint8_t muNextPoint;

	// CgsSoundUtils.h:645
	Vector3 mfAverage;

public:
	// CgsSoundUtils.h:629
	void Average();

	// CgsSoundUtils.h:633
	void Record(Vector3);

	// CgsSoundUtils.h:935
	Vector3 GetAverage() const;

	// CgsSoundUtils.h:640
	void Flush(Vector3);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<BrnSound::Vehicles::Engines::TurboEffect::eTurboState> {
private:
	// CgsSoundUtils.h:510
	BrnSound::Vehicles::Engines::TurboEffect::eTurboState mCurrentValue;

	// CgsSoundUtils.h:511
	BrnSound::Vehicles::Engines::TurboEffect::eTurboState mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const BrnSound::Vehicles::Engines::TurboEffect::eTurboState &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<BrnSound::Vehicles::Engines::TurboEffect::eTurboState> &);

	// CgsSoundUtils.h:435
	void DataPoint(const BrnSound::Vehicles::Engines::TurboEffect::eTurboState &, const BrnSound::Vehicles::Engines::TurboEffect::eTurboState &);

	// CgsSoundUtils.h:904
	const BrnSound::Vehicles::Engines::TurboEffect::eTurboState & GetCurrent() const;

	// CgsSoundUtils.h:911
	const BrnSound::Vehicles::Engines::TurboEffect::eTurboState & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const BrnSound::Vehicles::Engines::TurboEffect::eTurboState &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const BrnSound::Vehicles::Engines::TurboEffect::eTurboState &) const;

	// CgsSoundUtils.h:926
	BrnSound::Vehicles::Engines::TurboEffect::eTurboState GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(BrnSound::Vehicles::Engines::TurboEffect::eTurboState);

	// CgsSoundUtils.h:472
	void Flush(BrnSound::Vehicles::Engines::TurboEffect::eTurboState);

	// CgsSoundUtils.h:481
	const BrnSound::Vehicles::Engines::TurboEffect::eTurboState & operator[](int) const;

	// CgsSoundUtils.h:484
	BrnSound::Vehicles::Engines::TurboEffect::eTurboState operator BrnSound::Vehicles::Engines::TurboEffect::eTurboState() const;

	// CgsSoundUtils.h:492
	DataPoint<BrnSound::Vehicles::Engines::TurboEffect::eTurboState> & operator=(const BrnSound::Vehicles::Engines::TurboEffect::eTurboState &);

	// CgsSoundUtils.h:501
	DataPoint<BrnSound::Vehicles::Engines::TurboEffect::eTurboState> & operator=(const DataPoint<BrnSound::Vehicles::Engines::TurboEffect::eTurboState> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState> {
private:
	// CgsSoundUtils.h:510
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState mCurrentValue;

	// CgsSoundUtils.h:511
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState> &);

	// CgsSoundUtils.h:435
	void DataPoint(const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState &, const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState &);

	// CgsSoundUtils.h:904
	const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState & GetCurrent() const;

	// CgsSoundUtils.h:911
	const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState &) const;

	// CgsSoundUtils.h:926
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState);

	// CgsSoundUtils.h:472
	void Flush(BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState);

	// CgsSoundUtils.h:481
	const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState & operator[](int) const;

	// CgsSoundUtils.h:484
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState operator BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState() const;

	// CgsSoundUtils.h:492
	DataPoint<BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState> & operator=(const BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState &);

	// CgsSoundUtils.h:501
	DataPoint<BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState> & operator=(const DataPoint<BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState> &);

}

// CgsSoundUtils.h:117
struct CgsSound::Utils::PathLine<2u> {
private:
	// CgsSoundUtils.h:170
	float32_t[2] maLength;

	// CgsSoundUtils.h:171
	float32_t[2] maStart;

	// CgsSoundUtils.h:172
	float32_t[2] maFinish;

	// CgsSoundUtils.h:173
	bool[2] maIsLinked;

	// CgsSoundUtils.h:174
	CgsSound::Utils::Curve::ECurveType[2] maCurveTypes;

	// CgsSoundUtils.h:176
	int32_t mnNumStages;

	// CgsSoundUtils.h:177
	int32_t mnCurrentStage;

	// CgsSoundUtils.h:178
	float32_t mfElapsedTime;

	// CgsSoundUtils.h:180
	float32_t mfCurrentValue;

	// CgsSoundUtils.h:181
	bool mbComplete;

public:
	// CgsSoundUtils.h:120
	void PathLine();

	// CgsSoundUtils.h:121
	void ~PathLine();

	// CgsSoundUtils.h:127
	void Initialize(float, float, float, CgsSound::Utils::Curve::ECurveType);

	// CgsSoundUtils.h:130
	void ClearStages();

	// CgsSoundUtils.h:137
	int32_t AddStage(float, float, float, CgsSound::Utils::Curve::ECurveType);

	// CgsSoundUtils.h:142
	int32_t AddLinkedStage(float, float, CgsSound::Utils::Curve::ECurveType);

	// CgsSoundUtils.h:146
	void Reset();

	// CgsSoundUtils.h:821
	float32_t GetValueFloat() const;

	// CgsSoundUtils.h:827
	int32_t GetValueInt() const;

	// CgsSoundUtils.h:155
	void Update(float);

	// CgsSoundUtils.h:159
	void Update(float, float);

	// CgsSoundUtils.h:814
	bool IsFinished() const;

	// CgsSoundUtils.h:808
	int32_t GetStageNumber() const;

}

// CgsSoundUtils.h:627
struct CgsSound::Utils::Average<4u,float32_t> {
private:
	// CgsSoundUtils.h:643
	float32_t[4] maPoints;

	// CgsSoundUtils.h:644
	uint8_t muNextPoint;

	// CgsSoundUtils.h:645
	float32_t mfAverage;

public:
	// CgsSoundUtils.h:629
	void Average();

	// CgsSoundUtils.h:633
	void Record(float);

	// CgsSoundUtils.h:935
	float32_t GetAverage() const;

	// CgsSoundUtils.h:640
	void Flush(float);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<BrnSound::ECameraModes> {
private:
	// CgsSoundUtils.h:510
	BrnSound::ECameraModes mCurrentValue;

	// CgsSoundUtils.h:511
	BrnSound::ECameraModes mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const BrnSound::ECameraModes &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<BrnSound::ECameraModes> &);

	// CgsSoundUtils.h:435
	void DataPoint(const BrnSound::ECameraModes &, const BrnSound::ECameraModes &);

	// CgsSoundUtils.h:904
	const BrnSound::ECameraModes & GetCurrent() const;

	// CgsSoundUtils.h:911
	const BrnSound::ECameraModes & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const BrnSound::ECameraModes &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const BrnSound::ECameraModes &) const;

	// CgsSoundUtils.h:926
	BrnSound::ECameraModes GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(BrnSound::ECameraModes);

	// CgsSoundUtils.h:472
	void Flush(BrnSound::ECameraModes);

	// CgsSoundUtils.h:481
	const BrnSound::ECameraModes & operator[](int) const;

	// CgsSoundUtils.h:484
	BrnSound::ECameraModes operator BrnSound::ECameraModes() const;

	// CgsSoundUtils.h:492
	DataPoint<BrnSound::ECameraModes> & operator=(const BrnSound::ECameraModes &);

	// CgsSoundUtils.h:501
	DataPoint<BrnSound::ECameraModes> & operator=(const DataPoint<BrnSound::ECameraModes> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes> {
	// eReverbTypes.h:31
	typedef AttribSys::Enums::eReverbTypes::eReverbTypes EeReverbTypes;

private:
	// CgsSoundUtils.h:510
	DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes mCurrentValue;

	// CgsSoundUtils.h:511
	DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes> &);

	// CgsSoundUtils.h:435
	void DataPoint(const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes &, const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes &);

	// CgsSoundUtils.h:904
	const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes & GetCurrent() const;

	// CgsSoundUtils.h:911
	const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes &) const;

	// CgsSoundUtils.h:926
	DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(AttribSys::Enums::eReverbTypes::eReverbTypes);

	// CgsSoundUtils.h:472
	void Flush(AttribSys::Enums::eReverbTypes::eReverbTypes);

	// CgsSoundUtils.h:481
	const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes & operator[](int) const;

	// CgsSoundUtils.h:484
	DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes operator AttribSys::Enums::EeReverbTypes() const;

	// CgsSoundUtils.h:492
	DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes> & operator=(const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes &);

	// CgsSoundUtils.h:501
	DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes> & operator=(const DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes> &);

}

// CgsSoundUtils.h:417
struct CgsSound::Utils::DataPoint<BrnSound::Logic::PresentationEffect::eMode> {
private:
	// CgsSoundUtils.h:510
	BrnSound::Logic::PresentationEffect::eMode mCurrentValue;

	// CgsSoundUtils.h:511
	BrnSound::Logic::PresentationEffect::eMode mPreviousValue;

public:
	// CgsSoundUtils.h:420
	void DataPoint();

	// CgsSoundUtils.h:425
	void DataPoint(const BrnSound::Logic::PresentationEffect::eMode &);

	// CgsSoundUtils.h:430
	void DataPoint(const DataPoint<BrnSound::Logic::PresentationEffect::eMode> &);

	// CgsSoundUtils.h:435
	void DataPoint(const BrnSound::Logic::PresentationEffect::eMode &, const BrnSound::Logic::PresentationEffect::eMode &);

	// CgsSoundUtils.h:904
	const BrnSound::Logic::PresentationEffect::eMode & GetCurrent() const;

	// CgsSoundUtils.h:911
	const BrnSound::Logic::PresentationEffect::eMode & GetPrevious() const;

	// CgsSoundUtils.h:918
	bool HasChanged() const;

	// CgsSoundUtils.h:451
	bool HasChangedTo(const BrnSound::Logic::PresentationEffect::eMode &) const;

	// CgsSoundUtils.h:458
	bool HasChangedFrom(const BrnSound::Logic::PresentationEffect::eMode &) const;

	// CgsSoundUtils.h:926
	BrnSound::Logic::PresentationEffect::eMode GetDelta() const;

	// CgsSoundUtils.h:896
	void Update(BrnSound::Logic::PresentationEffect::eMode);

	// CgsSoundUtils.h:472
	void Flush(BrnSound::Logic::PresentationEffect::eMode);

	// CgsSoundUtils.h:481
	const BrnSound::Logic::PresentationEffect::eMode & operator[](int) const;

	// CgsSoundUtils.h:484
	BrnSound::Logic::PresentationEffect::eMode operator BrnSound::Logic::PresentationEffect::eMode() const;

	// CgsSoundUtils.h:492
	DataPoint<BrnSound::Logic::PresentationEffect::eMode> & operator=(const BrnSound::Logic::PresentationEffect::eMode &);

	// CgsSoundUtils.h:501
	DataPoint<BrnSound::Logic::PresentationEffect::eMode> & operator=(const DataPoint<BrnSound::Logic::PresentationEffect::eMode> &);

}

// CgsSoundUtils.h:607
struct CgsSound::Utils::AverageTraitsZero<float32_t> {
public:
	// CgsSoundUtils.h:609
	float32_t GetZero();

}

// CgsSoundUtils.h:774
struct CgsSound::Utils::SelectionHistory<512u,uint16_t,uint16_t,65536ull>::FindResult {
	// CgsSoundUtils.h:775
	uint16_t mTimeStamp;

	// CgsSoundUtils.h:776
	uint16_t mIndex;

public:
	// CgsSoundUtils.h:778
	void FindResult();

}

// CgsSoundUtils.h:712
extern uint16_t FindRandomOldest<uint16_t, 32u>(const uint16_t *  lpaItems, uint16_t  luNumOfItems) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundUtils.h:716
		FindResult[32] laOldest;

		// CgsSoundUtils.h:727
		uint16_t luRandomIndex;

		// CgsSoundUtils.h:728
		uint16_t luRandomOldest;

		{
			// CgsSoundUtils.h:717
			uint16_t i;

		}
	}
}

// CgsSoundUtils.h:663
extern const uint32_t KU_SIZE = 512;

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundUtils.h:41
	namespace Utils {
		struct DataPoint<bool>;

		struct DataPoint<rw::math::vpu::Matrix44Affine>;

		struct DataPoint<BrnSound::Logic::EFatalityFlag>;

		struct DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>;

	}

}

