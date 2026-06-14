// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
			// CgsSoundPlaybackModuleIO.h:33
			namespace Io {
			}

		}

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
		}

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
			// CgsSoundPlaybackModuleIO.h:33
			namespace Io {
				struct InputBuffer;

				struct OutputBuffer;

			}

		}

	}

}

// CgsSoundPlaybackModuleIO.h:64
struct CgsSound::Playback::Module::Io::InputBuffer : public IOBuffer {
public:
	// CgsSoundPlaybackModuleIO.h:69
	void Construct();

	// CgsSoundPlaybackModuleIO.h:73
	void Destruct();

	// CgsSoundPlaybackModuleIO.h:77
	void Clear();

}

// CgsSoundPlaybackModuleIO.h:100
struct CgsSound::Playback::Module::Io::OutputBuffer : public IOBuffer {
	// CgsSoundPlaybackModuleIO.h:52
	typedef Array<CgsSound::Io::QueueElement,3u> FreedBuffersArray;

	// CgsSoundPlaybackModuleIO.h:147
	OutputBuffer::FreedBuffersArray mStreamBuffersFreed;

	// CgsSoundPlaybackModuleIO.h:50
	typedef ResourceRequestQueue<4096> ResourceRequestQueue;

	// CgsSoundPlaybackModuleIO.h:149
	OutputBuffer::ResourceRequestQueue mRequestQueue;

public:
	// CgsSoundPlaybackModuleIO.h:104
	void Construct();

	// CgsSoundPlaybackModuleIO.h:108
	bool Prepare();

	// CgsSoundPlaybackModuleIO.h:112
	bool Release();

	// CgsSoundPlaybackModuleIO.h:116
	void Destruct();

	// CgsSoundPlaybackModuleIO.h:120
	void Clear();

	// CgsSoundPlaybackModuleIO.h:125
	OutputBuffer::ResourceRequestQueue & GetResourceRequestQueue();

	// CgsSoundPlaybackModuleIO.h:129
	const OutputBuffer::ResourceRequestQueue & GetResourceRequestQueue() const;

	// CgsSoundPlaybackModuleIO.h:135
	const OutputBuffer::FreedBuffersArray & GetStreamBuffersFreed() const;

	// CgsSoundPlaybackModuleIO.h:141
	OutputBuffer::FreedBuffersArray & GetStreamBuffersFreed();

}

