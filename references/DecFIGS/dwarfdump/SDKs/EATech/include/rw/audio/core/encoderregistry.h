// encoderregistry.h:49
struct rw::audio::core::EncoderRegistry {
private:
	// encoderregistry.h:315
	ListQueue mEncoderDescList;

	// encoderregistry.h:316
	System * mpSystem;

public:
	// encoderregistry.h:85
	void RegisterAllEncoders();

	// encoderregistry.h:109
	void * GetEncoderHandle(DecoderDesc::Guid);

	// encoderregistry.h:184
	rw::audio::core::Encoder * EncoderFactory(void *, int, int, System *);

	// encoderregistry.h:259
	EncoderExtended * EncoderExtendedFactory(void *, int, int, System *);

	// encoderregistry.h:301
	void * RegisterEncoder(EncoderDesc *);

private:
	// encoderregistry.h:306
	EncoderDesc * GetEncoderDescFromNode(ListNode *);

	// encoderregistry.h:312
	rw::audio::core::EncoderRegistry * CreateInstance(System *);

	// encoderregistry.h:313
	void Release();

}

