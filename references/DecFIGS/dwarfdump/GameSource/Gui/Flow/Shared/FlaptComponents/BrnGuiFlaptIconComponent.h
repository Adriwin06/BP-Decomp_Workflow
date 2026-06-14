// BrnGuiFlaptIconComponent.h:119
extern const int32_t KI_MAX_ANIMATOR_CHILD_MOVIE_CLIPS = 4;

// BrnGuiFlaptIconComponent.h:91
struct BrnGui::FlaptAnimatorComponent : public BrnGui::FlaptIconComponent {
private:
	// BrnGuiFlaptIconComponent.h:119
	extern const int32_t KI_MAX_ANIMATOR_CHILD_MOVIE_CLIPS = 4;

	// BrnGuiFlaptIconComponent.h:121
	MovieClipRef[4] maChildMovieClips;

	// BrnGuiFlaptIconComponent.h:122
	int32_t miNumChildMovieClips;

public:
	// BrnGuiFlaptIconComponent.cpp:146
	virtual void Construct(const void *, StateInterface *, const void *);

	// BrnGuiFlaptIconComponent.cpp:172
	virtual void Prepare(const char *, const BrnFlapt::FileRef &, const char *);

	// BrnGuiFlaptIconComponent.cpp:212
	void RefreshControlledMovieClips();

	// BrnGuiFlaptIconComponent.cpp:245
	void Run(const char *);

}

// BrnGuiFlaptIconComponent.h:45
struct BrnGui::FlaptIconComponent : public BrnFlaptComponent {
	int (*)(...) * _vptr.FlaptIconComponent;

protected:
	// BrnGuiFlaptIconComponent.h:77
	uint32_t muCurrentStateHash;

public:
	// BrnGuiFlaptIconComponent.cpp:45
	virtual void Construct(const void *, StateInterface *, const void *);

	// BrnGuiFlaptIconComponent.cpp:63
	virtual void Prepare(const char *, const BrnFlapt::FileRef &, const char *);

	// BrnGuiFlaptIconComponent.cpp:84
	virtual void Prepare(const MovieClipRef *);

	// BrnGuiFlaptIconComponent.cpp:98
	virtual void SetState(const char *);

	// BrnGuiFlaptIconComponent.cpp:121
	virtual void GotoAndStopLabel(const char *);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct FlaptAnimatorComponent {
	private:
		// BrnGuiFlaptIconComponent.h:119
		extern const int32_t KI_MAX_ANIMATOR_CHILD_MOVIE_CLIPS = 4;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptAnimatorComponent {
	public:
		FlaptAnimatorComponent();

	private:
		// BrnGuiFlaptIconComponent.h:119
		extern const int32_t KI_MAX_ANIMATOR_CHILD_MOVIE_CLIPS = 4;

	}

}

// BrnGuiFlaptIconComponent.h:91
void BrnGui::FlaptAnimatorComponent::FlaptAnimatorComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiFlaptIconComponent.h:45
void BrnGui::FlaptIconComponent::FlaptIconComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

