// BrnGameStateImageManagerBase.h:201
extern BrnGameState::GameStateModuleIO::EImageGalleryType[] KAE_IMAGE_TYPE_TO_GALLERY_TYPE_MAPPING;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateImageManagerBase.h:65
	using GameStateModuleIO;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateImageManagerBase.h:65
	using GameStateModuleIO;

	// Declaration
	struct GameStateImageManagerBase {
		// BrnGameStateImageManagerBase.h:174
		struct ImageLoadRequest {
			// BrnGameStateImageManagerBase.h:176
			int32_t miImageIndex;

			// BrnGameStateImageManagerBase.h:177
			int32_t miSlotIndex;

			// BrnGameStateImageManagerBase.h:178
			BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

		}

	}

}

// BrnGameStateImageManagerBase.h:81
struct BrnGameState::GameStateImageManagerBase {
	int (*)(...) * _vptr.GameStateImageManagerBase;

private:
	// BrnGameStateImageManagerBase.cpp:32
	extern const BrnGameState::GameStateModuleIO::EImageGalleryType[6] KAE_IMAGE_TYPE_TO_GALLERY_TYPE_MAPPING;

	// BrnGameStateImageManagerBase.h:203
	NetworkTexture[3] maImageGalleryMugshots;

	// BrnGameStateImageManagerBase.h:204
	Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u> maImageLoadRequests;

	// BrnGameStateImageManagerBase.h:205
	int32_t[3] maLoadedImagesToSlotMapping;

	// BrnGameStateImageManagerBase.h:206
	int32_t[3] maiImagesLockedForSave;

	// BrnGameStateImageManagerBase.h:207
	WorldRegion meCurrentWorldRegion;

	// BrnGameStateImageManagerBase.h:208
	WorldRegion meWorldRegionAtLastTakedown;

	// BrnGameStateImageManagerBase.h:209
	int32_t miMugshotToSaveIndex;

	// BrnGameStateImageManagerBase.h:210
	BitArray<3u> mImagesToRenderBitArray;

	// BrnGameStateImageManagerBase.h:211
	BrnProgression::ProgressionManager * mpProgression;

	// BrnGameStateImageManagerBase.h:212
	bool mbLoadInProgress;

public:
	// BrnGameStateImageManagerBase.cpp:62
	void Construct(BrnProgression::ProgressionManager *);

	// BrnGameStateImageManagerBase.cpp:155
	bool Prepare(HeapMalloc *);

	// BrnGameStateImageManagerBase.cpp:189
	bool Release();

	// BrnGameStateImageManagerBase.cpp:109
	void Destruct();

	// BrnGameStateImageManagerBase.cpp:219
	void PreWorldUpdate(EActiveRaceCarIndex, const InputBuffer::TakedownEventQueue *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:462
	void HandleImageSaveEvent(const ImageToSaveEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *, bool);

	// BrnGameStateImageManagerBase.cpp:578
	void HandleImageFilesLoadedEvent(const ImageFilesLoadedEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:685
	void HandleImageGalleryRequest(const ImageGalleryRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:1349
	void HandleImageGalleryCountRequest(const ImageGalleryCountRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:1375
	void HandleImageGalleryDataRequest(const ImageGalleryDataRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:1423
	void HandleWorldRegionChangeEvent(const WorldRegionChangeEvent *);

	// BrnGameStateImageManagerBase.cpp:1440
	void HandleImageFilesSavedEvent(const ImageFilesSavedEvent *);

protected:
	// BrnGameStateImageManagerBase.cpp:1480
	NetworkTexture * GetImageGalleryMugshot(int32_t);

	// BrnGameStateImageManagerBase.cpp:1502
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

private:
	// BrnGameStateImageManagerBase.cpp:245
	void UpdateTakedownEvents(EActiveRaceCarIndex, const InputBuffer::TakedownEventQueue *);

	// BrnGameStateImageManagerBase.cpp:280
	void UpdateNewImageRequests(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:424
	void UpdateImagesToRender(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:561
	bool IsImageSaveSlotAvailable();

	// BrnGameStateImageManagerBase.cpp:643
	void RequestImageSave(int32_t, NetworkTexture *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:780
	void ProcessNewImageRequest(const ImageGalleryRequestEvent *);

	// BrnGameStateImageManagerBase.cpp:811
	void ProcessScrollImagesEvent(const ImageGalleryRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:984
	void ProcessLockRequest(const ImageGalleryRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:1037
	void ProcessAskDeleteRequest(const ImageGalleryRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:1074
	void ProcessDeleteRequest(const ImageGalleryRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:1253
	virtual void ProcessExportRequest(const ImageGalleryRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:1309
	void ProcessShowGamerCardRequest(const ImageGalleryRequestEvent *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateImageManagerBase.cpp:1526
	BrnGameState::GameStateModuleIO::EImageGalleryType GetImageGalleryTypeFromImageType(BrnGameState::GameStateModuleIO::EImageType);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct GameStateImageManagerBase {
		// BrnGameStateImageManagerBase.h:174
		struct ImageLoadRequest {
			// BrnGameStateImageManagerBase.h:176
			int32_t miImageIndex;

			// BrnGameStateImageManagerBase.h:177
			int32_t miSlotIndex;

			// BrnGameStateImageManagerBase.h:178
			BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

		}

	public:
		GameStateImageManagerBase();

	private:
		// BrnGameStateImageManagerBase.h:201
		extern BrnGameState::GameStateModuleIO::EImageGalleryType[] KAE_IMAGE_TYPE_TO_GALLERY_TYPE_MAPPING;

	}

}

// BrnGameStateImageManagerBase.h:81
void BrnGameState::GameStateImageManagerBase::GameStateImageManagerBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

