// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct IStreamProvider {
			// CgsStreamingPlugin.h:30
			struct StreamSpec {
				// CgsStreamingPlugin.h:38
				const char * mpFilename;

				// CgsStreamingPlugin.h:39
				void ** mppvBuffer;

				// CgsStreamingPlugin.h:40
				const rw::audio::core::PlugIn * mpPlugin;

				// CgsStreamingPlugin.h:41
				int32_t mi32PriorityLow;

				// CgsStreamingPlugin.h:42
				int32_t mi32PriorityHigh;

			public:
				// CgsStreamingPlugin.h:31
				StreamSpec();

			}

		}

		// CgsStreamingPlugin.h:71
		namespace Plugins {
			struct GainArray;

			struct GinsuSlot;

		}

	}

}

// CgsStreamingPlugin.h:27
struct CgsSound::Playback::IStreamProvider {
	int (*)(...) * _vptr.IStreamProvider;

public:
	// CgsStreamingPlugin.h:47
	virtual ReadStream * DoOpenStream(CgsSound::Playback::IStreamProvider::StreamSpec &);

	// CgsStreamingPlugin.h:51
	virtual void DoCloseStream(const ReadStream *);

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct IStreamProvider {
			// CgsStreamingPlugin.h:30
			struct StreamSpec {
				// CgsStreamingPlugin.h:38
				const char * mpFilename;

				// CgsStreamingPlugin.h:39
				void ** mppvBuffer;

				// CgsStreamingPlugin.h:40
				const rw::audio::core::PlugIn * mpPlugin;

				// CgsStreamingPlugin.h:41
				int32_t mi32PriorityLow;

				// CgsStreamingPlugin.h:42
				int32_t mi32PriorityHigh;

			public:
				// CgsStreamingPlugin.h:31
				StreamSpec();

			}

		}

	}

}

// CgsStreamingPlugin.h:27
struct CgsSound::Playback::IStreamProvider {
	int (*)(...) * _vptr.IStreamProvider;

public:
	void IStreamProvider(const IStreamProvider &);

	void IStreamProvider();

	// CgsStreamingPlugin.h:47
	virtual ReadStream * DoOpenStream(CgsSound::Playback::IStreamProvider::StreamSpec &);

	// CgsStreamingPlugin.h:51
	virtual void DoCloseStream(const ReadStream *);

}

// CgsStreamingPlugin.h:27
void CgsSound::Playback::IStreamProvider::IStreamProvider() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

