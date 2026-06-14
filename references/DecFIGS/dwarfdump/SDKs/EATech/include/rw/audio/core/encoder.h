// encoder.h:20
struct rw::audio::core::EncoderDesc {
	// encoder.h:21
	DecoderDesc::Guid guid;

	// encoder.h:23
	rw::audio::core::Encoder *(*)(int, int, System *) CreateInstance;

	// encoder.h:24
	void * listNode;

	// encoder.h:25
	short unsigned int maxLatency;

	// encoder.h:26
	unsigned char seekDataVersion;

	// encoder.h:27
	bool isSeekable;

}

// encoder.h:379
struct rw::audio::core::EncoderExtended {
private:
	// encoder.h:672
	rw::audio::core::Encoder * mpEncoder;

public:
	// encoder.h:411
	int Encode(float *, unsigned char *, int, int *, void *, int *);

	// encoder.h:443
	int Encode(short int **, unsigned char *, int, int *, void *, int *);

	// encoder.h:458
	int Flush(unsigned char *, int *, void *, int *);

	// encoder.h:479
	int GetDataRateOverhead();

	// encoder.h:502
	float GetAverageDataRate();

	// encoder.h:521
	int GetEncodeMemoryRequired(int);

	// encoder.h:542
	int GetSeekMemoryRequired(int);

	// encoder.h:561
	bool IsSeekable();

	// encoder.h:579
	int GetSeekDataVersion();

	// encoder.h:601
	short unsigned int GetMaxLatency();

	// encoder.h:618
	void SetVbrQuality(float);

	// encoder.h:633
	void SetCbrRate(int);

	// encoder.h:649
	void Release();

protected:
	// encoder.h:652
	void TranslateS16ToF32(short int **, float *, int, int);

	// encoder.h:654
	void SetEncoder(rw::audio::core::Encoder *);

	// encoder.h:659
	rw::audio::core::Encoder * GetEncoder();

private:
	// encoder.h:666
	EncoderExtended * CreateInstance(System *);

	// encoder.h:670
	void ~EncoderExtended();

}

