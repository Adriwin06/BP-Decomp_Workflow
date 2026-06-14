// BrnNetworkImageManagerDebugComponent.h:62
struct BrnNetwork::ImageManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnNetworkImageManagerDebugComponent.h:107
	NetworkTexture mImage;

	// BrnNetworkImageManagerDebugComponent.h:108
	NetworkTexture mCompressedImage;

	// BrnNetworkImageManagerDebugComponent.h:109
	int32_t miImageQuality;

	// BrnNetworkImageManagerDebugComponent.h:110
	int32_t miNumEncodes;

	// BrnNetworkImageManagerDebugComponent.h:111
	NetworkImageManager * mpImageManager;

	// BrnNetworkImageManagerDebugComponent.h:112
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkImageManagerDebugComponent.h:113
	bool mbRenderImage;

public:
	// BrnNetworkImageManagerDebugComponent.cpp:49
	void Construct(NetworkImageManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkImageManagerDebugComponent.cpp:79
	bool Prepare(HeapMalloc *);

	// BrnNetworkImageManagerDebugComponent.cpp:244
	bool Release();

	// BrnNetworkImageManagerDebugComponent.cpp:265
	void Destruct();

	// BrnNetworkImageManagerDebugComponent.cpp:228
	virtual void OnActivate();

	// BrnNetworkImageManagerDebugComponent.cpp:284
	void PreWorldUpdate();

	// BrnNetworkImageManagerDebugComponent.cpp:321
	void SetImageToEncode(const char *);

	// BrnNetworkImageManagerDebugComponent.cpp:296
	virtual const char * GetName() const;

	// BrnNetworkImageManagerDebugComponent.cpp:308
	virtual const char * GetPath() const;

private:
	// BrnNetworkImageManagerDebugComponent.cpp:431
	void EncodeMugshotAtSelectedQuality(void *);

	// BrnNetworkImageManagerDebugComponent.cpp:475
	void _GetCompressImageCallback(void *, void *);

	// BrnNetworkImageManagerDebugComponent.cpp:599
	void _GetDecodedImageCallback(void *, void *);

}

// BrnNetworkImageManagerDebugComponent.h:62
void BrnNetwork::ImageManagerDebugComponent::ImageManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

