// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsAptRender.h:65
	namespace AptCallbackRender {
		// CgsAptRender.cpp:445
		// Declaration
		extern void DrawRenderingUnit(AptAssetRenderingUnit, AptMaskRenderOperation, int32_t) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsAptRender.cpp:500
			using namespace CgsDev::Message;

		}

		// CgsAptRender.cpp:238
		extern void FreeTexture(AptAssetTexture);

		// CgsAptRender.cpp:353
		extern void FreeRenderingUnit(AptAssetRenderingUnit);

		// CgsAptRender.cpp:66
		extern void SetBackgroundColour(uint32_t);

		// CgsAptRender.cpp:118
		extern void DeallocateString(AptAssetString, uint32_t);

		// CgsAptRender.cpp:255
		extern void BindTexture(AptAnimationUserData, int32_t, AptAssetTexture);

		// CgsAptRender.cpp:318
		extern AptAssetRenderingUnit LoadRenderingUnit(AptAnimationUserData, int32_t);

		// CgsAptRender.cpp:366
		extern void SetVertexMatrix(AptMatrix *);

		// CgsAptRender.cpp:409
		extern void SetColourTransform(AptCXForm *);

		// CgsAptRender.cpp:575
		extern float GetStageHeight();

		// CgsAptRender.cpp:590
		extern float GetStageWidth();

		// CgsAptRender.cpp:82
		extern AptAssetString AllocateString(AptAllocateStringParameters *);

		// CgsAptRender.cpp:190
		extern AptAssetTexture LoadTexture(AptAnimationUserData, int32_t);

		// CgsAptRender.cpp:140
		extern void DrawString(AptAssetString, AptMaskRenderOperation, int32_t);

	}

	// CgsAptRender.cpp:296
	extern int32_t _FindGeometryFile(const void *, const void *);

	// CgsAptRender.cpp:35
	const uint32_t KU_FONT_HEIGHT_SMALL = 20;

	// CgsAptRender.cpp:36
	const uint32_t KU_FONT_HEIGHT_MEDIUM = 35;

	// CgsAptRender.cpp:37
	const uint32_t KU_FONT_HEIGHT_LARGE = 55;

}

// CgsAptRender.cpp:919
void CgsGui::AptRenderHandler::DebugRotateToNextFont() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptRender.cpp:939
void CgsGui::AptRenderHandler::DebugRotateToNextFontEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptRender.cpp:960
void CgsGui::AptRenderHandler::DebugChangeFontSpacing(float32_t  lfSpacing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptRender.cpp:635
void CgsGui::AptRenderHandler::DestroyAptString(CgsAptString *  lpAptString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:638
		int32_t liAptStringIndex;

	}
}

// CgsAptRender.cpp:609
void CgsGui::AptRenderHandler::GetUnusedAptString(const UnicodeBuffer::CgsUtf8 *&  lpcStringPointer, const char *  lpcStringToAllocate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:612
		int32_t liAptStringIndex;

	}
	{
		// CgsAptRender.cpp:623
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptRender.cpp:852
void CgsGui::AptRenderHandler::Construct(ImRendererSet *  lpImRenderers, TextRenderer *  lpTextRenderer, LanguageManager *  lpLanguageManager, const CgsGui::FontCollection *  lpFonts, float32_t  lfAspectRatio, const RGBA *  lpAlternateTextColours, int32_t  liNumAlternateColours) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:874
		float32_t lAptAspectRadio;

		// CgsAptRender.cpp:876
		float lYScale;

		// CgsAptRender.cpp:891
		int32_t liAptStringIndex;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::Construct(/* parameters */);
	CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Init(/* parameters */);
	CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::Construct(/* parameters */);
	CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Init(/* parameters */);
	SetWhiteTexture(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:859
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:863
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptRender.cpp:869
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptRender.cpp:658
void CgsGui::AptRenderHandler::Render(GuiGeometryFile *  lpGeometry, int32_t  liShaderIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptRender.cpp:662
		GuiGeometryMesh * lpGuiMesh;

		// CgsAptRender.cpp:679
		AptRenderHandler::Im2dRendererType * lpImRenderer;

		// CgsAptRender.cpp:686
		renderengine::PrimitiveType lePrimitiveType;

		// CgsAptRender.cpp:688
		uint32_t liMeshIndex;

	}
	GetIm2dRendererType(/* parameters */);
	GetIm3dRendererType(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	GetIm2dRendererType(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	{
		// CgsAptRender.cpp:772
		renderengine::Texture * lpTexture;

		// CgsAptRender.cpp:774
		CgsGui::AptRenderHandler::TexturePointerAddress lTexturePointerAddress;

		// CgsAptRender.cpp:778
		TextureState *const* lppTextureState;

		// CgsAptRender.cpp:779
		TextureState * lpTextureState;

		CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Get(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	}
	{
		// CgsAptRender.cpp:787
		Parameters lTextureStateParams;

		// CgsAptRender.cpp:794
		Resource lTextureStateResource;

		// CgsAptRender.cpp:798
		HashTableElement<uint32_t,renderengine::TextureState*> lElement;

		// CgsAptRender.cpp:800
		CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*> * lpElement;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		rw::GetDefaultAllocator(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::Append(/* parameters */);
		CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::GetLength(/* parameters */);
		CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::operator[](/* parameters */);
		CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Insert(/* parameters */);
		CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*>::Set(/* parameters */);
		CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*>::GetKey(/* parameters */);
		{
			CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetHead(/* parameters */);
			CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetTail(/* parameters */);
			{
				CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetNext(/* parameters */);
			}
		}
	}
	{
		// CgsAptRender.cpp:731
		renderengine::Texture * lpTexture;

		// CgsAptRender.cpp:733
		CgsGui::AptRenderHandler::TexturePointerAddress lTexturePointerAddress;

		// CgsAptRender.cpp:737
		TextureState *const* lppTextureState;

		// CgsAptRender.cpp:738
		TextureState * lpTextureState;

		CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Get(/* parameters */);
		{
			// CgsAptRender.cpp:746
			Parameters lTextureStateParams;

			// CgsAptRender.cpp:753
			Resource lTextureStateResource;

			// CgsAptRender.cpp:757
			HashTableElement<uint32_t,renderengine::TextureState*> lElement;

			// CgsAptRender.cpp:759
			CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*> * lpElement;

			renderengine::TextureState::Parameters::Parameters(/* parameters */);
			renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
			renderengine::TextureState::Parameters::SetTexture(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
			rw::GetDefaultAllocator(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
			CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::Append(/* parameters */);
			CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::GetLength(/* parameters */);
			CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::operator[](/* parameters */);
			CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::Insert(/* parameters */);
			CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*>::Set(/* parameters */);
			CgsContainers::HashTableElement<uint32_t,renderengine::TextureState*>::GetKey(/* parameters */);
			{
				CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetHead(/* parameters */);
				CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetTail(/* parameters */);
				{
					CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::GetNext(/* parameters */);
				}
			}
		}
	}
	{
		// CgsAptRender.cpp:692
		CgsDev::StrStream lStrStream;

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
	}
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::AddHead(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::AddTail(/* parameters */);
	{
		// CgsAptRender.cpp:664
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsAptRender.cpp:665
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsAptRender.cpp:666
		CgsDev::StrStream lStrStream;

	}
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >::AddBefore(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsAptRender.cpp:41
// CgsAptRender.cpp:42
// CgsAptRender.cpp:43
