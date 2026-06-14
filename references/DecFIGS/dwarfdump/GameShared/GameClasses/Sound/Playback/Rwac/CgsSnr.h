// CgsSnr.h:52
struct CgsSound::Playback::Snr {
private:
	// CgsSnr.h:75
	void * mpvSnr;

	// CgsSnr.h:76
	int32_t miSnrSize;

public:
	// CgsSnr.h:61
	void Construct(void *, int32_t);

	// CgsSnr.h:64
	void Destruct();

	// CgsSnr.h:68
	void * GetSnr() const;

	// CgsSnr.h:71
	int32_t GetSnrSize() const;

}

