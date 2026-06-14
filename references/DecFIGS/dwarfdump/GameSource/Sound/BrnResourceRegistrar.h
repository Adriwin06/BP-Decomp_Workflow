// BrnResourceRegistrar.h:51
extern const uint32_t KU_MAX_FILENAME = 64;

// BrnResourceRegistrar.h:156
extern const uint32_t KU_RECIEVER_QUEUE_SIZE = 192;

// BrnResourceRegistrar.h:175
extern const uint16_t K_MAX_NUM_REQUEST_REFERENCES = 16;

// BrnResourceRegistrar.h:307
extern const uint16_t K_MAX_NUM_QUEUED_RESOURCES = 18;

// BrnResourceRegistrar.h:313
extern const uint16_t K_MAX_NUM_LOADED_RESOURCES = 124;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnResourceRegistrar.h:37
	namespace Logic {
	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct ResourceRegistrar {
			// BrnResourceRegistrar.h:57
			enum EType {
				E_DATA = 0,
				E_ATTRIBSYS = 1,
			}

			// BrnResourceRegistrar.h:77
			struct QueuedResource {
				// BrnResourceRegistrar.h:79
				enum EState {
					E_IDLE = 0,
					E_WAIT_BUNDLE_LOAD = 1,
					E_REQUESTING_RESOURCE = 2,
					E_WAIT_RESOURCE = 3,
					E_TYPE_SPECIFIC_PREPARE = 4,
					E_COMPLETE = 5,
					E_TYPE_SPECIFIC_RELEASE = 6,
					E_UNREQUESTING_RESOURCE = 7,
					E_UNREQUESTING_BUNDLE = 8,
					E_REQUEST_ALREADY_MADE = 9,
				}

				// BrnResourceRegistrar.h:156
				extern const uint32_t KU_RECIEVER_QUEUE_SIZE = 192;

				// BrnResourceRegistrar.h:158
				EventReceiverQueue<192,16> mReceiverQueue;

				// BrnResourceRegistrar.h:159
				char[64] macFileName;

				// BrnResourceRegistrar.h:160
				ResourceHandle mResourceHandle;

				// BrnResourceRegistrar.h:161
				ID mResourceId;

				// BrnResourceRegistrar.h:162
				uint32_t muResourceNameHash;

				// BrnResourceRegistrar.h:164
				uint32_t meTypePrepareState;

				// BrnResourceRegistrar.h:165
				BrnSound::Logic::ResourceRegistrar::QueuedResource::EState meState;

				// BrnResourceRegistrar.h:166
				BrnSound::Logic::ResourceRegistrar::EType meType;

				// BrnResourceRegistrar.h:167
				BrnSound::Logic::IResourceRequester * mpResourceRequester;

				// BrnResourceRegistrar.h:168
				int32_t miPoolId;

				// BrnResourceRegistrar.h:169
				bool mbRelinquished;

			public:
				// BrnResourceRegistrar.h:99
				QueuedResource();

				// BrnResourceRegistrar.h:108
				QueuedResource(const char *, const char *, BrnSound::Logic::IResourceRequester *, int32_t, BrnSound::Logic::ResourceRegistrar::EType);

				// BrnResourceRegistrar.h:114
				QueuedResource(const BrnSound::Logic::ResourceRegistrar::RequestedResource &);

				// BrnResourceRegistrar.h:130
				bool Prepare(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:134
				bool PrepareAttribSys(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:138
				bool ReleaseAttribSys(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:142
				bool Release(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:145
				uint32_t GetFileNameHash() const;

				// BrnResourceRegistrar.h:148
				uint32_t GetResourceNameHash() const;

				// BrnResourceRegistrar.h:151
				ResourceHandle GetResource() const;

				// BrnResourceRegistrar.h:154
				void MarkAsRequestAlreadyMade();

			}

			// BrnResourceRegistrar.h:174
			struct RequestedResource {
				// BrnResourceRegistrar.h:175
				extern const uint16_t K_MAX_NUM_REQUEST_REFERENCES = 16;

				// BrnResourceRegistrar.h:198
				char[64] macFileName;

				// BrnResourceRegistrar.h:200
				uint32_t miResourceNameHash;

				// BrnResourceRegistrar.h:201
				uint32_t miFileNameHash;

				// BrnResourceRegistrar.h:203
				ResourceHandle mResourceHandle;

				// BrnResourceRegistrar.h:204
				LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u> mReferenceList;

				// BrnResourceRegistrar.h:206
				BrnSound::Logic::ResourceRegistrar::EType meFileType;

				// BrnResourceRegistrar.h:207
				int32_t miPoolId;

			public:
				// BrnResourceRegistrar.h:179
				RequestedResource();

				// BrnResourceRegistrar.h:182
				RequestedResource(const BrnSound::Logic::ResourceRegistrar::QueuedResource &);

				// BrnResourceRegistrar.h:186
				bool Release(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:189
				int32_t GetNumberOfReferences() const;

				// BrnResourceRegistrar.h:193
				bool ClearReferencesToResource(BrnSound::Logic::IResourceRequester *);

			}

		}

	}

}

// BrnResourceRegistrar.h:42
struct BrnSound::Logic::ResourceRegistrar {
	// BrnResourceRegistrar.h:45
	extern const uint32_t KU_REQUEST_QUEUE_SIZE = 1024;

	// BrnResourceRegistrar.h:51
	extern const uint32_t KU_MAX_FILENAME = 64;

private:
	// BrnResourceRegistrar.h:307
	extern const uint16_t K_MAX_NUM_QUEUED_RESOURCES = 18;

	// BrnResourceRegistrar.h:310
	LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u> mLoadingQueuedResourceList;

	// BrnResourceRegistrar.h:311
	LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u> mUnLoadingQueuedResourceList;

	// BrnResourceRegistrar.h:313
	extern const uint16_t K_MAX_NUM_LOADED_RESOURCES = 124;

	// BrnResourceRegistrar.h:317
	Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u> mapRemovalCandidates;

	// BrnResourceRegistrar.h:319
	LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u> mLoadedResourceList;

	// BrnResourceRegistrar.h:322
	RootOutputBuffer::AttribSysRequestInterface mAttribSysRequestInterface;

	// BrnResourceRegistrar.h:323
	RootOutputBuffer::SoundResourceRequestInterface mResourceRequestInterface;

public:
	// BrnResourceRegistrar.h:213
	void Construct();

	// BrnResourceRegistrar.h:221
	void AddRequest(BrnSound::Logic::ResourceRegistrar::QueuedResource &);

	// BrnResourceRegistrar.h:229
	void RemoveRequests(BrnSound::Logic::IResourceRequester *);

	// BrnResourceRegistrar.h:238
	void RemoveRefsToResource(BrnSound::Logic::IResourceRequester *, const char *);

	// BrnResourceRegistrar.h:242
	void Update();

	// BrnResourceRegistrar.h:247
	ResourceHandle * GetResource(const char *, const char *);

	// BrnResourceRegistrar.h:250
	RootOutputBuffer::SoundResourceRequestInterface & GetResourceRequestInterface();

	// BrnResourceRegistrar.h:253
	RootOutputBuffer::AttribSysRequestInterface & GetAttribsysRequestInterface();

	// BrnResourceRegistrar.h:259
	void * AddAemsBankCallback(void *, int, int);

private:
	// BrnResourceRegistrar.h:267
	void UpdateRequests();

	// BrnResourceRegistrar.h:274
	void UpdateQueued();

	// BrnResourceRegistrar.h:281
	void ClearUnreferancedFiles();

	// BrnResourceRegistrar.h:289
	bool DoesRequesterHaveAnyQueued(BrnSound::Logic::IResourceRequester *);

	// BrnResourceRegistrar.h:302
	bool SearchQueued(BrnSound::Logic::IResourceRequester *, bool, uint32_t);

	// BrnResourceRegistrar.h:327
	void AddNodeToRemoveResourceCandidateList(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *);

}

// BrnResourceRegistrar.h:337
struct BrnSound::Logic::IResourceRequester {
	int (*)(...) * _vptr.IResourceRequester;

public:
	void IResourceRequester(const IResourceRequester &);

	void IResourceRequester();

	// BrnResourceRegistrar.h:340
	virtual void ResourcesAreReady();

	// BrnResourceRegistrar.h:343
	virtual BrnSound::Logic::ResourceRegistrar & GetResourceRegistrar();

	// BrnResourceRegistrar.cpp:1084
	void LoadAsset(const char *, const char *, BrnSound::Logic::ResourceRegistrar::EType);

	// BrnResourceRegistrar.cpp:1153
	void LoadAsset(const char *, BrnResource::EGeneratedPoolIds, BrnSound::Logic::ResourceRegistrar::EType);

	// BrnResourceRegistrar.h:369
	void LoadAsset(CgsID, BrnResource::EGeneratedPoolIds);

	// BrnResourceRegistrar.cpp:1104
	ResourceHandle GetAsset(const char *, const char *);

	// BrnResourceRegistrar.h:384
	ResourceHandle GetAsset(const char *, CgsID);

	// BrnResourceRegistrar.cpp:1116
	void UnloadData();

	// BrnResourceRegistrar.cpp:1134
	void RelinquishAsset(const char *);

}

// BrnResourceRegistrar.h:337
void BrnSound::Logic::IResourceRequester::IResourceRequester() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct ResourceRegistrar {
			// BrnResourceRegistrar.h:57
			enum EType {
				E_DATA = 0,
				E_ATTRIBSYS = 1,
			}

			// BrnResourceRegistrar.h:77
			struct QueuedResource {
				// BrnResourceRegistrar.h:79
				enum EState {
					E_IDLE = 0,
					E_WAIT_BUNDLE_LOAD = 1,
					E_REQUESTING_RESOURCE = 2,
					E_WAIT_RESOURCE = 3,
					E_TYPE_SPECIFIC_PREPARE = 4,
					E_COMPLETE = 5,
					E_TYPE_SPECIFIC_RELEASE = 6,
					E_UNREQUESTING_RESOURCE = 7,
					E_UNREQUESTING_BUNDLE = 8,
					E_REQUEST_ALREADY_MADE = 9,
				}

				// BrnResourceRegistrar.h:156
				extern const uint32_t KU_RECIEVER_QUEUE_SIZE = 192;

				// BrnResourceRegistrar.h:158
				EventReceiverQueue<192,16> mReceiverQueue;

				// BrnResourceRegistrar.h:159
				char[64] macFileName;

				// BrnResourceRegistrar.h:160
				ResourceHandle mResourceHandle;

				// BrnResourceRegistrar.h:161
				ID mResourceId;

				// BrnResourceRegistrar.h:162
				uint32_t muResourceNameHash;

				// BrnResourceRegistrar.h:164
				uint32_t meTypePrepareState;

				// BrnResourceRegistrar.h:165
				BrnSound::Logic::ResourceRegistrar::QueuedResource::EState meState;

				// BrnResourceRegistrar.h:166
				BrnSound::Logic::ResourceRegistrar::EType meType;

				// BrnResourceRegistrar.h:167
				BrnSound::Logic::IResourceRequester * mpResourceRequester;

				// BrnResourceRegistrar.h:168
				int32_t miPoolId;

				// BrnResourceRegistrar.h:169
				bool mbRelinquished;

			public:
				// BrnResourceRegistrar.h:99
				QueuedResource();

				// BrnResourceRegistrar.h:108
				QueuedResource(const char *, const char *, BrnSound::Logic::IResourceRequester *, int32_t, BrnSound::Logic::ResourceRegistrar::EType);

				// BrnResourceRegistrar.h:114
				QueuedResource(const BrnSound::Logic::ResourceRegistrar::RequestedResource &);

				// BrnResourceRegistrar.h:130
				bool Prepare(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:134
				bool PrepareAttribSys(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:138
				bool ReleaseAttribSys(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:142
				bool Release(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:145
				uint32_t GetFileNameHash() const;

				// BrnResourceRegistrar.h:148
				uint32_t GetResourceNameHash() const;

				// BrnResourceRegistrar.h:151
				ResourceHandle GetResource() const;

				// BrnResourceRegistrar.h:154
				void MarkAsRequestAlreadyMade();

			}

			// BrnResourceRegistrar.h:174
			struct RequestedResource {
				// BrnResourceRegistrar.h:175
				extern const uint16_t K_MAX_NUM_REQUEST_REFERENCES = 16;

				// BrnResourceRegistrar.h:198
				char[64] macFileName;

				// BrnResourceRegistrar.h:200
				uint32_t miResourceNameHash;

				// BrnResourceRegistrar.h:201
				uint32_t miFileNameHash;

				// BrnResourceRegistrar.h:203
				ResourceHandle mResourceHandle;

				// BrnResourceRegistrar.h:204
				LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u> mReferenceList;

				// BrnResourceRegistrar.h:206
				BrnSound::Logic::ResourceRegistrar::EType meFileType;

				// BrnResourceRegistrar.h:207
				int32_t miPoolId;

			public:
				// BrnResourceRegistrar.h:179
				RequestedResource();

				// BrnResourceRegistrar.h:182
				RequestedResource(const BrnSound::Logic::ResourceRegistrar::QueuedResource &);

				// BrnResourceRegistrar.h:186
				bool Release(BrnSound::Logic::ResourceRegistrar &);

				// BrnResourceRegistrar.h:189
				int32_t GetNumberOfReferences() const;

				// BrnResourceRegistrar.h:193
				bool ClearReferencesToResource(BrnSound::Logic::IResourceRequester *);

			}

		}

	}

}

// BrnResourceRegistrar.h:337
struct BrnSound::Logic::IResourceRequester {
	int (*)(...) * _vptr.IResourceRequester;

public:
	void IResourceRequester(const IResourceRequester &);

	void IResourceRequester();

	// BrnResourceRegistrar.h:340
	virtual void ResourcesAreReady();

	// BrnResourceRegistrar.h:343
	virtual BrnSound::Logic::ResourceRegistrar & GetResourceRegistrar();

	// BrnResourceRegistrar.h:353
	void LoadAsset(const char *, const char *, BrnSound::Logic::ResourceRegistrar::EType);

	// BrnResourceRegistrar.h:364
	void LoadAsset(const char *, BrnResource::EGeneratedPoolIds, BrnSound::Logic::ResourceRegistrar::EType);

	// BrnResourceRegistrar.h:369
	void LoadAsset(CgsID, BrnResource::EGeneratedPoolIds);

	// BrnResourceRegistrar.h:379
	ResourceHandle GetAsset(const char *, const char *);

	// BrnResourceRegistrar.h:384
	ResourceHandle GetAsset(const char *, CgsID);

	// BrnResourceRegistrar.h:392
	void UnloadData();

	// BrnResourceRegistrar.h:400
	void RelinquishAsset(const char *);

}

