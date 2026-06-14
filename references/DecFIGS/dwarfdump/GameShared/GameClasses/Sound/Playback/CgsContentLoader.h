// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct ContentLoader<CgsResource::BinaryFileResource> {
			// CgsContentLoader.h:55
			enum EUnloadState {
				E_US_IDLE = 0,
				E_US_PRE_UNLOAD = 1,
				E_US_UNLOADING = 2,
			}

			// CgsContentLoader.h:100
			enum EResourceModuleLoadState {
				E_RMLS_REQUEST = 0,
				E_RMLS_LOADING = 1,
				E_RMLS_POST_LOAD = 2,
				E_RMLS_FINISHED = 3,
			}

		}

		// Declaration
		struct ContentLoader<CgsResource::AlignedBinaryFileResource> {
			// CgsContentLoader.h:55
			enum EUnloadState {
				E_US_IDLE = 0,
				E_US_PRE_UNLOAD = 1,
				E_US_UNLOADING = 2,
			}

			// CgsContentLoader.h:100
			enum EResourceModuleLoadState {
				E_RMLS_REQUEST = 0,
				E_RMLS_LOADING = 1,
				E_RMLS_POST_LOAD = 2,
				E_RMLS_FINISHED = 3,
			}

		}

	}

}

// CgsContentLoader.h:52
struct CgsSound::Playback::ContentLoader<CgsResource::BinaryFileResource> {
private:
	// CgsContentLoader.h:132
	ResourcePtr<CgsResource::BinaryFileResource> mpResource;

	// Unknown accessibility
	struct ResourceModuleLoadData;

	// CgsContentLoader.h:133
	ContentLoader<CgsResource::BinaryFileResource>::ResourceModuleLoadData * mpLoadData;

	// CgsContentLoader.h:134
	CgsSound::Playback::ContentLoader<CgsResource::BinaryFileResource>::EUnloadState meUnloadState;

public:
	// CgsContentLoader.h:62
	void ContentLoader();

	// CgsContentLoader.h:147
	void * GetData();

	// CgsContentLoader.h:71
	bool Load(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.h:76
	bool Unload(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.h:81
	void Update(CgsSound::Playback::Content &, const ContentSpec &);

private:
	// CgsContentLoader.h:88
	void UpdateUnload(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.h:93
	void PurgeLoadData(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.h:98
	void HandleResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.h:118
	bool StartResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.h:122
	void RestartResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.h:126
	// Declaration
	void UpdateResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsContentLoader.cpp:284
		using namespace CgsModule;

		// CgsContentLoader.cpp:285
		using namespace CgsResource::Events;

	}

	// CgsContentLoader.h:130
	void CancelResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &);

}

// CgsContentLoader.h:52
struct CgsSound::Playback::ContentLoader<CgsResource::AlignedBinaryFileResource> {
private:
	// CgsContentLoader.h:132
	ResourcePtr<CgsResource::AlignedBinaryFileResource> mpResource;

	// Unknown accessibility
	struct ResourceModuleLoadData;

	// CgsContentLoader.h:133
	ContentLoader<CgsResource::AlignedBinaryFileResource>::ResourceModuleLoadData * mpLoadData;

	// CgsContentLoader.h:134
	CgsSound::Playback::ContentLoader<CgsResource::AlignedBinaryFileResource>::EUnloadState meUnloadState;

public:
	// CgsContentLoader.h:62
	void ContentLoader();

	// CgsContentLoader.h:147
	void * GetData();

	// CgsContentLoader.cpp:46
	bool Load(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.cpp:81
	bool Unload(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.cpp:119
	void Update(CgsSound::Playback::Content &, const ContentSpec &);

private:
	// CgsContentLoader.cpp:157
	void UpdateUnload(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.cpp:212
	void PurgeLoadData(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.h:98
	void HandleResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.cpp:241
	bool StartResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.cpp:267
	void RestartResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &);

	// CgsContentLoader.cpp:282
	// Declaration
	void UpdateResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsContentLoader.cpp:284
		using namespace CgsModule;

		// CgsContentLoader.cpp:285
		using namespace CgsResource::Events;

	}

	// CgsContentLoader.cpp:358
	void CancelResourceModuleLoading(CgsSound::Playback::Content &, const ContentSpec &);

}

// CgsContentLoader.h:109
struct CgsSound::Playback::ContentLoader<CgsResource::BinaryFileResource>::ResourceModuleLoadData {
	// CgsContentLoader.h:110
	CgsSound::Playback::ContentLoader<CgsResource::BinaryFileResource>::EResourceModuleLoadState meState;

	// CgsContentLoader.h:111
	int16_t li16CurrentRequest;

	// CgsContentLoader.h:112
	uint8_t mu8IsCancelled;

	// CgsContentLoader.h:113
	uint8_t muSpareByte;

}

// CgsContentLoader.h:109
struct CgsSound::Playback::ContentLoader<CgsResource::AlignedBinaryFileResource>::ResourceModuleLoadData {
	// CgsContentLoader.h:110
	CgsSound::Playback::ContentLoader<CgsResource::AlignedBinaryFileResource>::EResourceModuleLoadState meState;

	// CgsContentLoader.h:111
	int16_t li16CurrentRequest;

	// CgsContentLoader.h:112
	uint8_t mu8IsCancelled;

	// CgsContentLoader.h:113
	uint8_t muSpareByte;

}

