// BrnFlaptMovieClipRef.h:54
struct BrnFlapt::MovieClipRef {
private:
	// BrnFlaptMovieClipRef.h:194
	BrnFlapt::MovieClipInstance * mpMovieClipInst;

	// BrnFlaptMovieClipRef.h:195
	Im2dTransform * mpTransform;

public:
	// BrnFlaptMovieClipRef.h:61
	void Construct(BrnFlapt::MovieClipInstance *, Im2dTransform *);

	// BrnFlaptMovieClipRef.h:65
	void SetInvalid();

	// BrnFlaptMovieClipRef.h:69
	bool IsValid() const;

	// BrnFlaptMovieClipRef.h:74
	MovieClipRef FindChildMovieClip(const char *) const;

	// BrnFlaptMovieClipRef.h:79
	TextFieldRef FindChildTextField(const char *) const;

	// BrnFlaptMovieClipRef.h:84
	MovieClipRef FindChildMovieClipOnFrame(const char *) const;

	// BrnFlaptMovieClipRef.h:90
	bool TryFindChildComponentRecursively(const char *, BrnFlapt::MovieClipRef *) const;

	// BrnFlaptMovieClipRef.h:94
	MovieClipRef GetParent() const;

	// BrnFlaptMovieClipRef.h:99
	int32_t GetCurrentFrameOneBased() const;

	// BrnFlaptMovieClipRef.h:106
	void GotoAndPlayLabel(uint32_t, const char *) const;

	// BrnFlaptMovieClipRef.h:111
	void GotoAndPlayLabel(const char *) const;

	// BrnFlaptMovieClipRef.h:116
	void GotoAndStopLabel(const char *) const;

	// BrnFlaptMovieClipRef.h:120
	void ResetTimeline();

	// BrnFlaptMovieClipRef.h:125
	void SetPosition(Vector2);

	// BrnFlaptMovieClipRef.h:130
	void SetPositionX(VecFloat);

	// BrnFlaptMovieClipRef.h:135
	void SetPositionY(VecFloat);

	// BrnFlaptMovieClipRef.h:140
	void SetColour(Vector4);

	// BrnFlaptMovieClipRef.h:144
	Vector2 GetPosition() const;

	// BrnFlaptMovieClipRef.h:149
	void SetAlpha(float32_t);

	// BrnFlaptMovieClipRef.h:153
	float32_t GetAlpha();

	// BrnFlaptMovieClipRef.h:158
	void SetRotation(float32_t);

	// BrnFlaptMovieClipRef.h:163
	void SetVisible(bool);

	// BrnFlaptMovieClipRef.h:167
	Vector2 GetSizeScale() const;

	// BrnFlaptMovieClipRef.h:172
	void SetSizeScale(Vector2);

	// BrnFlaptMovieClipRef.h:176
	Vector4 GetColourScale() const;

	// BrnFlaptMovieClipRef.h:181
	void SetColourScale(Vector4);

	// BrnFlaptMovieClipRef.h:184
	const TriggerParameters * GetTriggerParameters();

	// BrnFlaptMovieClipRef.h:190
	void SetFrameTriggerCallback(MovieClipInstance::FrameTriggerCallback, void *);

}

