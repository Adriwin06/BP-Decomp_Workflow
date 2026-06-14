// BrnGuiMovieManager.h:383
extern const int16_t KI_MOVIE_BUFFER_SIZE = 256;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MovieManager {
		// BrnGuiMovieManager.h:141
		struct VideoDefinition {
			// BrnGuiMovieManager.h:172
			Vector4 mv4Rectangle;

			// BrnGuiMovieManager.h:173
			ID mVideoResourceId;

			// BrnGuiMovieManager.h:174
			Name mSoundStreamName;

			// BrnGuiMovieManager.h:175
			int32_t miCrossfadeInFrames;

			// BrnGuiMovieManager.h:176
			int32_t miCrossfadeOutFrames;

			// BrnGuiMovieManager.h:177
			bool mbPreload;

			// BrnGuiMovieManager.h:178
			bool mbKeepMemoryWhenFinished;

			// BrnGuiMovieManager.h:179
			bool mbDisableCustomSoundtracks;

		public:
			// BrnGuiMovieManager.h:145
			void Construct();

			// BrnGuiMovieManager.h:149
			void Prepare();

			// BrnGuiMovieManager.h:161
			void Prepare(ID, Name, bool, bool, bool, Vector4, int32_t, int32_t);

			// BrnGuiMovieManager.h:165
			void Release();

			// BrnGuiMovieManager.h:170
			void Copy(const BrnGui::MovieManager::VideoDefinition *);

		}

		// BrnGuiMovieManager.h:303
		enum EMovieManagerState {
			E_MOVIEMANAGERSTATE_DESTRUCTED = 0,
			E_MOVIEMANAGERSTATE_CONSTRUCTED = 1,
			E_MOVIEMANAGERSTATE_PREPARING_LOADING_BUNDLE = 2,
			E_MOVIEMANAGERSTATE_PREPARED = 3,
			E_MOVIEMANAGERSTATE_STOP_MOVIE = 4,
			E_MOVIEMANAGERSTATE_REQUESTING_AUDIO = 5,
			E_MOVIEMANAGERSTATE_WAITING_FOR_AUDIO = 6,
			E_MOVIEMANAGERSTATE_PLAYING_MOVIE = 7,
			E_MOVIEMANAGERSTATE_RELEASING_MOVIE_PLAYER = 8,
			E_MOVIEMANAGERSTATE_DELAYING_RETURN_OF_MEMORY = 9,
			E_MOVIEMANAGERSTATE_DELAYING_VALIDATE = 10,
			E_MOVIEMANAGERSTATE_RETURNING_MEMORY = 11,
			E_MOVIEMANAGERSTATE_REPORTING_FINISHED = 12,
			E_MOVIEMANAGERSTATE_IDLE = 13,
			E_MOVIEMANAGERSTATE_REQUESTING_MOVIEDATARESOURCE = 14,
			E_MOVIEMANAGERSTATE_WAITING_FOR_MOVIEDATARESOURCE = 15,
			E_MOVIEMANAGERSTATE_WAITING_FOR_MEMORY = 16,
			E_MOVIEMANAGERSTATE_PREPARING_MOVIE_PLAYER = 17,
			E_MOVIEMANAGERSTATE_RELEASED = 18,
			E_MOVIEMANAGERSTATE_COUNT = 19,
		}

		// BrnGuiMovieManager.h:334
		enum ECollisionWorldState {
			E_COLLISIONWORLDSTATE_VALID = 0,
			E_COLLISIONWORLDSTATE_INVALIDATE = 1,
			E_COLLISIONWORLDSTATE_INVALIDATING = 2,
			E_COLLISIONWORLDSTATE_INVALID = 3,
			E_COLLISIONWORLDSTATE_VALIDATE = 4,
			E_COLLISIONWORLDSTATE_VALIDATING = 5,
		}

		// BrnGuiMovieManager.h:346
		enum ECarPoolState {
			E_CARPOOLSTATE_VALID = 0,
			E_CARPOOLSTATE_INVALIDATE = 1,
			E_CARPOOLSTATE_INVALIDATING = 2,
			E_CARPOOLSTATE_INVALID = 3,
			E_CARPOOLSTATE_VALIDATE = 4,
			E_CARPOOLSTATE_VALIDATING = 5,
		}

	}

}

// BrnGuiMovieManager.h:124
struct BrnGui::MovieManager {
	// BrnGuiMovieManager.h:127
	extern const int32_t KI_VIDEO_DATA_RESOURCE_EVENT_ID = 28311277;

	// BrnGuiMovieManager.h:130
	int32_t miMoveMemoryReleaseDelay;

private:
	// BrnGuiMovieManager.h:332
	BrnGui::MovieManager::EMovieManagerState meState;

	// BrnGuiMovieManager.h:344
	BrnGui::MovieManager::ECollisionWorldState meCollisionWorldState;

	// BrnGuiMovieManager.h:356
	BrnGui::MovieManager::ECarPoolState meCarPoolState;

	// BrnGuiMovieManager.h:358
	CgsLanguage::ELanguage meLanguage;

	// BrnGuiMovieManager.h:361
	MoviePlayer mMoviePlayer;

	// BrnGuiMovieManager.h:363
	ResourceDescriptor mDescriptor;

	// BrnGuiMovieManager.h:364
	Resource mResourceAllocatorResource;

	// BrnGuiMovieManager.h:366
	uintptr_t muFirstCollisionBlockAddress;

	// BrnGuiMovieManager.h:367
	uint32_t muNumCollisionBlocks;

	// BrnGuiMovieManager.h:369
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnGuiMovieManager.h:372
	BrnGui::MovieManager::VideoDefinition mPlayingMovie;

	// BrnGuiMovieManager.h:375
	BrnGui::MovieManager::VideoDefinition mQueuedMovie;

	// BrnGuiMovieManager.h:377
	ResourcePtr<CgsResource::VideoDataResource> mpVideoDataResourcePtr;

	// BrnGuiMovieManager.h:380
	ResourceHandle::Resource mCarPoolResource;

	// BrnGuiMovieManager.h:381
	Entry::ResourceDescriptor mCarPoolResourceDescriptor;

	// BrnGuiMovieManager.h:383
	extern const int16_t KI_MOVIE_BUFFER_SIZE = 256;

	// BrnGuiMovieManager.h:384
	char[256] mapcBuffer;

	// BrnGuiMovieManager.h:385
	const char * mpcLanguageCode;

	// BrnGuiMovieManager.h:387
	BrnGui::MovieAllocator mAllocator;

	// BrnGuiMovieManager.h:394
	bool mbStopVideoStraightAway;

public:
	// BrnGuiMovieManager.h:200
	void Construct();

	// BrnGuiMovieManager.h:207
	bool Prepare(InputBuffer *, const OutputBuffer *, CgsLanguage::ELanguage);

	// BrnGuiMovieManager.h:211
	bool Release();

	// BrnGuiMovieManager.h:215
	void Destruct();

	// BrnGuiMovieManager.h:219
	void UpdateMoviePlayer();

	// BrnGuiMovieManager.h:223
	void Update();

	// BrnGuiMovieManager.h:228
	void Render(CgsGraphics::Im2dRenderBuffer *);

	// BrnGuiMovieManager.h:234
	void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnGuiMovieManager.h:238
	ID GetPlayingMovie();

	// BrnGuiMovieManager.h:242
	ID GetQueuedMovie();

	// BrnGuiMovieManager.h:246
	bool IsMovieQueued();

	// BrnGuiMovieManager.h:249
	bool PendingCollisionWorldInvalidate();

	// BrnGuiMovieManager.h:252
	bool PendingCollisionWorldValidate();

	// BrnGuiMovieManager.h:256
	ID PendingVideoDataResourceRequest();

	// BrnGuiMovieManager.h:260
	BaseEventReceiverQueue * GetRecieverQueue();

	// BrnGuiMovieManager.h:265
	void SetCollisionWorldValid(bool);

	// BrnGuiMovieManager.h:268
	bool PendingCarPoolInvalidate();

	// BrnGuiMovieManager.h:271
	bool PendingCarPoolValidate();

	// BrnGuiMovieManager.h:277
	void SetCarPoolValid(bool, const ResourceHandle::Resource &, const Entry::ResourceDescriptor &);

	// BrnGuiMovieManager.h:281
	bool HasFinishedPlayingVideo(BrnGui::MovieManager::VideoDefinition *);

	// BrnGuiMovieManager.h:285
	bool IsRequestingStopSound(BrnGui::MovieManager::VideoDefinition *);

	// BrnGuiMovieManager.h:289
	bool IsRequestingSound(BrnGui::MovieManager::VideoDefinition *);

	// BrnGuiMovieManager.h:293
	void FreeCollisionPoolMemory(const SwapOutCollisionWorldResponse *);

	// BrnGuiMovieManager.h:296
	void AllocateCollisionPoolMemory();

private:
	// BrnGuiMovieManager.h:398
	bool QueueNextMovie();

	// BrnGuiMovieManager.h:401
	void RequestInvalidationOfCollisionWorld();

	// BrnGuiMovieManager.h:404
	void RequestValidationOfCollisionWorldState();

	// BrnGuiMovieManager.h:407
	bool IsCollisionWorldInvalid() const;

	// BrnGuiMovieManager.h:410
	void RequestVideoDataResource();

	// BrnGuiMovieManager.h:413
	void RequestInvalidationOfCarPool();

	// BrnGuiMovieManager.h:416
	void RequestValidationOfCarPool();

	// BrnGuiMovieManager.h:419
	bool IsCarPoolInvalid() const;

	// BrnGuiMovieManager.h:422
	void CreateMemoryResourceAndDescriptor();

	// BrnGuiMovieManager.h:425
	void DestroyMemoryResourceAndDescriptor();

	// BrnGuiMovieManager.h:429
	void HandlePlayVideoEvent(const BrnGui::GuiEventPlayVideo *);

	// BrnGuiMovieManager.h:433
	void HandleStopVideoEvent(const BrnGui::GuiEventStopVideo *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MovieManager {
		// BrnGuiMovieManager.h:141
		struct VideoDefinition {
			// BrnGuiMovieManager.h:172
			Vector4 mv4Rectangle;

			// BrnGuiMovieManager.h:173
			ID mVideoResourceId;

			// BrnGuiMovieManager.h:174
			Name mSoundStreamName;

			// BrnGuiMovieManager.h:175
			int32_t miCrossfadeInFrames;

			// BrnGuiMovieManager.h:176
			int32_t miCrossfadeOutFrames;

			// BrnGuiMovieManager.h:177
			bool mbPreload;

			// BrnGuiMovieManager.h:178
			bool mbKeepMemoryWhenFinished;

			// BrnGuiMovieManager.h:179
			bool mbDisableCustomSoundtracks;

		public:
			// BrnGuiMovieManager.h:145
			void Construct();

			// BrnGuiMovieManager.h:149
			void Prepare();

			// BrnGuiMovieManager.h:161
			void Prepare(ID, Name, bool, bool, bool, Vector4, int32_t, int32_t);

			// BrnGuiMovieManager.h:165
			void Release();

			// BrnGuiMovieManager.h:170
			void Copy(const BrnGui::MovieManager::VideoDefinition *);

		}

		// BrnGuiMovieManager.h:303
		enum EMovieManagerState {
			E_MOVIEMANAGERSTATE_DESTRUCTED = 0,
			E_MOVIEMANAGERSTATE_CONSTRUCTED = 1,
			E_MOVIEMANAGERSTATE_PREPARING_LOADING_BUNDLE = 2,
			E_MOVIEMANAGERSTATE_PREPARED = 3,
			E_MOVIEMANAGERSTATE_STOP_MOVIE = 4,
			E_MOVIEMANAGERSTATE_REQUESTING_AUDIO = 5,
			E_MOVIEMANAGERSTATE_WAITING_FOR_AUDIO = 6,
			E_MOVIEMANAGERSTATE_PLAYING_MOVIE = 7,
			E_MOVIEMANAGERSTATE_RELEASING_MOVIE_PLAYER = 8,
			E_MOVIEMANAGERSTATE_DELAYING_RETURN_OF_MEMORY = 9,
			E_MOVIEMANAGERSTATE_DELAYING_VALIDATE = 10,
			E_MOVIEMANAGERSTATE_RETURNING_MEMORY = 11,
			E_MOVIEMANAGERSTATE_REPORTING_FINISHED = 12,
			E_MOVIEMANAGERSTATE_IDLE = 13,
			E_MOVIEMANAGERSTATE_REQUESTING_MOVIEDATARESOURCE = 14,
			E_MOVIEMANAGERSTATE_WAITING_FOR_MOVIEDATARESOURCE = 15,
			E_MOVIEMANAGERSTATE_WAITING_FOR_MEMORY = 16,
			E_MOVIEMANAGERSTATE_PREPARING_MOVIE_PLAYER = 17,
			E_MOVIEMANAGERSTATE_RELEASED = 18,
			E_MOVIEMANAGERSTATE_COUNT = 19,
		}

		// BrnGuiMovieManager.h:334
		enum ECollisionWorldState {
			E_COLLISIONWORLDSTATE_VALID = 0,
			E_COLLISIONWORLDSTATE_INVALIDATE = 1,
			E_COLLISIONWORLDSTATE_INVALIDATING = 2,
			E_COLLISIONWORLDSTATE_INVALID = 3,
			E_COLLISIONWORLDSTATE_VALIDATE = 4,
			E_COLLISIONWORLDSTATE_VALIDATING = 5,
		}

		// BrnGuiMovieManager.h:346
		enum ECarPoolState {
			E_CARPOOLSTATE_VALID = 0,
			E_CARPOOLSTATE_INVALIDATE = 1,
			E_CARPOOLSTATE_INVALIDATING = 2,
			E_CARPOOLSTATE_INVALID = 3,
			E_CARPOOLSTATE_VALIDATE = 4,
			E_CARPOOLSTATE_VALIDATING = 5,
		}

	}

}

// BrnGuiMovieManager.h:72
struct BrnGui::MovieAllocator : public rw::IResourceAllocator {
private:
	// BrnGuiMovieManager.h:107
	HeapMalloc mMainAllocator;

	// BrnGuiMovieManager.h:108
	LinearMalloc mGraphicsAllocator;

	// BrnGuiMovieManager.h:110
	int32_t miMainAlignment;

public:
	// BrnGuiMovieManager.cpp:998
	void Construct();

	// BrnGuiMovieManager.cpp:1015
	bool Prepare(Resource, ResourceDescriptor);

	// BrnGuiMovieManager.cpp:1047
	bool Release();

	// BrnGuiMovieManager.cpp:1065
	void Destruct();

	// BrnGuiMovieManager.cpp:1080
	virtual Resource DoAllocate(const ResourceDescriptor &, const char8_t *);

	// BrnGuiMovieManager.cpp:1123
	virtual void DoFree(const Resource &);

	// BrnGuiMovieManager.cpp:1149
	virtual void DoFreeDisposable(Resource &);

	virtual void ~MovieAllocator();

}

// BrnGuiMovieManager.h:72
void BrnGui::MovieAllocator::~MovieAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiMovieManager.h:127
extern const int32_t KI_VIDEO_DATA_RESOURCE_EVENT_ID = 28311277;

// BrnGuiMovieManager.h:72
void BrnGui::MovieAllocator::MovieAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

