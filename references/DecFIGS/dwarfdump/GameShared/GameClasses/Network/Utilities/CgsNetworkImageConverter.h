// CgsNetworkImageConverter.h:38
struct CgsNetwork::NetworkImageConverter {
private:
	// CgsNetworkImageConverter.h:114
	extern int32_t miConvertPM;

	// CgsNetworkImageConverter.h:115
	extern int32_t miCopyPM;

	// CgsNetworkImageConverter.h:116
	extern int32_t miResizePM;

	// CgsNetworkImageConverter.h:117
	extern int32_t miUnpackToBufferPM;

	// CgsNetworkImageConverter.h:118
	extern int32_t miXToRPM;

	// CgsNetworkImageConverter.h:119
	extern int32_t miCompressPM;

	// CgsNetworkImageConverter.h:120
	extern int32_t miUnpackToImage;

	// CgsNetworkImageConverter.h:121
	extern int32_t miPackToTexture;

public:
	// CgsNetworkImageConverter.h:45
	void Convert(const CgsNetwork::NetworkTexture *, CgsNetwork::NetworkTexture *);

	// CgsNetworkImageConverter.h:53
	void ConvertAndResize(const CgsNetwork::NetworkTexture *, CgsNetwork::NetworkTexture *, int32_t, int32_t);

	// CgsNetworkImageConverter.h:61
	void Resize32BitTexture(const CgsNetwork::NetworkTexture *, CgsNetwork::NetworkTexture *, int32_t, int32_t);

	// CgsNetworkImageConverter.h:72
	void BilinearFilterA8R8G8B8Texture(const uint64_t *, uint32_t *, int32_t, int32_t, int32_t, int32_t, int32_t);

	// CgsNetworkImageConverter.h:78
	void UnpackFromNetworkTexture(const CgsNetwork::NetworkTexture *, Texture2D *);

	// CgsNetworkImageConverter.h:84
	void UnpackFromNetworkTexture(const CgsNetwork::NetworkTexture *, renderengine::Texture::Locked *);

	// CgsNetworkImageConverter.h:88
	void SetupPerfmons();

private:
	// CgsNetworkImageConverter.h:97
	void Copy(const CgsNetwork::NetworkTexture *, CgsNetwork::NetworkTexture *);

	// CgsNetworkImageConverter.h:103
	void ConvertX8R8G8B8ToA1R5G5B5(const CgsNetwork::NetworkTexture *, CgsNetwork::NetworkTexture *);

	// CgsNetworkImageConverter.h:111
	void ConvertAndResizeX8R8G8B8ToA1R5G5B5(const CgsNetwork::NetworkTexture *, CgsNetwork::NetworkTexture *, int32_t, int32_t);

}

