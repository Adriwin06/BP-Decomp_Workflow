struct _CGprogram;

struct _CGparameter;

void CgsUnicode::Copy(UnicodeBuffer::CgsUtf8 *  lpUtf8TargetString, const UnicodeBuffer::CgsUtf8 *  lpUtf8SourceString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsUnicode::ConvertUtf16ToUtf8(const CgsUtf16 *  lpUtf16Source, UnicodeBuffer::CgsUtf8 *  lpUtf8Target) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:33
		typedef uint32_t CgsUtf32;

		// CgsUnicode.cpp:675
		CgsUtf32 lUtf32Char;

		// CgsUnicode.cpp:676
		uint8_t luBytes;

		// CgsUnicode.cpp:677
		const CgsUtf32 lUtf32ByteMask;

		// CgsUnicode.cpp:678
		const CgsUtf32 lUtf32ByteMark;

	}
}

void CgsUnicode::ByteLength(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:112
		uint32_t luLen;

	}
}

void CgsUnicode::Concatenate(UnicodeBuffer::CgsUtf8 *  lpUtf8TargetString, const UnicodeBuffer::CgsUtf8 *  lpUtf8SourceString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsUnicode::SafelyTerminate(UnicodeBuffer::CgsUtf8 *  lpUtf8String, const int32_t  lnMaxTargetLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:241
		UnicodeBuffer::CgsUtf8 * lpUtf8Target;

	}
}

void CgsUnicode::IsSingleByteUtf8(const UnicodeBuffer::CgsUtf8 *  lpUtf8Char) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsUnicode::ToUpperN(UnicodeBuffer::CgsUtf8 *  lpUtf8TargetString, const UnicodeBuffer::CgsUtf8 *  lpUtf8SourceString, const int32_t  lnMaxTargetStringLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:289
		int32_t lnTargetCount;

	}
}

void CgsUnicode::StringCompare(const UnicodeBuffer::CgsUtf8 *  lpUtfStringA, const UnicodeBuffer::CgsUtf8 *  lpUtfStringB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::FontResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::FontResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::FontResourceType::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontResourceType.cpp:286
		const Font * lpFont;

	}
}

void CgsModule::EventReceiverQueue<1024,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void CgsGraphics::FontModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Destruct(/* parameters */);
}

void CgsGraphics::FontModule::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::FontModule::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<void>(const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<renderengine::Texture>(renderengine::Texture *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<renderengine::Texture>(const Texture *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<renderengine::Texture>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<renderengine::Texture>(renderengine::Texture *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<renderengine::Texture*>(renderengine::Texture **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<renderengine::Texture*>(renderengine::Texture *const*  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<renderengine::Texture*>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<renderengine::Texture*>(renderengine::Texture **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsResource::FontChar>(FontChar *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsResource::FontChar>(const FontChar *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsResource::FontChar>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsResource::FontChar>(FontChar *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::core::atom::AtomID>(rw::core::atom::StaticAtomTable::Members::AtomID *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::core::atom::AtomID>(const rw::core::atom::StaticAtomTable::Members::AtomID *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::core::atom::AtomID>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<rw::core::atom::AtomID>(rw::core::atom::StaticAtomTable::Members::AtomID *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
}

void rw::RwPtrAddOffset<CgsResource::FontChar>(FontChar *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsResource::FontChar>(FontChar *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<renderengine::Texture*>(renderengine::Texture **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<renderengine::Texture*>(renderengine::Texture **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsUnicode::CgsUtf16>(CgsUtf16 *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsUnicode::CgsUtf16>(CgsUtf16 *  ptr, const void *  base) {
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

void CgsResource::FontResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsFontResourceType.cpp:77
	ResourceDescriptor & lResourceDescriptor;

	{
		// CgsFontResourceType.cpp:75
		const Font * lpFont;

		// CgsFontResourceType.cpp:77
		ResourceDescriptor lResourceDescriptor;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
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

void renderengine::SamplerState::Parameters::SetMagFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMinFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMipFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressU(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressV(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMipMapLODBias(float32_t  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Parameters::SetTexture(renderengine::Texture *  newTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<float>(const Vector2Template<float> &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::detail::EndianSwapArray<float>(float *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const float32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint16_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::FontResourceType::ByteSwapFontChar(FontChar *  lpChar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<renderengine::Texture>(const renderengine::Texture *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsUnicode::CgsUtf16>(const CgsUtf16 *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::FontChar>(const FontChar *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<renderengine::Texture*>(const renderengine::Texture **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<renderengine::TextureState>(const TextureState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<std::uint16_t>(uint16_t *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::FontResourceType::FixDown(void *  lpResource, uint32_t  luBaseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontResourceType.cpp:192
		Font * lpFont;

		// CgsFontResourceType.cpp:195
		const void * lpBase;

		// CgsFontResourceType.cpp:197
		uint32_t luIndex;

	}
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::FontResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontResourceType.cpp:182
		uint32_t luBaseValue;

	}
}

void CgsModule::EventReceiverQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::FontModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

void CgsModule::EventReceiverQueue<1024,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::FontModule::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Prepare(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

void CgsModule::EventReceiverQueue<1024,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::FontModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Release(/* parameters */);
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

void CgsUnicode::CopyN(UnicodeBuffer::CgsUtf8 *  lpUtf8TargetString, const UnicodeBuffer::CgsUtf8 *  lpUtf8SourceString, const int32_t  lnMaxTargetStringLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:199
		UnicodeBuffer::CgsUtf8 * lpUtf8Target;

		// CgsUnicode.cpp:203
		int32_t lnTargetCount;

	}
	{
		// CgsUnicode.cpp:220
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsUnicode::CharacterCompare(const UnicodeBuffer::CgsUtf8 *  lpUtf8CharA, const UnicodeBuffer::CgsUtf8 *  lpUtf8CharB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:369
		uint8_t luBytes;

		// CgsUnicode.cpp:372
		uint8_t luIndex;

	}
	{
		// CgsUnicode.cpp:370
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::GetCharAt(const UnicodeBuffer::CgsUtf8 *  lpUtf8SourceString, UnicodeBuffer::CgsUtf8 *  lpUtf8TargetChar, uint32_t  luIndex, bool  lbNullTerminated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:407
		uint32_t luCurrent;

	}
	{
		// CgsUnicode.cpp:417
		uint8_t luBytes;

		// CgsUnicode.cpp:419
		uint8_t luI;

	}
	{
		// CgsUnicode.cpp:415
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::IntToString(UnicodeBuffer::CgsUtf8 *  lpUtf8TargetString, int32_t  liValue, uint8_t  luMinimumDigits, UnicodeBuffer::CgsUtf8 *  lUtf8Separator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:466
		uint8_t luIndex;

		// CgsUnicode.cpp:467
		uint8_t luArrayIndex;

		// CgsUnicode.cpp:468
		int32_t liOldValue;

		// CgsUnicode.cpp:469
		int32_t liNewValue;

		// CgsUnicode.cpp:470
		UnicodeBuffer::CgsUtf8[32] liDigits;

		// CgsUnicode.cpp:471
		uint8_t luThree;

	}
	{
		// CgsUnicode.cpp:494
		uint8_t luBytes;

		// CgsUnicode.cpp:497
		int8_t luByteIndex;

	}
	{
		// CgsUnicode.cpp:495
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::FloatToString(UnicodeBuffer::CgsUtf8 *  lpUtf8TargetString, float32_t  lfValue, uint8_t  luDecimalPlaces, UnicodeBuffer::CgsUtf8 *  lSeparator, UnicodeBuffer::CgsUtf8 *  lDecimalPointChar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:542
		int32_t liIntegerPart;

		// CgsUnicode.cpp:553
		uint32_t luFractionalPart;

		// CgsUnicode.cpp:565
		uint8_t luBytes;

		// CgsUnicode.cpp:568
		uint8_t luByteIndex;

		// CgsUnicode.cpp:575
		UnicodeBuffer::CgsUtf8 * lpUtf8Pointer;

	}
	{
		// CgsUnicode.cpp:566
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsUnicode::_Print(UnicodeBuffer::CgsUtf8 *  lpUtf8TargetString, const UnicodeBuffer::CgsUtf8 *  lpUtf8SourceString, const int32_t  lnTargetStringSize, UnicodeBuffer::CgsUtf8 **  lpUtf8Args, uint8_t  luArgCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:605
		int32_t lnTargetCount;

		// CgsUnicode.cpp:608
		const UnicodeBuffer::CgsUtf8 * lpUtf8OriginalString;

	}
	{
		// CgsUnicode.cpp:625
		UnicodeBuffer::CgsUtf8 * lpArgString;

	}
	{
		// CgsUnicode.cpp:623
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::IsValidUtf8Character(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:844
		const UnicodeBuffer::CgsUtf8 * lpUtf8OriginalString;

		{
			// CgsUnicode.cpp:852
			uint8_t luTrailBytes;

			// CgsUnicode.cpp:878
			uint8_t luI;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsUnicode::ConvertUtf8CharToUtf16Char(const UnicodeBuffer::CgsUtf8 *  lpUtf8Char) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:906
		CgsUtf32 lUtf32Char;

		// CgsUnicode.h:907
		uint8_t luExtraBytes;

		{
			// CgsUnicode.h:905
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsUnicode.h:908
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Font::FindFontChar(CgsUtf16  lUtf16Character) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFont.h:279
		uint32_t luHash;

		// CgsFont.h:281
		uint32_t luBeginIndex;

		// CgsFont.h:283
		uint32_t luEndIndex;

		// CgsFont.h:287
		uint32_t luGlyph;

		{
			// CgsFont.h:294
			CgsUtf16 lUtf16;

		}
	}
}

void CgsResource::Font::GetFontChar(const UnicodeBuffer::CgsUtf8 *  lpUtf8Char) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFont.h:204
		CgsUtf16 lUtf16UnicodeChar;

		// CgsFont.h:210
		const FontChar * lpFontChar;

	}
	CgsUnicode::ConvertUtf8CharToUtf16Char(/* parameters */);
	FindFontChar(/* parameters */);
	FindFontChar(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::FontResourceType::FixUp(void *  lpResource, uint32_t  luBaseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontResourceType.cpp:118
		Font * lpFont;

		// CgsFontResourceType.cpp:121
		const void * lpBase;

		// CgsFontResourceType.cpp:149
		uint32_t luIndex;

	}
	{
		// CgsFontResourceType.cpp:124
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::FontResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontResourceType.cpp:108
		uint32_t luBaseValue;

	}
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

void CgsResource::FontResourceType::Serialise(const void *  lpResource, const const Resource &  lSerialisedResource, const const ResourceDescriptor &  lSerialisedResourceDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontResourceType.cpp:45
		Font * lpFontIn;

		// CgsFontResourceType.cpp:46
		Font * lpFontOut;

		// CgsFontResourceType.cpp:48
		uint32_t luSizeOfFont;

		// CgsFontResourceType.cpp:49
		uint32_t luFontInBaseValue;

		// CgsFontResourceType.cpp:51
		Resource lResource;

	}
	rw::Resource::Resource(/* parameters */);
}

void CgsModule::ModuleSingleBuffered::GetOutputStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:370
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void CgsGraphics::FontModule::LoadResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::ModuleSingleBuffered::GetOutputStructure(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontModule.cpp:226
		const CgsModule::Event * lpEvent;

		// CgsFontModule.cpp:227
		const AcquireResourceResponse * lpAcquire;

		// CgsFontModule.cpp:228
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1024,16>::Clear() {
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

void CgsModule::VariableEventQueue<1024,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsGraphics::FontModule::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontModule.cpp:320
		OutputBuffer * lpOutput;

	}
}

void CgsModule::VariableEventQueue<1024,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:263
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1024,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void CgsGraphics::FontModule::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontModule.cpp:362
		InputBuffer * lpInput;

		// CgsFontModule.cpp:363
		OutputBuffer * lpOutput;

		// CgsFontModule.cpp:366
		bool lbDone;

	}
}

void CgsGraphics::FontModule::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontModule.cpp:340
		InputBuffer * lpInput;

		// CgsFontModule.cpp:341
		OutputBuffer * lpOutput;

		// CgsFontModule.cpp:344
		bool lbDone;

	}
}

void CgsModule::VariableEventQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsGraphics::FontModule::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontModule.cpp:284
		OutputBuffer * lpOutput;

	}
}

void CgsModule::ModuleSingleBuffered::LockOutputForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:284
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::ModuleSingleBuffered::LockInputForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:232
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::ModuleSingleBuffered::UnlockInputForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:267
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::ModuleSingleBuffered::UnlockOutputForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:320
		CgsDev::StrStream lStrStream;

	}
}

void CgsGraphics::FontModule::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontModule.cpp:185
		OutputBuffer * lpOutput;

		// CgsFontModule.cpp:186
		InputBuffer * lpInput;

		CgsModule::ModuleSingleBuffered::LockOutputForWrite(/* parameters */);
	}
	CgsModule::ModuleSingleBuffered::LockInputForRead(/* parameters */);
	CgsModule::ModuleSingleBuffered::UnlockInputForRead(/* parameters */);
	CgsModule::ModuleSingleBuffered::UnlockOutputForWrite(/* parameters */);
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
}

void CgsUnicode::IncrementUtf8Pointer(const UnicodeBuffer::CgsUtf8 *  lpUtf8StringPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:864
		CgsDev::StrStream lStrStream;

	}
}

void CgsUnicode::IsValidUtf8String(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsUnicode::ConvertUtf8ToUtf16(const UnicodeBuffer::CgsUtf8 *  lpUtf8Source, CgsUtf16 *  lpUtf16Target) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:752
		CgsUtf32 lUtf32Char;

		// CgsUnicode.cpp:753
		uint8_t luExtraBytes;

	}
	{
		// CgsUnicode.cpp:754
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsUnicode.cpp:748
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::StringLength(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.cpp:84
		uint32_t luLen;

	}
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsUnicode::DecrementUtf8Pointer(const UnicodeBuffer::CgsUtf8 **  lppUtf8StringPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

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

rw::math::fpu::EPSILON = [52, 0, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

