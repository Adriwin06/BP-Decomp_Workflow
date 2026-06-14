// BrnGuiFlaptComponent.h:53
struct BrnGui::BrnFlaptComponent {
	// BrnGuiFlaptComponent.h:57
	extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

protected:
	// BrnGuiFlaptComponent.h:91
	StateInterface * mpStateInterface;

	// BrnGuiFlaptComponent.h:92
	MovieClipRef mMovieClipRef;

public:
	// BrnGuiFlaptComponent.h:64
	void Construct(const void *, StateInterface *, const void *);

	// BrnGuiFlaptComponent.h:71
	void Prepare(const char *, const BrnFlapt::FileRef &, const char *);

	// BrnGuiFlaptComponent.h:75
	void Prepare(const MovieClipRef *);

	// BrnGuiFlaptComponent.h:80
	void SetPosition(Vector2);

	// BrnGuiFlaptComponent.h:84
	BrnFlapt::MovieClipRef * GetMovieClipRef();

	// BrnGuiFlaptComponent.h:87
	void SetInvalid();

}

// BrnGuiFlaptComponent.h:57
extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

