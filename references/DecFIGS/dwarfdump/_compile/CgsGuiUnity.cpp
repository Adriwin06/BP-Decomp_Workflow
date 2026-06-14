struct _CGprogram;

struct _CGparameter;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:450
	virtual bool GetHasClass() const;

	// AptValue.h:457
	virtual void SetHasClass(int);

	// AptValue.h:512
	virtual void DeleteThis();

	// AptValue.h:520
	virtual void PreDestroy();

	// AptValue.h:538
	virtual void ForceDelete();

public:
	// AptValue.h:397
	bool isObject() const;

	// AptValue.h:188
	AptVirtualFunctionTable_Indices getVtblIndex() const;

	// AptValue.h:304
	bool isUndefined() const;

	// AptValue.h:194
	bool getIsDefined() const;

	// AptValue.h:314
	bool isString() const;

	// AptValue.h:325
	bool isInteger() const;

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

struct AptFile;

// Declaration
struct AptExtObject {
public:
	// AptExtObject.h:286
	virtual bool IsGarbageCollected() const;

	// AptExtObject.h:250
	void operator delete(void *, size_t);

}

struct AptNativeFunction;

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::StrStreamBase(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			GuiGeometryMesh::Im2dVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsGui::CustomRenderComponentInterface::SetRenderEnabled(bool  lbRenderEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::GetRenderLayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::State::Render() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptValue::GetHasClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptValue::SetHasClass(int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptValue::DeleteThis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptValue::PreDestroy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptValue::ForceDelete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptExtObject::IsGarbageCollected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SetGuiCamera(CgsGui::eGuiCameraType  lCameraType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::GetRenderOutput(int32_t  liTextureIndex, int32_t *  lpiShaderProgram, ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::GetNumTextures() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::StartFade(bool  lbFadeIn, float32_t  lfFadeTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::ClearFadeState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRendererManager::Prepare(rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRendererManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRendererManager::SetTextRenderer(TextRenderer *  lpTextRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRendererManager::SetLanguageManager(LanguageManager *  lpLanguageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::IsInARenderingBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ModelModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::StopPriorityEventBlocking(CgsGui::EventObserver *  lpEventObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:999
		int32_t liIndex;

	}
}

void CgsGui::ModelModule::StopGuiPriorityObserverBlocking(CgsGui::EventObserver *  lpEventObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiModule::StopPriorityGuiObserverBlocking(CgsGui::EventObserver *  lpEventObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::FindObserverInEventObserverList(CgsGui::EventObserver *  lpEventObserver, CgsGui::EventInterpreterModule::ObjectEventObserver **  lppFoundObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:618
		bool lbFound;

		// CgsEventInterpreterModule.cpp:619
		int32_t lnIndex;

	}
}

void CgsGui::EventInterpreterModule::FindPriorityObserverInEventObserverList(CgsGui::EventObserver *  lpEventObserver, CgsGui::EventInterpreterModule::PriorityObjectEventObserver **  lppFoundObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:659
		bool lbFound;

		// CgsEventInterpreterModule.cpp:660
		int32_t lnIndex;

	}
}

void CgsGui::EventInterpreterModule::RemoveObjectFromObserverList(CgsGui::EventObserver *  lpEventObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:584
		int32_t lnObserverIndex;

		// CgsEventInterpreterModule.cpp:585
		int32_t lnLastObserverIndex;

		// CgsEventInterpreterModule.cpp:586
		CgsGui::EventInterpreterModule::ObjectEventObserver * lpFoundObserver;

	}
}

void CgsGui::EventInterpreterModule::UnRegisterForAllEvents(CgsGui::EventObserver *  lpEventObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::SetBlocking(const CgsGui::EventInterpreterModule::ObjectEventObserver *  lpObjectEventObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:1067
		int32_t liIndex;

	}
}

void CgsGui::EventObserver::Prepare(GuiAccessPointers *  lpAccessPointers, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventObserver::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventObserver::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::IsBundleQueuedToLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::PopFromBundleLoadQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::SortBundleQueue(const void *  lpA, const void *  lpB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:732
		const CgsGui::GuiResourceModule::GuiBundleToLoad * lpBundleA;

		// CgsGuiResourceModule.cpp:733
		const CgsGui::GuiResourceModule::GuiBundleToLoad * lpBundleB;

	}
}

void CgsGui::State::Construct(CgsID  lId, CgsFsm::ScriptedFsm *  lpFsm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::State::PreWorldUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::State::PreUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::Interpolator::GetCurrentValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::Interpolator::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,6u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,6u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptInitParmsT::AptInitParmsT() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptTargetInitParams::AptTargetInitParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::AptCommunicator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::VSprintF(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, va_list  lArgs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:87
		int32_t lNumBytesCopied;

	}
}

void CgsGui::AptCallbackDebug::Print(const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:773
		const int32_t KI_MAX_TRACE_CHARS;

		// CgsAptAux.cpp:774
		char[2048] lpacDebugPrintBuffer;

		// CgsAptAux.cpp:775
		va_list lArgs;

	}
	CgsCore::VSprintF(/* parameters */);
}

void CgsGui::AptCallbackDebug::AddSavedInput(AptSavedInputRecord *  lpRecord, int32_t  lnSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDebug::SetScreenGrabPending(const char *  lpcFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackFile::FreeAnimation(void *  lpUserHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:860
		AptDataHeader * lpAptDataHeader;

	}
}

void CgsGui::AptCallbackFile::FreeConstantTable(void *  lpConstTable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackFile::LoadAnimationCompleted(const char *  lpcBaseName, const char *  lpcTargetName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackFile::GetBytesTotal(const char *  lpcFileName, AptGetBytesEnum  leGetBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackFile::GetBytesLoaded(const char *  lpcFileName, AptGetBytesEnum  leGetBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackVariable::SetExternVariable(const char *  lpcVariable, const char *  lpcValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackVariable::GetExternVariable(const char *  lpcVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackCustom::ControlUpdate(AptAssetRenderingUnit  lpRenderingUnit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackRenderFlags::Push(const char *  pszRenderFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackRenderFlags::Pop(const char *  pszRenderFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDeprecated::SendVariables(const char *  lpcUrl, const char *  lpcTarget, const char *  lpcMethod, const char *  lpcProp, int32_t  lnIsSendAndLoad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDeprecated::FsCommand(const char *  lpcCommand, const char *  lpcParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDeprecated::LoadVariables(const char *  lpcCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDeprecated::LoadVariablesNULL() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDeprecated::GetAnalogStickInfo(int32_t  lnController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsAptAux.cpp:1167
	AptAnalogStickInfo lAnalogStickInfo;

	{
		// CgsAptAux.cpp:1167
		AptAnalogStickInfo lAnalogStickInfo;

	}
}

void CgsGui::AptCallbackDeprecated::UninitializedVarAccess(const char *  lpcVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDeprecated::PointHitTest(float  lrXPos, float  lrYPos, AptAssetMoiveClip  lpAssetMovieClip) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDeprecated::GetRealTimeClock(AptSysClock *  lpAptSysClock, bool  lbLocal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::sMethod_GetPlatformString(AptValue *  pThis, int  nParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:365
		const char * lpPlatformString;

	}
}

void CgsGui::AptCommunicator::sMethod_GetCircleButtonAsSelect(AptValue *  pThis, int  nParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::Interpolator::SetInterpolator(float32_t  lStart, float32_t  lEnd, float32_t  lfStartValue, float32_t  lfEndValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::Interpolator::Update(float32_t  lfScalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptInterpolator.cpp:97
		float32_t lTimeDiff;

		// CgsAptInterpolator.cpp:99
		float32_t lfLambda;

	}
}

void CgsGui::Interpolator::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptExtObject::operator delete(void *  p, size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::~ObjectController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::~ObjectController(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AptExtObject::operator delete(/* parameters */);
}

void CgsGui::ObjectController::Initialize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackRender::FreeTexture(AptAssetTexture  lpAssetTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::_FindGeometryFile(const void *  lpA, const void *  lpB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackRender::FreeRenderingUnit(AptAssetRenderingUnit  lpRenderingUnit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AptDataHeaderType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AptDataHeaderType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptDataHeaderType.cpp:166
		const AptDataHeader * lpAptDataHeader;

		// CgsAptDataHeaderType.cpp:167
		uint32_t luCount;

		{
			// CgsAptDataHeaderType.cpp:169
			uint32_t luFileIter;

			{
				// CgsAptDataHeaderType.cpp:171
				GuiGeometryFile * lpFile;

				{
					// CgsAptDataHeaderType.cpp:172
					uint32_t luMeshIter;

				}
			}
		}
	}
}

void CgsResource::AptDataHeaderType::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptDataHeaderType.cpp:205
		const AptDataHeader * lpAptDataHeader;

		// CgsAptDataHeaderType.cpp:210
		uint32_t luIndexIter;

	}
	{
		// CgsAptDataHeaderType.cpp:211
		uint32_t luFileIter;

		{
			// CgsAptDataHeaderType.cpp:213
			GuiGeometryFile * lpFile;

			{
				// CgsAptDataHeaderType.cpp:214
				uint32_t luMeshIter;

			}
		}
	}
}

void CgsResource::GuiPopupResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataDetail::CharIsNumber(char  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataDetail::CharIsUppercaseAlphabet(char  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataDetail::FindFileStat(FileListIterator  lFirst, FileListIterator  lLast, const char *  lpFilename) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.cpp:343
		FileStatNameEqualPredicate lPredicate;

	}
}

void CgsGui::SaveDataDetail::FindFirst<const CellSaveDataFileStat*, CgsGui::SaveDataDetail::FileStatNameEqualPredicate>(const CellSaveDataFileStat *  lFirst, const CellSaveDataFileStat *  lLast, FileStatNameEqualPredicate  lPredicate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataDetail::FileStatNameEqualPredicate::operator()(const const CellSaveDataFileStat &  lFileStat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataDetail::DebugCellSaveDataStatGet(CellSaveDataStatGet *  get) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataDetail::DebugCellSaveDataListGet(CellSaveDataListGet *  get) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::Prepare(HeapMalloc *  lpHeapMalloc, LinearMalloc *  lpLinearMalloc, SystemUserProfile *  lpSystemUserProfile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:216
		CellDiscGameSystemFileParam lDiscInfo;

		// CgsSaveLoadPS3.cpp:217
		int32_t liErrorCode;

	}
}

void CgsGui::SaveLoadSystem::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::StartWorkerThread(int (*)(void *)  lEntryFunc, void (*)(CgsGui::SaveDataSystem::ETaskResult)  lpResultFunc, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:286
		ThreadParameters lThreadParameters;

	}
}

void CgsGui::SaveLoadSystem::IsWorkerThreadRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::IsWorkerThreadFinished(int *  lpReturnValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::ShowMessage(const char *  lpMessage, const char **  lpaOptions, uint32_t  luOptionCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::ShowAutosaveIcon(bool  lbShow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::SetMetadata(const const SaveLoadMetadata &  lMetadata, const const SaveInfo &  lSaveInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:412
		CgsGui::SaveDataSystem::Metadata lSaveDataMetadata;

	}
}

void CgsGui::SaveLoadSystem::CheckDiskSpace(CgsGui::SaveLoadTaskResultHandler *  lpHandler, SaveLoadMetadata *  lpMetadata) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:456
		SaveInfo lSaveInfo;

	}
}

void CgsGui::SaveLoadSystem::IsChatDisabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::Delete(const CgsGui::SaveLoadTaskResultHandler &  lHandler) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1499
		int32_t liResult;

	}
	{
		// CgsSaveLoadPS3.cpp:1504
		void (*)(CgsGui::SaveDataSystem::ETaskResult) lpTempFunc;

	}
}

void CgsGui::SaveLoadSystem::GetCifFileType(CgsGui::ESaveLoadCif  leCifType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::GetCifFileName(CgsGui::ESaveLoadCif  leCifType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::isalpha(int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::isdigit(int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>::GetInternal(int32_t  lKey, LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > **  lppBinOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHashTable.h:307
		const LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > & lBin;

	}
	{
		// CgsHashTable.h:314
		CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * lpNode;

		LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetHead(/* parameters */);
	}
	LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetNext(/* parameters */);
}

void CgsGui::GetNormalisedToRendererTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiShared.cpp:115
		Matrix44 lMatrix;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	}
}

void CgsGui::Convert2dTo3dTransform(const const Im2dTransform &  l2dTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsGuiShared.cpp:100
	Matrix44 & l3dTransform;

	{
		// CgsGuiShared.cpp:100
		Matrix44 l3dTransform;

		rw::math::vpu::Vector4::operator[](/* parameters */);
	}
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:146
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::operator/(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1688
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1689
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:160
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:161
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:161
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void CgsGui::GetDistanceFromLineSegment(const const rw::math::vpu::Vector3 &  lv3Point, const const rw::math::vpu::Vector3 &  lv3From, const const rw::math::vpu::Vector3 &  lv3To, float32_t *  lpfDistance, float32_t *  lpfDistProp, Vector3 *  lpv3ProjectedPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiShared.cpp:46
		Vector3 lv3SegmentVector;

		// CgsGuiShared.cpp:47
		float32_t lfDistProp;

		// CgsGuiShared.cpp:48
		Vector3 lv3ProjectedPoint;

		// CgsGuiShared.cpp:49
		bool lbIsInLineSegment;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		{
			// CgsGuiShared.cpp:73
			float32_t lfDistance;

			rw::math::vpu::Magnitude(/* parameters */);
		}
		{
			{
			}
		}
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
}

void rw::math::vpu::Max<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Camera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GetGuiCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsGuiShared.cpp:193
	Camera & lCamera;

	{
		// CgsGuiShared.cpp:193
		Camera lCamera;

		// CgsGuiShared.cpp:195
		const float32_t lfAspectRatio;

		// CgsGuiShared.cpp:196
		const float32_t lfNearClipPlane;

		// CgsGuiShared.cpp:197
		const float32_t lfFarClipPlane;

	}
	{
		// CgsGuiShared.cpp:204
		const float32_t lfFovHorizontal;

		// CgsGuiShared.cpp:208
		const rw::math::vpu::Vector3 lv3EyePos;

		// CgsGuiShared.cpp:209
		const rw::math::vpu::Vector3 lv3UpVector;

		// CgsGuiShared.cpp:210
		const rw::math::vpu::Vector3 lv3TargetPos;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsGuiShared.cpp:219
		const float32_t lfFovHorizontal;

		// CgsGuiShared.cpp:223
		const rw::math::vpu::Vector3 lv3EyePos;

		// CgsGuiShared.cpp:224
		const rw::math::vpu::Vector3 lv3UpVector;

		// CgsGuiShared.cpp:225
		const rw::math::vpu::Vector3 lv3TargetPos;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
}

void rw::EndianSwap(const int32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::GuiTexture>(const GuiGeometryMeshHeader::GuiTexture *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint64_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::GetInternal(uint32_t  lKey, LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > **  lppBinOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHashTable.h:307
		const LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > & lBin;

	}
	{
		// CgsHashTable.h:314
		CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * lpNode;

		LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetHead(/* parameters */);
	}
	LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetNext(/* parameters */);
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsEqual(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsGui::GuiPopup>(const GuiPopup *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsGui::GuiPopup*>(const GuiPopup **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const int16_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::GuiPopupResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiPopupResourceType.cpp:143
		uint32_t luBaseValue;

		// CgsGuiPopupResourceType.cpp:145
		GuiPopupResource * lpPopupResource;

	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(const const ResourceHandle &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::CreateFromHandle(const ResourceHandle *  lpSrcHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventQueueBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseVariableEventQueue::BaseVariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::GuiPopupResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsGuiPopupResourceType.cpp:84
	ResourceDescriptor & lResourceDesctiptor;

	{
		// CgsGuiPopupResourceType.cpp:82
		const GuiPopupResource * lpConstPopupResource;

		// CgsGuiPopupResourceType.cpp:84
		ResourceDescriptor lResourceDesctiptor;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
}

void CgsGui::GameData::GetUserGameDataDirectory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::GetUserGameDataPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GameData::SetTitleID(const char *  lpTitleID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GameData::SetGameVersion(const char *  lpGameVersion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GetSizeIn64Kb(int32_t  liByteSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::Construct(CgsGui::MessageDisplay *  lpMessageDisplay, LanguageManager *  lpLanguageManager, const char *  lpcGameTitle, const char *  lTitleId, const char *  lpcIconPath, sys_memory_container_t  lMemoryContainer, int32_t  liNumberOfMugshotTypes, int32_t  liNumberOfMugshotsPerType, uint32_t  luMugshotSizeBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameData::SetTitleID(/* parameters */);
	GameData::SetGameVersion(/* parameters */);
}

void CgsResource::AptDataHeaderType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptDataHeaderType.cpp:120
		uint32_t luBaseValue;

		// CgsAptDataHeaderType.cpp:122
		AptDataHeader * lpAptDataHeader;

	}
}

void CgsResource::GuiPopupResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiPopupResourceType.cpp:120
		uint32_t luBaseValue;

		// CgsGuiPopupResourceType.cpp:122
		GuiPopupResource * lpPopupResource;

	}
}

void rw::EndianSwap<float>(const Vector2Template<float> &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::detail::EndianSwapArray<float>(float *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::GuiVertex>(const GuiGeometryMesh::GuiVertex *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::GuiVertex*>(const GuiGeometryMesh::GuiVertex **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::GuiGeometryMesh>(const GuiGeometryMesh *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::GuiGeometryMesh*>(const GuiGeometryMesh **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::GuiGeometryFile>(const GuiGeometryFile *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::GuiGeometryFile*>(const GuiGeometryFile **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<const char>(const const char *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<void>(const void *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::GuiGeometryObject>(const GuiGeometryObject *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AptDataHeaderType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptDataHeaderType.cpp:143
		uint32_t luBaseValue;

		// CgsAptDataHeaderType.cpp:145
		AptDataHeader * lpAptDataHeader;

	}
}

void CgsGui::ParticleSystem2d::IsConstructed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::SetSeed(uint64_t  luSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:219
		uint32_t luPreflight;

	}
}

void CgsNumeric::Random::RandomFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:352
		float32_t lfRandomFractionPlusOne;

		// CgsRandom.h:356
		float32_t lfRandomFraction;

	}
}

void CgsNumeric::Random::AddRandomFloatToBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void CgsNumeric::Random::ConvertUnsignedFixed32ToFloatRepresentation(uint32_t  lu32Random) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:230
		const uint32_t KU_IEEE_754_REPRESENTATION_FLOAT_ONE;

	}
}

void CgsResource::AptDataHeaderType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsAptDataHeaderType.cpp:84
	ResourceDescriptor & lResourceDesctiptor;

	{
		// CgsAptDataHeaderType.cpp:82
		const AptDataHeader * lpAptDataHeader;

		// CgsAptDataHeaderType.cpp:84
		ResourceDescriptor lResourceDesctiptor;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsContainers::BitArray<576u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<576u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void rw::Resource::Resource(const const MemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::IResourceAllocator::Free(const const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::~AptCommunicator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::~AptCommunicator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::~AptCommunicator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AptExtObject::operator delete(/* parameters */);
}

void CgsGui::ObjectController::~ObjectController(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<8192,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void CgsGui::GuiResourceModule::Construct(const bool  lHighDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<8192,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

void CgsModule::EventReceiverQueue<8192,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::Prepare(int32_t  liAptPersistentBundlePool, int32_t  liAptStreamedBundlePool, int32_t  liFontBundlePool, int32_t  liFSMBundlePool, int32_t  liLanguageBundlePool, int32_t  liTexturesBundlePoolId, int32_t  liGlobalTexturePoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<8192,16>::Prepare(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

void CgsModule::EventReceiverQueue<8192,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<8192,16>::Destruct(/* parameters */);
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<8192,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::operator++(const CgsGui::GuiResourceModule::EReleaseStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.h:236
		CgsGui::GuiResourceModule::EReleaseStage leOldEnumIndex;

	}
}

void CgsGui::GuiResourceModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<8192,16>::Release(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
}

void CgsGui::operator++(const CgsGui::EventInterpreterModule::EventInterpreterReleaseStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:304
		CgsGui::EventInterpreterModule::EventInterpreterReleaseStage leOldEnumIndex;

	}
}

void CgsGui::EventInterpreterModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	operator++(/* parameters */);
}

void CgsGui::operator++(const CgsGui::EventInterpreterModule::EventInterpreterPrepareStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:303
		CgsGui::EventInterpreterModule::EventInterpreterPrepareStage leOldEnumIndex;

	}
}

void CgsGui::EventInterpreterModule::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	operator++(/* parameters */);
}

void CgsGui::ModelModule::Prepare(int32_t  liAptPersistentBundlePool, int32_t  liAptStreamedBundlePool, int32_t  liFontBundlePool, int32_t  liFSMBundlePool, int32_t  liLanguageBundlePool, int32_t  liTexturesBundlePoolId, int32_t  liGlobalTexturePoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::IsPrepared() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void CgsGui::BillboardRenderer::SetAnimMode(CgsGui::BillboardRenderer::eAnimMode  Mode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::GetSystemLifetime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::operator++(const CgsGui::ModelModule::ModelReleaseStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModule.h:229
		CgsGui::ModelModule::ModelReleaseStage leOldEnumIndex;

	}
}

void CgsGui::ModelModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
}

void EAStringC::EAStringC() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptComponentList::GetAptValue(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptComponentList::GetHashedReferenceName(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EAStringC::~EAStringC() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::CheckReferenceName(const int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:868
		AptNativeString lString;

		AptComponentList::GetAptValue(/* parameters */);
	}
	EAStringC::EAStringC(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	AptComponentList::GetHashedReferenceName(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
}

void CgsGui::AptCommunicator::CalculateReservedVariableHashes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:931
		int32_t liIndex;

		CgsContainers::CgsHash::CalculateHash(/* parameters */);
	}
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::UnlockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::UnlockForWrite(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::UnlockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::UnlockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::LockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
}

void CgsGui::AptComponentList::GetUsedData(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptComponentList::SetUsedData(int32_t  liComponent, uint8_t  luUsedData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::UpdateAllComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:619
		AptValue *[256] lapComponentsToUpdate;

		// CgsAptCommunicator.cpp:620
		uint32_t luNumComponentsToUpdate;

		// CgsAptCommunicator.cpp:621
		uint32_t luIndex;

	}
	AptComponentList::GetAptValue(/* parameters */);
	AptComponentList::GetUsedData(/* parameters */);
	{
		// CgsAptCommunicator.cpp:638
		AptValue * lpUpdateArray;

	}
	AptComponentList::SetUsedData(/* parameters */);
}

void EAStringC::EAStringC(const char *const  pStrText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::HideAllComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:667
		uint32_t luComponentIndex;

	}
	{
		// CgsAptCommunicator.cpp:675
		AptNativeString lAptNativeString;

		AptComponentList::GetAptValue(/* parameters */);
		EAStringC::~EAStringC(/* parameters */);
	}
	EAStringC::EAStringC(/* parameters */);
}

void CgsGui::AptCommunicator::ShowAllComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:695
		uint32_t luComponentIndex;

	}
	{
		// CgsAptCommunicator.cpp:703
		AptNativeString lAptNativeString;

		AptComponentList::GetAptValue(/* parameters */);
		EAStringC::~EAStringC(/* parameters */);
	}
	EAStringC::EAStringC(/* parameters */);
}

void CgsGui::AptComponentList::MoveComponent(int32_t  lnFromIndex, int32_t  lnToIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.h:244
		int32_t liComponentDataIndex;

	}
}

void CgsGui::AptComponentList::ClearComponent(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.h:266
		int32_t liComponentDataIndex;

	}
}

void CgsGui::AptCommunicator::RemoveExpiredAptComponent(AptValue *  lpAptValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:841
		uint32_t luIndex;

	}
	AptComponentList::GetAptValue(/* parameters */);
	AptComponentList::MoveComponent(/* parameters */);
}

void CgsGui::AptAux::RemoveAptValue(AptValue *  lpValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackFile::OnUnload(AptValue *  lpValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AptAux::RemoveAptValue(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::AllocateCommand(int32_t  liCommandType, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1222
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1223
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1226
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1219
			uintptr_t luAddress;

		}
		{
			// CgsImRenderBuffer.h:1232
			ImCommand * lpCommand;

		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(int32_t  liCommandType, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1222
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1223
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1226
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1219
			uintptr_t luAddress;

		}
		{
			// CgsImRenderBuffer.h:1232
			ImCommand * lpCommand;

		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
	}
	{
	}
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void CgsFileSystem::AsyncOp::GetLastOperationResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceAsyncOp.h:132
		CgsDev::StrStream lStrStream;

	}
}

void CgsFileSystem::AsyncOp::GetLastOperationHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceAsyncOp.h:125
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::SaveLoadSystem::CreateGameDataThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:733
		SaveLoadSystem * lpThis;

		// CgsSaveLoadPS3.cpp:734
		int32_t liResult;

		// CgsSaveLoadPS3.cpp:736
		const system_time_t lTotalWaitTimeInMicroseconds;

		// CgsSaveLoadPS3.cpp:737
		system_time_t lStartTimeInMicroSeconds;

		// CgsSaveLoadPS3.cpp:738
		system_time_t lElapsedTimeInMicroSeconds;

		// CgsSaveLoadPS3.cpp:739
		system_time_t lSleepTimeInMicroseconds;

	}
	sys_timer_usleep(/* parameters */);
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::SaveLoadSystem::IsSavingCif(CgsGui::ESaveLoadCif  leCifType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BasicColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator!=(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV4(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:246
		bool ret;

	}
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::Append(const const Im3dVertex &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

extern CgsGraphics::BasicColouredTexturedVertex & operator=(const const CgsGraphics::BasicColouredTexturedVertex &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::GetRed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1556
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1557
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1558
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void renderengine::RGBA8::GetGreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::GetBlue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Clamp(const VecFloat  value, const VecFloat  min, const VecFloat  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void renderengine::RGBA8::RGBA8(const const RGBA &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetRed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetGreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetBlue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::Convert2dTo3dVerts(const GuiGeometryMesh::Im2dVertex *  lp2dVertexList, uint32_t  luNumVertices, const const Im2dTransform &  l2dTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiShared.cpp:128
		Array<CgsGraphics::BasicColouredTexturedVertex,512u> l3dVertexList;

		// CgsGuiShared.cpp:133
		bool lbHasColourScale;

		// CgsGuiShared.cpp:134
		bool lbHasColourShift;

		// CgsGuiShared.cpp:136
		Im3dVertex l3dVertex;

	}
	CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::Array(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::Clear(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	{
		// CgsGuiShared.cpp:152
		uint32_t luIndex;

	}
	CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::operator[](/* parameters */);
	{
		// CgsGuiShared.cpp:140
		uint32_t luIndex;

		CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::Append(/* parameters */);
		operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsGuiShared.cpp:156
		VecFloat lfRed;

		// CgsGuiShared.cpp:157
		VecFloat lfGreen;

		// CgsGuiShared.cpp:158
		VecFloat lfBlue;

		// CgsGuiShared.cpp:159
		VecFloat lfAlpha;

		CgsContainers::Array<CgsGraphics::BasicColouredTexturedVertex,512u>::Append(/* parameters */);
	}
	operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::EventInterpreterModule::UpdateObservers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:268
		int32_t lnIndex;

		// CgsEventInterpreterModule.cpp:269
		CgsGui::EventInterpreterModule::ObjectEventObserver * lObjectEventObserver;

	}
	{
		// CgsEventInterpreterModule.cpp:276
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::EventInterpreterModule::PreUpdateObservers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:294
		int32_t lnIndex;

		// CgsEventInterpreterModule.cpp:295
		CgsGui::EventInterpreterModule::ObjectEventObserver * lObjectEventObserver;

	}
	{
		// CgsEventInterpreterModule.cpp:302
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::EventInterpreterModule::ObjectEventObserver::RegisterForEvent(int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:343
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<576u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::EventInterpreterModule::RegisterForEvent(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:366
		int32_t lnEventIndex;

		// CgsEventInterpreterModule.cpp:367
		CgsGui::EventInterpreterModule::ObjectEventObserver * lpObjectEventObserver;

	}
	ObjectEventObserver::RegisterForEvent(/* parameters */);
	CgsContainers::BitArray<576u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ModelModule::AddGuiEventObserver(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiModule::AddGuiEventObserver(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiModule::AddGuiEventObserver(CgsGui::EventObserver *  lpEventObserver, int32_t *  laiEventType, int32_t  liNumEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModule.cpp:499
		int32_t liEventIndex;

	}
}

void CgsGui::EventInterpreterModule::ObjectEventObserver::UnRegisterForEvent(int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:361
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<576u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::PriorityObjectEventObserver::IsRegisteredForEvent(const int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:465
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<576u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::EventInterpreterModule::PriorityObjectEventObserver::UnRegisterForEvent(int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:443
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>::Remove(int32_t  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHashTable.h:336
		LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * lpBin;

		// CgsHashTable.h:337
		CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * lpNode;

	}
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::RemoveNode(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::UnRegisterForEvent(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:417
		CgsGui::EventInterpreterModule::ObjectEventObserver * lpObjectEventObserver;

	}
	{
		// CgsEventInterpreterModule.cpp:428
		CgsGui::EventInterpreterModule::PriorityObjectEventObserver * lpPriorityObjectEventObserver;

		ObjectEventObserver::UnRegisterForEvent(/* parameters */);
		PriorityObjectEventObserver::IsRegisteredForEvent(/* parameters */);
		PriorityObjectEventObserver::UnRegisterForEvent(/* parameters */);
		CgsContainers::BitArray<576u>::UnSetBit(/* parameters */);
		CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>::Remove(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::EventInterpreterModule::PriorityObjectEventObserver::RegisterForEvent(int32_t  liEventType, const int32_t *  liEventTypeOverrides, const uint32_t &  luOverrideCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:422
		CgsGui::EventInterpreterModule::sMapEntry lMapEntry;

		{
			// CgsEventInterpreterModule.h:418
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::EventInterpreterModule::sMapEntry::sMapEntry(const int32_t *  liEventTypeOverrides, const uint32_t  luOverrideCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:176
		uint32_t luIndex;

	}
}

void CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>::Set(int32_t  lKey, const const CgsGui::EventInterpreterModule::sMapEntry &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>::Insert(CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry> *  lpNewElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHashTable.h:231
		int32_t lNewKey;

		// CgsHashTable.h:232
		const LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > & lBin;

		// CgsHashTable.h:233
		CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * lpNewNode;

		{
			// CgsHashTable.h:236
			CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > * lpNode;

			{
				// CgsHashTable.h:252
				int32_t lCurrentKey;

			}
		}
	}
}

void CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>::GetKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>::GetListNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::AddHead(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetTail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::AddTail(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::AddBefore(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *  lpNodeInList, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::RegisterPriorityEvent(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType, const int32_t *  liEventTypeOverrides, uint32_t  luOverrideCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:482
		int32_t lnEventIndex;

		// CgsEventInterpreterModule.cpp:483
		CgsGui::EventInterpreterModule::ObjectEventObserver * lpObjectEventObserver;

		// CgsEventInterpreterModule.cpp:484
		CgsGui::EventInterpreterModule::PriorityObjectEventObserver * lpPriorityObjectEventObserver;

	}
	PriorityObjectEventObserver::RegisterForEvent(/* parameters */);
	CgsContainers::BitArray<576u>::SetBit(/* parameters */);
	sMapEntry::sMapEntry(/* parameters */);
	CgsContainers::BitArray<576u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>::Set(/* parameters */);
	CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>::Insert(/* parameters */);
	CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>::GetKey(/* parameters */);
	{
		CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetHead(/* parameters */);
		CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetTail(/* parameters */);
		{
			CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::GetNext(/* parameters */);
		}
		CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::AddBefore(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::AddTail(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::AddHead(/* parameters */);
}

void CgsGui::ModelModule::RegisterGuiPriorityObserver(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType, int32_t *  liEventTypeOverridden, uint32_t  luOverrideCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiModule::RegisterPriorityGuiObserver(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType, int32_t *  liEventTypeOverridden, uint32_t  luOverrideCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::UnregisterPriorityEvent(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:550
		CgsGui::EventInterpreterModule::PriorityObjectEventObserver * lpObjectEventObserver;

	}
	PriorityObjectEventObserver::UnRegisterForEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ModelModule::UnregisterGuiPriorityObserver(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiModule::UnregisterPriorityGuiObserver(CgsGui::EventObserver *  lpEventObserver, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::IsPriorityEvent(const int32_t  liEvent, CgsGui::EventInterpreterModule::ObjectEventObserver **  lpOwnerObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:701
		int32_t liIndex;

	}
	PriorityObjectEventObserver::IsRegisteredForEvent(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::IsEventBlocked(int32_t  liEvent, const CgsGui::EventObserver *&  lpBlockingEventObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:1029
		int32_t liIndex;

	}
	{
		// CgsEventInterpreterModule.cpp:1032
		const const CgsGui::EventInterpreterModule::PriorityObjectEventObserver & lPriObs;

		{
			// CgsEventInterpreterModule.cpp:1036
			uint32_t luHashIndex;

			{
				// CgsEventInterpreterModule.cpp:1039
				const const CgsGui::EventInterpreterModule::sMapEntry & lMapEntry;

			}
			CgsContainers::BitArray<576u>::IsBitSet(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
}

void CgsGui::GuiResourceModule::AddToBundleLoadQueue(const GuiEventLoadRequest *  lpLoadRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:762
		CgsGui::GuiResourceModule::GuiBundleToLoad * lpBundleToLoad;

	}
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	{
		// CgsGuiResourceModule.cpp:907
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiResourceModule.cpp:760
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsFsm::ScriptedFsm::IsLuaResourceValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::State::SendStateEvent(const char *  lpacEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsFsm::ScriptedFsm::IsLuaResourceValid(/* parameters */);
	{
		// CgsGuiState.cpp:85
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiState.cpp:80
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiComponent::SetName(const char *  lacName, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrnCpy(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	{
		// CgsGuiComponent.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiComponent.cpp:90
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiComponent.cpp:99
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiComponent::SetStateInterface(StateInterface *  lpStateInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiComponent.h:169
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetStateInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(const const SafeResourceHandle<CgsResource::Font> &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:403
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::GetDefaultAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::AddFont(const SafeResourceHandle<CgsResource::Font> &  lpFont) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::GetDefaultAllocator(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:1099
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:419
		CgsDev::StrStream lStrStream;

	}
}

void std::strstr(char *  _Str1, const char *  _Str2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::Interpolator::GetEndLambda() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsGui::AnimChannelData,6u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,6u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,6u>::Append(const const AnimChannelData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::Append(const const CgsGui::AnimData::AnimatorChannel &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsGui::AnimChannel,6u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannel,6u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsGui::AnimChannel,6u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::Animator::Stop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:113
		uint32_t luChannel;

		{
			// CgsAptAnimator.cpp:117
			AnimChannel * lpChannel;

			CgsContainers::Array<CgsGui::AnimChannel,6u>::operator[](/* parameters */);
		}
		CgsContainers::Array<CgsGui::AnimChannel,6u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsAptAnimator.cpp:118
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}

void CgsContainers::Array<CgsGui::AnimChannel,6u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::Animator::IsAnimating() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:134
		uint32_t luChannel;

		CgsContainers::Array<CgsGui::AnimChannel,6u>::operator[](/* parameters */);
		CgsContainers::Array<CgsGui::AnimChannel,6u>::GetLength(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::Animator::Update(AnimChannelData::Time  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:158
		uint32_t luChannel;

	}
	{
		// CgsAptAnimator.cpp:159
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsAptAnimator.cpp:163
		AnimChannel * lpChannel;

		CgsContainers::Array<CgsGui::AnimChannel,6u>::operator[](/* parameters */);
	}
	CgsContainers::Array<CgsGui::AnimChannel,6u>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsAptAnimator.cpp:164
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

void CgsGui::Animator::GetAnimChannel(CgsGui::AnimData::AnimatorChannel  leChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::Animator::SetAnimation(AnimData *  lpAnimData, AnimChannelData::Time  lTimeBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:245
		int32_t leChannel;

	}
	{
		// CgsAptAnimator.cpp:244
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsAptAnimator.cpp:249
		const AnimChannelData * lpChannelData;

		// CgsAptAnimator.cpp:252
		AnimChannel * lpChannel;

	}
	GetAnimChannel(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

void CgsGui::AnimChannel::GetCurrentValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::Animator::SetAptValues() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:274
		uint32_t luChannel;

		{
			// CgsAptAnimator.cpp:278
			AnimChannel * lpChannel;

			CgsContainers::Array<CgsGui::AnimChannel,6u>::operator[](/* parameters */);
			{
				// CgsAptAnimator.cpp:284
				float32_t lfValue;

			}
		}
		CgsContainers::Array<CgsGui::AnimChannel,6u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsAptAnimator.cpp:279
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}

void CgsGui::AptAux::GetDataHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptDataHandler::AptAlloc(size_t  lnSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptDataHandler.h:128
		void * lpMemory;

		{
			// CgsAptDataHandler.h:130
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsAptDataHandler.h:140
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::AptCallbackMemory::Alloc(size_t  lnSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:707
		AptDataHandler * lpDataHandler;

		// CgsAptAux.cpp:710
		void * lpMemory;

		AptAux::GetDataHandler(/* parameters */);
	}
	AptDataHandler::AptAlloc(/* parameters */);
	{
		// CgsAptAux.cpp:708
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::AptDataHandler::AptFree(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptDataHandler.h:156
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsAptDataHandler.h:157
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::AptCallbackMemory::Free(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:727
		AptDataHandler * lpDataHandler;

		AptAux::GetDataHandler(/* parameters */);
	}
	AptDataHandler::AptFree(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:728
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptCallbackMemory::Free(void *  lpData, size_t  lnSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackDebug::AssertFail(const char *  lpcExpression, const char *  lpcFile, uint32_t  lnLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:761
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void AptSharedPtr<AptFile>::AptSharedPtr(const const AptSharedPtr<AptFile> &  copy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptSharedPtr<AptFile>::~AptSharedPtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AptSharedPtr.h:80
		AptFile * tempData;

	}
}

void AptSharedPtr<AptFile>::Dispose(AptFile *  tempData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackFile::LoadAnimation(const char *  lpcBaseName, AptFilePtr &  lpAsyncLoadContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:829
		AptDataHandler * lpDataHandler;

		// CgsAptAux.cpp:832
		AptDataHeader * lpAptDataHeader;

		AptAux::GetDataHandler(/* parameters */);
	}
	{
		// CgsAptAux.cpp:835
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	AptSharedPtr<AptFile>::AptSharedPtr(/* parameters */);
	AptSharedPtr<AptFile>::~AptSharedPtr(/* parameters */);
	{
		// CgsAptAux.cpp:830
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:833
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void AptValue::isObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptValue::getVtblIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptValue::isUndefined() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void AptValue::getIsDefined() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::sMethod_SetCommunicationObject(AptValue *  pThis, int  nParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:297
		AptValue * lpFirstParam;

	}
	AptValue::isObject(/* parameters */);
	{
		// CgsAptCommunicator.cpp:299
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptComponentList::SetHashedName(int32_t  liComponent, uint32_t  luHashedName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptComponentList::SetHashedReferenceName(int32_t  liComponent, uint32_t  luHashedRefName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptComponentList::SetAptValue(int32_t  liComponent, AptValue *  lpAptValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptComponentList::GetHashedName(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptComponentList::SetName(int32_t  liComponent, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::AddNewAptComponent(AptValue *  lpComponentReference, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:727
		AptNativeString lReferenceName;

		// CgsAptCommunicator.cpp:730
		uint32_t luHashedName;

		// CgsAptCommunicator.cpp:731
		uint32_t luHashedRefName;

		// CgsAptCommunicator.cpp:740
		uint32_t luIndex;

	}
	EAStringC::EAStringC(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	AptComponentList::SetHashedName(/* parameters */);
	AptComponentList::SetHashedReferenceName(/* parameters */);
	AptComponentList::SetUsedData(/* parameters */);
	AptComponentList::SetAptValue(/* parameters */);
	AptComponentList::GetHashedName(/* parameters */);
	AptComponentList::GetHashedName(/* parameters */);
	AptComponentList::SetName(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	{
		// CgsAptCommunicator.cpp:723
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:725
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:724
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptCommunicator::FindAptComponent(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:783
		int32_t lnComponent;

		// CgsAptCommunicator.cpp:785
		uint32_t luHashedNameKey;

		// CgsAptCommunicator.cpp:786
		uint32_t luIndex;

	}
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	AptComponentList::GetHashedName(/* parameters */);
	{
		// CgsAptCommunicator.cpp:781
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void std::atof(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::UpdateComponentReserved(const char *  lpacName, const char *  lpacKey, const char *  lpacValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:532
		int32_t lnComponent;

		// CgsAptCommunicator.cpp:560
		uint32_t luHashValue;

	}
	AptComponentList::GetAptValue(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	{
		// CgsAptCommunicator.cpp:561
		int32_t liIndex;

		{
			// CgsAptCommunicator.cpp:565
			AptNativeString lAptNativeString;

			EAStringC::EAStringC(/* parameters */);
			AptComponentList::GetAptValue(/* parameters */);
		}
	}
	{
		// CgsAptCommunicator.cpp:558
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:528
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:529
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:527
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:597
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EAStringC::~EAStringC(/* parameters */);
	AptComponentList::GetAptValue(/* parameters */);
	std(/* parameters */);
	AptComponentList::GetAptValue(/* parameters */);
}

void CgsGui::AptCommunicator::FindAptComponent(AptValue *  lpComponentReference) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:812
		int32_t lnComponent;

		// CgsAptCommunicator.cpp:814
		uint32_t luIndex;

	}
	AptComponentList::GetAptValue(/* parameters */);
	{
		// CgsAptCommunicator.cpp:810
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void AptValue::isString() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AptValue.h:317
		AptVirtualFunctionTable_Indices t;

	}
}

void CgsGui::AptComponentList::GetKeyValue(int32_t  liComponent, int32_t  liValueIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::sMethod_GetComponentData(AptValue *  pThis, int  nParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:315
		AptValue * lComponentReference;

		// CgsAptCommunicator.cpp:316
		AptValue * lDataKey;

		// CgsAptCommunicator.cpp:321
		const char * lpcReturnString;

		// CgsAptCommunicator.cpp:324
		int32_t lnComponentIndex;

		// CgsAptCommunicator.cpp:327
		AptNativeString lDataKeyString;

		// CgsAptCommunicator.cpp:332
		uint32_t luHashedDataKey;

		// CgsAptCommunicator.cpp:334
		int32_t liIndex;

	}
	AptValue::isString(/* parameters */);
	{
		// CgsAptCommunicator.cpp:319
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EAStringC::EAStringC(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	AptComponentList::GetUsedData(/* parameters */);
	AptComponentList::GetKeyValue(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	AptComponentList::GetKeyValue(/* parameters */);
	{
		// CgsAptCommunicator.cpp:325
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:318
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ViewModule::AddNewAptDataHeader(AptDataHeader *  lpAptDataHeader) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::ProcessIncomingLoadNotification(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.cpp:761
		const GuiEventLoadNotification * lpLoadNotification;

	}
	{
		// CgsGuiViewModule.cpp:793
		LanguageResource * lpLanguageResource;

	}
	{
		// CgsGuiViewModule.cpp:767
		SafeResourceHandle<CgsResource::Font> lpFont;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	{
		// CgsGuiViewModule.cpp:771
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::RemoveAptDataHeader(const uint32_t  luMovieNameHashValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::ProcessIncomingUnloadRequestNotification(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.cpp:725
		const GuiEventUnloadRequestNotification * lpUnloadNotification;

	}
	{
		// CgsGuiViewModule.cpp:726
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:723
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::Register() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.cpp:68
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:67
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::Array<CgsGui::AnimChannel,6u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannel,6u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AnimChannel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannel,6u>::Append(const const AnimChannel &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

extern AnimChannel & operator=(const const AnimChannel &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::ObjectController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::SetControlledObject(CgsGui::GuiComponent *  lpGuiComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.h:235
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsAptObjectController.h:236
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::Animator::Construct(CgsGui::GuiComponent *  lpTarget, char *[10]  lpChannelNames, int32_t  liNumChannels) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:68
		AnimChannel lChannel;

		// CgsAptAnimator.cpp:75
		int liChannelNo;

	}
	AnimChannel(/* parameters */);
	CgsContainers::Array<CgsGui::AnimChannel,6u>::Construct(/* parameters */);
	CgsContainers::Array<CgsGui::AnimChannel,6u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsAptAnimator.cpp:61
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	ObjectController::ObjectController(/* parameters */);
	ObjectController::SetControlledObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAnimator.cpp:60
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAnimator.cpp:59
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::UnRegister() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.cpp:85
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:84
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::Animator::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:98
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.cpp:104
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

void CgsGui::ObjectController::AttachController(AptValue *  lpComponentReference) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.cpp:120
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:124
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:119
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::GetObjectValue(const char *  lpacKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.cpp:155
		AptNativeString lAptNativeString;

		// CgsAptObjectController.cpp:156
		AptValue * lpVariable;

	}
	{
		// CgsAptObjectController.cpp:146
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EAStringC::EAStringC(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	{
		// CgsAptObjectController.cpp:150
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:138
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:139
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::GetObjectVariableFloat(const char *  lpacKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.h:273
		AptValue * lpValue;

		{
			// CgsAptObjectController.h:271
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsAptObjectController.h:274
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::Animator::SetAnimationChannel(CgsGui::AnimData::AnimatorChannel  leChannel, const AnimChannelData *  lpChannelData, AnimChannelData::Time  lTimeBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:186
		AnimChannel * lpChannel;

		// CgsAptAnimator.cpp:190
		AnimChannelData lChannelPatched;

		// CgsAptAnimator.cpp:196
		float lfBasePos;

	}
	GetAnimChannel(/* parameters */);
	ObjectController::GetObjectVariableFloat(/* parameters */);
	{
		// CgsAptAnimator.cpp:224
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAnimator.cpp:185
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAnimator.cpp:187
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::SetObjectVariableFloat(const char *  lpacKey, float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.cpp:177
		AptNativeString lAptNativeString;

	}
	EAStringC::EAStringC(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	{
		// CgsAptObjectController.cpp:175
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:174
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:173
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::Animator::SetAptValue(const char *  lpVariableName, float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimator.cpp:303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::SetObjectVariableBoolean(const char *  lpacKey, bool  lbBoolean) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.cpp:198
		AptNativeString lAptNativeString;

	}
	EAStringC::EAStringC(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	{
		// CgsAptObjectController.cpp:196
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:195
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:194
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::SetObjectVariableString(const char *  lpacKey, const char *  lpacText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.cpp:220
		AptNativeString lAptKey;

	}
	EAStringC::EAStringC(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	{
		// CgsAptObjectController.cpp:218
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:217
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:215
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:216
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::GetPosX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::GetPosY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::GetRotation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::GetObjectVariableBoolean(const char *  lpacKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptObjectController.h:292
		AptValue * lpValue;

		{
			// CgsAptObjectController.h:290
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsAptObjectController.h:293
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::ObjectController::GetObjectInfo(CgsGui::ObjectController::ObjectInfo *  lpDestObjectInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetPosX(/* parameters */);
	GetPosY(/* parameters */);
	GetWidth(/* parameters */);
	GetHeight(/* parameters */);
	GetAlpha(/* parameters */);
	GetRotation(/* parameters */);
	IsVisible(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptObjectController.cpp:235
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ObjectController::GetPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetPosX(/* parameters */);
	GetPosY(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptAux::GetRenderHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptRenderHandler::RGBAFromAptColour(uint32_t  luAptColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.h:329
		uint8_t luAlpha;

		// CgsAptRender.h:330
		uint8_t luRed;

		// CgsAptRender.h:331
		uint8_t luGreen;

		// CgsAptRender.h:332
		uint8_t luBlue;

	}
}

void CgsGui::AptCallbackRender::SetBackgroundColour(uint32_t  luAptColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:68
		AptRenderHandler * lpAptRenderHandler;

		AptAux::GetRenderHandler(/* parameters */);
	}
	AptRenderHandler::RGBAFromAptColour(/* parameters */);
	{
		// CgsAptRender.cpp:69
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptCallbackRender::DeallocateString(AptAssetString  lpAssetString, uint32_t  leFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:121
		AptRenderHandler * lpRenderHandler;

		// CgsAptRender.cpp:124
		CgsAptString * lpAptString;

	}
	AptAux::GetRenderHandler(/* parameters */);
	{
		// CgsAptRender.cpp:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:120
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:122
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptCallbackRender::BindTexture(AptAnimationUserData  lpUserData, int32_t  lnID, AptAssetTexture  lpAssetTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:257
		AptDataHeader * lpAptDataHeader;

		// CgsAptRender.cpp:260
		GuiGeometryObject * lpGeometryObject;

		// CgsAptRender.cpp:263
		GuiGeometryFile * lpGeomFile;

		// CgsAptRender.cpp:264
		GuiGeometryMeshHeader * lpMeshHeader;

		// CgsAptRender.cpp:265
		uint32_t liFileIndex;

		// CgsAptRender.cpp:266
		uint32_t liMeshIndex;

	}
	{
		// CgsAptRender.cpp:275
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:271
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:258
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:261
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptCallbackRender::LoadRenderingUnit(AptAnimationUserData  lpUserData, int32_t  lnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:320
		AptDataHeader * lpAptDataHeader;

		// CgsAptRender.cpp:323
		GuiGeometryObject * lpGeometryUnit;

		// CgsAptRender.cpp:326
		void * lpGeometryFileFound;

		// CgsAptRender.cpp:327
		GuiGeometryFile lGeometryFileKey;

	}
	{
		// CgsAptRender.cpp:340
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:321
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:324
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::math::vpu::IsValid(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsNaN(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:208
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsGui::AptCallbackRender::SetVertexMatrix(AptMatrix *  lpAptMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:377
		AptRenderHandler * lpAptRenderHandler;

		// CgsAptRender.cpp:384
		AptRenderHandler::Vector4 lPositionOffset;

		// CgsAptRender.cpp:391
		AptRenderHandler::Vector4 lTransform;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	AptAux::GetRenderHandler(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
		// CgsAptRender.cpp:378
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:368
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void AptColorHelperTemplate<255>::GetValuef(AptColorHelper::AptColorValue  eColor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector4 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackRender::SetColourTransform(AptCXForm *  lpAptColourTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:413
		AptRenderHandler * lpAptRenderHandler;

		// CgsAptRender.cpp:429
		VecFloat KF_ONE_OVER_255;

	}
	AptAux::GetRenderHandler(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	{
		// CgsAptRender.cpp:414
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:411
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void CgsGui::AptCallbackRender::GetStageHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:577
		AptRenderHandler * lpRenderHandler;

		AptAux::GetRenderHandler(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		// CgsAptRender.cpp:578
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void CgsGui::AptCallbackRender::GetStageWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:592
		AptRenderHandler * lpRenderHandler;

		AptAux::GetRenderHandler(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		// CgsAptRender.cpp:593
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StopMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StartMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::math::vpu::operator/<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1732
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1733
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1735
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1737
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/<VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1657
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1658
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1658
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:192
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:500
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vector4_operation_inline.h:500
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::IsValid(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1756
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1757
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1759
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1760
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_operation_inline.h:1761
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1761
			float floatRecip;

			{
				// vec_float_operation_inline.h:1761
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1756
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1757
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1759
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1760
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_operation_inline.h:1761
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1761
			float floatRecip;

			{
				// vec_float_operation_inline.h:1761
				VectorIntrinsicUnion u;

			}
		}
	}
}

void CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHashTable.h:212
		uint32_t liI;

	}
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::Init(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *  lpNodes, int32_t  liNodeCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptRenderHandler::SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *  lpWhiteTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.h:314
		CgsDev::StrStream lStrStream;

	}
}

extern void TextBackground() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::SetText(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::SetStringWidth(float32_t  lfNewStringWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackRender::AllocateString(AptAllocateStringParameters *  lpParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:86
		AptRenderHandler * lpRenderHandler;

		// CgsAptRender.cpp:90
		uint32_t luAptDeallocatedBitMask;

		// CgsAptRender.cpp:91
		bool lbForceDeallocate;

		// CgsAptRender.cpp:97
		UnicodeBuffer::CgsUtf8 * lpcString;

		// CgsAptRender.cpp:98
		CgsAptString * lpAptString;

	}
	AptAux::GetRenderHandler(/* parameters */);
	{
		// CgsAptRender.cpp:87
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:84
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveDataDetail::FindFirstNot<const char*, bool (*)(char)>(const char *  lFirst, const char *  lLast, bool (*)(char)  lPredicate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataDetail::GetSaveDataErrorString(int  code) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataDetail::DebugSaveDataResult(const char *  function, int  code) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataSystem::AutoOptions::Construct(const char *  lpcDirName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.h:360
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::SaveDataSystem::GenericStorage<5u,0u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataSystem::AutoOptions::operator const char*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataSystem::GenericStorage<5u,0u>::GetCellSaveDataSetBuf() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::BootupThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:688
		SaveLoadSystem * lpThis;

		// CgsSaveLoadPS3.cpp:689
		int32_t liResult;

	}
}

void CgsGui::SaveLoadSystem::AutosaveThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:916
		SaveLoadSystem * lpThis;

		// CgsSaveLoadPS3.cpp:917
		int32_t liResult;

	}
	{
		// CgsSaveLoadPS3.cpp:928
		bool lbSuccess;

		{
			// CgsSaveLoadPS3.cpp:939
			int32_t liIndex;

		}
	}
}

void CgsGui::SaveDataSystem::FixedOptions::Construct(const char *  lpcDirName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveDataPS3.h:330
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::SaveDataSystem::GenericStorage<5u,1u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataSystem::FixedOptions::operator CellSaveDataSetList*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveDataSystem::GenericStorage<5u,1u>::GetCellSaveDataSetBuf() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::LoadThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1173
		SaveLoadSystem * lpThis;

		// CgsSaveLoadPS3.cpp:1174
		int32_t liResult;

	}
}

void CgsGui::SaveLoadSystem::SaveThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1067
		SaveLoadSystem * lpThis;

		// CgsSaveLoadPS3.cpp:1068
		int32_t liResult;

	}
}

void CgsGui::GetSizeInKb(int32_t  liByteSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::CheckDiskSpaceThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:471
		SaveLoadSystem * lpThis;

		// CgsSaveLoadPS3.cpp:472
		int32_t liSaveGameOverheadInKb;

		// CgsSaveLoadPS3.cpp:473
		int32_t liSaveGameSizeInKb;

		// CgsSaveLoadPS3.cpp:474
		int32_t liGameDataOverheadInKb;

		// CgsSaveLoadPS3.cpp:475
		int32_t liResult;

	}
}

void CgsGui::SaveLoadSystem::HandleOption(uint32_t  liOptionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:394
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::BootupStartThread() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:668
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::CreateGameDataStartThread() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:712
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::AutosaveStartThread() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:895
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::AutosaveIsEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::Autosave(const CgsGui::SaveLoadTaskResultHandler &  lHandler, const const SaveLoadMetadata &  lMetadata, const const SaveInfo &  lSaveInfo, int32_t  liNumberOfImageFiles, const ImageFileInfo *  lpImageFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	{
		// CgsSaveLoadPS3.cpp:870
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::BootupAutoLoadFailureChoice(uint32_t  luOptionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::BootupWarningChoice(uint32_t  liOptionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::SaveStartThread() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1053
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::Save(const CgsGui::SaveLoadTaskResultHandler &  lHandler, const const SaveLoadMetadata &  lMetadata, const const SaveInfo &  lSaveInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::LoadStartThread() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1159
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::Load(const CgsGui::SaveLoadTaskResultHandler &  lHandler, const const SaveLoadMetadata &  lMetadata) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1145
		SaveInfo lSaveInfo;

	}
}

void CgsGui::SaveLoadSystem::LoadImageFiles(const CgsGui::SaveLoadTaskResultHandler &  lHandler, const const SaveLoadMetadata &  lMetadata, int32_t  liNumberOfImageFiles, const ImageFileInfo *  lpImageFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1251
		SaveInfo lSaveInfo;

		CgsCore::MemCpy(/* parameters */);
	}
	{
		// CgsSaveLoadPS3.cpp:1245
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::Delete(void (*)(CgsGui::SaveDataSystem::ETaskResult)  lpSaveDataTaskResultFunc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1350
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::ExportImage(CgsGui::SaveLoadTaskResultHandler *  lpTaskResultHandler, void *  lpSrcTarget, const char *  lpPhotoName, bool  lbVignette) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1382
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::BitArray<8u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::SaveLoadSystem::SetSaveCif(CgsGui::ESaveLoadCif  leCifType, uint32_t  luCifSizeBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1526
		uint32_t luSizeKb;

		CgsContainers::BitArray<8u>::SetBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::AsyncOp::GetLastOperationSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceAsyncOp.h:118
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::SaveLoadSystem::LoadCifFile(CgsGui::ESaveLoadCif  leCifType, void **  lppacOutBufferData, int32_t *  lpiOutBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1605
		char[1024] lacFilePath;

		// CgsSaveLoadPS3.cpp:1606
		Handle lHandle;

		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	}
	CgsFileSystem::AsyncOp::GetLastOperationResult(/* parameters */);
	CgsFileSystem::AsyncOp::GetLastOperationHandle(/* parameters */);
	CgsFileSystem::AsyncOp::GetLastOperationSize(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::LoadImagesThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1269
		SaveLoadSystem * lpThis;

		// CgsSaveLoadPS3.cpp:1270
		int32_t liIndex;

		// CgsSaveLoadPS3.cpp:1271
		bool lbSuccess;

	}
}

void rw::core::filesys::AsyncOp::operator new(size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::Wait() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::operator delete(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiKeyboard::IsShown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(DataStructure *  lpInputDataStructure, DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(DataStructure *  lpInputDataStructure, DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(renderengine::PrimitiveType  lePrimitiveType, const GuiGeometryMesh::Im2dVertex *  lpVertices, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:689
		GuiGeometryMesh::Im2dVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:692
		ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::Im2dTransform::GetDefault() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dRenderBuffer::SetTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:161
		ImCommandSetTransform * lpCommand;

	}
}

void CgsGraphics::Im2dTransform::operator=(const const Im2dTransform &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:998
		ImCommandSetStateTexture * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const RasterizerState *  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:925
		ImCommandSetStateRasterizer * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

extern void Basic2dColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::RenderBlackScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.cpp:864
		GuiGeometryMesh::Im2dVertex[4] lWVertexList;

		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sin(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CgsGraphics::Basic2dColouredTexturedVertex & operator=(const const CgsGraphics::Basic2dColouredTexturedVertex &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const DepthStencilState *  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:875
		ImCommandSetStateDepthStencil * lpCommand;

	}
}

void CgsGraphics::Im2dTransform::GetAspectCorrected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::Render(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCustomRenderer.cpp:137
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// CgsCustomRenderer.cpp:155
		const const CgsGraphics::ImRendererBase::StateLibrary & lStateLibrary;

	}
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1103
		ImCommandSetShaderProgram * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::RenderFromStaticVertexBuffer(renderengine::PrimitiveType  lePrimitiveType, const GuiGeometryMesh::Im2dVertex *  lpVertices, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:733
		ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

	}
	AllocateCommand(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetTexture(renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:826
		ImCommandSetTexture * lpCommand;

	}
	AllocateCommand(/* parameters */);
}

void CgsGui::AptRenderHandler::GetIm2dRendererType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptRenderHandler::GetIm3dRendererType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:58
		float r;

	}
}

void CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Get(uint32_t  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHashTable.h:291
		CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * lpNode;

	}
}

void renderengine::TextureState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Parameters::SetTexture(renderengine::Texture *  newTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMagFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMinFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressU(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressV(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::Append(const const HashTableElement<uint32_t,renderengine::TextureState*> &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*>::Set(uint32_t  lKey, const TextureState *const&  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Insert(CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*> *  lpNewElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHashTable.h:231
		uint32_t lNewKey;

		// CgsHashTable.h:232
		const LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > & lBin;

		// CgsHashTable.h:233
		CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * lpNewNode;

		{
			// CgsHashTable.h:236
			CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > * lpNode;

			{
				// CgsHashTable.h:252
				uint32_t lCurrentKey;

			}
		}
	}
}

void CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*>::GetKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*>::GetListNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::AddHead(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetTail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::AddTail(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::AddBefore(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *  lpNodeInList, CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> > *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::atoi(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptRenderHandler::GetImRendererSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackCustom::ControlRender(char *  lpcType, char *  lpcTarget, AptAssetRenderingUnit  lpRenderingUnit, const char *  lpcCustomProperties, AptMaskRenderOperation  leMaskOperation, int32_t  liLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:985
		int32_t liShaderProgram;

		// CgsAptAux.cpp:986
		int32_t liTextureIndex;

		// CgsAptAux.cpp:987
		const char * lpcTextureIndex;

		// CgsAptAux.cpp:988
		CgsID lControlID;

		// CgsAptAux.cpp:991
		AptRenderHandler * lpRenderHandler;

		// CgsAptAux.cpp:994
		GuiGeometryFile * lpGuiGeometry;

		// CgsAptAux.cpp:997
		GuiGeometryMeshHeader::GuiTexture * lpTexture;

		// CgsAptAux.cpp:1016
		AptRenderHandler::ImRendererSetType * lpRendererSet;

		// CgsAptAux.cpp:1025
		uint32_t luMeshIndex;

		// CgsAptAux.cpp:1026
		GuiGeometryMesh * lpGuiMesh;

	}
	AptAux::GetRenderHandler(/* parameters */);
	std(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	{
		// CgsAptAux.cpp:1030
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:990
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:992
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:995
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ViewIO::InputBuffer::GetImRenderers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModuleIO.h:156
		CgsDev::StrStream lStrStream;

	}
}

extern ImRendererSet & operator=(const const ImRendererSet &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern Camera & operator=(const const Camera &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::operator=(const const rw::math::fpu::Matrix44Template<double> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::operator=(const const rw::math::fpu::Vector4Template<double> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::Render(const InputBuffer *  lpViewInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	ViewIO::InputBuffer::GetImRenderers(/* parameters */);
	ViewIO::InputBuffer::GetImRenderers(/* parameters */);
	ViewIO::InputBuffer::GetImRenderers(/* parameters */);
	ViewIO::InputBuffer::GetImRenderers(/* parameters */);
	ViewIO::InputBuffer::GetImRenderers(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<16384,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::GuiEventQueueBase<16384,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:263
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<16384,16>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<16384,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiModule::Prepare(const GuiModuleConfig &  lGuiConfig) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<16384,16>::Prepare(/* parameters */);
	{
		// CgsGuiModule.cpp:146
		int32_t liControllerEnterWithCircle;

	}
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<16384,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<2048,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<2048,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::GuiEventQueueBase<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::ObjectEventObserver::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::PriorityObjectEventObserver::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHashTable.h:212
		uint32_t liI;

	}
}

void CgsContainers::LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >::Init(CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> > *  lpNodes, int32_t  liNodeCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:55
		int32_t liIndex;

		PriorityObjectEventObserver::Construct(/* parameters */);
		ObjectEventObserver::Construct(/* parameters */);
		CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>::Init(/* parameters */);
		GuiEventQueueBase<16384,16>::Construct(/* parameters */);
		CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	}
	GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ModelModule::Construct(const bool  lHighDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiModule::Construct(CgsGui::ViewModule *  lpViewModule, const bool  lHighDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<16384,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<256,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<256,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:263
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<256,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::ViewModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<256,16>::Release(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<256,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<256,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ViewModule::Prepare(HeapMalloc *  lpAptAllocator, rw::IResourceAllocator *  lp2dRendererAllocator, HeapMalloc *  lpLanguageAllocator, LinearMalloc *  lpFlaptAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<256,16>::Prepare(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Prepare(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptAux::SetCustomRenderer(CgsGui::CustomRendererManager *  lpCustomRendererManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptRenderHandler::SetCustomRenderer(CgsGui::CustomRendererManager *  lpCustomRendererManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<256,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<256,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsGui::ViewModule::Construct(const char *  lpcLoadingScreenName, int32_t  liLoadingScreenLevel, float32_t  lfAspectRatio, const RGBA *  lpAlternateTextColours, int32_t  liNumAlternateColours) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.cpp:59
		int32_t liMovie;

	}
	AptAux::SetCustomRenderer(/* parameters */);
	GuiEventQueueBase<256,16>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::operator++(const CgsGui::ViewModule::EReleaseStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.h:339
		CgsGui::ViewModule::EReleaseStage leOldEnumIndex;

	}
}

void CgsGui::ViewModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	GuiEventQueueBase<256,16>::Release(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Release(/* parameters */);
}

void CgsGui::GuiEventQueueBase<32768,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<32768,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<32768,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::GuiEventQueueBase<32768,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<32768,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<32768,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventQueueBase<4096,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::GuiEventQueueBase<4096,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRendererManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<4096,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::CustomRendererManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<4096,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<65536,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<65536,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::GuiEventQueueBase<65536,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<65536,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsGui::GuiEventQueueBase<65536,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::SetEventObserver(CgsGui::EventObserver *  lpObserver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:478
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::EventObserver::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	StateInterface::SetEventObserver(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void CgsResource::Events::PoolEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceResponse::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::operator==(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:390
		int32_t liPrevEntryPosition;

		// CgsEventReceiverQueue.h:394
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpPrevBufferEntry;

		// CgsEventReceiverQueue.h:397
		int32_t liNextEntryPosition;

		{
			// CgsEventReceiverQueue.h:391
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:400
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:401
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:407
			CgsModule::BaseEventReceiverQueue::CBufferEntry * lpNextBufferEntry;

		}
	}
}

void CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:590
		int32_t liRem;

		// CgsEventReceiverQueue.h:591
		int32_t liPaddingBytes;

	}
}

void CgsGui::GuiResourceModule::ParseForAcquiredResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:301
		const CgsModule::Event * lpResponse;

		// CgsGuiResourceModule.cpp:302
		int32_t liSize;

		// CgsGuiResourceModule.cpp:303
		int32_t liEventId;

		// CgsGuiResourceModule.cpp:304
		const AcquireResourceResponse * lpAcquireResponse;

		// CgsGuiResourceModule.cpp:305
		int32_t liResponseEventId;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
	{
	}
	CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	{
		// CgsGuiResourceModule.cpp:320
		int32_t liPendingResourceIndex;

		CgsResource::Events::PoolEvent::GetEventId(/* parameters */);
		{
			// CgsGuiResourceModule.cpp:323
			const CgsGui::GuiResourceModule::GuiBundleToLoad & lBundle;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourceHandle::operator==(/* parameters */);
}

void CgsModule::VariableEventQueue<13312,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void rw::math::vpu::IsSimilar(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsSimilarV2(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:389
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:390
			VectorIntrinsicUnion::VectorIntrinsic difference;

			{
				// vector_intrinsic_operation_inline.h:390
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

				{
					// vector_intrinsic_operation_inline.h:390
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:390
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
			}
		}
	}
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:203
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:204
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector2_operation_inline.h:204
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic product;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic x_product;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic y_product;

				}
				{
					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::IsSimilar<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const const VecFloatRef<VectorAxisX> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:734
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_platform_inline.h:735
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_platform_inline.h:737
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_platform_inline.h:738
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::IsZero(const VecFloat  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
}

void rw::math::vpu::Min<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:175
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic product;

			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic x_product;

			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic y_product;

		}
	}
}

void rw::math::vpu::operator>(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:480
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:482
		bool ret;

		{
			// vec_float_operation_inline.h:481
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::Lerp(const VecFloat  a, const VecFloat  b, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// scalar_operation_inline.h:166
	VecFloat r;

	{
		// scalar_operation_inline.h:166
		VecFloat r;

	}
}

void rw::math::vpu::Subtract(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:664
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Mult(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:809
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Add(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:519
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:434
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Sqrt(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:186
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:187
			const VectorIntrinsicUnion::VectorIntrinsic zero;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

				{
					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
	}
}

void CgsNumeric::Random::RandomFloat(float_t  lfMin, float_t  lfMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1665
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:1667
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1668
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1668
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator*(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1565
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1566
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1566
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1665
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:1667
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1668
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1668
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsSimilar(const const float &  a, const const float &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsSimilar(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsSimilarV4(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:353
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:354
			VectorIntrinsicUnion::VectorIntrinsic difference;

			{
				// vector_intrinsic_operation_inline.h:354
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

				{
					// vector_intrinsic_operation_inline.h:354
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:354
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
			}
		}
	}
}

void CgsGui::ParticleSystem2d::GetRGBA(const const rw::math::vpu::Vector4 &  lv4Colour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsParticleSystem2d.h:235
		Vector4 lv4Clamped;

	}
}

void rw::math::vpu::Clamp(const rw::math::vpu::Vector4  v0, const rw::math::vpu::Vector4  v1, const rw::math::vpu::Vector4  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:100
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:445
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::operator*=(const Vector2 &  v, float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:416
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:457
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:458
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(VecFloatRef<VectorAxisX> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:262
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::Lerp(const rw::math::vpu::Vector4  v0, const rw::math::vpu::Vector4  v1, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:315
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:316
			VectorIntrinsicUnion::VectorIntrinsic temp_lerp_v;

		}
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<4096,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<32768,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::Append<32768, 16>(const const VariableEventQueue<32768,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::GetInputStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:354
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::EventInterpreterModule::AddGuiEvents(const const InputBuffer::GuiEventInputQueue &  lEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:321
		InputBuffer * lpInput;

		CgsModule::ModuleSingleBuffered::GetInputStructure(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:323
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<32768,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ModelModule::BridgeInEventInterpreter(InputBuffer *  lpEventInterpreterInput, const InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModule.cpp:411
		const InputBuffer::GuiEventInputQueue * lpInputEventQueue;

	}
	GuiEventQueueBase<32768,16>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ModelModule::AddGuiEvents(const InputBuffer::GuiEventInputQueue *  lEventQueue, InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModule.cpp:392
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiModule::BridgeFromInputToModel(InputBuffer *  lpModelInput, const InputBuffer *  lpGuiInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleBridges.cpp:59
		const InputBuffer::GuiEventInputQueue * lpEventQueue;

	}
}

void CgsModule::VariableEventQueue<32768,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<32768,16>::AddGuiEvent(const CgsModule::Event *  lpEvent, int32_t  liEventType, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::AddGuiEvent(const CgsModule::Event *  lEvent, int32_t  lEventId, int32_t  lEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:343
		InputBuffer * lpInput;

		CgsModule::ModuleSingleBuffered::GetInputStructure(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:345
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::Events::BundleLoaderEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::GetFileName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::ParseUnloaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:364
		const CgsModule::Event * lpResponse;

		// CgsGuiResourceModule.cpp:365
		int32_t liSize;

		// CgsGuiResourceModule.cpp:366
		int32_t liEventId;

		// CgsGuiResourceModule.cpp:367
		const UnloadBundleResponse * lpUnloadResponse;

		// CgsGuiResourceModule.cpp:368
		int32_t liResponseEventId;

		// CgsGuiResourceModule.cpp:369
		uint32_t luUnloadBundleNameHash;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
	{
	}
	CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
	{
		// CgsGuiResourceModule.cpp:384
		int32_t liPendingResourceIndex;

		CgsResource::Events::BundleLoaderEvent::GetFileName(/* parameters */);
		CgsContainers::CgsHash::CalculateHash(/* parameters */);
		{
			// CgsGuiResourceModule.cpp:387
			const CgsGui::GuiResourceModule::GuiBundleToLoad & lBundle;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<2048,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::Append<2048, 16>(const const VariableEventQueue<2048,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

extern void AcquireResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, const char *  lpcResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceIOEvents.h:1646
		ID lId;

	}
}

void CgsResource::ID::Construct(const RwChar *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::SetResourceId(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::SetHash(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModuleIO::OutputBuffer::GetResourceRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModuleIO.h:328
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceIO::ResourceRequestQueue<2048>::AcquireResource(const const AcquireResourceRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::RequestResource(const CgsGui::GuiResourceModule::GuiBundleToLoad &  lBundle, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:1050
		AcquireResourceRequest lResourceRequest;

	}
	{
		// CgsGuiResourceModule.cpp:1054
		char[128] lacResourceName;

		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	}
	{
		// CgsGuiResourceModule.cpp:1068
		ID lId;

		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetEventId(/* parameters */);
		CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	}
	GuiResourceModuleIO::OutputBuffer::GetResourceRequestQueue(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<2048>::AcquireResource(/* parameters */);
	{
		// CgsGuiResourceModule.cpp:1048
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::Events::LoadBundleRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, bool  lbLiveUpdateReplace, bool  lbAllowFailiure, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, bool  lbLiveUpdateReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetFileName(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(bool  lbLiveUpdateReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::SetAllowFailiure(bool  lbAllowFailiure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::SetUseHDCache(bool  lbUseCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<2048>::LoadBundle(const const LoadBundleRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::LoadBundle(const CgsGui::GuiResourceModule::GuiBundleToLoad &  lBundle, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:969
		char[128] lacBundleName;

		// CgsGuiResourceModule.cpp:975
		LoadBundleRequest lBundleRequest;

	}
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	GuiResourceModuleIO::OutputBuffer::GetResourceRequestQueue(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<2048>::LoadBundle(/* parameters */);
	{
		// CgsGuiResourceModule.cpp:967
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiResourceModule::LoadBundleForMissingResources(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:276
		int32_t liPendingResourceIndex;

	}
	{
		// CgsGuiResourceModule.cpp:279
		const CgsGui::GuiResourceModule::GuiBundleToLoad & lBundle;

	}
}

void CgsGui::State::SetStateInterface(StateInterface *  lpStateInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiState.h:140
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::StateMachine::SetStates(State **  laGuiStates, int32_t  liNumStates) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateMachine.cpp:51
		int32_t liStateIndex;

		// CgsGuiStateMachine.cpp:52
		int32_t liMaxStatesToCopy;

	}
	State::SetStateInterface(/* parameters */);
	{
		// CgsGuiStateMachine.cpp:55
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiStateMachine.cpp:45
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsGuiStateMachine.cpp:49
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::FlagSet<std::int8_t>::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBuffer.h:219
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	{
		// CgsIOBuffer.h:218
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<65536,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEventStateChange,40>::SetRawEvent(const GuiEventStateChange &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<1>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<40>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::Event::Construct(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::State::PostUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiState.cpp:121
		GuiEventStateChange lStateChangeEvent;

		// CgsGuiState.cpp:126
		Event lEvent;

		CgsFsm::Event::Construct(/* parameters */);
		OutputGuiEvent<CgsGui::GuiEventStateChange>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventStateChange> >(/* parameters */);
	}
	{
		// CgsGuiState.cpp:122
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEvent<38>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<37>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<36>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<35>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<34>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewIO::InputBuffer::GetViewStateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModuleIO.h:188
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::AddEventSafe(const CgsModule::Event *  lpEvent, int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:509
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:510
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:508
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsVariableEventQueue.h:516
			CBufferEntry * lpBufferEntry;

		}
	}
}

void CgsGui::GuiModule::BridgeFromInputToView(InputBuffer *  lpViewInput, const InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleBridges.cpp:42
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ModelIO::OutputBuffer::GetViewOutEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.h:282
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiModule::BridgeFromModelToView(InputBuffer *  lpViewInput, const OutputBuffer *  lpModelOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ModelIO::OutputBuffer::GetViewOutEvents(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<256,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<256,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<256,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<256,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<256,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<256,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[159] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEvent<33>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::ProcessIncomingAptEvent(const CgsModule::Event *  lpEvent, int32_t  liSize, int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.cpp:444
		GuiEventLoadingScreenState lLoadingScreenState;

		AddGuiEvent<CgsGui::GuiEventLoadingScreenState>(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:399
		const GuiEventPlayAptMovie * lpPlayMovieEvent;

	}
	{
		// CgsGuiViewModule.cpp:429
		GuiEventLoadingScreenState lLoadingScreenState;

		AddGuiEvent<CgsGui::GuiEventLoadingScreenState>(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:400
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptCommunicator::Initialize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::GuiResourceModuleIO::InputBuffer::GetLoadRequests() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModuleIO.h:296
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::ProcessIncomingLoadRequests(InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:692
		const InputBuffer::GuiEventQueue * lpLoadRequestQueue;

		// CgsGuiResourceModule.cpp:695
		const GuiEventLoadRequest * lpLoadRequest;

		// CgsGuiResourceModule.cpp:696
		const CgsModule::Event * lpEvent;

		// CgsGuiResourceModule.cpp:697
		int32_t liSize;

		// CgsGuiResourceModule.cpp:698
		int32_t liId;

		GuiResourceModuleIO::InputBuffer::GetLoadRequests(/* parameters */);
		GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
		GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiResourceModule.cpp:693
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	VariableEventQueue<16384,16>::GetSizeInBytes(/* parameters */);
	VariableEventQueue<16384,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	VariableEventQueue<16384,16>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ModelModule::AddGuiEvents(const InputBuffer::GuiEventQueue *  lEventQueue, InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModule.cpp:373
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiResourceModuleIO::OutputBuffer::GetResourceRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModuleIO.h:312
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiResourceModuleIO::OutputBuffer::GetLoadNotifications() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModuleIO.h:396
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ModelIO::OutputBuffer::AddLoadNotifications(const InputBuffer::GuiEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.h:299
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::ModelModule::BridgeOutGuiResource(OutputBuffer *  lpOutput, const OutputBuffer *  lpResourceOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiResourceModuleIO::OutputBuffer::GetResourceRequestQueue(/* parameters */);
	GuiResourceModuleIO::OutputBuffer::GetResourceRequestQueue(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	GuiResourceModuleIO::OutputBuffer::GetResourceRequestQueue(/* parameters */);
	GuiResourceModuleIO::OutputBuffer::GetLoadNotifications(/* parameters */);
	ModelIO::OutputBuffer::AddLoadNotifications(/* parameters */);
	AppendGuiQueue<16384, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::EventInterpreterModuleIO::OutputBuffer::GetOutEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.h:146
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ModelIO::OutputBuffer::AddGuiOutEvents(const InputBuffer::GuiEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.h:232
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::EventInterpreterModuleIO::OutputBuffer::GetViewEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.h:210
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ModelIO::OutputBuffer::AddViewOutEvents(const GuiStackEventQueue::GuiEventQueueLarge *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.h:265
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::Append<65536, 16>(const const VariableEventQueue<65536,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ModelModule::BridgeOutEventInterpreter(OutputBuffer *  lpOutput, const OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EventInterpreterModuleIO::OutputBuffer::GetOutEventQueue(/* parameters */);
	ModelIO::OutputBuffer::AddGuiOutEvents(/* parameters */);
	AppendGuiQueue<16384, 16>(/* parameters */);
	EventInterpreterModuleIO::OutputBuffer::GetViewEventQueue(/* parameters */);
	ModelIO::OutputBuffer::AddViewOutEvents(/* parameters */);
	AppendGuiQueue<65536, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsModelModule.cpp:471
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::CgsGuiModuleIO::OutputBuffer::GetOutEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:303
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiModule::BridgeFromOutputToGui(const OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGuiModuleIO::OutputBuffer::GetOutEventQueue(/* parameters */);
	Append<16384, 16>(/* parameters */);
}

void CgsModule::VariableEventQueue<4096,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Append<4096, 16>(const const VariableEventQueue<4096,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	VariableEventQueue<4096,16>::GetSizeInBytes(/* parameters */);
	VariableEventQueue<4096,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	VariableEventQueue<4096,16>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::EventInterpreterModuleIO::OutputBuffer::GetResourceEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.h:178
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiResourceModuleIO::InputBuffer::AddResourceRequests(const GuiEventQueueSmall *  lpInRequestQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModuleIO.h:279
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsGuiResourceModuleIO.h:280
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ModelModule::BridgeEventInterpreterToGuiResource(InputBuffer *  lpResourceInputBuffer, const OutputBuffer *  lpEventOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EventInterpreterModuleIO::OutputBuffer::GetResourceEventQueue(/* parameters */);
	GuiResourceModuleIO::InputBuffer::AddResourceRequests(/* parameters */);
	AppendGuiQueue<4096, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ModelIO::OutputBuffer::GetGuiOutEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.h:248
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::CgsGuiModuleIO::OutputBuffer::AddGuiOutEvents(const InputBuffer::GuiEventQueue *  lpOutEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:251
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsGuiModuleIO.h:252
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ModelIO::OutputBuffer::GetLoadNotifications() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.h:315
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiModule::BridgeFromModelToOutput(CgsGui::CgsGuiModuleIO::OutputBuffer *  lpOutput, const OutputBuffer *  lpModelOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	ModelIO::OutputBuffer::GetGuiOutEvents(/* parameters */);
	CgsGuiModuleIO::OutputBuffer::AddGuiOutEvents(/* parameters */);
	AppendGuiQueue<16384, 16>(/* parameters */);
	ModelIO::OutputBuffer::GetLoadNotifications(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Append<4096, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ModelModule::GetLoadRequests(const InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ModelIO::InputBuffer::GetLoadRequests() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.h:198
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiResourceModule::AddResourceRequests(const GuiEventQueueSmall *  lpInRequestQueue, InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ModelModule::BridgeInGuiResource(InputBuffer *  lpResourceInput, const InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetLoadRequests(/* parameters */);
	GuiResourceModule::AddResourceRequests(/* parameters */);
	AppendGuiQueue<4096, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ViewIO::OutputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModuleIO.h:237
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ViewModule::GetCustomRendererManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRendererManager::GetOutputEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CgsGuiModuleIO::OutputBuffer::AddGuiOutEvents(const GuiEventQueueSmall *  lpOutEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:268
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsGuiModuleIO.h:269
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ViewModule::GetOutputEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CgsGuiModuleIO::OutputBuffer::AddGuiOutEvents(const GuiEventQueueTiny *  lpOutEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:285
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsGuiModuleIO.h:286
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Append<256, 16>(const const VariableEventQueue<256,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<256,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<256,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiModule::BridgeFromViewToOutput(CgsGui::CgsGuiModuleIO::OutputBuffer *  lpOutput, const OutputBuffer *  lpViewOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ViewIO::OutputBuffer::GetGuiEventQueue(/* parameters */);
	Append<16384, 16>(/* parameters */);
	CgsGuiModuleIO::OutputBuffer::AddGuiOutEvents(/* parameters */);
	AppendGuiQueue<4096, 16>(/* parameters */);
	CgsGuiModuleIO::OutputBuffer::AddGuiOutEvents(/* parameters */);
	AppendGuiQueue<256, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEvent<22>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::sMethod_SendAptSoundEvent(AptValue *  pThis, int  nParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:222
		AptValue * lTypeId;

		// CgsAptCommunicator.cpp:223
		AptValue * lActionId;

		// CgsAptCommunicator.cpp:224
		AptValue * lLabel;

		// CgsAptCommunicator.cpp:225
		AptValue * lComponentName;

		// CgsAptCommunicator.cpp:232
		AptNativeString lTypeString;

		// CgsAptCommunicator.cpp:233
		AptNativeString lActionString;

		// CgsAptCommunicator.cpp:234
		AptNativeString lLabelString;

		// CgsAptCommunicator.cpp:235
		AptNativeString lComponentNameString;

		// CgsAptCommunicator.cpp:243
		const char * lpComponentName;

	}
	AptValue::isString(/* parameters */);
	{
		// CgsAptCommunicator.cpp:227
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	AptValue::isString(/* parameters */);
	{
		// CgsAptCommunicator.cpp:228
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	AptValue::isString(/* parameters */);
	{
		// CgsAptCommunicator.cpp:229
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EAStringC::EAStringC(/* parameters */);
	EAStringC::EAStringC(/* parameters */);
	EAStringC::EAStringC(/* parameters */);
	EAStringC::EAStringC(/* parameters */);
	{
		// CgsAptCommunicator.cpp:253
		int32_t liLevel;

		// CgsAptCommunicator.cpp:259
		GuiEventSoundTrigger lAptTrigger;

		CgsCore::StrnCpy(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventSoundTrigger>(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:277
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EAStringC::~EAStringC(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:255
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:230
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void AptValue::isInteger() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptComponentList::GetName(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<21>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::sMethod_SendAptEvent(AptValue *  pThis, int  nParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:145
		AptValue * lEventId;

		// CgsAptCommunicator.cpp:146
		AptValue * lUniqueId;

		// CgsAptCommunicator.cpp:147
		AptValue * lComponentName;

		// CgsAptCommunicator.cpp:153
		AptNativeString lComponentNameString;

		// CgsAptCommunicator.cpp:155
		int32_t liEventId;

		// CgsAptCommunicator.cpp:156
		int32_t liUniqueId;

		// CgsAptCommunicator.cpp:162
		AptValue * lpComponentReference;

		// CgsAptCommunicator.cpp:195
		GuiEventAptTrigger lAptTrigger;

	}
	AptValue::isInteger(/* parameters */);
	{
		// CgsAptCommunicator.cpp:149
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	AptValue::isInteger(/* parameters */);
	{
		// CgsAptCommunicator.cpp:150
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	AptValue::isString(/* parameters */);
	{
		// CgsAptCommunicator.cpp:151
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EAStringC::EAStringC(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	EAStringC::~EAStringC(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventAptTrigger>(/* parameters */);
	{
		// CgsAptCommunicator.cpp:159
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:172
		uint32_t luComponents;

	}
	AptComponentList::GetUsedData(/* parameters */);
	{
		// CgsAptCommunicator.cpp:183
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:187
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourceIO::ResourceRequestQueue<2048>::UnloadBundle(const const UnloadBundleRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModuleIO::OutputBuffer::AddUnloadRequestNotification(const GuiEventUnloadRequestNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModuleIO.h:380
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<15>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::UnloadBundle(const CgsGui::GuiResourceModule::GuiBundleToLoad &  lBundle, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModule.cpp:1004
		char[128] lacBundleName;

		// CgsGuiResourceModule.cpp:1012
		UnloadBundleRequest lBundleUnloadRequest;

		// CgsGuiResourceModule.cpp:1022
		GuiEventUnloadRequestNotification lUnloadRequestNotification;

	}
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	GuiResourceModuleIO::OutputBuffer::GetResourceRequestQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<2048>::UnloadBundle(/* parameters */);
	GuiResourceModuleIO::OutputBuffer::AddUnloadRequestNotification(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiEventUnloadRequestNotification>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

extern void GuiBundleToLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::HasPendingResourceRequests(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventLoadNotification() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModuleIO::OutputBuffer::AddLoadNotification(const GuiEventLoadNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModuleIO.h:345
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<14>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModuleIO::OutputBuffer::AddUnloadNotification(const GuiEventUnloadNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiResourceModuleIO.h:363
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<16>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiResourceModule::Update(InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		// CgsGuiResourceModule.cpp:441
		CgsGui::GuiResourceModule::GuiBundleToLoad lBundle;

	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		// CgsGuiResourceModule.cpp:617
		int32_t liPendingResourceIndex;

		{
			// CgsGuiResourceModule.cpp:620
			const CgsGui::GuiResourceModule::GuiBundleToLoad & lBundle;

			{
				// CgsGuiResourceModule.cpp:626
				ResourceHandle lResourceHandle;

				// CgsGuiResourceModule.cpp:631
				GuiEventLoadNotification lLoadedEvent;

				GuiResourceModuleIO::OutputBuffer::AddLoadNotification(/* parameters */);
				{
					// CgsGuiResourceModule.cpp:628
					CgsDev::StrStream lStrStream;

				}
				AddGuiEvent<CgsGui::GuiEventLoadNotification>(/* parameters */);
			}
		}
		{
			// CgsGuiResourceModule.cpp:644
			GuiEventUnloadNotification lResourceUnloaded;

			GuiResourceModuleIO::OutputBuffer::AddUnloadNotification(/* parameters */);
			AddGuiEvent<CgsGui::GuiEventUnloadNotification>(/* parameters */);
		}
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// CgsGuiResourceModule.cpp:508
		CgsGui::GuiResourceModule::GuiBundleToLoad lBundle;

	}
	{
		// CgsGuiResourceModule.cpp:584
		int32_t liPendingResourceIndex;

		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		{
			// CgsGuiResourceModule.cpp:587
			const CgsGui::GuiResourceModule::GuiBundleToLoad & lBundle;

		}
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	HasPendingResourceRequests(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiResourceModule.cpp:627
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

void CgsGui::GuiEventQueueBase<32768,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::ObjectEventObserver::IsRegisteredForEvent(const int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.h:379
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<3>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<16384,16>::AddGuiEvent(const CgsModule::Event *  lpEvent, int32_t  liEventType, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<2>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<32768,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::ProcessInEvents(InputBuffer::GuiEventInputQueue *  lpCurrentEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:731
		int32_t liIndex;

		// CgsEventInterpreterModule.cpp:732
		CgsGui::EventInterpreterModule::ObjectEventObserver[4] laEventObservers;

		// CgsEventInterpreterModule.cpp:733
		CgsGui::EventInterpreterModule::ObjectEventObserver * lObjectEventObserver;

		// CgsEventInterpreterModule.cpp:734
		const CgsModule::Event * lpEvent;

		// CgsEventInterpreterModule.cpp:735
		int32_t liEventSize;

		// CgsEventInterpreterModule.cpp:736
		int32_t liEventId;

		// CgsEventInterpreterModule.cpp:737
		InputBuffer::GuiEventQueue * lpCurrentProcessQueue;

	}
	GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	GuiEventQueueBase<32768,16>::GetFirstEvent(/* parameters */);
	{
	}
	{
		// CgsEventInterpreterModule.cpp:760
		CgsGui::EventInterpreterModule::ObjectEventObserver * lpOwnerObjectEventObserver;

		// CgsEventInterpreterModule.cpp:761
		bool lbPriorityEvent;

		// CgsEventInterpreterModule.cpp:762
		bool lbEventOwner;

		ObjectEventObserver::IsRegisteredForEvent(/* parameters */);
		CgsContainers::BitArray<576u>::IsBitSet(/* parameters */);
		{
			// CgsEventInterpreterModule.cpp:769
			CgsGui::EventObserver * lpBlockingObserver;

		}
	}
	GuiEventQueueBase<32768,16>::GetNextEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:805
		const GuiEventPriorityRemoval & lRemovalEvent;

		// CgsEventInterpreterModule.cpp:809
		CgsGui::EventObserver * lpBlockingObserver;

		// CgsEventInterpreterModule.cpp:810
		bool lbBlockedEvent;

		GuiEventQueueBase<16384,16>::AddGuiEvent(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:776
		const GuiEventPriorityBlocking & lBlockingEvent;

		GuiEventQueueBase<16384,16>::AddGuiEvent(/* parameters */);
	}
	GuiEventQueueBase<16384,16>::AddGuiEvent(/* parameters */);
	GuiEventQueueBase<16384,16>::AddGuiEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:789
		const GuiEventPriorityRemoval & lRemovalEvent;

		GuiEventQueueBase<16384,16>::AddGuiEvent(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:749
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::EventObserver::GetOutputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::GetOutputEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventObserver::ClearOutputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<65536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModuleIO::OutputBuffer::GetResourceEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.h:194
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventQueueBase<4096,16>::AddGuiEvent(const CgsModule::Event *  lpEvent, int32_t  liEventType, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModuleIO::OutputBuffer::GetOutEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.h:162
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40>::GetRawEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModuleIO::OutputBuffer::GetViewEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.h:226
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,41>::GetRawEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<65536,16>::AddGuiEvent(const CgsModule::Event *  lpEvent, int32_t  liEventType, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,42>::GetRawEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<65536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::ProcessOutEvents(OutputBuffer *  lpOutput, bool  lbIsPreWorldUpdate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModule.cpp:850
		GuiStackEventQueue::GuiEventQueueLarge lOutEventQueue;

		// CgsEventInterpreterModule.cpp:851
		GuiStackEventQueue::GuiEventQueueLarge * lpObserverEventQueue;

		// CgsEventInterpreterModule.cpp:856
		int32_t lnIndex;

		// CgsEventInterpreterModule.cpp:857
		CgsGui::EventInterpreterModule::ObjectEventObserver * lObjectEventObserver;

		// CgsEventInterpreterModule.cpp:870
		const CgsModule::Event * lpEvent;

		// CgsEventInterpreterModule.cpp:871
		int32_t lpEventSize;

		// CgsEventInterpreterModule.cpp:872
		int32_t liEventId;

		GuiEventQueueBase<65536,16>::Construct(/* parameters */);
	}
	AppendGuiQueue<65536, 16>(/* parameters */);
	EventObserver::ClearOutputQueue(/* parameters */);
	EventObserver::GetOutputQueue(/* parameters */);
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GuiEventQueueBase<65536,16>::GetFirstEvent(/* parameters */);
	{
	}
	{
		// CgsEventInterpreterModule.cpp:969
		InputBuffer::GuiEventQueue * lpOutEventQueue;

		EventInterpreterModuleIO::OutputBuffer::GetOutEventQueue(/* parameters */);
		GuiEventQueueBase<16384,16>::AddGuiEvent(/* parameters */);
	}
	GuiEventQueueBase<65536,16>::GetNextEvent(/* parameters */);
	GuiEventQueueBase<65536,16>::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:970
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsEventInterpreterModule.cpp:882
		const GuiEventRegisterForEvents * lpRegisterEvent;

	}
	{
		// CgsEventInterpreterModule.cpp:889
		const GuiEventUnRegisterForEvents * lpUnRegisterEvent;

	}
	{
		// CgsEventInterpreterModule.cpp:896
		const GuiEventPriorityRegisterForEvents * lpRegisterEvent;

	}
	{
		// CgsEventInterpreterModule.cpp:904
		const GuiEventPriorityUnRegisterForEvents * lpUnRegisterEvent;

	}
	{
		// CgsEventInterpreterModule.cpp:911
		const GuiEventPriorityStopBlocking * lpUnblockingEvent;

	}
	{
		// CgsEventInterpreterModule.cpp:919
		GuiEventQueueSmall * lpResourceOutQueue;

		EventInterpreterModuleIO::OutputBuffer::GetResourceEventQueue(/* parameters */);
		GuiEventQueueBase<4096,16>::AddGuiEvent(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:929
		InputBuffer::GuiEventQueue * lpOutEventQueue;

		// CgsEventInterpreterModule.cpp:933
		const GuiEventOut<CgsGui::GuiEvent<-0x00000000000000001> > * lpOutEvent;

		EventInterpreterModuleIO::OutputBuffer::GetOutEventQueue(/* parameters */);
		GuiEventQueueBase<16384,16>::AddGuiEvent(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:943
		GuiStackEventQueue::GuiEventQueueLarge * lpViewOutQueue;

		// CgsEventInterpreterModule.cpp:947
		const GuiOutViewState<CgsGui::GuiEvent<-0x00000000000000001> > * lpOutEvent;

		EventInterpreterModuleIO::OutputBuffer::GetViewEventQueue(/* parameters */);
		GuiEventQueueBase<65536,16>::AddGuiEvent(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:957
		const GuiOutInternalEvent<CgsGui::GuiEvent<-0x00000000000000001> > * lpInternalEvent;

		GuiEventQueueBase<16384,16>::AddGuiEvent(/* parameters */);
	}
	{
		// CgsEventInterpreterModule.cpp:864
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsEventInterpreterModule.cpp:861
		CgsDev::StrStream lStrStream;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
		// CgsEventInterpreterModule.cpp:920
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsEventInterpreterModule.cpp:948
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsEventInterpreterModule.cpp:958
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsEventInterpreterModule.cpp:944
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsEventInterpreterModule.cpp:930
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsEventInterpreterModule.cpp:934
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::EventInterpreterModule::Update(InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	AppendGuiQueue<16384, 16>(/* parameters */);
	GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0, const IOBuffer *  lpOutputBuffer1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ModelModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModule.cpp:296
		InputBuffer * lpResourceInputBuffer;

		// CgsModelModule.cpp:297
		OutputBuffer * lpResourceOutputBuffer;

		// CgsModelModule.cpp:298
		InputBuffer * lpEventInterpreterInputBuffer;

		// CgsModelModule.cpp:299
		OutputBuffer * lpEventInterpreterOutputBuffer;

	}
	CreateIOBuffer<CgsGui::GuiResourceModuleIO::InputBuffer>(/* parameters */);
	CreateIOBuffer<CgsGui::GuiResourceModuleIO::OutputBuffer>(/* parameters */);
	CreateIOBuffer<CgsGui::EventInterpreterModuleIO::InputBuffer>(/* parameters */);
	CreateIOBuffer<CgsGui::EventInterpreterModuleIO::OutputBuffer>(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	DestroyIOBuffer<CgsGui::EventInterpreterModuleIO::OutputBuffer>(/* parameters */);
	DestroyIOBuffer<CgsGui::EventInterpreterModuleIO::InputBuffer>(/* parameters */);
	DestroyIOBuffer<CgsGui::GuiResourceModuleIO::OutputBuffer>(/* parameters */);
	DestroyIOBuffer<CgsGui::GuiResourceModuleIO::InputBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiEvent<32>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::GetAptTriggerEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.h:429
		InputBuffer::GuiEventQueue * lpOutAptTriggerEvents;

		{
			// CgsGuiViewModule.h:432
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::AptAux::GetOutAptTriggerEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::GetOutAptTriggerEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewIO::OutputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModuleIO.h:253
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, InputBuffer *  lpInput, CgsGui::CgsGuiModuleIO::OutputBuffer *  lpOutput, InputBuffer *  lpModelInputBuffer, OutputBuffer *  lpModelOutputBuffer, InputBuffer *  lpViewInputBuffer, OutputBuffer *  lpViewOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	{
		// CgsGuiModule.cpp:390
		InputBuffer::GuiEventQueue * lpOutAptTriggerEvents;

		ViewIO::OutputBuffer::GetGuiEventQueue(/* parameters */);
		AppendGuiQueue<16384, 16>(/* parameters */);
		GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	}
	{
		// CgsGuiModule.cpp:354
		GuiEventSetCircleButtonConfig lCircleButtonChangedEvent;

		AddGuiOutEvent<CgsGui::GuiEventSetCircleButtonConfig>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::EventInterpreterModule::PreWorldUpdate(InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
}

void CgsGui::ModelModule::PreWorldUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModule.cpp:248
		InputBuffer * lpEventInterpreterInputBuffer;

		// CgsModelModule.cpp:249
		OutputBuffer * lpEventInterpreterOutputBuffer;

		CreateIOBuffer<CgsGui::EventInterpreterModuleIO::InputBuffer>(/* parameters */);
	}
	CreateIOBuffer<CgsGui::EventInterpreterModuleIO::OutputBuffer>(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	DestroyIOBuffer<CgsGui::EventInterpreterModuleIO::OutputBuffer>(/* parameters */);
	DestroyIOBuffer<CgsGui::EventInterpreterModuleIO::InputBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::GuiModule::PreWorldUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, CgsGui::CgsGuiModuleIO::OutputBuffer *  lpGuiOutput, OutputBuffer *  lpModelOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
}

void CgsGui::AptComponentList::SetKeyValue(int32_t  liComponent, int32_t  liValueIndex, KeyValue *  lpKeyValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::UpdateComponent(const char *  lpacName, const char *  lpacKey, const char *  lpacValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptCommunicator.cpp:413
		int32_t lnComponent;

		// CgsAptCommunicator.cpp:422
		uint32_t luHashedKey;

		// CgsAptCommunicator.cpp:440
		int32_t lNumKeyValues;

		// CgsAptCommunicator.cpp:441
		KeyValue * lpKeyValue;

		// CgsAptCommunicator.cpp:489
		uint8_t luUsedData;

	}
	AptComponentList::GetAptValue(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	AptComponentList::GetUsedData(/* parameters */);
	AptComponentList::GetKeyValue(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	AptComponentList::GetUsedData(/* parameters */);
	{
		// CgsAptCommunicator.cpp:462
		uint32_t luComponents;

		// CgsAptCommunicator.cpp:463
		int32_t liKeyValue;

	}
	AptComponentList::GetUsedData(/* parameters */);
	AptComponentList::GetUsedData(/* parameters */);
	{
		// CgsAptCommunicator.cpp:483
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	AptComponentList::GetUsedData(/* parameters */);
	{
		// CgsAptCommunicator.cpp:492
		KeyValue * lpKeyValue;

		AptComponentList::SetKeyValue(/* parameters */);
		AptComponentList::SetUsedData(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:458
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	AptComponentList::GetKeyValue(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	AptComponentList::GetKeyValue(/* parameters */);
	{
		// CgsAptCommunicator.cpp:409
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptCommunicator.cpp:408
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::AptCallbackRender::LoadTexture(AptAnimationUserData  lpUserData, int32_t  lnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:192
		AptDataHeader * lpAptDataHeader;

		// CgsAptRender.cpp:195
		GuiGeometryObject * lpGeometryObject;

		// CgsAptRender.cpp:198
		GuiGeometryFile * lpGeomFile;

		// CgsAptRender.cpp:199
		GuiGeometryMeshHeader * lpMeshHeader;

		// CgsAptRender.cpp:200
		uint32_t liFileIndex;

		// CgsAptRender.cpp:201
		uint32_t liMeshIndex;

	}
	{
		// CgsAptRender.cpp:225
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsAptRender.cpp:215
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:210
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:224
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:193
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:196
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::ReportTaskCompleted(CgsGui::ESaveLoadTaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:333
		sys_addr_t lAddr;

		// CgsSaveLoadPS3.cpp:334
		int32_t liCellResult;

		sys_memory_free(/* parameters */);
		{
			// CgsSaveLoadPS3.cpp:341
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsGui::SaveLoadSystem::ExportImageResult(CgsGui::SaveDataSystem::ETaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1471
		const UnicodeBuffer::CgsUtf8 * lpString;

	}
}

void CgsGui::SaveLoadSystem::LoadFailureChoice(uint32_t  liOptionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::SaveFailureChoice(uint32_t  liOptionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1130
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::AutosaveFailureChoice(uint32_t  liOptionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1025
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::BootupResult(CgsGui::SaveDataSystem::ETaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::BootupShowAutosaveWarning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::BootupChatDisabledChoice(uint32_t  liOptionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::CheckDiskSpaceResult(CgsGui::SaveDataSystem::ETaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::NoSpaceChoice(uint32_t  luOptionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::Bootup(const CgsGui::SaveLoadTaskResultHandler &  lHandler, const const SaveLoadMetadata &  lMetadata, bool  lbAutoLoad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:553
		sys_addr_t lAddr;

		// CgsSaveLoadPS3.cpp:554
		int32_t liCellResult;

		sys_memory_allocate(/* parameters */);
	}
	{
		// CgsSaveLoadPS3.cpp:562
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsSaveLoadPS3.cpp:570
		SaveInfo lSaveInfo;

	}
}

void CgsGui::SaveLoadSystem::AutosaveResult(CgsGui::SaveDataSystem::ETaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1004
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::SaveResult(CgsGui::SaveDataSystem::ETaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1110
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::LoadResult(CgsGui::SaveDataSystem::ETaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1208
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::LoadImagesResult(CgsGui::SaveDataSystem::ETaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1322
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::SaveLoadSystem::DeleteResult(CgsGui::SaveDataSystem::ETaskResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1365
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::SetRed(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::SetGreen(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::SetBlue(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::SetAlpha(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::ExportImageThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSaveLoadPS3.cpp:1407
		SaveLoadSystem * lpThis;

		// CgsSaveLoadPS3.cpp:1408
		int32_t liResult;

		// CgsSaveLoadPS3.cpp:1409
		RGBA * lpPixelData;

	}
	{
		// CgsSaveLoadPS3.cpp:1414
		int32_t liX;

		// CgsSaveLoadPS3.cpp:1415
		int32_t liY;

		{
			// CgsSaveLoadPS3.cpp:1420
			int32_t liXCoord;

			// CgsSaveLoadPS3.cpp:1421
			int32_t liYCoord;

			// CgsSaveLoadPS3.cpp:1422
			int32_t liDistanceSq;

			// CgsSaveLoadPS3.cpp:1423
			int32_t liFadeAmount;

			{
				// CgsSaveLoadPS3.cpp:1427
				RGBA * lpPixel;

				rw::math::fpu::Max<int>(/* parameters */);
				rw::RGBA::SetRed(/* parameters */);
				rw::math::fpu::Max<int>(/* parameters */);
				rw::RGBA::SetGreen(/* parameters */);
				rw::math::fpu::Max<int>(/* parameters */);
				rw::RGBA::SetBlue(/* parameters */);
				rw::math::fpu::Max<int>(/* parameters */);
				rw::RGBA::SetAlpha(/* parameters */);
			}
		}
	}
}

void CgsGui::CgsGuiModuleIO::InputBuffer::GetImRenderers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:360
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ViewModule::SetImRenderers(const const ImRendererSet &  lRendererSet, InputBuffer *  lpViewInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewIO::InputBuffer::SetImRenderers(const const ImRendererSet &  lRendererSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModuleIO.h:140
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiModule::Render(InputBuffer *  lpViewInputBuffer, InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsGuiModuleIO::InputBuffer::GetImRenderers(/* parameters */);
	ViewModule::SetImRenderers(/* parameters */);
	operator=(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::ViewModule::RenderInternal(const InputBuffer *  lpViewInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.cpp:903
		uint32_t luElapsedTime;

	}
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
	{
	}
	{
	}
}

void CgsGui::GuiEventLocalisedTextPointerRemoved::SetStringRemoved(const char *  lpcStringRemoved) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<13>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::ProcessIncomingLanguageEvent(const CgsModule::Event *  lpEvent, int32_t  liSize, int32_t  liId, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.cpp:677
		const GuiEventAddLocalisedTextPointer * lpAddLocalisedTextPointer;

		{
			// CgsGuiViewModule.cpp:687
			GuiEventLocalisedTextPointerRemoved lPointerRemovedEvent;

			GuiEventLocalisedTextPointerRemoved::SetStringRemoved(/* parameters */);
			AddGuiEvent<CgsGui::GuiEventLocalisedTextPointerRemoved>(/* parameters */);
		}
	}
	{
		// CgsGuiViewModule.cpp:628
		const GuiEventUpdateLocalisedCpt * lpLocaliseEvent;

		// CgsGuiViewModule.cpp:630
		UnicodeBuffer::CgsUtf8[128] lLocalisedString;

	}
}

void CgsGui::ViewModule::SetClearScreenEnabled(bool  lbRenderGui) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::SetClearScreenAlpha(float32_t  lfAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptAux::DebugRotateToNextFont() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptAux::DebugRotateToNextFontEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptAux::DebugChangeFontSpacing(float32_t  lfSpacing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventTimeInfo::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptAux::GetAptCommunicatorInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCommunicator::SetCircleButtonAsSelect(const bool  lbNewValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::ProcessIncomingCustomRenderEvent(const CgsModule::Event *  lpEvent, int32_t  liSize, int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewModule::ProcessIncomingViewEvents(const GuiStackEventQueue::GuiEventQueueLarge *  lpQueue, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModule.cpp:476
		const CgsModule::Event * lpEvent;

		// CgsGuiViewModule.cpp:477
		int32_t liSize;

		// CgsGuiViewModule.cpp:478
		int32_t liId;

		// CgsGuiViewModule.cpp:479
		const CgsModule::Event * lpBackupEvent;

		// CgsGuiViewModule.cpp:480
		int32_t liBackupSize;

		// CgsGuiViewModule.cpp:481
		int32_t liBackupId;

		GuiEventQueueBase<65536,16>::GetFirstEvent(/* parameters */);
		{
			// CgsGuiViewModule.cpp:505
			const GuiEventClearScreenSet * lpClear;

			SetClearScreenEnabled(/* parameters */);
		}
		{
			// CgsGuiViewModule.cpp:588
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsGuiViewModule.cpp:589
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		ProcessIncomingCustomRenderEvent(/* parameters */);
		{
			// CgsGuiViewModule.cpp:594
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsGuiViewModule.cpp:595
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsGuiViewModule.cpp:596
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GuiEventQueueBase<65536,16>::GetNextEvent(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:564
		const GuiEventTimeInfo * lpTimeEvent;

		GuiEventTimeInfo::GetTimeStep(/* parameters */);
	}
	AptCommunicator::SetCircleButtonAsSelect(/* parameters */);
	AptAux::DebugRotateToNextFontEffect(/* parameters */);
	{
		// CgsGuiViewModule.cpp:544
		const GuiViewEventFontCharSpacing * lpSpacingEvent;

		AptAux::DebugChangeFontSpacing(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	SetClearScreenEnabled(/* parameters */);
	SetClearScreenAlpha(/* parameters */);
}

void CgsGui::GuiEventQueueBase<256,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ViewIO::InputBuffer::GetViewStateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiViewModuleIO.h:172
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::ViewModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<256,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Clear(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	ViewIO::InputBuffer::GetViewStateQueue(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		// CgsGuiViewModule.cpp:353
		uint32_t luElapsedTime;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsGui::StateInterface::GetAccessPointers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiComponent::FillAptViewMessage(const char *  lpcName, const char *  lpcKey, const char *  lpcValue, bool  lbIsReserved) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	StateInterface::GetAccessPointers(/* parameters */);
}

void CgsGui::GuiComponent::AddOutputAptViewState(const char *  lacVariable, const char *  lacValue, const bool  lbIsReservedVar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiComponent.cpp:53
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiComponent.cpp:51
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiComponent.cpp:52
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator!=<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:216
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:218
		bool ret;

	}
}

void CgsGui::AptRenderHandler::GetTextRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackRender::DrawString(AptAssetString  lpAssetString, AptMaskRenderOperation  leMaskOperation, int32_t  liLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:144
		AptRenderHandler * lpRenderHandler;

		// CgsAptRender.cpp:145
		CgsAptString * lpAptString;

		// CgsAptRender.cpp:146
		TextRenderer * lpTextRenderer;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	AptAux::GetRenderHandler(/* parameters */);
	rw::math::vpu::operator!=<VectorAxisW>(/* parameters */);
	{
		// CgsAptRender.cpp:170
		AptRenderHandler::Im2dRendererType * lpImRenderer;

		AptRenderHandler::GetTextRenderer(/* parameters */);
		AptRenderHandler::GetIm2dRendererType(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:150
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:148
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:162
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:159
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator*<VectorAxisW>(const const float &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1665
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:1667
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1668
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1668
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void CgsGraphics::Im2dRenderBuffer::PushMask(renderengine::Texture *  lpTexture, GuiGeometryMesh::Im2dVertex *  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:195
		ImCommandPushMaskTexture<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		// CgsIm2dRenderBuffer.h:196
		GuiGeometryMesh::Im2dVertex * lpDestVertices;

	}
}

void CgsGraphics::Im2dRenderBuffer::PopMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::AptCallbackRender::DrawRenderingUnit(AptAssetRenderingUnit  lpRenderingUnit, AptMaskRenderOperation  leMaskOperation, int32_t  liLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:451
		GuiGeometryFile * lpGuiGeometry;

		// CgsAptRender.cpp:454
		AptRenderHandler * lpRenderHandler;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	AptAux::GetRenderHandler(/* parameters */);
	{
		// CgsAptRender.cpp:467
		int32_t liMeshIndex;

	}
	{
		// CgsAptRender.cpp:470
		GuiGeometryMesh * lpGuiMesh;

		// CgsAptRender.cpp:471
		renderengine::Texture * lpTex;

		// CgsAptRender.cpp:489
		AptRenderHandler::Im2dRendererType * lpImRenderer;

		// CgsAptRender.cpp:490
		GuiGeometryMesh::Im2dVertex * lpVertices;

		// CgsAptRender.cpp:491
		GuiGeometryMesh::Im2dVertex[2] lVertices;

		// CgsAptRender.cpp:492
		GuiGeometryMesh::Im2dVertex * lpMinVert;

		// CgsAptRender.cpp:493
		GuiGeometryMesh::Im2dVertex * lpMaxVert;

		// CgsAptRender.cpp:503
		int32_t liIndex;

		// CgsAptRender.cpp:504
		const int32_t liVertexCount;

		// CgsAptRender.cpp:525
		const const Im2dTransform & lTransform;

		AptRenderHandler::GetIm2dRendererType(/* parameters */);
		{
			// CgsAptRender.cpp:497
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			// CgsAptRender.cpp:507
			GuiGeometryMesh::Im2dVertex * lpVert;

		}
		{
			// CgsAptRender.cpp:523
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		operator=(/* parameters */);
		operator=(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::vpu::Vector4::GetX(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::PushMask(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		{
		}
		{
		}
	}
	{
		// CgsAptRender.cpp:473
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:483
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:496
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:495
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:449
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:452
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:455
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:552
		AptRenderHandler::Im2dRendererType * lpImRenderer;

		AptRenderHandler::GetIm2dRendererType(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::PopMask(/* parameters */);
		{
			// CgsAptRender.cpp:553
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsGui::KF_NUM_MILLISECONDS_PER_TIMER_TIME = [68, 122, 0, 0];

CgsGui::KF_FONT_SPACING_CONDENSED = [63, 89, 153, 154];

CgsGui::KF_FONT_SPACING_STRETCHED = [63, 179, 51, 51];

CgsGui::KF_DISK_SPACE_REQUIRED = [71, 160, 0, 0];

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

