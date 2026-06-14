// decoderregistry.h:46
struct rw::audio::core::DecoderRegistry {
	// decoderregistry.h:54
	extern const unsigned int DEFAULT_SAMPLEBUFFER_MAXLOCKS = 2;

private:
	// decoderregistry.h:383
	ListQueue mDecoderDescList;

	// decoderregistry.h:384
	System * mpSystem;

public:
	// decoderregistry.h:127
	void * RegisterDecoder(DecoderDesc *);

	// decoderregistry.h:150
	void RegisterStandardRunTimeDecoders();

	// decoderregistry.h:170
	void RegisterAllDecoders();

	// decoderregistry.h:193
	void * GetDecoderHandle(DecoderDesc::Guid);

	// decoderregistry.h:276
	rw::audio::core::Decoder * DecoderFactory(void *, unsigned int, unsigned int, System *);

	// decoderregistry.h:362
	DecoderExtended * DecoderExtendedFactory(void *, unsigned int, unsigned int, System *);

private:
	// decoderregistry.h:369
	void DecoderRegistry();

	// decoderregistry.h:370
	void ~DecoderRegistry();

	// decoderregistry.h:372
	DecoderDesc * GetDecoderDescFromNode(ListNode *);

	// decoderregistry.h:379
	rw::audio::core::DecoderRegistry * CreateInstance(System *);

	// decoderregistry.h:381
	void Release();

}

