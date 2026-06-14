// CgsGuiShared.h:29
namespace BrnFlapt {
	// Declaration
	struct FlaptManager {
		// BrnFlaptManager.h:137
		enum PrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnFlaptManager.h:143
		enum ReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

	}

	// BrnFlaptManager.h:45
	enum FlaptFiles {
		E_FLAPTFILE_HUD = 0,
		E_FLAPTFILES_COUNT = 1,
	}

}

// BrnFlaptManager.h:66
struct BrnFlapt::FlaptManager {
	// BrnFlaptManager.h:69
	extern int32_t _miUpdatePerfMon;

	// BrnFlaptManager.h:70
	extern int32_t _miRenderPerfMon;

private:
	// BrnFlaptManager.h:150
	BrnFlapt::FlaptManager::PrepareStage mePrepareStage;

	// BrnFlaptManager.h:151
	BrnFlapt::FlaptManager::ReleaseStage meReleaseStage;

	// BrnFlaptManager.h:153
	FlaptFileInstance[1] maFlaptFileInstances;

	// BrnFlaptManager.h:155
	FlaptRenderer mRenderer;

public:
	// BrnFlaptManager.h:80
	void Construct(ImRendererSet *, TextRenderer *, LanguageManager *, const CgsGui::FontCollection *, const RGBA *, int32_t);

	// BrnFlaptManager.h:85
	bool Prepare(LinearMalloc *);

	// BrnFlaptManager.h:89
	bool Release();

	// BrnFlaptManager.h:93
	void Destruct();

	// BrnFlaptManager.h:100
	void SetSoundTriggerHandler(MovieClipInstance::SoundTriggerCallback, void *);

	// BrnFlaptManager.h:106
	void Update(float32_t);

	// BrnFlaptManager.h:110
	void Render();

	// BrnFlaptManager.h:117
	void RegisterFlaptFile(BrnFlapt::FlaptFiles, ResourceHandle);

	// BrnFlaptManager.h:123
	bool IsFileLoaded(BrnFlapt::FlaptFiles) const;

	// BrnFlaptManager.h:129
	FileRef GetFile(BrnFlapt::FlaptFiles);

	// BrnFlaptManager.h:133
	BrnFlapt::FlaptRenderer * GetRenderer();

}

// BrnFlaptManager.h:66
struct BrnFlapt::FlaptManager {
	// BrnFlaptManager.h:69
	extern int32_t _miUpdatePerfMon;

	// BrnFlaptManager.h:70
	extern int32_t _miRenderPerfMon;

private:
	// BrnFlaptManager.h:150
	BrnFlapt::FlaptManager::PrepareStage mePrepareStage;

	// BrnFlaptManager.h:151
	BrnFlapt::FlaptManager::ReleaseStage meReleaseStage;

	// BrnFlaptManager.h:153
	FlaptFileInstance[1] maFlaptFileInstances;

	// BrnFlaptManager.h:155
	FlaptRenderer mRenderer;

public:
	// BrnFlaptManager.h:80
	void Construct(ImRendererSet *, TextRenderer *, CgsLanguage::LanguageManager *, const CgsGui::FontCollection *, const RGBA *, int32_t);

	// BrnFlaptManager.h:85
	bool Prepare(LinearMalloc *);

	// BrnFlaptManager.h:89
	bool Release();

	// BrnFlaptManager.h:93
	void Destruct();

	// BrnFlaptManager.h:100
	void SetSoundTriggerHandler(MovieClipInstance::SoundTriggerCallback, void *);

	// BrnFlaptManager.h:106
	void Update(float32_t);

	// BrnFlaptManager.h:110
	void Render();

	// BrnFlaptManager.h:117
	void RegisterFlaptFile(BrnFlapt::FlaptFiles, ResourceHandle);

	// BrnFlaptManager.h:123
	bool IsFileLoaded(BrnFlapt::FlaptFiles) const;

	// BrnFlaptManager.h:129
	FileRef GetFile(BrnFlapt::FlaptFiles);

	// BrnFlaptManager.h:133
	BrnFlapt::FlaptRenderer * GetRenderer();

}

// BrnFlaptTextFieldRef.h:31
namespace BrnFlapt {
	// BrnFlaptManager.h:45
	enum FlaptFiles {
		E_FLAPTFILE_HUD = 0,
		E_FLAPTFILES_COUNT = 1,
	}

	// Declaration
	struct FlaptManager {
		// BrnFlaptManager.h:137
		enum PrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnFlaptManager.h:143
		enum ReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

	}

}

// BrnFlaptManager.h:66
struct BrnFlapt::FlaptManager {
	// BrnFlaptManager.h:69
	extern int32_t _miUpdatePerfMon;

	// BrnFlaptManager.h:70
	extern int32_t _miRenderPerfMon;

private:
	// BrnFlaptManager.h:150
	BrnFlapt::FlaptManager::PrepareStage mePrepareStage;

	// BrnFlaptManager.h:151
	BrnFlapt::FlaptManager::ReleaseStage meReleaseStage;

	// BrnFlaptManager.h:153
	FlaptFileInstance[1] maFlaptFileInstances;

	// BrnFlaptManager.h:155
	FlaptRenderer mRenderer;

public:
	// BrnFlaptManager.h:80
	void Construct(CgsGui::ImRendererSet *, CgsGraphics::TextRenderer *, LanguageManager *, const CgsGui::FontCollection *, const RGBA *, int32_t);

	// BrnFlaptManager.h:85
	bool Prepare(LinearMalloc *);

	// BrnFlaptManager.h:89
	bool Release();

	// BrnFlaptManager.h:93
	void Destruct();

	// BrnFlaptManager.h:100
	void SetSoundTriggerHandler(MovieClipInstance::SoundTriggerCallback, void *);

	// BrnFlaptManager.h:106
	void Update(float32_t);

	// BrnFlaptManager.h:110
	void Render();

	// BrnFlaptManager.h:117
	void RegisterFlaptFile(BrnFlapt::FlaptFiles, ResourceHandle);

	// BrnFlaptManager.h:123
	bool IsFileLoaded(BrnFlapt::FlaptFiles) const;

	// BrnFlaptManager.h:129
	FileRef GetFile(BrnFlapt::FlaptFiles);

	// BrnFlaptManager.h:133
	BrnFlapt::FlaptRenderer * GetRenderer();

}

