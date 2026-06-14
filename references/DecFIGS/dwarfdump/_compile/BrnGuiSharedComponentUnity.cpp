struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

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
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

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

void BrnGui::IconComponent::SetState(uint32_t  lStateIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AnimatedIconComponent::SetAnimState(BrnGui::AnimatedIconComponent::EAnimState  leAnimState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::IconComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *const*  lpStateIdentifiers, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AnimatedIconComponent::Construct(const char *  lpName, StateInterface *  lpStateInterface, const char *const*  lpStateIdentifiers, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ButtonIconComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lpcParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ButtonIconComponent::SetButton(BrnGui::ButtonIconComponent::EPadButton  leButton, BrnGui::ButtonIconComponent::EPadButtonState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ButtonIconComponent::SetState(BrnGui::ButtonIconComponent::EPadButtonState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::ClearFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
	}
}

void BrnGui::Selectable::Update(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGui::Selectable::ClearFlag(/* parameters */);
}

void BrnGui::Selectable::ClearFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlags(/* parameters */);
}

void BrnGui::TextField::OutputAptData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:536
		char[10] lacScrollText;

	}
}

void BrnGui::ColourSelector::SetupComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::HelpBar::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:86
		int32_t liIndex;

	}
}

void BrnGui::HudBorder::UpdateApt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHudBorder.cpp:194
		const float32_t lfBorderWidth;

		// BrnHudBorder.cpp:195
		const float32_t lfBorderHeight;

		// BrnHudBorder.cpp:196
		char[10] lacText;

	}
}

void BrnGui::IconComponent::SetState(const char *  lStateIdentifier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuItem::GetItemText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SettingComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const uint32_t  luNumValues, const float32_t  lfMaxValue, const char *const*  lpStateIdentifiers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SettingComponent::SetValue(float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSetting.cpp:73
		uint32_t luIndex;

	}
	{
		// BrnSetting.cpp:81
		char[16] lacFrameLabel;

	}
}

void BrnGui::TableCell::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableCell::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableCell::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRow::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TextField::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourField::OutputAptData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourField::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InterpolatorComponent::SetProportion(float32_t  lfNewProportion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInterpolatorComponent.cpp:76
		char[7] lacNewPropText;

	}
}

void BrnGui::InterpolatorComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Ticker::RemoveText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Ticker::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggle::Unloaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourMenuToggle::Unloaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourMenuToggle::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:290
		uint32_t ColourSelectionIndex;

	}
}

void BrnGui::ColourMenuToggle::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggleGroup::Unloaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggleGroup.cpp:91
		int32_t liIter;

	}
}

void BrnGui::MenuToggle::IsComponentLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggleGroup::IsComponentLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggleGroup.cpp:279
		int32_t liIter;

	}
}

void BrnGui::ScrollableSelectionItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ComplexBar::UpdateFlash(bool  lbTransition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnComplexBar.cpp:71
		char[32] lacStartIndex;

		// BrnComplexBar.cpp:76
		char[32] lacEndIndex;

	}
}

void BrnGui::ComplexBar::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ComplexBar::SetColour(uint32_t  luColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PlayerStatsBar::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Animator::PlayAnimationChannel(CgsGui::AnimData::AnimatorChannel  leChannel, float32_t  lfStartVal, float32_t  lfEndVal, AnimChannelData::Time  lStartTime, AnimChannelData::Time  lEndTime, CgsGui::AnimChannelData::InterpolateType  leInterpolator, CgsGui::AnimChannelData::AnimationType  leAnimType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAnimator.cpp:132
		AnimChannelData lChannelData;

	}
}

void BrnGui::MedalIcon::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const const rw::math::vpu::VecFloatRefIndex &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1496
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1497
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1499
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1498
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:1500
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator/(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1714
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1715
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1715
			float floatRecip;

			{
				// vec_float_operation_inline.h:1715
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+(const const rw::math::vpu::VecFloatRefIndex &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1329
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1330
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1331
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void CgsGui::GuiComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::SetBounds(const rw::math::vpu::Vector4  lv4BoundsRect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelector::Construct(const char *  lacName, StateInterface *  lpStateInterface, const rw::math::vpu::Vector4  lv4BoundsRect, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelector.cpp:53
		const float32_t lfPosX;

		// BrnColourSelector.cpp:54
		const float32_t lfPosY;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

void BrnGui::MenuComponent::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuComponent.cpp:177
		int32_t liIndex;

	}
}

void BrnGui::TableCell::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRow::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableRow.cpp:227
		int32_t liIter;

	}
}

void BrnGui::Table::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTable.cpp:294
		int32_t liIter;

	}
}

void BrnGui::MenuToggle::ProcessComponentLoads(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggleGroup::ProcessComponentLoads(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggleGroup.cpp:260
		int32_t liIter;

	}
}

void BrnGui::MenuToggle::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache, bool  lbTitle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourMenuToggle::ProcessComponentLoads(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:207
		uint32_t ColourSelectionIndex;

	}
}

void BrnGui::ColourMenuToggle::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache, bool  lbTitle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:328
		uint32_t ColourSelectionIndex;

	}
}

void BrnGui::Selectable::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::GetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::IsSelectable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::IsHighlighted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourMenuToggle::FindState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:259
		BrnGui::ColourMenuToggle::MenuToggleStates leState;

		Selectable::IsActive(/* parameters */);
	}
}

void BrnGui::Selectable::SetDirty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TextSelectionItem::SetText(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::ColourSelectionItem::SetColour(const rw::math::vpu::Vector4 *  lpcColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::ColourSelectionItem::SetGradient(const rw::math::vpu::Vector4 *  lcColour1, const rw::math::vpu::Vector4 *  lcColour2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::Selectable::SetId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuItem::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetId(/* parameters */);
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::SelectableGroup::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:76
		int32_t liItem;

		// BrnSelectableGroup.cpp:77
		BrnGui::Selectable * lpSelectable;

		Selectable::SetId(/* parameters */);
		Selectable::SetId(/* parameters */);
		Selectable::SetDirty(/* parameters */);
	}
}

void BrnGui::ScrollableSelection::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::SetWrapped(bool  lbWrapAllowed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggleGroup::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SelectableGroup::SetWrapped(/* parameters */);
	{
		// BrnMenuToggleGroup.cpp:194
		int32_t i;

	}
}

void BrnGui::MenuToggle::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRow::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetId(/* parameters */);
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::Table::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnTable.cpp:174
		int32_t liIter;

	}
}

void BrnGui::MenuComponent::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SelectableGroup::SetWrapped(/* parameters */);
	{
		// BrnMenuComponent.cpp:127
		int32_t i;

	}
}

void BrnGui::CarouselItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuItem::FindState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuItem.cpp:172
		BrnGui::MenuItem::MenuItemStates leState;

		Selectable::IsActive(/* parameters */);
	}
}

void BrnGui::TableRow::FindState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableRow.cpp:250
		BrnGui::TableRow::TableRowStates leState;

		Selectable::IsActive(/* parameters */);
	}
}

void BrnGui::ToggleItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggle::FindState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggle.cpp:197
		BrnGui::MenuToggle::MenuToggleStates leState;

		Selectable::IsActive(/* parameters */);
	}
}

void BrnGui::Selectable::SetActive(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetHighlightable(bool  lbHighlightable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetSelectable(bool  lbSelectable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetHighlighted(bool  lbHighlighted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	{
		// BrnSelectable.h:395
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Selectable::IsDirty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarouselItem::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarouselItem.cpp:118
		BrnGui::CarouselItem::E_IconState liStateIndex;

		Selectable::Update(/* parameters */);
	}
}

void BrnGui::Table::HasData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Table::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::Update(/* parameters */);
	{
		// BrnTable.cpp:145
		int8_t liIndex;

	}
}

void BrnGui::ToggleItem::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::Update(/* parameters */);
}

void BrnGui::ScrollableSelectionItem::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::Update(/* parameters */);
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
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

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
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
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
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
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
}

void BrnGui::GuiCursor::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::GetBounds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1452
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1453
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1455
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1456
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

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

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1452
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1453
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1455
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1456
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator*=(const Vector3 &  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:435
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

void BrnGui::ColourSelector::GetColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnColourSelector.cpp:176
	Vector3 lVector;

	{
		// BrnColourSelector.cpp:103
		Vector2 lvPosition;

		// BrnColourSelector.cpp:104
		Vector4 lv4Bounds;

		// BrnColourSelector.cpp:107
		float32_t lfLambdaX;

		// BrnColourSelector.cpp:108
		float32_t lfLambdaY;

		// BrnColourSelector.cpp:111
		float32_t lfRed;

		// BrnColourSelector.cpp:112
		float32_t lfGreen;

		// BrnColourSelector.cpp:113
		float32_t lfBlue;

		// BrnColourSelector.cpp:115
		const float lfOneSixth;

		// BrnColourSelector.cpp:176
		Vector3 lVector;

		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
}

void CgsCore::MemSet(void *  lpDestination, int  liValue, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Ticker::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
}

void BrnGui::ColourField::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelection::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ColourField::Hide(/* parameters */);
	ColourField::Hide(/* parameters */);
}

void BrnGui::ColourField::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelection::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ColourField::Show(/* parameters */);
	ColourField::Show(/* parameters */);
}

void BrnGui::SelectableGroup::GetSelectable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.h:248
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::SelectableGroup::GetSelectableCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::SetIds(const uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:127
		int32_t liIndex;

		{
			// BrnSelectableGroup.cpp:131
			BrnGui::Selectable * lpSelectable;

			GetSelectable(/* parameters */);
			Selectable::SetId(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	Selectable::SetId(/* parameters */);
}

void BrnGui::SelectableGroup::SetSelectableId(int32_t  liSelectable, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:111
		BrnGui::Selectable * lpSelectable;

		GetSelectable(/* parameters */);
	}
	Selectable::SetDirty(/* parameters */);
	Selectable::SetId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::GetAnimator(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.h:241
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::Animator::GetObjectController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::HelpBar::SetupComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:103
		BrnGui::Animator * lpAnimator;

		// BrnHelpBar.cpp:106
		CgsGui::ObjectController * lpObjectController;

		GetAnimator(/* parameters */);
	}
	CgsGui::Animator::GetObjectController(/* parameters */);
}

void BrnGui::Carousel::SetupCarousel(int32_t  liItemCount, bool  lbWrapped) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarousel.cpp:86
		char[256] lacItemText;

		// BrnCarousel.cpp:106
		int32_t liItemNo;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnCarousel.cpp:88
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CarouselItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lpIconStateBase, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarouselItem.cpp:62
		int32_t liIcon;

	}
	Selectable::SetDirty(/* parameters */);
	{
		// BrnCarouselItem.cpp:54
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCarouselItem.cpp:55
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCursor::SetPosition(const rw::math::vpu::Vector2  lv2Position, bool  lbClampToBounds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCursor.h:245
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCursor.h:249
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator!=(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV2(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:264
		bool ret;

		// vector_intrinsic_operation_inline.h:265
		VectorIntrinsicUnion::VectorIntrinsic v0comp;

		// vector_intrinsic_operation_inline.h:265
		VectorIntrinsicUnion::VectorIntrinsic v1comp;

	}
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

void std::fabs(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(float32_t  lfReal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:598
		union UFloatInt {
			// CgsStrStream.h:599
			float32_t mfReal;

			// CgsStrStream.h:600
			int32_t miInt;

		}
		// CgsStrStream.h:602
		UFloatInt lFloatInt;

	}
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

void BrnGui::GuiCursor::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCursor.h:382
		GuiEventMapCursorStatus lMapCursorStatus;

	}
}

extern void GuiEventMapCursorStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventMapCursorStatus,40>::SetRawEvent(const GuiEventMapCursorStatus &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<545>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<40>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelector::MoveCursor(float32_t  lfDeltaX, float32_t  lfDeltaY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCursor::SetPosition(/* parameters */);
	GuiCursor::Update(/* parameters */);
	rw::math::vpu::Vector2::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ColourSelector::SetColour(const rw::math::vpu::Vector3  lInParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelector.cpp:196
		Vector4 lv4Bounds;

		// BrnColourSelector.cpp:204
		Vector2 lPos;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	GuiCursor::SetPosition(/* parameters */);
	rw::math::vpu::Vector2::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
}

void BrnGui::HelpBar::IsItemInfoValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::SetVisible(bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ObjectController::SetPosX(float32_t  lfPosX) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::HelpBar::TransitionIn(BrnGui::HelpBar::EAlignment  leAlignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:175
		int32_t liItem;

		// BrnHelpBar.cpp:179
		float32_t lfXPos;

		// BrnHelpBar.cpp:180
		float32_t lfDelay;

		// BrnHelpBar.cpp:182
		float32_t lfTotalWidth;

	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		// BrnHelpBar.cpp:213
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:218
		BrnGui::Animator * lpAnimator;

		// BrnHelpBar.cpp:219
		CgsGui::ObjectController * lpObjectController;

		CgsGui::Animator::GetObjectController(/* parameters */);
		CgsGui::ObjectController::SetVisible(/* parameters */);
		CgsGui::ObjectController::SetPosX(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::ObjectController::SetPos(float32_t  lfPosX, float32_t  lfPosY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::HelpBar::TransitionOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:256
		int32_t liItem;

	}
	{
		// BrnHelpBar.cpp:259
		CgsGui::ObjectController * lpController;

		CgsGui::Animator::GetObjectController(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsGui::ObjectController::SetPos(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:254
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::SnapIn(BrnGui::HelpBar::EAlignment  leAlignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:277
		int32_t liItem;

		// BrnHelpBar.cpp:282
		float32_t lfXPos;

		// BrnHelpBar.cpp:284
		float32_t lfTotalWidth;

	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		// BrnHelpBar.cpp:312
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:317
		BrnGui::Animator * lpAnimator;

		// BrnHelpBar.cpp:318
		CgsGui::ObjectController * lpObjectController;

		CgsGui::Animator::GetObjectController(/* parameters */);
		CgsGui::ObjectController::SetVisible(/* parameters */);
		CgsGui::ObjectController::SetPosX(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::SnapOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:346
		int32_t liItem;

	}
	{
		// BrnHelpBar.cpp:349
		CgsGui::ObjectController * lpController;

		CgsGui::Animator::GetObjectController(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsGui::ObjectController::SetPos(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:344
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::InvalidateItemInfo(int32_t  liItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:410
		CgsGui::ObjectController * lpObjectController;

		CgsGui::Animator::GetObjectController(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:411
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::InvalidateAllItemInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:390
		int32_t liIndex;

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

void BrnGui::HelpBar::UpdateItemInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:433
		int32_t liIndex;

		{
			// BrnHelpBar.cpp:441
			CgsGui::ObjectController * lpObjectController;

			// BrnHelpBar.cpp:444
			float32_t lfWidth;

			CgsGui::Animator::GetObjectController(/* parameters */);
			CgsGui::ObjectController::GetObjectVariableFloat(/* parameters */);
		}
	}
	{
		// BrnHelpBar.cpp:442
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::Update(AnimChannelData::Time  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:369
		int32_t liItem;

	}
	{
		// BrnHelpBar.cpp:372
		BrnGui::Animator * lpAnimator;

	}
}

void BrnGui::HelpBar::GetItemNameHash(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.h:197
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiComponent::GetNameHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::HelpBar::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:475
		int32_t liComponent;

	}
	{
		// BrnHelpBar.cpp:481
		BrnGui::Animator * lpAnimator;

		// BrnHelpBar.cpp:484
		CgsGui::ObjectController * lpController;

		GetAnimator(/* parameters */);
	}
	CgsGui::Animator::GetObjectController(/* parameters */);
	GetItemNameHash(/* parameters */);
	GetItemNameHash(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:482
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:485
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lpcParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpItem.cpp:47
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpItem.cpp:46
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpItem::SetItem(const char *  lpText, BrnGui::ButtonIconComponent::EPadButton  leButtonLeft, BrnGui::ButtonIconComponent::EPadButton  leButtonRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpItem.cpp:70
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpItem.cpp:69
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpItem.cpp:68
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::AppendHelpBarItem(const char *  lpItemText, BrnGui::ButtonIconComponent::EPadButton  leButtonLeft, BrnGui::ButtonIconComponent::EPadButton  leButtonRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:152
		int32_t liIndex;

	}
	{
		// BrnHelpBar.cpp:147
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:150
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:149
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpBar.cpp:148
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:123
		int32_t liIndex;

	}
	{
		// BrnHelpBar.cpp:126
		HelpItem * lpItem;

	}
}

void BrnGui::HelpItem::SetIconState(BrnGui::HelpItem::EIconPosition  lePosition, BrnGui::ButtonIconComponent::EPadButtonState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpItem.cpp:89
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpItem.cpp:102
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHelpItem.cpp:90
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ButtonIconComponent::GetButton() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::HelpItem::GetIconButton(BrnGui::HelpItem::EIconPosition  leIconPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpItem.cpp:119
		BrnGui::ButtonIconComponent::EPadButton leButton;

	}
	{
		// BrnHelpItem.cpp:117
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	ButtonIconComponent::GetButton(/* parameters */);
	{
		// BrnHelpItem.cpp:131
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	ButtonIconComponent::GetButton(/* parameters */);
}

void BrnGui::HudBorder::SetWidthFactor(float32_t  lfWidthFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHudBorder.cpp:80
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HudBorder::SetHeightFactor(float32_t  lfHeightFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHudBorder.cpp:102
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HudBorder::SetZoomFactor(float32_t  lfWidth, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHudBorder.cpp:128
		bool lbUpdateApt;

	}
	{
		// BrnHudBorder.cpp:126
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHudBorder.cpp:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HudBorder::SetupScreen(float32_t  lfScreenWidth, float32_t  lfScreenHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHudBorder.cpp:160
		char[10] lacText;

	}
	{
		// BrnHudBorder.cpp:163
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHudBorder.cpp:162
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HudBorder::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuComponent::SetupMenu(int32_t  liItemCount, bool  lbWrapped) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuComponent.cpp:81
		char[256] lacText;

		// BrnMenuComponent.cpp:82
		int32_t liIter;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnMenuComponent.cpp:84
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuComponent::GetSelectable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuComponent.h:171
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::MenuComponent::DisableSelectable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuComponent.cpp:197
		BrnGui::MenuItem * lpItem;

		GetSelectable(/* parameters */);
	}
	SelectableGroup::GetSelectable(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuItem::Set(const char *  lpcItemText, int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetId(/* parameters */);
	{
		// BrnMenuItem.cpp:101
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuItem::SetText(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuItem.cpp:119
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuItem::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuItem.cpp:144
		BrnGui::MenuItem::MenuItemStates leState;

		Selectable::Update(/* parameters */);
	}
	{
		// BrnMenuItem.cpp:146
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ProgressBar::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressBar.cpp:47
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressBar.cpp:46
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ProgressBar::UpdateApt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressBar.cpp:94
		char[8] lacText;

	}
	{
		// BrnProgressBar.cpp:92
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ProgressBar::SetProgress(float32_t  lfProgress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressBar.cpp:68
		float32_t lfPreviousProgress;

	}
	{
		// BrnProgressBar.cpp:65
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
}

void BrnGui::ScrollBar::SetValue(float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollBar.cpp:71
		float32_t lfScaledValue;

		// BrnScrollBar.cpp:72
		char[16] lacYValue;

	}
	{
		// BrnScrollBar.cpp:69
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollBar::Construct(const char *  lacName, StateInterface *  lpStateInterface, const float32_t  lfMinValue, const float32_t  lfMaxValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollBar.cpp:50
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollBar.cpp:49
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollBar.cpp:48
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectableGroup::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lSelectableId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:44
		int32_t liItem;

	}
	Selectable::SetDirty(/* parameters */);
	{
		// BrnSelectableGroup.cpp:46
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:47
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectableGroup::GetMaxSelectableCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, int32_t  liMaxItems, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuComponent.cpp:58
		char[64] lacText;

		// BrnMenuComponent.cpp:59
		int32_t liIter;

	}
	{
		// BrnMenuComponent.cpp:50
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuComponent.cpp:62
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuComponent.cpp:48
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuComponent.cpp:47
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Carousel::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarousel.cpp:57
		char[256] lacItemBaseName;

		// BrnCarousel.cpp:58
		char[256] lacItemText;

		// BrnCarousel.cpp:62
		int32_t liItemNo;

	}
	Selectable::SetDirty(/* parameters */);
	{
		// BrnCarousel.cpp:54
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCarousel.cpp:55
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectableGroup::Add(BrnGui::Selectable *  lpSelectable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:162
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Selectable::SetDirty(/* parameters */);
	{
		// BrnSelectableGroup.cpp:161
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:160
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelection::Add(BrnGui::ScrollableSelectionItem *  lpSelectable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::Enable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:184
		BrnGui::Selectable * lpSelectable;

	}
	GetSelectable(/* parameters */);
	{
		// BrnSelectableGroup.cpp:182
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Selectable::SetDirty(/* parameters */);
	{
		// BrnSelectableGroup.cpp:186
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelection::Enable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::Disable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:232
		BrnGui::Selectable * lpSelectable;

	}
	GetSelectable(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnSelectableGroup.cpp:230
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:246
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:234
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelection::Disable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::IsHighlightable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::IsWrapped() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::HighlightNext(bool  lbPreview) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:294
		int32_t liIter;

		// BrnSelectableGroup.cpp:295
		BrnGui::Selectable * lpSelectable;

		// BrnSelectableGroup.cpp:296
		bool lbSuccess;

	}
	{
		// BrnSelectableGroup.cpp:302
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:290
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectableGroup::GetHighlighted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.h:281
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::MenuToggle::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggleGroup::HighlightNextItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SelectableGroup::GetHighlighted(/* parameters */);
	MenuToggle::HighlightNext(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Toggle::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::TableRow::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuComponent::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Carousel::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::SelectableGroup::HighlightPrevious(bool  lbPreview) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:360
		int32_t liIter;

		// BrnSelectableGroup.cpp:361
		BrnGui::Selectable * lpSelectable;

		// BrnSelectableGroup.cpp:362
		bool lbSuccess;

	}
	{
		// BrnSelectableGroup.cpp:368
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:356
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Toggle::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::TableRow::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuComponent::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Carousel::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::SelectableGroup::HighlightIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
	{
		// BrnSelectableGroup.cpp:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::Toggle::HighlightIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::Carousel::HighlightIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
	{
		// BrnCarousel.cpp:198
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectableGroup::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:488
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelection::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggle::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:512
		int8_t liIndex;

		Selectable::Update(/* parameters */);
		{
			// BrnSelectableGroup.cpp:515
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::SelectableGroup::GetHighlightedIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelectionItem::GetIsGradient() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelectionItem::GetGradient(const rw::math::vpu::Vector4 **  lppv4OutColour1, const rw::math::vpu::Vector4 **  lppv4OutColour2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelection::GetUint32ColourFromVector4(const rw::math::vpu::Vector4 *  lpv4Colour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelection.h:133
		uint32_t luRed;

		// BrnColourSelection.h:134
		uint32_t luGreen;

		// BrnColourSelection.h:135
		uint32_t luBlue;

		// BrnColourSelection.h:136
		uint32_t luColorRGB;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
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

void BrnGui::ColourField::SetGradient(uint32_t  luColour1, uint32_t  luColour2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelectionItem::GetColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourField::SetColour(uint32_t  luTextColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelection::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelection.cpp:240
		const rw::math::vpu::Vector4 * lpcColour1;

		// BrnColourSelection.cpp:241
		const rw::math::vpu::Vector4 * lpcColour2;

		{
			// BrnColourSelection.cpp:245
			const BrnGui::ColourSelectionItem * lpCurrentlySelected;

			SelectableGroup::GetHighlighted(/* parameters */);
			ColourSelectionItem::GetGradient(/* parameters */);
			GetUint32ColourFromVector4(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
			GetUint32ColourFromVector4(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
			ColourField::SetGradient(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
		}
	}
	ColourSelectionItem::GetColour(/* parameters */);
	GetUint32ColourFromVector4(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	ColourField::SetColour(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Selectable::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::GetIndexFromId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:534
		int32_t liIndex;

		GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:532
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:538
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::Append64IntDecimal(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:822
		char[22] lacNumber;

	}
}

void CgsDev::StrStreamBase::Append64IntHex(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:847
		uint32_t lA;

		// CgsStrStream.h:848
		uint32_t lB;

	}
}

void BrnGui::SelectableGroup::HighlightId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:464
		bool lbSuccess;

		// BrnSelectableGroup.cpp:465
		int liIndex;

	}
	{
		// BrnSelectableGroup.cpp:467
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		// BrnSelectableGroup.cpp:462
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectableGroup::DisableId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:269
		int32_t liIndex;

	}
	{
		// BrnSelectableGroup.cpp:271
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:267
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectableGroup::EnableId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.cpp:212
		int32_t liIndex;

	}
	{
		// BrnSelectableGroup.cpp:214
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectableGroup.cpp:211
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TableCell::Construct(const char *  lacName, StateInterface *  lpStateInterface, CgsGui::GuiComponent *  lpComponent, const BrnGui::TableCell::TableCellComponentTypes  leComponentType, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableCell.cpp:51
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTableCell.cpp:50
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTableCell.cpp:48
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTableCell.cpp:49
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TableDataSet::GetNumRowDataSets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableDataSet::GetRowData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTable.h:456
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::TableRow::SetData(TableRowDataSet *  lpDataSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableRow.h:249
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::Table::SetRowData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTable.cpp:271
		int32_t liIter;

		{
			// BrnTable.cpp:273
			int32_t liIndex;

			TableDataSet::GetRowData(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			TableRow::SetData(/* parameters */);
		}
	}
	Selectable::SetDirty(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTable.cpp:270
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Table::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTable.cpp:235
		int32_t liHighlightedRow;

		// BrnTable.cpp:254
		bool lbStatus;

	}
	{
		// BrnTable.cpp:233
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Table::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTable.cpp:195
		int32_t liHighlightedRow;

		// BrnTable.cpp:214
		bool lbStatus;

	}
	{
		// BrnTable.cpp:193
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TableRow::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacCellName, CgsGui::GuiComponent **  lapCellComponent, const BrnGui::TableCell::TableCellComponentTypes *  laeComponentTypes, int32_t  liNumColumns, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableRow.cpp:79
		char[64] lacThisCellName;

	}
	{
		// BrnTableRow.cpp:71
		int32_t liIter;

	}
	{
		// BrnTableRow.cpp:80
		int32_t liIter;

	}
	{
		// BrnTableRow.cpp:66
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTableRow.cpp:82
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTableRow.cpp:63
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTableRow.cpp:64
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTableRow.cpp:65
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Table::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacCellName, CgsGui::GuiComponent * *[16]  laapCellComponent, const BrnGui::TableCell::TableCellComponentTypes *  laeComponentTypes, int32_t  liNumRows, int32_t  liNumColumns, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTable.cpp:65
		char[64] lacText;

		// BrnTable.cpp:66
		int32_t liIter;

	}
	{
		// BrnTable.cpp:54
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Selectable::SetId(/* parameters */);
	{
		// BrnTable.cpp:69
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTable.cpp:52
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTable.cpp:51
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TableRow::SetupRow(int32_t  liColumnCount, bool  lbWrapped) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnTableRow.cpp:103
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TableRow::SetEnableShowingAnim(bool  lbEnable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Table::SetupTable(TableDataSet *  lpDataSet, bool  lbRowsWrapped, bool  lbColumnsWrapped) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTable.cpp:89
		int32_t liIter;

		// BrnTable.cpp:101
		int32_t liNumDataSets;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	TableRow::SetEnableShowingAnim(/* parameters */);
	{
		// BrnTable.cpp:92
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetText(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:87
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGui::GuiComponent::GetName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:86
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGui::GuiComponent::GetName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetColour(uint32_t  luTextColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TextField::RefreshText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TimerField::CheckLoad(const char *  lpcLoadName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::SetColour(/* parameters */);
	TextField::RefreshText(/* parameters */);
}

void BrnGui::ColourMenuToggle::SetTitleText(const char *  lpcTitleText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::MenuToggle::SetTitleText(const char *  lpcTitleText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::TextSelectionItem::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TextSelection::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextSelection.cpp:147
		const char * lpcText;

		{
			// BrnTextSelection.cpp:151
			const BrnGui::TextSelectionItem * lpCurrentlySelected;

			SelectableGroup::GetHighlighted(/* parameters */);
		}
		Selectable::SetDirty(/* parameters */);
		TextSelectionItem::GetText(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TableCell::IsText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRowDataSet::GetText(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableRow.h:397
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::TableCell::SetText(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableCell.h:188
		TextField * lpTextField;

		{
			// BrnTableCell.h:186
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnTableCell.h:187
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGui::TableCell::IsIcon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRowDataSet::GetInteger(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableRow.h:411
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::TableCell::SetIconState(uint32_t  luState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableCell.h:254
		IconComponent * lpIcon;

		{
			// BrnTableCell.h:252
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnTableCell.h:253
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGui::TableRow::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTableRow.cpp:161
		int32_t liIter;

		TableCell::IsText(/* parameters */);
		{
			// BrnTableRow.cpp:168
			const char * lpcText;

			TableRowDataSet::GetText(/* parameters */);
		}
		{
			// BrnTableRow.cpp:167
			CgsDev::StrStream lStrStream;

		}
		TableRowDataSet::GetText(/* parameters */);
		TableCell::SetText(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	Selectable::Update(/* parameters */);
	TableRowDataSet::GetInteger(/* parameters */);
	{
		// BrnTableRow.cpp:173
		CgsDev::StrStream lStrStream;

	}
	TableRowDataSet::GetInteger(/* parameters */);
	TableCell::SetIconState(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnTableRow.cpp:153
		BrnGui::TableRow::TableRowStates leState;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTableRow.cpp:155
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiComponent::GetLanguageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::GetAccessPointers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TextField::SetDatabaseText(const char *  lpcActualText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:104
		const UnicodeBuffer::CgsUtf8 * lpcUTFText;

		// BrnTextField.cpp:106
		bool lbIsShortString;

	}
	CgsCore::StrCpy(/* parameters */);
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	{
		// BrnTextField.cpp:102
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:164
		char[1024] lBuffer;

		// BrnTextField.cpp:165
		bool lbIsFast;

	}
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:157
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:156
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(float  lrFloat, CgsLanguage::LanguageManager::ParameterFormatType  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:194
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(int  lnInt, CgsLanguage::LanguageManager::ParameterFormatType  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:224
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liParameterCount, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:272
		bool lbUsesNumAsString;

		// BrnTextField.cpp:273
		va_list lpArgument;

		// BrnTextField.cpp:274
		char[1024] lacBuffer;

	}
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	{
		// BrnTextField.cpp:265
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:266
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:264
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liParameterCount, const char *const*  lpacParameterText, CgsLanguage::LanguageManager::ParameterFormatType *  lpeParameterFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:323
		bool lbUsesNumAsString;

		// BrnTextField.cpp:324
		char[1024] lacBuffer;

	}
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:315
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:316
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:314
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liValue, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:363
		char[1024] lacBuffer;

	}
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:357
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:356
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, float32_t  lrValue, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:393
		char[1024] lacBuffer;

	}
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:387
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:386
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liValue1, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat1, int32_t  liValue2, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:425
		char[1024] lacBuffer;

	}
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:418
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, float32_t  lrValue1, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat1, float32_t  lrValue2, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:457
		char[1024] lacBuffer;

	}
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:451
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:450
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetLocalisedText(const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liValue1, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat1, int32_t  liValue2, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat2, int32_t  liValue3, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextField.cpp:492
		char[1024] lacBuffer;

	}
	CgsGui::GuiComponent::GetLanguageManager(/* parameters */);
	{
		// BrnTextField.cpp:486
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextField.cpp:485
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetAutoSize(bool  lbAutosize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TextSelection::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::SetAutoSize(/* parameters */);
	{
		// BrnTextSelection.cpp:45
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextSelection.cpp:44
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextSelection::SetItemText(int32_t  liIndex, const char *  lpItemText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextSelection.cpp:128
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::TextSelection::SetupTextSelection(int32_t  liItemCount, bool  lbWrapped, const char **  lppItemNames, uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTextSelection.cpp:70
		int32_t liItemNo;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnTextSelection.cpp:66
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggle::SetupMenuToggle(int32_t  liItemCount, bool  lbWrapped, const char *  lpcTitleText, const char **  lppItemNames, uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::TextSelectionItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lpParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
	{
		// BrnTextSelectionItem.cpp:45
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTextSelectionItem.cpp:44
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ColourSelection::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelection.cpp:51
		char[128] lacOutlineName;

	}
	{
		// BrnColourSelection.cpp:45
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnColourSelection.cpp:44
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ColourSelection::SetItemColour(int32_t  liIndex, const rw::math::vpu::Vector4 *  lpItemColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelection.cpp:200
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Selectable::SetDirty(/* parameters */);
}

void rw::math::vpu::Min<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourSelection::SetupColourSelection(int32_t  liItemCount, bool  lbWrapped, const rw::math::vpu::Vector4 **  lppItemColours, uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelection.cpp:75
		int32_t liItemNo;

		// BrnColourSelection.cpp:76
		int32_t liNumItems;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnColourSelection.cpp:71
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ColourMenuToggle::SetupMenuToggle(int32_t  liItemCount, bool  lbWrapped, const char *  lpcTitleText, const rw::math::vpu::Vector4 **  lppItemColours, uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:112
		uint32_t ColourSelectionIndex;

	}
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::ColourSelection::SetItemGradient(int32_t  liIndex, const rw::math::vpu::Vector4 *  lpItemColour1, const rw::math::vpu::Vector4 *  lpItemColour2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelection.cpp:220
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::ColourSelection::SetupColourSelectionGradient(int32_t  liItemCount, bool  lbWrapped, const rw::math::vpu::Vector4 **  lppItemColours1, const rw::math::vpu::Vector4 **  lppItemColours2, uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourSelection.cpp:140
		int32_t liItemNo;

		// BrnColourSelection.cpp:141
		int32_t liNumItems;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnColourSelection.cpp:136
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ColourMenuToggle::SetupMenuToggleGradient(int32_t  liItemCount, bool  lbWrapped, const char *  lpcTitleText, const rw::math::vpu::Vector4 **  lppItemColours1, const rw::math::vpu::Vector4 **  lppItemColours2, uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:147
		uint32_t ColourSelectionIndex;

	}
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::ColourSelectionItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lpParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
	{
		// BrnColourSelectionItem.cpp:45
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnColourSelectionItem.cpp:44
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Ticker::SetText(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTicker.cpp:72
		int32_t liNewStringLength;

		// BrnTicker.cpp:73
		int32_t liCurrentLength;

	}
	{
		// BrnTicker.cpp:85
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTicker.cpp:77
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Ticker::AddText(const char *  lpcText, bool  lbMakeSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTicker.cpp:125
		bool lbAddText;

		// BrnTicker.cpp:126
		int32_t liNewStringLength;

	}
}

void BrnGui::ToggleItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
	{
		// BrnToggleItem.cpp:53
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnToggleItem.cpp:52
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Toggle::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnToggle.cpp:58
		char[256] lacText;

		// BrnToggle.cpp:59
		int32_t liItemNo;

	}
	Selectable::SetDirty(/* parameters */);
	{
		// BrnToggle.cpp:53
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnToggle.cpp:54
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ToggleItem::SetText(const char *  lacText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
	{
		// BrnToggleItem.cpp:74
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::Toggle::SetupToggle(int32_t  liItemCount, bool  lbWrapped) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnToggle.cpp:83
		char[256] lacText;

		// BrnToggle.cpp:101
		int32_t liItemNo;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnToggle.cpp:85
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggle::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::SetAutoSize(/* parameters */);
	{
		// BrnMenuToggle.cpp:60
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuToggle.cpp:59
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggle::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggle.cpp:176
		BrnGui::MenuToggle::MenuToggleStates leState;

		Selectable::Update(/* parameters */);
	}
	{
		// BrnMenuToggle.cpp:178
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ColourMenuToggle::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:70
		uint32_t ColourSelectionIndex;

	}
	TextField::SetAutoSize(/* parameters */);
	{
		// BrnColourMenuToggle.cpp:67
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnColourMenuToggle.cpp:68
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ColourMenuToggle::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:234
		BrnGui::ColourMenuToggle::MenuToggleStates leState;

		// BrnColourMenuToggle.cpp:239
		uint32_t ColourSelectionIndex;

		Selectable::Update(/* parameters */);
	}
	{
		// BrnColourMenuToggle.cpp:236
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::Max<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ColourMenuToggle::HighlightNeighbours() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnColourMenuToggle.cpp:425
		int32_t liHighlightedIndex;

		// BrnColourMenuToggle.cpp:434
		int32_t ColourSelectionIndex;

	}
	SelectableGroup::GetHighlightedIndex(/* parameters */);
	rw::math::vpu::Max<int>(/* parameters */);
	rw::math::vpu::Max<int>(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	{
		// BrnColourMenuToggle.cpp:440
		int32_t liNeighbourIndex;

	}
	{
		// BrnColourMenuToggle.cpp:441
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ColourMenuToggle::HighlightIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::ColourMenuToggle::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::ColourMenuToggle::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::MenuToggleGroup::Construct(const char *  lacName, StateInterface *  lpStateInterface, int32_t  liMaxItems, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggleGroup.cpp:47
		int32_t liItem;

		// BrnMenuToggleGroup.cpp:67
		char[128] lacText;

		// BrnMenuToggleGroup.cpp:68
		int32_t liIter;

	}
	{
		// BrnMenuToggleGroup.cpp:52
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuToggleGroup.cpp:71
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuToggleGroup.cpp:50
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuToggleGroup.cpp:49
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggleGroup::SetupGroup(int32_t  liItemCount, bool  lbWrapped) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggleGroup.cpp:115
		int32_t liIter;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnMenuToggleGroup.cpp:117
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggleGroup::GetSelectable(int32_t  liToggle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggleGroup.h:175
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::MenuToggleGroup::SetupToggle(int32_t  liIndex, int32_t  liToggleItemCount, bool  lbToggleWrapped, const char *  lpcTitleText, const char **  lppcText, uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetSelectable(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuToggleGroup.cpp:159
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuToggleGroup.cpp:161
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMenuToggleGroup.cpp:160
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggle::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggleGroup::HighlightPreviousItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SelectableGroup::GetHighlighted(/* parameters */);
	MenuToggle::HighlightPrevious(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggle::HighlightIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggleGroup::HighlightItem(int32_t  liToggle, int32_t  liItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetSelectable(/* parameters */);
	SelectableGroup::GetSelectable(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	MenuToggle::HighlightIndex(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggleGroup::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache, bool  lbTitle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggleGroup.cpp:312
		int32_t liNumItems;

		// BrnMenuToggleGroup.cpp:314
		int32_t liIndex;

		SelectableGroup::GetSelectableCount(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Array<BrnGui::Animator,32u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::Animator,32u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::Animator,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::ScrollableSelection::GetAnimator(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		// BrnScrollableSelection.h:200
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
			{
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
					}
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
				}
			}
		}
	}
}

void BrnGui::ScrollableSelection::GetAnimator(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnGui::Animator,32u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnGui::Animator,32u>::operator[](/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::ScrollableSelection::TransitionOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:285
		int32_t liItem;

		{
			// BrnScrollableSelection.cpp:289
			BrnGui::ScrollableSelectionItem * lpItem;

			SelectableGroup::GetSelectable(/* parameters */);
			{
				// BrnScrollableSelection.cpp:294
				BrnGui::Animator * lpAnimator;

				GetAnimator(/* parameters */);
			}
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:290
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:295
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelection::UpdateToTime(AnimChannelData::Time  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:471
		int32_t liAnimator;

		{
			// BrnScrollableSelection.cpp:474
			BrnGui::Animator * lpAnimator;

			CgsContainers::Array<BrnGui::Animator,32u>::operator[](/* parameters */);
		}
		CgsContainers::Array<BrnGui::Animator,32u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnScrollableSelection.cpp:475
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsContainers::Array<float32_t,32u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<float32_t,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::ScrollableSelection::UpdateItemWidths(bool  lbForceUpdate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:565
		int32_t liIndex;

		{
			// BrnScrollableSelection.cpp:568
			CgsGui::ObjectController * lpObjectController;

			CgsGui::Animator::GetObjectController(/* parameters */);
			CgsContainers::Array<float32_t,32u>::operator[](/* parameters */);
			CgsGui::ObjectController::GetObjectVariableFloat(/* parameters */);
			CgsContainers::Array<float32_t,32u>::operator[](/* parameters */);
		}
		CgsContainers::Array<BrnGui::Animator,32u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnScrollableSelection.cpp:569
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnGui::ScrollableSelection::AnimateToIndex(int32_t  liHighlightedIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:498
		float32_t lfXPos;

		// BrnScrollableSelection.cpp:499
		float32_t lAnimationTime;

		// BrnScrollableSelection.cpp:503
		int32_t liItem;

	}
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		// BrnScrollableSelection.cpp:506
		BrnGui::ScrollableSelectionItem * lpItem;

		{
			// BrnScrollableSelection.cpp:511
			BrnGui::Animator * lpAnimator;

			CgsContainers::Array<float32_t,32u>::operator[](/* parameters */);
		}
	}
	SelectableGroup::GetSelectable(/* parameters */);
	CgsContainers::Array<BrnGui::Animator,32u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		// BrnScrollableSelection.cpp:527
		BrnGui::ScrollableSelectionItem * lpItem;

		SelectableGroup::GetSelectable(/* parameters */);
		{
			// BrnScrollableSelection.cpp:534
			BrnGui::Animator * lpAnimator;

			CgsContainers::Array<float32_t,32u>::operator[](/* parameters */);
			CgsContainers::Array<BrnGui::Animator,32u>::operator[](/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:528
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:507
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:495
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelection::IsTextUpdated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ScrollableSelection::HighlightIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:416
		int32_t liPreviousIndex;

	}
}

void BrnGui::ScrollableSelection::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ScrollableSelection::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:372
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelection::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ScrollableSelection::TransitionIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:169
		int32_t liHighlightedIndex;

	}
	SelectableGroup::GetHighlightedIndex(/* parameters */);
	{
		// BrnScrollableSelection.cpp:177
		float32_t lfXPos;

		// BrnScrollableSelection.cpp:178
		float32_t lfYPos;

		// BrnScrollableSelection.cpp:179
		float32_t lfDelay;

		// BrnScrollableSelection.cpp:180
		float32_t lfDelayBetweenItems;

		// BrnScrollableSelection.cpp:181
		float32_t lfHighlightedDelay;

		// BrnScrollableSelection.cpp:182
		float32_t lfStartX;

		// BrnScrollableSelection.cpp:184
		int32_t liItem;

		rw::math::vpu::Vector2::GetX(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
			// BrnScrollableSelection.cpp:187
			BrnGui::ScrollableSelectionItem * lpItem;

			SelectableGroup::GetSelectable(/* parameters */);
		}
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
			// BrnScrollableSelection.cpp:237
			BrnGui::ScrollableSelectionItem * lpItem;

			// BrnScrollableSelection.cpp:238
			CgsGui::ObjectController * lpController;

			SelectableGroup::GetSelectable(/* parameters */);
			CgsGui::Animator::GetObjectController(/* parameters */);
			CgsContainers::Array<float32_t,32u>::operator[](/* parameters */);
			CgsGui::ObjectController::SetVisible(/* parameters */);
			CgsGui::ObjectController::SetPos(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnScrollableSelection.cpp:239
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsGui::ObjectController::SetVisible(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:200
		BrnGui::ScrollableSelectionItem * lpItem;

		// BrnScrollableSelection.cpp:201
		CgsGui::ObjectController * lpController;

		CgsGui::ObjectController::SetVisible(/* parameters */);
		CgsGui::ObjectController::SetPos(/* parameters */);
		CgsContainers::Array<float32_t,32u>::operator[](/* parameters */);
	}
	SelectableGroup::GetSelectable(/* parameters */);
	CgsGui::Animator::GetObjectController(/* parameters */);
	CgsGui::ObjectController::SetVisible(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:202
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:188
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelectionItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelectionItem.cpp:44
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelectionItem.cpp:43
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ScrollableSelectionItem::SetText(const char *  lpText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelectionItem.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Selectable::SetDirty(/* parameters */);
	{
		// BrnScrollableSelectionItem.cpp:93
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::ScrollableSelection::SetupSelection(int32_t  liItemCount, bool  lbWrapped, int32_t  liNumDisplayedItems, const char **  lppTextValues, uint64_t *  lpIdArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:118
		int32_t liItem;

		// BrnScrollableSelection.cpp:148
		BrnGui::Animator * lpAnimator;

	}
	SelectableGroup::SetWrapped(/* parameters */);
	{
		// BrnScrollableSelection.cpp:121
		BrnGui::ScrollableSelectionItem * lpItem;

		CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:122
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:112
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnGui::Animator,32u>::operator[](/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnScrollableSelection.cpp:111
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:113
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TimerField::SetSafeColours(uint8_t  luRed, uint8_t  luGreen, uint8_t  luBlue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TimerField::SetDangerColours(uint8_t  luRed, uint8_t  luGreen, uint8_t  luBlue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TimerField::SetBoundaries(float32_t  lfSafeColourBoundary, float32_t  lfDangerColourBoundary) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTimerField.h:183
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnTimerField.h:188
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::TimerField::Construct(const char *  lacName, StateInterface *  lpStateInterface, BrnGui::TimerField::ETimerMode  leCountingMode, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetSafeColours(/* parameters */);
	SetDangerColours(/* parameters */);
	SetBoundaries(/* parameters */);
	SetBoundaries(/* parameters */);
	SetBoundaries(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void BrnGui::TimerField::CalculateColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTimerField.cpp:135
		float32_t lfInterpolateValue;

	}
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	{
		// BrnTimerField.cpp:152
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTimerField.cpp:140
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TimerField::SetTime(float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::SetColour(/* parameters */);
}

void BrnGui::ComplexBar::HandleTransitionComplete(int32_t  liBarSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnComplexBar.cpp:116
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::PlayerStatsBar::HandleTransitionComplete(const char *  lpcName, int32_t  liUniqueId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerStatsBar.cpp:83
		bool lbRetValue;

	}
}

void BrnGui::ComplexBar::SetTo(int32_t  liEndIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnComplexBar.h:120
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::PlayerStatsBar::Reset(int32_t  liPlayerValue, int32_t  liCarValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ComplexBar::SetTo(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Array<CgsGui::AnimChannelData,2u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,2u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,2u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::Animator::PlayAnimationChannel(CgsGui::AnimData::AnimatorChannel  leChannel, BrnGui::Animator::BrnGuiAnimationChannel  leAnim, AnimChannelData::Time  lTimeBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsGui::AnimChannelData,2u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsGui::AnimChannelData,2u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAnimator.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAnimator.cpp:93
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<CgsGui::AnimData,2u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData,2u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData,2u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::Animator::PlayAnimation(BrnGui::Animator::BrnGuiAnimation  leAnim, AnimChannelData::Time  lTimeBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsGui::AnimData,2u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsGui::AnimData,2u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAnimator.cpp:111
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<CgsGui::AnimChannelData,2u>::Append(const const AnimChannelData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::Animator::AddAnimationChannelToLibrary(const AnimChannelData *  lpAnimationChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsGui::AnimChannelData,2u>::Append(/* parameters */);
	CgsContainers::Array<CgsGui::AnimChannelData,2u>::GetLength(/* parameters */);
	{
		// BrnAnimator.cpp:149
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<CgsGui::AnimData,2u>::Append(const const AnimData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::Animator::AddAnimationToLibrary(const AnimData *  lpAnimationData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsGui::AnimData,2u>::Append(/* parameters */);
	CgsContainers::Array<CgsGui::AnimData,2u>::GetLength(/* parameters */);
	{
		// BrnAnimator.cpp:167
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void AnimData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,6u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData,2u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,2u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Animator::Construct(CgsGui::GuiComponent *  lpTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAnimator.cpp:43
		AnimData lAnimIn;

		// BrnAnimator.cpp:44
		AnimChannelData lChannelData;

	}
	AnimData(/* parameters */);
	CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::Array(/* parameters */);
	CgsContainers::Array<CgsGui::AnimData,2u>::Construct(/* parameters */);
	CgsContainers::Array<CgsGui::AnimChannelData,2u>::Construct(/* parameters */);
	{
		// BrnAnimator.cpp:40
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<CgsGui::AnimChannel,6u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AnimChannel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimData,2u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::AnimChannelData,2u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<float32_t,32u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::Animator,32u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::Append(const const BrnGui::ScrollableSelectionItem &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGui::Animator,32u>::Append(const const BrnGui::Animator &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

extern Array<CgsGui::AnimChannel,6u> & operator=(const const Array<CgsGui::AnimChannel,6u> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern AnimChannel & operator=(const const AnimChannel &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<float32_t,32u>::Append(const const float32_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::ScrollableSelection::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lSelectableId, const char *  lpSelectableBaseName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScrollableSelection.cpp:68
		Animator lAnimator;

		// BrnScrollableSelection.cpp:69
		ScrollableSelectionItem lItem;

		// BrnScrollableSelection.cpp:77
		char[256] lacText;

		// BrnScrollableSelection.cpp:78
		int32_t liItemNo;

	}
	Animator::Animator(/* parameters */);
	CgsContainers::Array<CgsGui::AnimChannel,6u>::Array(/* parameters */);
	CgsContainers::Array<CgsGui::AnimData,2u>::Array(/* parameters */);
	ScrollableSelectionItem::ScrollableSelectionItem(/* parameters */);
	CgsContainers::Array<CgsGui::AnimChannelData,2u>::Array(/* parameters */);
	CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::Construct(/* parameters */);
	CgsContainers::Array<float32_t,32u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGui::Animator,32u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::Append(/* parameters */);
	CgsContainers::Array<BrnGui::Animator,32u>::Append(/* parameters */);
	CgsContainers::Array<float32_t,32u>::Append(/* parameters */);
	CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGui::Animator,32u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGui::ScrollableSelectionItem,32u>::operator[](/* parameters */);
	Selectable::SetDirty(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:52
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:53
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnScrollableSelection.cpp:54
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::HelpBar::Construct(const char *  lacName, int32_t  liNumItems, StateInterface *  lpStateInterface, const char *  lpcParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHelpBar.cpp:52
		int32_t liIndex;

		// BrnHelpBar.cpp:53
		char[64] lacItemName;

	}
	rw::math::vpu::Vector2::SetZero(/* parameters */);
}

void BrnGui::MedalIcon::HandleTransitionComplete(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMedalIcon.cpp:85
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMedalIcon.cpp:118
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::operator--(const BrnGui::MedalIcon::EMedalIconStates &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMedalIcon.h:109
		BrnGui::MedalIcon::EMedalIconStates leOldEnumIndex;

	}
}

void BrnGui::MedalIcon::MedalDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator--(/* parameters */);
}

void BrnGui::operator++(const BrnGui::MedalIcon::EMedalIconStates &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMedalIcon.h:109
		BrnGui::MedalIcon::EMedalIconStates leOldEnumIndex;

	}
}

void BrnGui::MedalIcon::MedalUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
}

void BrnGui::MedalIcon::SetMedal(BrnGameState::ECurrentMedalTargetTime  leNewMedal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMedalIcon.cpp:176
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

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

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

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

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

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

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

