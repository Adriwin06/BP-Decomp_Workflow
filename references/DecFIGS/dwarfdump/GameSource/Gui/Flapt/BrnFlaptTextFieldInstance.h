// BrnFlaptTextFieldInstance.h:48
struct BrnFlapt::TextFieldInstance {
private:
	// BrnFlaptTextFieldInstance.h:80
	CgsAptString mAptString;

	// BrnFlaptTextFieldInstance.h:81
	UnicodeBuffer::CgsUtf8[256] macStringData;

public:
	// BrnFlaptTextFieldInstance.h:58
	void Construct(const MovieClip *, uint32_t, const BrnFlapt::FlaptRenderer *, const RGBA *, int32_t);

	// BrnFlaptTextFieldInstance.h:62
	TextObject * GetTextObject();

	// BrnFlaptTextFieldInstance.h:68
	void ChangeText(const UnicodeBuffer::CgsUtf8 *, bool);

	// BrnFlaptTextFieldInstance.h:72
	const UnicodeBuffer::CgsUtf8 * GetText() const;

private:
	// BrnFlaptTextFieldInstance.h:90
	void SetUpAptStringParams(const TextField *, const FontStyle *, const UnicodeBuffer::CgsUtf8 *, AptAllocateStringParameters *);

}

