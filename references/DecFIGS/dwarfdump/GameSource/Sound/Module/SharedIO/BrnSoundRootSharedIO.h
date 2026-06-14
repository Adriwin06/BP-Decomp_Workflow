// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundRootSharedIO.h:26
	namespace Module {
		// BrnSoundRootSharedIO.h:27
		namespace Io {
			// Declaration
			struct SoundWorldLoadEvent {
				// BrnSoundRootSharedIO.h:53
				enum eLoadEvent {
					E_LOAD_EVENT_INVALID = 0,
					E_LOAD_EVENT_PASSBY_MAP_LOADED = 1,
					E_LOAD_EVENT_PASSBY_MAP_UNLOAD = 2,
				}

			}

		}

	}

}

// BrnSoundRootSharedIO.h:45
struct BrnSound::Module::Io::SoundWorldLoadEvent {
private:
	// BrnSoundRootSharedIO.h:91
	BrnSound::Module::Io::SoundWorldLoadEvent::eLoadEvent meEvent;

	// BrnSoundRootSharedIO.h:92
	uint16_t mu16Zone;

public:
	// BrnSoundRootSharedIO.h:71
	void Construct(BrnSound::Module::Io::SoundWorldLoadEvent::eLoadEvent, uint16_t);

	// BrnSoundRootSharedIO.h:78
	BrnSound::Module::Io::SoundWorldLoadEvent::eLoadEvent GetEvent() const;

	// BrnSoundRootSharedIO.h:85
	uint16_t GetZone() const;

}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundRootSharedIO.h:26
	namespace Module {
		// BrnSoundRootSharedIO.h:27
		namespace Io {
		}

	}

}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundRootSharedIO.h:26
	namespace Module {
		// BrnSoundRootSharedIO.h:27
		namespace Io {
			// Declaration
			struct SoundWorldLoadEvent {
				// BrnSoundRootSharedIO.h:53
				enum eLoadEvent {
					E_LOAD_EVENT_INVALID = 0,
					E_LOAD_EVENT_PASSBY_MAP_LOADED = 1,
					E_LOAD_EVENT_PASSBY_MAP_UNLOAD = 2,
				}

			}

			struct UpdateInfo;

			struct AudioEffectsMessageQueue;

			struct PreUpdateOutput;

			struct RootInputBuffer;

			struct RootOutputBuffer;

			struct RootPreUpdateOutputBuffer;

		}

	}

}

// BrnSoundRootSharedIO.h:107
struct BrnSound::Module::Io::UpdateInfo {
private:
	// BrnSoundRootSharedIO.h:137
	bool mbRenderStalled;

public:
	// BrnSoundRootSharedIO.h:116
	void Construct();

	// BrnSoundRootSharedIO.h:124
	void Construct(bool);

	// BrnSoundRootSharedIO.h:131
	bool GetRenderStalled() const;

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundCommonSharedIO.h:27
	namespace Module {
		// BrnSoundCommonSharedIO.h:28
		namespace Io {
			// Declaration
			struct SoundWorldLoadEvent {
				// BrnSoundRootSharedIO.h:53
				enum eLoadEvent {
					E_LOAD_EVENT_INVALID = 0,
					E_LOAD_EVENT_PASSBY_MAP_LOADED = 1,
					E_LOAD_EVENT_PASSBY_MAP_UNLOAD = 2,
				}

			}

		}

	}

}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundRootSharedIO.h:26
	namespace Module {
		// BrnSoundRootSharedIO.h:27
		namespace Io {
			// Declaration
			struct SoundWorldLoadEvent {
				// BrnSoundRootSharedIO.h:53
				enum eLoadEvent {
					E_LOAD_EVENT_INVALID = 0,
					E_LOAD_EVENT_PASSBY_MAP_LOADED = 1,
					E_LOAD_EVENT_PASSBY_MAP_UNLOAD = 2,
				}

			}

			struct AudioEffectsMessageQueue;

			struct PreUpdateOutput;

			struct RootOutputBuffer;

		}

	}

}

