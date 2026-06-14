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

void CgsResource::ResourcePtr<BrnFlapt::FlaptFile>::operator=(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::CreateFromPointer(const BaseResourcePtr *  lpSrcPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::Construct(BrnFlapt::MovieClipInstance *  lpMovieClipInst, Im2dTransform *  lpTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptRenderer::IsRenderingMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipInstance::SetVisible(bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsGui::AptAux::GetRenderHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::TextFieldInstance::ChangeText(const UnicodeBuffer::CgsUtf8 *  lpNewText, bool  lbIsLocalised) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptFileResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptFileResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptFileResourceType.cpp:77
		const FlaptFile * lpFlaptFile;

	}
}

void BrnFlapt::FlaptFileResourceType::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptFileResourceType.cpp:99
		const FlaptFile * lpFlaptFile;

	}
}

void rw::RwPtrToOffset<void>(const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::MovieClip>(MovieClip *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::MovieClip>(const MovieClip *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::MovieClip>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::MovieClip>(MovieClip *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptRenderer::GetFonts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::ColourTransform>(ColourTransform *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::ColourTransform>(const ColourTransform *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::ColourTransform>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::ColourTransform>(ColourTransform *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::Transform>(Transform *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::Transform>(const Transform *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::Transform>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::Transform>(Transform *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::FScriptCommand>(FScriptCommand *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::FScriptCommand>(const FScriptCommand *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::FScriptCommand>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::FScriptCommand>(FScriptCommand *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<uint16_t>(uint16_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::core::atom::AtomID>(const rw::core::atom::StaticAtomTable::Members::AtomID *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::core::atom::AtomID>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<uint16_t>(uint16_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::TextField>(TextField *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::TextField>(const TextField *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::TextField>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::TextField>(TextField *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::Mesh>(Mesh *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::Mesh>(const Mesh *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::Mesh>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::Mesh>(Mesh *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::KeyFrameAnims>(KeyFrameAnims *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::KeyFrameAnims>(const KeyFrameAnims *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::KeyFrameAnims>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::KeyFrameAnims>(KeyFrameAnims *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::RenderLayerKeyFrame>(RenderLayerKeyFrame *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::RenderLayerKeyFrame>(const RenderLayerKeyFrame *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::RenderLayerKeyFrame>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::RenderLayerKeyFrame>(RenderLayerKeyFrame *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::RenderLayer>(RenderLayer *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::RenderLayer>(const RenderLayer *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::RenderLayer>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::RenderLayer>(RenderLayer *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::FlaptFile>(BrnFlapt::FlaptFile *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::FlaptFile>(const FlaptFile *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::FlaptFile>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::FlaptFile>(BrnFlapt::FlaptFile *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<char*>(char **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<char*>(char *const*  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<char*>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<char*>(char **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<char>(char *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<char>(const char *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<char>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<char>(char *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<uint8_t>(uint8_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<uint8_t>(const uint8_t *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<uint8_t>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<uint8_t>(uint8_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsUnicode::CgsUtf8*>(UnicodeBuffer::CgsUtf8 **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsUnicode::CgsUtf8*>(UnicodeBuffer::CgsUtf8 *const*  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsUnicode::CgsUtf8*>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsUnicode::CgsUtf8*>(UnicodeBuffer::CgsUtf8 **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::TriggerParameters>(TriggerParameters *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::TriggerParameters>(const TriggerParameters *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::TriggerParameters>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::TriggerParameters>(TriggerParameters *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::IndexPath>(IndexPath *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::IndexPath>(const IndexPath *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::IndexPath>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::IndexPath>(IndexPath *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::HashedString>(HashedString *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::HashedString>(const HashedString *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::HashedString>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::HashedString>(HashedString *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::FontStyle>(FontStyle *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::FontStyle>(const FontStyle *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::FontStyle>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::FontStyle>(FontStyle *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::GuiVertex>(FlaptFile::GuiVertex *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::GuiVertex>(const FlaptFile::GuiVertex *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::GuiVertex>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::GuiVertex>(FlaptFile::GuiVertex *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnFlapt::GuiTexture*>(FlaptFile::GuiTexture **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnFlapt::GuiTexture*>(FlaptFile::GuiTexture *const*  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnFlapt::GuiTexture*>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnFlapt::GuiTexture*>(FlaptFile::GuiTexture **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint16_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptFileInstance::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnFlapt::TextFieldInstance::GetTextObject() {
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

void CgsGraphics::TextObject::GetStringWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<char*>(const char **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<char>(const char *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const Vector4 &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::detail::EndianSwapArray<float>(float *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<uint8_t>(const uint8_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::Transform>(const Transform *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::ColourTransform>(const ColourTransform *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const float32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<const char>(const char *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<const char>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<const char>(const char *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<const char>(const const char *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<float>(const Vector2Template<float> &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::FlaptFile>(const BrnFlapt::FlaptFile *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<uint16_t>(const uint16_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::RenderLayer>(const RenderLayer *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::RenderLayerKeyFrame>(const RenderLayerKeyFrame *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::KeyFrameAnims>(const KeyFrameAnims *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::FScriptCommand>(const FScriptCommand *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::HashedString>(const HashedString *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::Mesh>(const Mesh *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::TextField>(const TextField *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::Matrix33Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetRow(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetElem(int  row, int  column, float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33.h:254
		const Vector3Template<float> & vector;

	}
}

void rw::math::fpu::Mult<float>(const const Matrix33Template<float> &  m, const const Matrix33Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation.h:74
	Matrix33Template<float> & result;

	{
		// matrix33_operation.h:74
		Matrix33Template<float> result;

		{
			// matrix33_operation.h:75
			int i;

			Matrix33Template<float>::GetRow(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
		}
	}
}

void rw::math::fpu::operator*<float>(const const Matrix33Template<float> &  a, const const Matrix33Template<float> &  b) {
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
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void rw::RwPtrSubtractOffset<const char>(const char *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<const char>(const char *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<uint8_t>(uint8_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<uint8_t>(uint8_t *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::Transform>(Transform *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::Transform>(Transform *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::ColourTransform>(ColourTransform *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::ColourTransform>(ColourTransform *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::FScriptCommand>(FScriptCommand *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::FScriptCommand>(FScriptCommand *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<char>(char *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<char>(char *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::FlaptFile>(BrnFlapt::FlaptFile *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::FlaptFile>(BrnFlapt::FlaptFile *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::core::atom::AtomID>(rw::core::atom::StaticAtomTable::Members::AtomID *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<rw::core::atom::AtomID>(rw::core::atom::StaticAtomTable::Members::AtomID *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::RenderLayer>(RenderLayer *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::RenderLayer>(RenderLayer *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::RenderLayerKeyFrame>(RenderLayerKeyFrame *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::RenderLayerKeyFrame>(RenderLayerKeyFrame *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::KeyFrameAnims>(KeyFrameAnims *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::KeyFrameAnims>(KeyFrameAnims *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::HashedString>(HashedString *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::HashedString>(HashedString *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::Mesh>(Mesh *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::Mesh>(Mesh *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::TextField>(TextField *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::TextField>(TextField *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<char*>(char **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<char*>(char **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::MovieClip>(MovieClip *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::MovieClip>(MovieClip *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::GuiTexture*>(FlaptFile::GuiTexture **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::GuiTexture*>(FlaptFile::GuiTexture **  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::GuiVertex>(FlaptFile::GuiVertex *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::GuiVertex>(FlaptFile::GuiVertex *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::FontStyle>(FontStyle *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::FontStyle>(FontStyle *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::IndexPath>(IndexPath *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::IndexPath>(IndexPath *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<BrnFlapt::TriggerParameters>(TriggerParameters *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnFlapt::TriggerParameters>(TriggerParameters *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsUnicode::CgsUtf8*>(UnicodeBuffer::CgsUtf8 **  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsUnicode::CgsUtf8*>(UnicodeBuffer::CgsUtf8 **  ptr, const void *  base) {
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

void BrnFlapt::FlaptFileResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnFlaptFileResourceType.cpp:61
	ResourceDescriptor & lDescriptor;

	{
		// BrnFlaptFileResourceType.cpp:57
		const FlaptFile * lpFlaptFile;

		// BrnFlaptFileResourceType.cpp:61
		ResourceDescriptor lDescriptor;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void BrnFlapt::MovieClip::GetNumObjects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::GetIdentity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::operator=(const const Im2dTransform &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid<float>(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid(float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsNaN(float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsNaN(double  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_platform.h:21
		bool result;

	}
}

void rw::math::fpu::Matrix33Template<float>::YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid<float>(const const Matrix33Template<float> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsValid<float>(/* parameters */);
	rw::math::fpu::IsValid<float>(/* parameters */);
	IsValid(/* parameters */);
	Matrix33Template<float>::YAxis(/* parameters */);
	rw::math::fpu::IsValid<float>(/* parameters */);
	Matrix33Template<float>::ZAxis(/* parameters */);
	IsValid(/* parameters */);
	IsValid(/* parameters */);
	IsValid(/* parameters */);
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<std::uint16_t,2>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<std::uint16_t,2>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Im2dTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector2_XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::GetVector2_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::Construct(const rw::math::vpu::Vector2  lOrigin, const rw::math::vpu::Vector2  lRight, const rw::math::vpu::Vector2  lUp, const float  lrZ, const rw::math::vpu::Vector4  lColourShift, const rw::math::vpu::Vector4  lColourScale) {
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

void CgsGraphics::Im2dTransform::TransformByAspectRatio() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::Transform(const const Matrix33Template<float> &  lMatrix, const Im2dTransform &  lOutTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dTransform.h:201
		Im2dTransform::Matrix33 lSrc;

		// CgsIm2dTransform.h:203
		Im2dTransform::Matrix33 lTrans;

		// CgsIm2dTransform.h:204
		Im2dTransform::Matrix33 lInverse;

		// CgsIm2dTransform.h:208
		float32_t a;

		// CgsIm2dTransform.h:209
		float32_t b;

		// CgsIm2dTransform.h:210
		float32_t c;

		// CgsIm2dTransform.h:211
		float32_t d;

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

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::fpu::Matrix33Template<float>::SetX(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::operator=(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetY(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetZ(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern Matrix33Template<float> & operator=(const const Matrix33Template<float> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::SetTransform(const const Matrix33Template<float> &  lSrc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Push(const const Im2dTransform &  lEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptFileInstance::GetRootMovieClip() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnFlaptFileInstance.h:138
	MovieClipRef lRef;

	{
		// BrnFlaptFileInstance.h:138
		MovieClipRef lRef;

	}
}

void CgsResource::ResourcePtr<BrnFlapt::FlaptFile>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClip::IsComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClip::GetKeyframeForFrame(uint32_t  luFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptFile.h:631
		CgsDev::StrStream lStrStream;

	}
}

void BrnFlapt::MovieClipInstance::SetChangedFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClip::FindLabelledFrameIndex(uint32_t  luLabelHash, const char *  lpcDEBUGName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptFile.h:654
		uint32_t luLabel;

		// BrnFlaptFile.h:655
		const HashedString * lpLabel;

		{
			// BrnFlaptFile.h:667
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnFlapt::MovieClipInstance::ClearStopped() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipInstance::SetStopped() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipInstance::SetParameterIndex(const uint16_t  luParameterIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipInstance::ClearChangedFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipInstance::DidFrameChange() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Min(uint32_t  lu0, uint32_t  lu1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBranchlessOperations.h:81
		int64_t li64_0;

		// CgsBranchlessOperations.h:82
		int64_t li64_1;

		// CgsBranchlessOperations.h:83
		int64_t li64Diff;

		// CgsBranchlessOperations.h:84
		int64_t li64Sign;

		// CgsBranchlessOperations.h:85
		uint32_t luResult;

	}
}

void rw::core::stdc::Min(unsigned int  a, unsigned int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipInstance::IsStopped() {
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

void BrnFlapt::MovieClipInstance::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(int32_t  liMonitorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnFlapt::FlaptFile>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::TextFieldRef::Construct(BrnFlapt::TextFieldInstance *  lpTextFieldInst, BrnFlapt::MovieClipInstance *  lpParentMovie, Im2dTransform *  lpTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::TextFieldInstance::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CgsAptString::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptString.h:129
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsEqual(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::SetAutosize(bool  lbCanAutosize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<std::uint16_t,2>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<std::uint16_t,2>::Push(const const uint16_t &  lEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRendererBase::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsContainers::Stack<std::uint16_t,2>::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Basic2dColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Basic2dColouredTexturedVertex(const const CgsGraphics::Basic2dColouredTexturedVertex &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CgsGraphics::Basic2dColouredTexturedVertex & operator=(const const CgsGraphics::Basic2dColouredTexturedVertex &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Peek() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::IsEmpty() {
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

void CgsContainers::Stack<std::uint16_t,2>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<std::uint16_t,2>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsGraphics::Im2dRenderBuffer::BatchTransformTextureBlendRenderStatic(const const Im2dTransform &  lTransform, renderengine::Texture *  lpTexture, const BlendState *  lpBlendState, renderengine::PrimitiveType  lePrimitiveType, const GuiGeometryMesh::Im2dVertex *  lpVertices, uint32_t  luNumVertices, uint8_t  luFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:276
		ImCommandBatchTransformTextureBlendRender * lpCommand;

	}
}

void CgsGraphics::Im2dRenderBuffer::SetTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:161
		ImCommandSetTransform * lpCommand;

	}
}

void CgsGraphics::Im2dRenderBuffer::PopMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<std::uint16_t,2>::Peek() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<std::uint16_t,2>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::RenderLayer::IsMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisW, VectorAxisW>(VecFloatRef<VectorAxisW> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void BrnFlapt::FlaptRenderer::PushTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptRenderer.h:222
		Im2dTransform lCurrentTransform;

		// BrnFlaptRenderer.h:223
		Im2dTransform * lpDestTransform;

	}
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Grow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::Transform(const const Im2dTransform &  lLhs, const Im2dTransform &  lOutTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dTransform.h:276
		VectorIntrinsicUnion::VectorIntrinsic lvLhsRightUp;

		// CgsIm2dTransform.h:277
		VectorIntrinsicUnion::VectorIntrinsic lvRightUp;

		// CgsIm2dTransform.h:278
		VectorIntrinsicUnion::VectorIntrinsic lvLhsRight;

		// CgsIm2dTransform.h:279
		VectorIntrinsicUnion::VectorIntrinsic lvLhsUp;

		// CgsIm2dTransform.h:283
		VectorIntrinsicUnion::VectorIntrinsic lvRX;

		// CgsIm2dTransform.h:284
		VectorIntrinsicUnion::VectorIntrinsic lvRY;

		// CgsIm2dTransform.h:285
		VectorIntrinsicUnion::VectorIntrinsic lvUX;

		// CgsIm2dTransform.h:286
		VectorIntrinsicUnion::VectorIntrinsic lvUY;

		// CgsIm2dTransform.h:287
		VectorIntrinsicUnion::VectorIntrinsic lvRXTimesRight;

		// CgsIm2dTransform.h:288
		VectorIntrinsicUnion::VectorIntrinsic lvRYTimesUp;

		// CgsIm2dTransform.h:292
		VectorIntrinsicUnion::VectorIntrinsic lvUXTimesRight;

		// CgsIm2dTransform.h:293
		VectorIntrinsicUnion::VectorIntrinsic lvUYTimesUp;

		// CgsIm2dTransform.h:297
		VectorIntrinsicUnion::VectorIntrinsic lvNewRight;

		// CgsIm2dTransform.h:298
		VectorIntrinsicUnion::VectorIntrinsic lvNewUp;

		// CgsIm2dTransform.h:302
		VectorIntrinsicUnion::VectorIntrinsic lvOutRightUp;

		// CgsIm2dTransform.h:305
		VectorIntrinsicUnion::VectorIntrinsic lvOriginX;

		// CgsIm2dTransform.h:306
		VectorIntrinsicUnion::VectorIntrinsic lvOriginY;

		// CgsIm2dTransform.h:307
		VectorIntrinsicUnion::VectorIntrinsic lvXTimesRight;

		// CgsIm2dTransform.h:308
		VectorIntrinsicUnion::VectorIntrinsic lvYTimesUp;

		// CgsIm2dTransform.h:312
		VectorIntrinsicUnion::VectorIntrinsic lvOutOrigin;

		// CgsIm2dTransform.h:313
		VectorIntrinsicUnion::VectorIntrinsic lvOutColourScale;

		// CgsIm2dTransform.h:314
		VectorIntrinsicUnion::VectorIntrinsic lvOutColourShift;

	}
}

void rw::math::vpl::VecGetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecPermute(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  permuteConstant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecSplat_Word<0>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:375
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecSplat_Word<1>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:375
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecSplat_Word<2>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:375
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecSplat_Word<3>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:375
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecMult(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:235
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecAdd(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptRenderer::PopTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::RenderLayer::ShouldPopMaskAfter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnFlapt::FlaptFile>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void rw::EndianSwap<BrnFlapt::MovieClip>(const MovieClip *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::GuiTexture*>(const FlaptFile::GuiTexture **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::GuiVertex>(const FlaptFile::GuiVertex *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::FontStyle>(const FontStyle *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::IndexPath>(const IndexPath *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnFlapt::TriggerParameters>(const TriggerParameters *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptFileResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptFileResourceType.cpp:160
		BrnFlapt::FlaptFile * lpData;

	}
}

void BrnFlapt::FlaptFileResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptFileResourceType.cpp:176
		BrnFlapt::FlaptFile * lpData;

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

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

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

