// BrnOverlayComponent.h:55
struct BrnGui::OverlayComponent : public BrnFlaptComponent {
private:
	// BrnOverlayComponent.h:96
	MovieClipRef mTransitionMovieClipRef;

	// BrnOverlayComponent.h:97
	bool mbTransitionComplete;

public:
	// BrnOverlayComponent.h:63
	void Construct(const void *, StateInterface *, const void *);

	// BrnOverlayComponent.h:68
	void Prepare(const char *, const BrnFlapt::FileRef &, const char *);

	// BrnOverlayComponent.h:73
	void RunOverlay(const char *, const char *);

	// BrnOverlayComponent.h:78
	void RunOverlay(const char *);

	// BrnOverlayComponent.h:81
	bool GetTransitionComplete();

	// BrnOverlayComponent.h:84
	void SetTransitionComplete(bool);

	// BrnOverlayComponent.h:87
	BrnFlapt::MovieClipRef * GetTransitionMovieClipRef();

private:
	// BrnOverlayComponent.h:94
	void TransitionCompleteCallback(void *, uint16_t);

}

