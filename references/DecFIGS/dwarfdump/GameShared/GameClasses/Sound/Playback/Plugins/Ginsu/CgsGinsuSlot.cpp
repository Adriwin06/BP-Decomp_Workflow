// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsStreamingPlugin.h:71
		namespace Plugins {
			// CgsGinsuSlot.cpp:101
			const SlotFactory<CgsSound::Playback::Plugins::GinsuSlot> sGinsuSlotSlotFactory;

		}

	}

}

// CgsGinsuSlot.cpp:40
struct CgsSound::Playback::Plugins::GinsuSlot : public ISlotImplementation {
	// CgsGinsuSlot.cpp:101
	extern const Name SK_SLOT_CLASSNAME;

public:
	void GinsuSlot(const GinsuSlot &);

	void GinsuSlot();

	// CgsGinsuSlot.cpp:49
	virtual bool DoPlay(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &, uint32_t);

	// CgsGinsuSlot.cpp:85
	virtual bool DoStop(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &);

}

// CgsGinsuSlot.cpp:40
void CgsSound::Playback::Plugins::GinsuSlot::GinsuSlot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

