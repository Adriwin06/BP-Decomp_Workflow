struct _CGprogram;

struct _CGparameter;

void CgsDev::StrStreamBase::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Assert::BeginAssert() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Assert::EndAssert() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SnPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:129
		va_list lArgument;

		// CgsStringUtils.h:130
		int32_t lNumBytesCopied;

	}
}

void CgsDev::Matches(const char  lsChar, const char *  lsDelimiters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.cpp:147
		int32_t liLength;

	}
}

void CgsDev::SimpleStrStream::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.cpp:179
		int32_t liLength;

	}
}

void CgsDev::StrInStreamBase::GetNextWord(const char *  lpText, const char **  lppTextOut, const char *  lsDelimiters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.cpp:203
		const char * lpWordStart;

	}
}

void CgsDev::StrInStream::StrInStream(const char *  lpBuffer, uint32_t  luBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrInStream::StrInStream(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrInStream::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonGpu::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonGpu::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonGpu::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			Im3dVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsDev::DebugUI::Window::OnGetFocus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::OnLostFocus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDebug3DRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDebug2DRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::OnRegister() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::~DebugManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugComponent>::IsAdded(const CgsDev::DebugComponent *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:449
		CgsDev::DebugComponent * lpTemp;

	}
}

void CgsDev::DebugUI::DebugUI::SetGamePad(DebugManagerPad *  lpDebugManagerPad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugController::SetGamePad(DebugManagerPad *  lpDebugManagerPad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::SetMetrics(const const Metrics &  lMetrics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::SetPalette(const const Palette &  lPalette) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetConsole() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Console::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Console::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetMenuPath(char *  lpcPathOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetSelectedItemString(char *  lpcItemStringOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::LogWindow::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogWindow.cpp:213
		int32_t liIndex;

	}
}

void CgsDev::DebugUI::MenuItemFunction::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Function::GetFunction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemFunction::IsUseful() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Menu::Prepare(const char *  lpcCaption, CgsDev::DebugUI::Menu *  lpParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Clear(/* parameters */);
}

void CgsDev::DebugUI::Menu::GetSelectedItemString(char *  lpcItemStringOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::IsUseful() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::GetDisplayName(char *  lpcDisplayName, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::GetItemString(char *  lpcItemStringOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::OpenAsWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuWindow::GetSelectedItemString(char *  lpcItemStringOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemText::Prepare(const char *  lpcCaption) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemText::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemText::GetDisplayName(char *  lpcDisplayName, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariable::IsUseful() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Copy(const const Variant &  lSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(uint32_t  luValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(float32_t *  lprValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(int32_t *  lpiValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(uint32_t *  lpuValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(bool *  lpbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariable::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariable::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableBar::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableBar.cpp:82
		float32_t lfCurrentValue;

	}
}

void CgsDev::DebugUI::WidgetBar::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableBarGraph::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableBarGraph.cpp:87
		float32_t lfCurrentValue;

	}
}

void CgsDev::DebugUI::MenuItemVariableLineGraph::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableLineGraph.cpp:71
		int32_t liFloatIndex;

		{
			// CgsMenuItemVariableLineGraph.cpp:76
			int32_t liHistoryIndex;

		}
	}
}

void CgsDev::DebugUI::CustomWindowMenuItem::Prepare(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CustomWindowMenuItem::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CustomWindowMenuItem::IsUseful() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetCaption() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CustomWindowMenuItem::GetDisplayName(char *  lpcDisplayName, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::IsInARenderingBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::IsInARenderingBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Widget::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, float32_t  lfWidth, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Widget::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetPalette() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Widget::GetPalette() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::WidgetLineGraph::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::WidgetBarGraph::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::TextWindow::Append(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::TextWindowStrStream::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::TextWindow::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentMessageFilter::FilterEnableChangeCallback(void *  lpValue, void *  lpUserParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMessageFilter.cpp:206
		DebugComponentMessageFilter * lpThis;

		// CgsDebugComponentMessageFilter.cpp:209
		FilterFlag lxFilterFlag;

	}
}

void CgsDev::DebugComponentMessageFilter::FilterTypeChangeCallback(void *  lpValue, void *  lpUserParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMessageFilter.cpp:228
		DebugComponentMessageFilter * lpThis;

		// CgsDebugComponentMessageFilter.cpp:231
		FilterFlag lxFilterFlag;

	}
}

void CgsDev::DebugComponentMessageFilter::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentMessageFilter::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:155
		float test;

		// scalar.h:156
		float r;

	}
}

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void CgsDev::DebugComponentPerfMonGpu::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::DebugCallbackResetCounters(void *  lpParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonCpu.cpp:519
		DebugComponentPerfMonCpu * lpThis;

	}
}

void CgsDev::DebugComponentPerfMonCpu::SetNoPage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::SetFirstPage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::SetNextPage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::DebugEnableTracingCallback(void *  lpValue, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::DebugChangeTraceModeCallback(void *  lpValue, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonGpu::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogCombined::AddStream(CgsDev::StrStreamBase *  lpStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogCombined.cpp:52
		int32_t liIndex;

	}
}

void CgsDev::Log::LogCombined::RemoveStream(CgsDev::StrStreamBase *  lpStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogCombined.cpp:77
		int32_t liIndex;

	}
}

void CgsDev::Log::LogCombined::RemoveAllStreams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogCombined.cpp:126
		int32_t liIndex;

	}
}

void CgsDev::MapFile::Reader::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>(const const rw::math::vpu::VecFloatRefIndex &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:345
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:347
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:349
		bool ret;

		{
			// vec_float_operation_inline.h:346
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:348
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator<(const const rw::math::vpu::VecFloatRefIndex &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:503
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:505
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:507
		bool ret;

		{
			// vec_float_operation_inline.h:504
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:506
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void CgsDev::Debug2DImmediateRender::GetVirtualScreenSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDebug2DImmediateRender.h:241
	Vector2 lVector;

	{
		// CgsDebug2DImmediateRender.h:241
		Vector2 lVector;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:301
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Max(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
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

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
}

void CgsDev::DebugUI::MenuItemVariableLineGraph::RecalculateMinMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableLineGraph.cpp:254
		int32_t liFloatIndex;

		{
			// CgsMenuItemVariableLineGraph.cpp:267
			int32_t liHistoryIndex;

			rw::math::vpu::Min<float>(/* parameters */);
			rw::math::vpu::Max<float>(/* parameters */);
		}
	}
}

void CgsDev::DebugUI::MenuItemVariableLineGraph::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableLineGraph.cpp:100
		int32_t liFloatIndex;

		{
			// CgsMenuItemVariableLineGraph.cpp:108
			float32_t lfCurrentValue;

		}
	}
}

void rw::math::vpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:58
		float r;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator==(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:166
		bool ret;

		{
			// vec_float_operation_inline.h:165
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator/=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1185
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1186
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1186
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1186
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1186
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1186
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator>=(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:797
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:799
		bool ret;

		{
			// vec_float_operation_inline.h:798
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator<=(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:956
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:958
		bool ret;

		{
			// vec_float_operation_inline.h:957
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:434
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

void CgsDev::VectorFontStream::SetPosition(float32_t  lfX, float32_t  lfY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::VectorFontStream::SetSize(float32_t  lfSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::VectorFontStream::SetColour(RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::VectorFontStream::Prepare(float32_t  lfX, float32_t  lfY, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetPosition(/* parameters */);
	SetSize(/* parameters */);
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
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

void rw::math::vpu::operator+=(const float &  a, const VecFloat  b) {
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

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetMetrics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetMetrics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::LogWindow::ComputeConsoleHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogWindow.cpp:237
		float32_t lfHeight;

	}
}

void CgsDev::DebugUI::Window::CalcCaptionHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::CalcScreenHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWindow.cpp:455
		float32_t lfHeight;

	}
}

void CgsDev::DebugUI::Window::CalcScreenWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWindow.cpp:434
		float32_t lfWidth;

	}
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::ClampToScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWindow.cpp:291
		const const Metrics & lMetrics;

		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
	}
}

void CgsDev::DebugUI::Window::SetPosition(float32_t  lfX, float32_t  lfY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::ApplyMovement(float32_t  lfDX, float32_t  lfDY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::GetMetrics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableLineGraph::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableLineGraph.cpp:196
		const const Metrics & lMetrics;

		// CgsMenuItemVariableLineGraph.cpp:197
		float32_t lfTextSize;

	}
}

void CgsDev::DebugUI::Widget::GetMetrics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNextWrap(const CgsDev::DebugUI::Window *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:509
		CgsDev::DebugUI::Window * lpNext;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNext(const CgsDev::DebugUI::Window *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetFirst() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Menu::GetCaption() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Menu::GetDisplayName(char *  lpcDisplayName, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Function::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemFunction::GetDisplayName(char *  lpcDisplayName, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemFunction::GetItemString(char *  lpcItemStringOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetFirst() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNext(const CgsDev::DebugUI::MenuItem *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Menu::IsMenuUseful() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenu.cpp:339
		CgsDev::DebugUI::MenuItem * lpMenuItem;

	}
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetFirst(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNext(/* parameters */);
}

void CgsDev::DebugUI::Menu::FindMenuItemByName(const char *  lpcMenuItemName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenu.cpp:387
		CgsDev::DebugUI::MenuItem * lpMenuItem;

	}
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetFirst(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNext(/* parameters */);
	{
		// CgsMenu.cpp:391
		char[256] lacDisplayName;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNextWrap(const CgsDev::DebugUI::MenuItem *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:509
		CgsDev::DebugUI::MenuItem * lpNext;

	}
}

void CgsDev::DebugUI::Menu::SelectNextMenuItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenu.cpp:456
		CgsDev::DebugUI::MenuItem * lpStart;

	}
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNextWrap(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetFirst(/* parameters */);
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
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

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::_InterpolateColour(const const RGBA &  lColour0, const const RGBA &  lColour1, const float32_t  lfInLerp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDebugManager.cpp:472
	RGBA lReturn;

	{
		// CgsDebugManager.cpp:472
		RGBA lReturn;

		// CgsDebugManager.cpp:473
		float32_t lfLerp;

		// CgsDebugManager.cpp:475
		float32_t lfLowR;

		// CgsDebugManager.cpp:476
		float32_t lfLowG;

		// CgsDebugManager.cpp:477
		float32_t lfLowB;

		// CgsDebugManager.cpp:478
		float32_t lfHighR;

		// CgsDebugManager.cpp:479
		float32_t lfHighG;

		// CgsDebugManager.cpp:480
		float32_t lfHighB;

		// CgsDebugManager.cpp:482
		float32_t lfOutR;

		// CgsDebugManager.cpp:483
		float32_t lfOutG;

		// CgsDebugManager.cpp:484
		float32_t lfOutB;

		rw::RGBA::GetRed(/* parameters */);
	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::RGBA::GetRed(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
}

void CgsDev::StackUnpickBase::IsStackAvailable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<std::int32_t>(const const int32_t &  a, const const int32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::SetAlpha(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::IsAdded(const CgsDev::DebugUI::MenuItem *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:449
		CgsDev::DebugUI::MenuItem * lpTemp;

	}
}

void CgsDev::DebugUI::Menu::IsMenuItemAdded(const CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::IsAdded(/* parameters */);
}

void CgsDev::DebugUI::Menu::GetParent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Menu::GetPath(char *  lpcPathOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuWindow::GetMenuPath(char *  lpcPathOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variable::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariable::GetItemString(char *  lpcItemStringOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::IsModal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PerfMonGpuMonitorData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VectorFont() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Assert::Manager::Manager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::IsAdded(const CgsDev::DebugUI::Window *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:449
		CgsDev::DebugUI::Window * lpTemp;

	}
}

void CgsDev::DebugUI::Window::GetPalette() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::GetPalette() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::VectorFont::SetRenderer(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::VectorFontStream::Construct(CgsDev::Debug2DImmediateRender *  lpRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VectorFont::SetRenderer(/* parameters */);
}

void CgsDev::DebugUI::Window::CanActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsDev::DebugUI::DebugUI::GetActiveWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::IsActiveWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::ScaleColour(RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWindow.cpp:254
		float32_t lfAlpha;

	}
	rw::RGBA::SetAlpha(/* parameters */);
}

void CgsDev::DebugUI::Window::IsHidden() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:651
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:653
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:655
		bool ret;

	}
}

void rw::math::vpu::operator>=<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:651
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:653
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:655
		bool ret;

	}
}

void rw::math::vpu::operator<=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:810
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:812
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:814
		bool ret;

	}
}

void rw::math::vpu::operator<=<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:810
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:812
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:814
		bool ret;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetActiveAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::GetAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuWindow::GetMenu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetActiveCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function>::GetActiveAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function>::GetAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Function::GetParameter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function>::GetActiveCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function>::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetFunctionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetFunctionName(Function::DebugCallbackFunction  lpfCallback, void *  lpParameter, const char *  lpcNewName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::GetActiveAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::GetAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::GetActiveCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetMenuManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CustomWindow::GetMenuPath(char *  lpcPathOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::GetActiveAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::GetAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variable::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::GetActiveCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetVariableManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetVariableName(void *  lpValue, const char *  lpcNewName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::strrchr(char *  _Str, int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::GetActiveAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::GetAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariable::GetVariable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::GetActiveCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::GetCount() {
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

void rw::core::debug::detail::DebugCriticalSection::DebugCriticalSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugUI() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Palette() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::LogWindow::LogWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugInternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Debug3DImmediateRender::Debug3DImmediateRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::SafeResourceHandle() {
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

extern void TextRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Basic2dColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Debug2DImmediateRender::Debug2DImmediateRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PerfMonGpuInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::debug::detail::DebugCriticalSection::~DebugCriticalSection() {
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
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	DebugUI(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	rw::core::debug::detail::DebugCriticalSection::DebugCriticalSection(/* parameters */);
	CgsDev::DebugUI::CustomWindowMenuItem::CustomWindowMenuItem(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsDev::DebugUI::CommandWindow::CommandWindow(/* parameters */);
	CgsDev::DebugUI::ErrorWindow::ErrorWindow(/* parameters */);
	CgsDev::Debug3DImmediateRender::Debug3DImmediateRender(/* parameters */);
	CgsDev::Debug2DImmediateRender::Debug2DImmediateRender(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::core::debug::detail::DebugCriticalSection::DebugCriticalSection(/* parameters */);
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::GetActiveAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::GetAt(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemFunction::GetFunction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::GetActiveCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::atof(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::atoi(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetBlendEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetSource(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetDestination(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  dest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetOperation(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Operation  op) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RasterizerState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RasterizerState::Parameters::SetCullMode(renderengine::RasterizerState::CullMode  cm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::VectorFont::SetRenderer(CgsDev::Debug3DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::Set2DRenderer(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Assert::Manager::SetRenderer(CgsDev::Debug2DImmediateRender *  lpRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Sin(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sinf4.h:14
		float[4] xl;

		// sinf4.h:14
		float[4] xl2;

		// sinf4.h:14
		float[4] xl3;

		// sinf4.h:14
		float[4] res;

		// sinf4.h:15
		int[4] q;

		// sinf4.h:30
		int[4] offset;

		// sinf4.h:34
		float[4] qf;

		// sinf4.h:35
		float[4] p1;

		// sinf4.h:49
		float[4] ct1;

		// sinf4.h:50
		float[4] st1;

		// sinf4.h:52
		float[4] ct2;

		// sinf4.h:53
		float[4] st2;

		// sinf4.h:55
		float[4] cx;

		// sinf4.h:56
		float[4] sx;

		// sinf4.h:61
		unsigned int[4] mask1;

		// sinf4.h:68
		unsigned int[4] mask2;

	}
}

void rw::math::fpu::Sin(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::AllocateMemoryResource(uint32_t  size, uint32_t  alignment, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::LogWindow::Construct(int32_t  liLineCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator new [](/* parameters */);
}

void CgsDev::DebugUI::TextWindow::Construct(int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator new [](/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StackUnpickBase::GetStackSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Assert::FireAssert(const char *  lpcMessage, const char *  lpcFile, int32_t  liLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawTriangle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
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

void CgsDev::DebugRenderStreamWriter::Add3DEvent(const void *  lpData, int32_t  liDataSize, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.h:204
		const DebugStreamInputEntry & lEntry;

	}
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugRenderStreamWriter::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.h:155
		int32_t liIndex;

	}
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

void CgsDev::PerfMonCpu_HELPER_printspaces(int  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::MapFile::MinimalMemoryReader::GetStackEntryName(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::MapFile::Reader::Prepare(const char *  lpcMapFileName, StackUnpickBase *  lpCallstack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogFileBuffered::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogFileBuffered.cpp:169
		uint64_t lNewPos;

	}
}

void CgsDev::Log::LogFileBuffered::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogFileBuffered.cpp:114
		int32_t liStringLength;

		// CgsLogFileBuffered.cpp:115
		int32_t liStringPosition;

	}
	{
		// CgsLogFileBuffered.cpp:119
		int32_t liBufferSpace;

		// CgsLogFileBuffered.cpp:120
		int32_t liStringRemaining;

	}
}

void CgsDev::Log::LogFileBuffered::Close() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogFile::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogFile.cpp:170
		uint64_t lNewPos;

	}
}

void CgsDev::Log::LogFile::Close() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogFile::Open(const char *  lpcFileName, bool  lbAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogFile.cpp:98
		uint64_t lNewPos;

	}
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::MapFile::MinimalMemoryReader::ReadRecords() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMapFileReaderMinimalMemory.cpp:167
		uint32_t luMaxRecords;

		// CgsMapFileReaderMinimalMemory.cpp:168
		uint32_t luReadSize;

		// CgsMapFileReaderMinimalMemory.cpp:171
		uint32_t luSize;

		// CgsMapFileReaderMinimalMemory.cpp:172
		uint32_t luNumRecords;

		// CgsMapFileReaderMinimalMemory.cpp:184
		Record * lpRecordsArray;

	}
	{
		// CgsMapFileReaderMinimalMemory.cpp:185
		uint32_t luRecord;

		{
			// CgsMapFileReaderMinimalMemory.cpp:188
			uint32_t luMaxStack;

			StackUnpickBase::GetStackSize(/* parameters */);
			rw::core::stdc::Min(/* parameters */);
			{
				// CgsMapFileReaderMinimalMemory.cpp:189
				uint32_t luStackIndex;

			}
			{
				// CgsMapFileReaderMinimalMemory.cpp:198
				SPU::HostPtr lAddress;

				CgsCore::StrCpy(/* parameters */);
			}
		}
	}
}

void CgsDev::MapFile::MinimalMemoryReader::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::MapFile::MapFileHeader::CheckVersion() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::MapFile::MinimalMemoryReader::Prepare(const char *  lpcMapFileName, StackUnpickBase *  lpCallstack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMapFileReaderMinimalMemory.cpp:58
		int32_t liIndex;

		// CgsMapFileReaderMinimalMemory.cpp:71
		MapFileHeader * lpMapFile;

		// CgsMapFileReaderMinimalMemory.cpp:72
		uint32_t luSize;

		// CgsMapFileReaderMinimalMemory.cpp:82
		uint32_t luRecordOffset;

		MapFileHeader::CheckVersion(/* parameters */);
	}
}

void CgsDev::MapFile::MinimalMemoryReader::SetAsyncronousMode(bool  lbAsyncronous) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::PerfMonCpu::GetMaxMonitorCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::LogBufferEnable(void *  lpLogBuffer, int32_t  liLogBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		StrStream lStrStream;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::GetCurrentPage(int32_t *  lpiOutPageIndex, char *  lpcOutPageName, int32_t  liPageNameBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrnCpy(/* parameters */);
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::DebugComponentPerfMonCpu::SetPageName(int32_t  liPage, const char *  lpcPageName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonGpu::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::PerfMonCpu::GetMonitorPage(int32_t  liMonitorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::PerfMonCpu::GetMonitorCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::LogBufferDump(char *  lpFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonCpu.cpp:740
		char[256] lacFullFilename;

	}
	{
		// CgsDebugComponentPerfMonCpu.cpp:744
		std::FILE * fp;

		// CgsDebugComponentPerfMonCpu.cpp:745
		int32_t liMonitorId;

		// CgsDebugComponentPerfMonCpu.cpp:745
		int32_t liPageID;

		{
			// CgsDebugComponentPerfMonCpu.cpp:773
			uint16_t * lpBuffer;

			// CgsDebugComponentPerfMonCpu.cpp:774
			uint16_t * lpBufferEnd;

			// CgsDebugComponentPerfMonCpu.cpp:775
			uint16_t lu16NumMonitors;

			{
				// CgsDebugComponentPerfMonCpu.cpp:764
				PerfMonCpuMonitorData lMonitorData;

			}
		}
	}
}

void CgsDev::DebugComponentPerfMonCpu::DebugCallbackDumpLogFile(void *  lpParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonCpu.cpp:543
		DebugComponentPerfMonCpu * lpThis;

	}
}

void CgsDev::DebugComponentPerfMonCpu::LogBufferUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonCpu.cpp:703
		int32_t liMonitorId;

	}
	{
		// CgsDebugComponentPerfMonCpu.cpp:711
		PerfMonCpuMonitorData lMonitorData;

	}
}

void CgsDev::DebugComponentPerfMonCpu::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::Construct(int16_t  liMaxMonitors, void *  lpLogBuffer, uint32_t  liLogBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonCpu.cpp:70
		int32_t liIndex;

	}
}

void CgsDev::DebugComponentMessageFilter::SetFilterName(const char *  lpcName, FilterFlag  lxFilterFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMessageFilter.cpp:169
		int32_t liFilterIndex;

		// CgsDebugComponentMessageFilter.cpp:172
		int32_t liIndex;

		// CgsDebugComponentMessageFilter.cpp:173
		FilterFlag lxTestFilterFlag;

	}
}

void CgsDev::DebugComponentMessageFilter::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMessageFilter.cpp:74
		int32_t liIndex;

	}
}

void CgsDev::DebugUI::DebugUI::Get2DRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Widget::Get2DRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::Get2DRenderer(/* parameters */);
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsEqual(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:419
		StrStream lStrStream;

	}
}

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugController::IsButtonPressed(int32_t  liButton) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugController::IsKeyboardLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::OnLostFocus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::OnGetFocus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableLineGraph::AddFloat(float32_t *  lpFloat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableLineGraph.cpp:215
		int32_t liFloatIndex;

		// CgsMenuItemVariableLineGraph.cpp:229
		int32_t liHistoryIndex;

		rw::math::vpu::Min<float>(/* parameters */);
	}
	rw::math::vpu::Max<float>(/* parameters */);
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::Free(VariableMetadata *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::IsFromPool(VariableMetadata *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:716
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::Remove(VariableMetadata *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:220
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::Add(VariableMetadata *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariable::Prepare(Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableBarGraph::Prepare(Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableBarGraph.cpp:62
		int32_t liIndex;

	}
}

void CgsDev::DebugUI::MenuItemVariableBar::Prepare(Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetPreviousWrap(const CgsDev::DebugUI::MenuItem *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:528
		CgsDev::DebugUI::MenuItem * lpNext;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetPrevious(const CgsDev::DebugUI::MenuItem *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:494
		CgsDev::DebugUI::MenuItem * lpTemp;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetLast() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:553
		CgsDev::DebugUI::MenuItem * lpTemp;

	}
}

void CgsDev::DebugUI::Menu::SelectPreviousMenuItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenu.cpp:478
		CgsDev::DebugUI::MenuItem * lpStart;

	}
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetPreviousWrap(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetLast(/* parameters */);
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::AddAfter(CgsDev::DebugUI::MenuItem *  lpItemReference, CgsDev::DebugUI::MenuItem *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Remove(CgsDev::DebugUI::MenuItem *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:404
		CgsDev::DebugUI::MenuItem * lpTemp;

	}
}

void CgsDev::DebugUI::Menu::AddMenuItemAfter(CgsDev::DebugUI::MenuItem *  lpMenuItemReference, CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::AddAfter(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::IsAdded(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::IsAdded(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Remove(/* parameters */);
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Add(CgsDev::DebugUI::MenuItem *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:350
		CgsDev::DebugUI::MenuItem * lpTemp;

	}
}

void CgsDev::DebugUI::Menu::AddMenuItem(CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Add(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::IsAdded(/* parameters */);
	{
	}
}

void CgsDev::DebugUI::MenuItemFunction::Prepare(Function *  lpFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetPreviousWrap(const CgsDev::DebugUI::Window *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:528
		CgsDev::DebugUI::Window * lpNext;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetPrevious(const CgsDev::DebugUI::Window *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:494
		CgsDev::DebugUI::Window * lpTemp;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetLast() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:553
		CgsDev::DebugUI::Window * lpTemp;

	}
}

void CgsCore::StrCat(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::strchr(char *  _Str, int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::GetCurrentItemString(char *  lpcBufOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommandWindow.cpp:367
		CgsDev::DebugUI::Window * lpConsole;

		// CgsCommandWindow.cpp:368
		CgsDev::DebugUI::Window * lpPrevWindow;

		// CgsCommandWindow.cpp:379
		char[256] lacPath;

		// CgsCommandWindow.cpp:380
		char[256] lacItem;

	}
	CgsCore::StrCat(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::Remove(CgsDev::DebugUI::Window *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:404
		CgsDev::DebugUI::Window * lpTemp;

	}
}

void CgsDev::DebugUI::ErrorWindow::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::Free(CgsDev::DebugUI::MenuWindow *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::IsFromPool(CgsDev::DebugUI::MenuWindow *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:716
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::Remove(CgsDev::DebugUI::MenuWindow *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:220
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::Add(CgsDev::DebugUI::MenuWindow *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetFreeCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetFirstActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::GetFirst() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::Add(CgsDev::DebugUI::Window *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:350
		CgsDev::DebugUI::Window * lpTemp;

	}
}

void CgsDev::DebugUI::CustomWindowMenuItem::OpenAsWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Console::ToggleShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Console::IsEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Console::Disable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Console::Enable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugRender::DebugRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseVariableEventQueue::BaseVariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::DebugManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::DebugComponentPerfMonCpu::DebugComponentPerfMonCpu(/* parameters */);
	CgsDev::DebugComponentPerfMonGpu::DebugComponentPerfMonGpu(/* parameters */);
	CgsDev::DebugComponentMessageFilter::DebugComponentMessageFilter(/* parameters */);
	CgsDev::DebugRender::DebugRender(/* parameters */);
	VariableEventQueue(/* parameters */);
}

void CgsDev::DebugComponent::GetComponentPath(char *  lpcBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:260
		const char * lpcPath;

		// CgsDebugComponent.cpp:261
		const char * lpcName;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugComponent>::GetFirst() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugComponent>::GetNext(const CgsDev::DebugComponent *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::MakeFullPath(char *  lpcPathOut, int32_t  liPathOutSize, const char *  lpcRelativePath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:292
		int32_t liLength;

	}
}

void CgsDev::StrInStream::GetNextLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.cpp:268
		const char * lpLineStart;

		{
			// CgsStrStream.cpp:278
			char sChar;

		}
	}
}

void CgsCore::VSprintF(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, va_list  lArgs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:87
		int32_t lNumBytesCopied;

	}
}

void CgsDev::StrStreamBase::AppendFormat(const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.cpp:93
		char[256] lacFormattedString;

		// CgsStrStream.cpp:95
		va_list lArgs;

	}
	CgsCore::VSprintF(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsDev::DebugUI::Window::Get2DRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::Get2DRenderer(/* parameters */);
}

void CgsDev::DebugUI::MenuItem::Get2DRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::Get2DRenderer(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

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
			StrStream lStrStream;

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
		StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::Allocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:659
		VariableMetadata * lpNew;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::GetFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableMetadata::Prepare(const const Variant &  lSource, CgsDev::DebugUI::VariableMetadata::Type  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction  lpVariableCallbackFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::SetVoidPointerType(void *  lpValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetSelectCallback(void *  lpValue, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction  lpCallbackFunction, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetChangeCallback(void *  lpValue, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction  lpCallbackFunction, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Variant::Variant(const CgsDev::DebugUI::StringList *  lpStringList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetOptions(int32_t *  lpiValue, const CgsDev::DebugUI::StringList *  lpOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetVisible(void *  lpValue, bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetSaveEnabled(void *  lpValue, bool  lbSaveEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetReadOnly(void *  lpValue, bool  lbReadOnly) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableManager::SetStep(uint32_t *  lpuValue, uint32_t  luStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableManager::SetStep(int32_t *  lpiValue, int32_t  liStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableManager::SetStep(float32_t *  lprValue, float32_t  lfStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetStep(int32_t *  lpiValue, int32_t  liStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::SetStep(/* parameters */);
}

void CgsDev::DebugComponent::SetStep(float32_t *  lpfValue, float32_t  lfStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::SetStep(/* parameters */);
}

void CgsDev::DebugComponent::SetStep(uint32_t *  lpuValue, uint32_t  luStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::SetStep(/* parameters */);
}

void CgsDev::DebugUI::VariableManager::SetRange(uint32_t *  lpuValue, uint32_t  luMin, uint32_t  luMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableManager::SetRange(int32_t *  lpiValue, int32_t  liMin, int32_t  liMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableManager::SetRange(float32_t *  lprValue, float32_t  lfMin, float32_t  lfMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::SetRange(uint32_t *  lpuValue, uint32_t  luMin, uint32_t  luMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::SetRange(/* parameters */);
	DebugUI::Variant::Variant(/* parameters */);
}

void CgsDev::DebugComponent::SetRange(float32_t *  lpfValue, float32_t  lfMin, float32_t  lfMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::SetRange(/* parameters */);
	DebugUI::Variant::Variant(/* parameters */);
}

void CgsDev::DebugComponent::SetRange(int32_t *  lpiValue, int32_t  liMin, int32_t  liMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::SetRange(/* parameters */);
	DebugUI::Variant::Variant(/* parameters */);
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Variable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:197
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:197
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:197
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:643
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::Add(Variable *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:643
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::Add(CgsDev::DebugUI::MenuItemVariable *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:643
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:197
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:197
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:643
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function>::Add(Function *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:643
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::Add(CgsDev::DebugUI::MenuItemFunction *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::Allocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:659
		CgsDev::DebugUI::Menu * lpNew;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::GetFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::Add(CgsDev::DebugUI::Menu *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::Allocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:659
		Variable * lpNew;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::GetFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Allocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:659
		CgsDev::DebugUI::MenuItemVariable * lpNew;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::GetFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableManager::RegisterVariable(bool *  lpbValue, const char *  lpcPath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableManager::RegisterVariable(uint32_t *  lpuValue, const char *  lpcPath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::VariableManager::RegisterVariable(int32_t *  lpiValue, const char *  lpcPath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::RegisterVariable(int32_t *  lpiValue, const char *  lpcRelativePath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:324
		char[256] lacPath;

	}
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::RegisterVariable(/* parameters */);
}

void CgsDev::DebugComponent::RegisterVariable(int32_t *  lpiValue, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::RegisterVariable(uint32_t *  lpuValue, const char *  lpcRelativePath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:330
		char[256] lacPath;

	}
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::RegisterVariable(/* parameters */);
}

void CgsDev::DebugComponent::RegisterVariable(uint32_t *  lpuValue, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::RegisterVariable(bool *  lpbValue, const char *  lpcRelativePath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:336
		char[256] lacPath;

	}
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::RegisterVariable(/* parameters */);
}

void CgsDev::DebugComponent::RegisterVariable(bool *  lpbValue, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonGpu::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentMessageFilter::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMessageFilter.cpp:128
		uint32_t * lpuFlagSetsArray;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugComponent>::Add(CgsDev::DebugComponent *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:350
		CgsDev::DebugComponent * lpTemp;

	}
}

void CgsDev::DebugUI::VariableManager::RegisterVariable(float32_t *  lprValue, const char *  lpcPath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::RegisterVariable(float32_t *  lpfValue, const char *  lpcRelativePath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:318
		char[256] lacPath;

	}
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::RegisterVariable(/* parameters */);
}

void CgsDev::DebugComponent::RegisterVariable(float32_t *  lpfValue, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:342
		char[256] lacPath;

	}
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::RegisterVariable(/* parameters */);
}

void CgsDev::DebugUI::CustomWindow::Register(const char *  lpcPath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::AddMenuItem(CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:584
		char[256] lacPath;

	}
}

void CgsDev::DebugComponent::AddMenuItem(const char *  lpcRelativePath, CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:578
		char[256] lacPath;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function>::Allocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:659
		Function * lpNew;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function>::GetFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::Allocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:659
		CgsDev::DebugUI::MenuItemFunction * lpNew;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::GetFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::RegisterFunction(Function::DebugCallbackFunction  lpfCallback, void *  lpParameter, const char *  lpcRelativePath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:531
		char[256] lacPath;

	}
}

void CgsDev::DebugComponent::RegisterFunction(Function::DebugCallbackFunction  lpfCallback, void *  lpParameter, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:197
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::Construct(int32_t  liSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:197
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:643
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::GetMaxSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:643
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Replace(CgsDev::DebugUI::MenuItem *  lpItemOld, CgsDev::DebugUI::MenuItem *  lpItemNew) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:437
		CgsDev::DebugUI::MenuItem * lpOldPrev;

	}
}

void CgsDev::DebugUI::Menu::ReplaceMenuItem(CgsDev::DebugUI::MenuItem *  lpMenuItemOld, CgsDev::DebugUI::MenuItem *  lpMenuItemNew) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Replace(/* parameters */);
	{
		Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetPrevious(/* parameters */);
	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::IsFromPool(CgsDev::DebugUI::MenuItemVariable *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:716
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Free(CgsDev::DebugUI::MenuItemVariable *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::Remove(CgsDev::DebugUI::MenuItemVariable *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:220
		int32_t liIndex;

	}
}

void CgsDev::DebugComponent::SetCustomMenuItem(void *  lpValue, CgsDev::DebugUI::MenuItemVariable *  lpCustomMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawFrame2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugRenderStreamWriter::Add2DEvent(const void *  lpData, int32_t  liDataSize, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.h:174
		const DebugStreamInputEntry & lEntry;

	}
}

void CgsDev::DebugUI::Menu::RemoveMenuItem(CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::Remove(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::IsAdded(/* parameters */);
	{
	}
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNextWrap(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetFirst(/* parameters */);
}

void CgsDev::DebugUI::Menu::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:572
		int32_t liCount;

		// CgsDebugCollections.h:575
		CgsDev::DebugUI::MenuItem * lpTemp;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::Free(CgsDev::DebugUI::Menu *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::IsFromPool(CgsDev::DebugUI::Menu *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:716
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::Remove(CgsDev::DebugUI::Menu *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:220
		int32_t liIndex;

	}
}

void CgsDev::DebugUI::CustomWindow::Unregister() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::Free(Variable *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::IsFromPool(Variable *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:716
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::Remove(Variable *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:220
		int32_t liIndex;

	}
}

void CgsDev::DebugComponent::UnregisterVariable(void *  lpValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function>::Free(Function *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function>::IsFromPool(Function *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:716
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function>::Remove(Function *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:220
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::Free(CgsDev::DebugUI::MenuItemFunction *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>::IsFromPool(CgsDev::DebugUI::MenuItemFunction *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:716
		int32_t liIndex;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>::Remove(CgsDev::DebugUI::MenuItemFunction *  lpItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:220
		int32_t liIndex;

	}
}

void CgsDev::DebugComponent::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::UnregisterFunction(Function::DebugCallbackFunction  lpfCallback, void *  lpParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::RemoveMenuItem(CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::GetDebugManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponent::Register() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:228
		DebugInterface lDebugInterface;

		DebugInterface::DebugInterface(/* parameters */);
	}
	DebugInterface::GetDebugManager(/* parameters */);
	DebugInterface::~DebugInterface(/* parameters */);
	DebugInterface::GetDebugManager(/* parameters */);
}

void CgsDev::DebugUI::MenuItem::ComputeSizeFromText(const char *  lpcCaption) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItem.cpp:154
		float32_t lfTextSize;

	}
}

void CgsDev::DebugUI::CustomWindowMenuItem::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemText::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Menu::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemFunction::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::CalcCaptionWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::SetSize(float32_t  lfWidth, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWindow.cpp:336
		const const Metrics & lMetrics;

		// CgsWindow.cpp:339
		float32_t lfMinWidth;

	}
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
}

void CgsDev::DebugUI::CommandWindow::UpdatePosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommandWindow.cpp:120
		Console * lpConsole;

		DebugUI::GetConsole(/* parameters */);
	}
}

void CgsDev::DebugUI::LogWindow::RefreshWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogWindow.cpp:349
		int32_t liIndex;

		// CgsLogWindow.cpp:352
		const char * lpcText;

		// CgsLogWindow.cpp:353
		float32_t lfWidth;

	}
}

void CgsDev::DebugUI::LogWindow::Append(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogWindow.cpp:295
		int32_t liLength;

		// CgsLogWindow.cpp:296
		char * lpcWrite;

	}
}

void CgsDev::DebugUI::LogWindowStrStream::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::LogWindow::Print(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::DebugUI::GetScriptInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::IsPinned() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::TogglePin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Console::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsConsole.cpp:111
		float32_t lfConsoleHeight;

		{
			// CgsConsole.cpp:118
			float32_t lfY;

			// CgsConsole.cpp:119
			float32_t lfSpeed;

		}
		Window::GetY(/* parameters */);
	}
}

void CgsDev::DebugUI::Window::Prepare(float32_t  lfWidth, float32_t  lfHeight, const char *  lpcCaption, int32_t  lxFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWindow.cpp:67
		float32_t lfX;

		// CgsWindow.cpp:68
		float32_t lfY;

	}
	{
		// CgsWindow.cpp:90
		float32_t lfMinWidth;

	}
}

void CgsDev::DebugController::IsKeyboardPresent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::ToggleShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommandWindow.cpp:141
		Console * lpConsole;

		DebugUI::GetConsole(/* parameters */);
	}
}

void CgsDev::DebugUI::DebugUI::GetCommandWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::ErrorWindow::Prepare(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsErrorWindow.cpp:72
		float32_t lfCentreX;

		// CgsErrorWindow.cpp:73
		float32_t lfCentreY;

		// CgsErrorWindow.cpp:75
		float32_t lfMessageWidth;

		// CgsErrorWindow.cpp:76
		float32_t lfMessageHeight;

	}
}

void CgsDev::WarningSystem::ShowWarningMessage(DisciplineType  lWho, const char *  lpcMessage, const char *  lpcFile, int  liLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWarningManager.cpp:61
		DebugInterface lDebug;

		DebugInterface::DebugInterface(/* parameters */);
	}
	DebugInterface::~DebugInterface(/* parameters */);
}

void CgsDev::DebugUI::CustomWindow::Prepare(float32_t  lfWidth, float32_t  lfHeight, const char *  lpcPath, const char *  lpcCaption, int32_t  lxFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::TextWindow::Prepare(const char *  lpcPath, const char *  lpcCaption, int32_t  lxFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::LogWindow::Prepare(const char *  lpcPath, const char *  lpcCaption, int32_t  lxFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuWindow::Prepare(CgsDev::DebugUI::Menu *  lpMenu) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuWindow.cpp:65
		uint32_t lxFlags;

	}
}

void CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::Allocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:659
		CgsDev::DebugUI::MenuWindow * lpNew;

	}
}

void CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::GetFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CustomWindow::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCustomWindow.cpp:110
		CgsDev::DebugUI::Menu * lpMenu;

	}
}

void CgsDev::DebugUI::LogWindow::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogWindow.cpp:131
		float32_t lfConsoleHeight;

	}
}

void CgsDev::DebugUI::MenuItem::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuWindow::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuWindow.cpp:100
		CgsDev::DebugUI::InputEvent leMenuItemEvent;

		// CgsMenuWindow.cpp:180
		float32_t lfBorder;

		// CgsMenuWindow.cpp:181
		float32_t lfWidth;

		// CgsMenuWindow.cpp:182
		float32_t lfHeight;

		// CgsMenuWindow.cpp:225
		CgsDev::DebugUI::MenuItem * lpMenuItem;

	}
	Menu::IsEmpty(/* parameters */);
	{
		// CgsMenuWindow.cpp:193
		CgsDev::DebugUI::MenuItem * lpMenuItem;

		Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetFirst(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNext(/* parameters */);
	}
	Window::GetWidth(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetFirst(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNext(/* parameters */);
	{
		// CgsMenuWindow.cpp:212
		float32_t lfCaptionWidth;

		rw::math::vpu::Max<float>(/* parameters */);
	}
	{
		// CgsMenuWindow.cpp:116
		CgsDev::DebugUI::Menu * lpParent;

		Menu::GetParent(/* parameters */);
	}
}

void CgsDev::DebugComponent::DebugUISectionCallback(void *  lpParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponent.cpp:158
		CgsDev::DebugComponent * lpThis;

		// CgsDebugComponent.cpp:165
		char[256] lacFullPath;

	}
}

void CgsDev::DebugUI::Menu::OpenAsWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Menu::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Console::Construct(const DebugManagerConstructParameters *  lpConstructParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsConsole.cpp:78
		float32_t lfConsoleHeight;

	}
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void CgsDev::DebugUI::TextWindow::SetSizeToText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTextWindow.cpp:208
		Vector2 lSize;

	}
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

void CgsDev::DebugUI::TextWindow::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugRenderStreamWriter::Add2DStringEvent(const char *  lpcString, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawText2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator-=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:392
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:392
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

extern void CInEventDrawLine2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::SinCosFast(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::SinCos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Cos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cosf4.h:14
		float[4] xl;

		// cosf4.h:14
		float[4] xl2;

		// cosf4.h:14
		float[4] xl3;

		// cosf4.h:14
		float[4] res;

		// cosf4.h:15
		int[4] q;

		// cosf4.h:30
		int[4] offset;

		// cosf4.h:34
		float[4] qf;

		// cosf4.h:35
		float[4] p1;

		// cosf4.h:49
		float[4] ct1;

		// cosf4.h:50
		float[4] st1;

		// cosf4.h:52
		float[4] ct2;

		// cosf4.h:53
		float[4] st2;

		// cosf4.h:55
		float[4] cx;

		// cosf4.h:56
		float[4] sx;

		// cosf4.h:61
		unsigned int[4] mask1;

		// cosf4.h:68
		unsigned int[4] mask2;

	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::operator+<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
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

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:168
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:169
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic product;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic x_product;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic y_product;

			}
			{
				// vector2_operation_inline.h:169
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:975
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:976
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:978
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::ATan2(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// trig_operation_inline.h:60
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic zeroVec;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic a_signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bNeg;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bZero;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic res1;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bRecip;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic res2;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic b_signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic newRes;

			{
				// trig_operation_inline.h:61
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// trig_operation_inline.h:61
				VectorIntrinsicUnion::VectorIntrinsic vOne;

			}
		}
	}
}

void std::atanf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// atanf4.h:25
		float[4] bias;

		// atanf4.h:26
		float[4] x2;

		// atanf4.h:26
		float[4] x3;

		// atanf4.h:26
		float[4] x4;

		// atanf4.h:26
		float[4] x8;

		// atanf4.h:26
		float[4] x9;

		// atanf4.h:27
		float[4] hi;

		// atanf4.h:27
		float[4] lo;

		// atanf4.h:28
		float[4] result;

		// atanf4.h:29
		float[4] inv_x;

		// atanf4.h:30
		unsigned int[4] sign;

		// atanf4.h:31
		unsigned int[4] select;

		// atanf4.h:32
		float[4] xabs;

		// atanf4.h:33
		float[4] vzero;

	}
}

void std::recipf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// recipf4.h:15
		float[4] y0;

	}
}

extern void CInEventDrawBox2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugController::GetInputEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugCollections.h:572
		int32_t liCount;

		// CgsDebugCollections.h:575
		CgsDev::DebugUI::Window * lpTemp;

	}
}

void CgsDev::DebugController::IsShiftPressed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugController::GetX2() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugController::GetY2() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugController::GetSpecialKeyPress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableBarGraph::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableBarGraph.cpp:163
		const const Metrics & lMetrics;

		// CgsMenuItemVariableBarGraph.cpp:164
		float32_t lfTextSize;

		// CgsMenuItemVariableBarGraph.cpp:167
		char[256] lacBuffer;

	}
	rw::math::vpu::Max<float>(/* parameters */);
}

void CgsDev::DebugUI::MenuItemVariableBar::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableBar.cpp:154
		float32_t lfTextSize;

		// CgsMenuItemVariableBar.cpp:157
		char[256] lacBuffer;

	}
}

void CgsDev::DebugUI::MenuItemVariable::GetDisplayName(char *  lpcDisplayName, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariable.cpp:193
		char[256] lacBuffer;

	}
}

void CgsDev::DebugUI::MenuItemVariable::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariable.cpp:138
		char[256] lacBuffer;

	}
}

void CgsDev::Log::LogFileBuffered::Open(const char *  lpcFileName, char *  lpcBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrCpy(/* parameters */);
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

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::Render(renderengine::PrimitiveType  lePrimitiveType, const Im3dVertex *  lpVertices, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:689
		Im3dVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:692
		ImCommandRenderPrimitives<CgsGraphics::BasicColouredTexturedVertex> * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
}

void CgsGraphics::ImRendererBase::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:998
		ImCommandSetStateTexture * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const DepthStencilState *  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:875
		ImCommandSetStateDepthStencil * lpCommand;

	}
}

void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3dRenderBuffer.h:190
		ImCommandSetTransform3dVp lCommand;

	}
}

extern void ImCommandSetTransform3dVp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ImCommand() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::PostCommand(int32_t  liCommandType, ImCommand *  lpCommand, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1163
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1164
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1167
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1160
			uintptr_t luAddress;

		}
	}
}

void rw::math::vpu::operator*=(const Vector4 &  v, float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic floatVec;

		{
			// vector4_operation_inline.h:487
			VectorIntrinsicUnion u;

		}
	}
}

void renderengine::RGBA8::RGBA8(const const RGBA &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::TransformPoint(const rw::math::vpu::Vector3  pt, const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:50
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::Matrix44AffineFromAxisRotationAngle(const rw::math::vpu::Vector3  axis, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:148
		VecFloat s;

		// matrix44affine_operation_platform_inline.h:148
		VecFloat c;

		// matrix44affine_operation_platform_inline.h:151
		VecFloat t;

		// matrix44affine_operation_platform_inline.h:152
		VecFloat tx;

		// matrix44affine_operation_platform_inline.h:153
		VecFloat ty;

		// matrix44affine_operation_platform_inline.h:154
		VecFloat tz;

		// matrix44affine_operation_platform_inline.h:155
		VecFloat sx;

		// matrix44affine_operation_platform_inline.h:156
		VecFloat sy;

		// matrix44affine_operation_platform_inline.h:157
		VecFloat sz;

		// matrix44affine_operation_platform_inline.h:159
		const VecFloat zero;

		// matrix44affine_operation_platform_inline.h:161
		Vector3 lRow0;

		// matrix44affine_operation_platform_inline.h:162
		Vector3 lRow1;

		// matrix44affine_operation_platform_inline.h:163
		Vector3 lRow2;

		// matrix44affine_operation_platform_inline.h:164
		Vector3 lRow3;

	}
}

void rw::math::vpu::SinCos(const VecFloat  a, const VecFloat &  s_out, const VecFloat &  c_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sincosf4(float[4]  x, float *[4]  s, float *[4]  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sincosf4.h:14
		float[4] xl;

		// sincosf4.h:14
		float[4] xl2;

		// sincosf4.h:14
		float[4] xl3;

		// sincosf4.h:15
		int[4] q;

		// sincosf4.h:16
		int[4] offsetSin;

		// sincosf4.h:16
		int[4] offsetCos;

		// sincosf4.h:37
		float[4] qf;

		// sincosf4.h:38
		float[4] p1;

		// sincosf4.h:52
		float[4] ct1;

		// sincosf4.h:53
		float[4] st1;

		// sincosf4.h:55
		float[4] ct2;

		// sincosf4.h:56
		float[4] st2;

		// sincosf4.h:58
		float[4] cx;

		// sincosf4.h:59
		float[4] sx;

		// sincosf4.h:64
		unsigned int[4] sinMask;

		// sincosf4.h:65
		unsigned int[4] cosMask;

	}
}

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisZ>(const VecFloat  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::vpu::Abs<VectorAxisY>(const const VecFloatRef<VectorAxisY> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:122
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// scalar_operation_inline.h:123
		VectorIntrinsicUnion::VectorIntrinsic aVI;

		{
			// scalar_operation_inline.h:125
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:125
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

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

void rw::math::vpu::Cross(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::collision::CylinderVolume::GetHalfHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Volume::GetRadius() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::NormalizeReturnMagnitude(const rw::math::vpu::Vector3  v, const Vector3 &  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:209
		VectorIntrinsicUnion::VectorIntrinsic magnitude;

		{
			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic temp_dot;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic one_over_rqrt;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic result_mag;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic zero;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic input_is_zero;

			{
				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

				{
					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
	}
}

void rw::math::vpu::GetVector3_XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector3 &  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:435
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::collision::BoxVolume::GetDimensions(const Vector3 &  dimensions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:686
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:687
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::collision::CapsuleVolume::GetHalfHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const RasterizerState *  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:925
		ImCommandSetStateRasterizer * lpCommand;

	}
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

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(renderengine::PrimitiveType  lePrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *  lpVertices, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:689
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:692
		ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:998
		ImCommandSetStateTexture * lpCommand;

	}
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonGpu::RenderGraphCallback(const const PerfMonGpuMonitorData &  lParameters, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonGpu.cpp:332
		CgsDev::DebugComponentPerfMonGpu::RenderCallbackParameter * lpData;

		// CgsDebugComponentPerfMonGpu.cpp:335
		RGBA lRealColour;

		// CgsDebugComponentPerfMonGpu.cpp:359
		float32_t lfScaledValue;

	}
	rw::RGBA::SetAlpha(/* parameters */);
}

void CgsDev::DebugUI::WidgetBar::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, float32_t  lfWidth, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWidgetBar.cpp:78
		const const Palette & lPalette;

		// CgsWidgetBar.cpp:81
		float32_t lfBarWidth;

	}
}

void CgsDev::DebugUI::WidgetBarGraph::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, float32_t  lfWidth, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWidgetBarGraph.cpp:90
		const const Palette & lPalette;

		// CgsWidgetBarGraph.cpp:96
		float32_t lfBarSegmentWidth;

		// CgsWidgetBarGraph.cpp:99
		int32_t liIndex;

		// CgsWidgetBarGraph.cpp:100
		int32_t liCount;

	}
	{
		// CgsWidgetBarGraph.cpp:104
		RGBA lColour;

		// CgsWidgetBarGraph.cpp:111
		float32_t lfPercent;

	}
	{
		// CgsWidgetBarGraph.cpp:117
		float32_t lfBarSegmentHeight;

		// CgsWidgetBarGraph.cpp:120
		float32_t lfOffsetX;

	}
}

void rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1420
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1422
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1421
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void CgsDev::DebugComponentPerfMonCpu::RenderPerformanceGraph(CgsDev::Debug2DImmediateRender *  lpRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonCpu.cpp:451
		float32_t lfTotalCpu;

		// CgsDebugComponentPerfMonCpu.cpp:452
		float32_t lfDrawPositionX;

		// CgsDebugComponentPerfMonCpu.cpp:453
		float32_t lfDrawPositionY;

		// CgsDebugComponentPerfMonCpu.cpp:454
		float32_t lfWidth;

		// CgsDebugComponentPerfMonCpu.cpp:463
		int32_t liMonitorId;

	}
	{
		// CgsDebugComponentPerfMonCpu.cpp:473
		PerfMonCpuMonitorData lMonitorData;

		{
			// CgsDebugComponentPerfMonCpu.cpp:482
			float32_t lfScaledValue;

		}
	}
}

void CgsDev::DebugUI::MenuItem::RenderMenuItemBackground(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, float32_t  lfWidth, float32_t  lfHeight, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItem.cpp:128
		const const Palette & lPalette;

		// CgsMenuItem.cpp:129
		const const Metrics & lMetrics;

		// CgsMenuItem.cpp:130
		float32_t lfBorder;

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

void CgsDev::VectorFontStream::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
}

extern void TextObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TextBackground() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::TransformPoint(const rw::math::vpu::Vector3  pt, const rw::math::vpu::Matrix44 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_inline.h:280
		VectorIntrinsicUnion::VectorIntrinsic v;

		// matrix44_operation_inline.h:281
		VectorIntrinsicUnion::VectorIntrinsic mat_x;

		// matrix44_operation_inline.h:282
		VectorIntrinsicUnion::VectorIntrinsic mat_y;

		// matrix44_operation_inline.h:283
		VectorIntrinsicUnion::VectorIntrinsic mat_z;

		// matrix44_operation_inline.h:284
		VectorIntrinsicUnion::VectorIntrinsic mat_w;

		// matrix44_operation_inline.h:286
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// matrix44_operation_inline.h:286
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44_operation_inline.h:286
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44_operation_inline.h:286
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

	}
}

void rw::math::vpu::operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:616
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:620
		bool ret;

		{
			// vec_float_operation_inline.h:619
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
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

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator*=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:440
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:440
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(const const SafeResourceHandle<CgsResource::Font> &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::SetText(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:403
		StrStream lStrStream;

	}
}

void CgsGraphics::TextObject::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::SetStringWidth(float32_t  lfNewStringWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonGpu::RenderTableCallback(const const PerfMonGpuMonitorData &  lParameters, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonGpu.cpp:289
		CgsDev::DebugComponentPerfMonGpu::RenderCallbackParameter * lpData;

		// CgsDebugComponentPerfMonGpu.cpp:292
		float32_t lfFontSize;

		// CgsDebugComponentPerfMonGpu.cpp:295
		RGBA lRealColour;

		// CgsDebugComponentPerfMonGpu.cpp:310
		char[32] lacBuffer;

	}
	rw::RGBA::SetAlpha(/* parameters */);
}

void CgsDev::DebugComponentPerfMonGpu::RenderPerformanceGraph(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonGpu.cpp:226
		CgsDev::DebugComponentPerfMonGpu::RenderCallbackParameter lCallbackParam;

		// CgsDebugComponentPerfMonGpu.cpp:234
		float32_t lfWidth;

		// CgsDebugComponentPerfMonGpu.cpp:238
		uint32_t liIndex;

	}
	{
		// CgsDebugComponentPerfMonGpu.cpp:241
		float32_t lfPosX;

	}
}

void CgsDev::DebugComponentPerfMonGpu::RenderPerformanceTable(CgsDev::Debug2DImmediateRender *  lpRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonGpu.cpp:172
		float lfFontSize;

		// CgsDebugComponentPerfMonGpu.cpp:175
		CgsDev::DebugComponentPerfMonGpu::RenderCallbackParameter lCallbackParam;

	}
}

void CgsDev::DebugComponentPerfMonGpu::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugComponentPerfMonCpu::RenderPerformanceTable(CgsDev::Debug2DImmediateRender *  lpRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentPerfMonCpu.cpp:282
		float32_t lrDrawPositionX;

		// CgsDebugComponentPerfMonCpu.cpp:283
		float32_t lrDrawPositionY;

		// CgsDebugComponentPerfMonCpu.cpp:284
		float32_t lrFontSize;

		// CgsDebugComponentPerfMonCpu.cpp:285
		RGBA lColourNormal;

		// CgsDebugComponentPerfMonCpu.cpp:286
		RGBA lColourOverBudget;

		// CgsDebugComponentPerfMonCpu.cpp:288
		float32_t[9] KAF_COLUMN_OFFSETS;

		// CgsDebugComponentPerfMonCpu.cpp:321
		int32_t liMonitorId;

	}
	{
		// CgsDebugComponentPerfMonCpu.cpp:331
		PerfMonCpuMonitorData lMonitorData;

		// CgsDebugComponentPerfMonCpu.cpp:345
		RwChar[32] lacBuffer;

	}
}

void CgsDev::DebugComponentPerfMonCpu::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItem::RenderMenuItemText(CgsDev::Debug2DImmediateRender *  lp2dRender, const char *  lpcCaption, float32_t  lfX, float32_t  lfY, float32_t  lfWidth, float32_t  lfHeight, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItem.cpp:84
		const const Palette & lPalette;

		// CgsMenuItem.cpp:85
		const const Metrics & lMetrics;

		// CgsMenuItem.cpp:86
		float32_t lfBorder;

		// CgsMenuItem.cpp:89
		RGBA lColourText;

	}
}

void CgsDev::DebugUI::CustomWindowMenuItem::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariable::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariable.cpp:77
		char[256] lacBuffer;

	}
}

void CgsDev::DebugUI::MenuItemVariableBarGraph::ScaleDown(float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableBarGraph.h:85
		float32_t lfPercent;

	}
}

void CgsDev::DebugUI::WidgetBarGraph::SetValues(uint8_t *  lpiValuesArray, int32_t  liValueCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::WidgetBarGraph::SetFirstValue(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableBarGraph::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableBarGraph.cpp:119
		int32_t liIndex;

		// CgsMenuItemVariableBarGraph.cpp:122
		const const Metrics & lMetrics;

		// CgsMenuItemVariableBarGraph.cpp:123
		float32_t lfTextSize;

		// CgsMenuItemVariableBarGraph.cpp:131
		float32_t lfBarWidth;

		// CgsMenuItemVariableBarGraph.cpp:132
		float32_t lfBarHeight;

		// CgsMenuItemVariableBarGraph.cpp:135
		uint8_t[60] laiHistory;

		// CgsMenuItemVariableBarGraph.cpp:142
		WidgetBarGraph lWidgetBarGraph;

		ScaleDown(/* parameters */);
		WidgetBarGraph::WidgetBarGraph(/* parameters */);
		WidgetBarGraph::SetFirstValue(/* parameters */);
		WidgetBarGraph::SetValues(/* parameters */);
	}
}

void CgsDev::DebugUI::WidgetBar::SetValue(float32_t  lfPercent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableBar::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableBar.cpp:111
		const const Metrics & lMetrics;

		// CgsMenuItemVariableBar.cpp:112
		float32_t lfTextSize;

		// CgsMenuItemVariableBar.cpp:120
		float32_t lfCurrentValue;

		// CgsMenuItemVariableBar.cpp:121
		float32_t lfMin;

		// CgsMenuItemVariableBar.cpp:122
		float32_t lfMax;

		// CgsMenuItemVariableBar.cpp:125
		float32_t lfPercent;

		// CgsMenuItemVariableBar.cpp:132
		float32_t lfWidth;

		// CgsMenuItemVariableBar.cpp:133
		float32_t lfHeight;

		// CgsMenuItemVariableBar.cpp:136
		WidgetBar lWidgetBar;

		WidgetBar::WidgetBar(/* parameters */);
		WidgetBar::SetValue(/* parameters */);
	}
}

void CgsDev::DebugUI::MenuItemText::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Menu::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemFunction::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWindow.cpp:115
		const const Palette & lPalette;

		// CgsWindow.cpp:116
		const const Metrics & lMetrics;

		// CgsWindow.cpp:119
		RGBA lColourCaption;

		// CgsWindow.cpp:120
		RGBA lColourCaptionText;

		// CgsWindow.cpp:121
		RGBA lColourBorder;

		// CgsWindow.cpp:122
		RGBA lColourWindow;

	}
	{
		// CgsWindow.cpp:182
		float32_t lfCaptionHeight;

	}
}

void CgsDev::DebugUI::TextWindow::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTextWindow.cpp:153
		RGBA lColour;

	}
}

void CgsDev::DebugUI::LogWindow::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogWindow.cpp:169
		int32_t liIndex;

		// CgsLogWindow.cpp:170
		int32_t liCount;

		// CgsLogWindow.cpp:171
		float32_t lfY;

		// CgsLogWindow.cpp:174
		RGBA lColour;

	}
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

void CgsDev::DebugUI::ErrorWindow::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsErrorWindow.cpp:128
		const const Palette & lPalette;

		// CgsErrorWindow.cpp:129
		const const Metrics & lMetrics;

		// CgsErrorWindow.cpp:132
		float32_t lfPulse;

		// CgsErrorWindow.cpp:135
		RGBA lColourBorder;

		// CgsErrorWindow.cpp:136
		float32_t lfR;

		// CgsErrorWindow.cpp:137
		float32_t lfG;

		// CgsErrorWindow.cpp:138
		float32_t lfB;

		rw::math::vpu::Abs<float>(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::RGBA::SetRed(/* parameters */);
		rw::RGBA::SetGreen(/* parameters */);
		Window::GetX(/* parameters */);
		Window::GetY(/* parameters */);
		rw::RGBA::SetBlue(/* parameters */);
		Window::GetX(/* parameters */);
		Window::GetY(/* parameters */);
		Window::GetX(/* parameters */);
	}
}

void CgsDev::DebugUI::MenuWindow::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuWindow.cpp:257
		float32_t lfX;

		// CgsMenuWindow.cpp:258
		float32_t lfY;

		Menu::IsEmpty(/* parameters */);
		{
			// CgsMenuWindow.cpp:269
			CgsDev::DebugUI::MenuItem * lpMenuItem;

			Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetFirst(/* parameters */);
			Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem>::GetNext(/* parameters */);
		}
	}
}

void CgsDev::DebugUI::WidgetLineGraph::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, float32_t  lfWidth, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWidgetLineGraph.cpp:91
		const const Palette & lPalette;

		// CgsWidgetLineGraph.cpp:97
		float32_t lfBarSegmentWidth;

		// CgsWidgetLineGraph.cpp:100
		int32_t liFloatIndex;

	}
	{
		// CgsWidgetLineGraph.cpp:104
		RGBA lColour;

		// CgsWidgetLineGraph.cpp:111
		int32_t liHistoryIndex;

		// CgsWidgetLineGraph.cpp:112
		int32_t liCount;

		// CgsWidgetLineGraph.cpp:113
		float_t lfLastBarSegmentHeight;

	}
	{
		// CgsWidgetLineGraph.cpp:123
		float32_t lfPercent;

		{
			// CgsWidgetLineGraph.cpp:129
			float32_t lfBarSegmentHeight;

			{
				// CgsWidgetLineGraph.cpp:135
				float32_t lfPrevOffsetX;

				// CgsWidgetLineGraph.cpp:136
				float32_t lfOffsetX;

				// CgsWidgetLineGraph.cpp:138
				float32_t lfPrevOffsetY;

				// CgsWidgetLineGraph.cpp:139
				float32_t lfOffsetY;

				// CgsWidgetLineGraph.cpp:141
				Vector2 lStartPoint;

				// CgsWidgetLineGraph.cpp:142
				Vector2 lEndPoint;

				rw::math::vpu::Vector2::Vector2(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
			}
		}
	}
}

void CgsDev::DebugUI::MenuItemVariableLineGraph::ScaleDown(float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableLineGraph.h:93
		float32_t lfMin;

		// CgsMenuItemVariableLineGraph.h:94
		float32_t lfMax;

		// CgsMenuItemVariableLineGraph.h:99
		float32_t lfPercent;

	}
}

void CgsDev::DebugUI::WidgetLineGraph::SetValues(float32_t *[5][360]  lpaaiValuesArray, int32_t  liFloatCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::WidgetLineGraph::SetFirstValue(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::WidgetLineGraph::SetColours(RGBA *  lpColoursArray, int32_t  liColourArraySize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::MenuItemVariableLineGraph::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuItemVariableLineGraph.cpp:149
		const const Metrics & lMetrics;

		// CgsMenuItemVariableLineGraph.cpp:154
		float32_t lfBarWidth;

		// CgsMenuItemVariableLineGraph.cpp:155
		float32_t lfBarHeight;

		// CgsMenuItemVariableLineGraph.cpp:158
		float32_t[5][360] laafHistory;

		// CgsMenuItemVariableLineGraph.cpp:159
		int32_t liFloatIndex;

		// CgsMenuItemVariableLineGraph.cpp:174
		WidgetLineGraph lWidgetLineGraph;

	}
	{
		// CgsMenuItemVariableLineGraph.cpp:162
		int32_t liHistoryIndex;

		ScaleDown(/* parameters */);
	}
	WidgetLineGraph::WidgetLineGraph(/* parameters */);
	WidgetLineGraph::SetValues(/* parameters */);
	WidgetLineGraph::SetFirstValue(/* parameters */);
	WidgetLineGraph::SetColours(/* parameters */);
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<float32_t>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<float32_t>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<float32_t>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

extern void Im2dTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::Construct(const rw::math::vpu::Vector2  lOrigin, const rw::math::vpu::Vector2  lRight, const rw::math::vpu::Vector2  lUp, const float  lrZ, const rw::math::vpu::Vector4  lColourShift, const rw::math::vpu::Vector4  lColourScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
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

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const RasterizerState *  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:925
		ImCommandSetStateRasterizer * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const DepthStencilState *  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:875
		ImCommandSetStateDepthStencil * lpCommand;

	}
}

void renderengine::Device::GetBackBuffer() {
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

void CgsModule::VariableEventQueue<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsDev::Debug3DImmediateRender::SetRenderBuffer(CgsGraphics::Im3dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Debug2DImmediateRender::SetRenderBuffer(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::LockForRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::UnlockForRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommandWindow.cpp:207
		char[101] lacBuffer;

		CgsCore::StrCpy(/* parameters */);
	}
	CgsCore::StrCat(/* parameters */);
}

void CgsDev::DebugController::GetKeyPress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::CommandWindow::ProcessInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCommandWindow.cpp:230
		char lcKey;

		DebugUI::GetController(/* parameters */);
		{
			// CgsCommandWindow.cpp:294
			char * lpcEnd;

		}
	}
	{
		// CgsCommandWindow.cpp:261
		char[256] lacTemp;

		CgsCore::StrCat(/* parameters */);
	}
}

void CgsDev::DebugUI::CommandWindow::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawQuad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugRenderStreamWriter::Add3DStringEvent(const char *  lpcString, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::GetVector3_ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawPoint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawAngle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawSphere() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawSolidSphere() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawHollowSphere() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawCircle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawBox() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawBoxAA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawSolidBox() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawSolidBoxAA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawArrow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawSolidArrow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawCapsule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CInEventDrawCylinder() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Assert::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

void rw::GetDefaultAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Internal::DebugLinkedList<CgsDev::DebugComponent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogCombined::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogCombined.cpp:102
		int32_t liIndex;

		StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::LinearMalloc::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::AddEventSafe(const CgsModule::Event *  lpEvent, int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:509
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:510
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:508
			StrStream lStrStream;

		}
		{
			// CgsVariableEventQueue.h:516
			CBufferEntry * lpBufferEntry;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::AddStringEventSafe(const char *  lpcEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:665
		StrStream lStrStream;

	}
}

CompressedFontData::KF_CHARWIDTH = [64, 128, 0, 0];

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

CgsDev::KF_CONTROLLER_DEAD_ZONE = [62, 204, 204, 205];

CgsDev::DebugUI::KF_OFFSET_TO_MIN_MAX = [63, 0, 0, 0];

CgsDev::Assert::KF_VECTOR_FONT_SIZE = [65, 96, 0, 0];

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

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

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

CgsDev::StrStreamBase::KI_FORMAT_BUFFER_SIZE;

