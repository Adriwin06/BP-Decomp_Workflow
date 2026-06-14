// CgsFrameRateTypeRequestInterface.h:35
struct CgsSystem::FrameRateTypeRequestInterface {
private:
	// CgsFrameRateTypeRequestInterface.h:62
	CgsSystem::EFrameRateManagerType meRequestedFrameRateType;

	// CgsFrameRateTypeRequestInterface.h:63
	bool mbIsFrameRateTypeChangeRequested;

public:
	// CgsFrameRateTypeRequestInterface.h:40
	void Clear();

	// CgsFrameRateTypeRequestInterface.h:44
	bool IsFrameRateTypeChangeRequested() const;

	// CgsFrameRateTypeRequestInterface.h:48
	CgsSystem::EFrameRateManagerType GetRequestedFrameRateTypeChange() const;

	// CgsFrameRateTypeRequestInterface.h:53
	void RequestFrameRateTypeChange(CgsSystem::EFrameRateManagerType);

	// CgsFrameRateTypeRequestInterface.h:58
	void Append(const FrameRateTypeRequestInterface &);

}

