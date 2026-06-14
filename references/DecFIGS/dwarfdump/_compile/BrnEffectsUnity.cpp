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

// Declaration
struct CgsRenderTarget {
public:
	// CgsRenderTarget.h:356
	RenderTarget * GetRenderTarget();

}

struct sParticleEmitterClone;

struct iEmitterVisitor;

struct cLionFog;

struct cLionLightBehaviour;

struct iLionPosEvaluator;

struct cLionParticleEffectManager;

struct cParticleWaveForm;

void EA::Allocator::ICoreAllocator::~ICoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Allocator::ICoreAllocator::~ICoreAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
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

void CgsCore::SnPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:129
		va_list lArgument;

		// CgsStringUtils.h:130
		int32_t lNumBytesCopied;

	}
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Allocator::IAllocator::~IAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Allocator::IAllocator::~IAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleRender::~cParticleRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __tcf_0() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::Construct(EffectsModule *  lpEffectsModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::SetupJumpMenu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::SetupBoostMenu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::SetupLionMenu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::SetupPropMenu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BloomData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::VignetteData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::DepthOfFieldData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BlurData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::TintData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::TintData2d::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsStateMachine::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsStateMachine::SetState(BrnEffects::EffectsState  lState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::DumpPlayingEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::DebugMemoryInit(EffectsModule *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::RestartEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::OnFireDebugEffect(const ParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::JunkyardVfxStringToFloat(const char *const  lpacString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2368
		const char * lpcChar;

		// EffectsModule.cpp:2369
		float32_t lfSign;

		// EffectsModule.cpp:2375
		float32_t lfValue;

	}
	{
		// EffectsModule.cpp:2387
		float32_t lfDecimal;

	}
}

void BrnEffects::EffectsStateMachine::SetStateTimer(float32_t  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsStateMachine::SetState(BrnEffects::EffectsState  lState, const RaceCarParticleEffectHelper &  lEffectHelper, const BrnEffects::CarState &  lCarState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsStateMachine::OnTick(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsStateMachine::OnConstruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BoostStateMachine::OnConstruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:83
		uint32_t luBoostEffect;

	}
}

void BrnEffects::JumpStateMachine::OnTick(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::LionParticleRender::~LionParticleRender(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::IInternalAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:117
		void * lpAddress;

	}
}

void BrnParticle::IInternalAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags, unsigned int  align, unsigned int  alignOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::IInternalAllocator::Alloc(size_t  size, const const TagValuePair &  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:131
		void * lpAddress;

	}
}

void BrnParticle::IInternalAllocator::Free(void *  block, size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::IInternalAllocator::AddRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::IInternalAllocator::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SuspendPlayingEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1906
		uint32_t luCount;

	}
}

void CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:683
		int lnCount;

	}
	{
		// ParticleModule.cpp:695
		int lnCount;

	}
	{
		// ParticleModule.cpp:703
		int lnCount;

	}
}

void BrnParticle::ParticleModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:621
		int lnCount;

	}
	{
		// ParticleModule.cpp:628
		int lnCount;

	}
	{
		// ParticleModule.cpp:635
		int lnCount;

	}
}

void rw::RGBA::RGBA() {
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

void BrnParticle::Native::Convert(const const RwRGBAReal &  lArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnSimpleParticleRenderer.cpp:133
	RGBA lResult;

	{
		// BrnSimpleParticleRenderer.cpp:133
		RGBA lResult;

		// BrnSimpleParticleRenderer.cpp:135
		const float32_t lf255;

		rw::RGBA::SetAlpha(/* parameters */);
	}
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemAlign<renderengine::CoronaManager>(CoronaManager *  ptr, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:433
		const SPU::HostPtr alignMask;

	}
}

void BrnEffects::WheelStateMachine::WheelStateMachine(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BurstAccumulator::Construct(const float32_t  lfMinBurstSize, const float32_t  lfMaxBurstSize, const float32_t  lfBurstTimeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnParticle::Native::Convert(const const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &  lArg, const RwRGBA &  lResult) {
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

void CgsNumeric::Random::RandomFloat(float_t  lfMin, float_t  lfMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SpawnWheelSmoke(const rw::math::vpu::Vector3  lPoint, const rw::math::vpu::Vector3  lVelocity, const SimpleParticleBatch::ENativeParticleType  lType, const float32_t  lfSizeScale, const float32_t  lfSpawnTime, const float32_t  lfAngularVelocityScale, const bool  lbReverseRotation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2110
		float32_t lfRandomRotationalSpeed;

	}
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
}

void BrnEffects::BrnCrashTrianglePackedFormat::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::Convert(const const RwRGBA &  lArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSimpleParticleRenderer.cpp:120
		const float32_t lfOneOver255;

	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
}

void rw::math::fpu::Vector3Template<float>::SetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Set(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::StopLionEffect(LionEffect *const  lpEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BrnGlassSmashEffect::Initialise(uint32_t  luEffectInstance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailRenderer::Update(float32_t  lfTime, const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:497
		VecFloat determinant;

	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m, const VecFloat &  determinant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic det;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic xAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic yAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic zAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic wAxisResult;

		{
			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic negatePos;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transX;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transY;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transZ;

			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic signMask;

			}
			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossYZ;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossZX;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossXY;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_x;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_y;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_z;

				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp0;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic reciprocal;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					{
						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						{
							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic estimate;

							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic vOne;

						}
					}
				}
			}
		}
	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:467
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector3_operation_inline.h:468
		VectorIntrinsicUnion::VectorIntrinsic divisor;

		{
			// vector3_operation_inline.h:470
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector3_operation_inline.h:470
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:470
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector3_operation_inline.h:470
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:470
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
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

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44Affine &  a, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44Affine &  m, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp0;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp1;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp2;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp3;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma0;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma1;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma2;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma3;

		// matrix44affine_operation_platform_inline.h:86
		VectorIntrinsicUnion::VectorIntrinsic bx;

		// matrix44affine_operation_platform_inline.h:87
		VectorIntrinsicUnion::VectorIntrinsic by;

		// matrix44affine_operation_platform_inline.h:88
		VectorIntrinsicUnion::VectorIntrinsic bz;

		// matrix44affine_operation_platform_inline.h:90
		VectorIntrinsicUnion::VectorIntrinsic zero;

	}
}

extern SparkFrameData & operator=(const const SparkFrameData &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::SparkFrameData::Set(const rw::math::vpu::Matrix44Affine &  lViewMatrix, const rw::math::vpu::Matrix44 &  lProjectionMatrix, const float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::TriangleLineSegIntersect(const rw::math::vpu::Vector4  v0x, const rw::math::vpu::Vector4  v0y, const rw::math::vpu::Vector4  v0z, const rw::math::vpu::Vector4  edge1x, const rw::math::vpu::Vector4  edge1y, const rw::math::vpu::Vector4  edge1z, const rw::math::vpu::Vector4  edge2x, const rw::math::vpu::Vector4  edge2y, const rw::math::vpu::Vector4  edge2z, const rw::math::vpu::Vector3  lineStart, const rw::math::vpu::Vector3  lineDelta, const Vector4 &  det, const Vector4 &  W1, const Vector4 &  W2, const Vector4 &  lineParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// trianglequery.h:893
	Mask4 resultValid;

	{
		// trianglequery.h:841
		Vector3 tVeca;

		// trianglequery.h:841
		Vector3 tVecb;

		// trianglequery.h:841
		Vector3 tVecc;

		// trianglequery.h:841
		Vector3 tVecd;

		// trianglequery.h:841
		Vector3 pVeca;

		// trianglequery.h:841
		Vector3 pVecb;

		// trianglequery.h:841
		Vector3 pVecc;

		// trianglequery.h:841
		Vector3 pVecd;

		// trianglequery.h:841
		Vector3 qVeca;

		// trianglequery.h:841
		Vector3 qVecb;

		// trianglequery.h:841
		Vector3 qVecc;

		// trianglequery.h:841
		Vector3 qVecd;

		// trianglequery.h:842
		Vector4 lo;

		// trianglequery.h:842
		Vector4 hi;

		// trianglequery.h:842
		Vector4 u;

		// trianglequery.h:842
		Vector4 v;

		// trianglequery.h:845
		Vector4 pVecX;

		// trianglequery.h:845
		Vector4 pVecY;

		// trianglequery.h:845
		Vector4 pVecZ;

		// trianglequery.h:851
		Vector4 rtIntDecEpsilonV4;

		// trianglequery.h:856
		Mask4 detValid;

		// trianglequery.h:863
		Vector4 tVecX;

		// trianglequery.h:863
		Vector4 tVecY;

		// trianglequery.h:863
		Vector4 tVecZ;

		// trianglequery.h:871
		Mask4 uValid;

		// trianglequery.h:875
		Vector4 qVecX;

		// trianglequery.h:875
		Vector4 qVecY;

		// trianglequery.h:875
		Vector4 qVecZ;

		// trianglequery.h:880
		Mask4 vValid;

		// trianglequery.h:884
		Vector4 t;

		// trianglequery.h:892
		Mask4 tValid;

		// trianglequery.h:893
		Mask4 resultValid;

	}
}

void rw::collision::CrossSoA(const rw::math::vpu::Vector3  v1, const rw::math::vpu::Vector4  v2x, const rw::math::vpu::Vector4  v2y, const rw::math::vpu::Vector4  v2z, const Vector4 &  outx, const Vector4 &  outy, const Vector4 &  outz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult<VectorAxisY>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisY> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:152
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:153
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector4_operation_inline.h:153
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::Mult<VectorAxisZ>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisZ> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:152
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:153
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector4_operation_inline.h:153
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::Subtract(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult<VectorAxisX>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisX> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:152
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:153
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector4_operation_inline.h:153
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::collision::DotSoA(const rw::math::vpu::Vector4  v1x, const rw::math::vpu::Vector4  v1y, const rw::math::vpu::Vector4  v1z, const rw::math::vpu::Vector4  v2x, const rw::math::vpu::Vector4  v2y, const rw::math::vpu::Vector4  v2z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// trianglequery.h:87
	Vector4 ret;

	{
		// trianglequery.h:87
		Vector4 ret;

	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:208
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::MultAdd(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b, const rw::math::vpu::Vector4  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:229
		VectorIntrinsicUnion::VectorIntrinsic ret;

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

void rw::math::vpu::CompGreaterThan(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:786
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:737
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:738
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:445
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  s, const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:633
		VectorIntrinsicUnion::VectorIntrinsic sVI;

		// vector4_operation_inline.h:635
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  s, const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:633
		VectorIntrinsicUnion::VectorIntrinsic sVI;

		// vector4_operation_inline.h:635
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  s, const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:633
		VectorIntrinsicUnion::VectorIntrinsic sVI;

		// vector4_operation_inline.h:635
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::CompGreaterEqual(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:801
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::CompLessEqual(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:793
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::And(const Mask4  a, const Mask4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// mask4_operation_inline.h:31
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::collision::CrossSoA(const rw::math::vpu::Vector4  v1x, const rw::math::vpu::Vector4  v1y, const rw::math::vpu::Vector4  v1z, const rw::math::vpu::Vector4  v2x, const rw::math::vpu::Vector4  v2y, const rw::math::vpu::Vector4  v2z, const Vector4 &  outx, const Vector4 &  outy, const Vector4 &  outz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::DotSoA(const rw::math::vpu::Vector3  v1, const rw::math::vpu::Vector4  v2x, const rw::math::vpu::Vector4  v2y, const rw::math::vpu::Vector4  v2z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// trianglequery.h:97
	Vector4 ret;

	{
		// trianglequery.h:97
		Vector4 ret;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::CompAnyTrue(const Mask4  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// mask4_operation_inline.h:68
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// mask4_operation_inline.h:69
			VectorIntrinsicUnion::VectorIntrinsic anytrueGatheredBytes;

		}
	}
}

void rw::math::vpu::GetVector4_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Transpose(const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44_operation_platform_inline.h:129
	Matrix44 & r;

	{
		// matrix44_operation_platform_inline.h:129
		Matrix44 r;

		{
			// matrix44_operation_platform_inline.h:130
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// matrix44_operation_platform_inline.h:130
			VectorIntrinsicUnion::VectorIntrinsic temp1;

			// matrix44_operation_platform_inline.h:130
			VectorIntrinsicUnion::VectorIntrinsic temp2;

			// matrix44_operation_platform_inline.h:130
			VectorIntrinsicUnion::VectorIntrinsic temp3;

		}
	}
}

void rw::math::vpu::CrossXYZ(const rw::math::vpu::Vector4  v0, const rw::math::vpu::Vector4  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:414
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:415
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector4_operation_inline.h:415
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector4_operation_inline.h:415
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector4_operation_inline.h:415
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
	}
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:278
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:279
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector4_operation_inline.h:279
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz_ww;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic zz_ww;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic xxpluszz_yyplusww;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic yyplusww;

				}
				{
					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector4_operation_inline.h:279
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector4_operation_inline.h:279
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:279
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector4_operation_inline.h:279
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector4_operation_inline.h:279
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator/=(const Vector4 &  v, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:762
		VectorIntrinsicUnion::VectorIntrinsic reciprocal;

		{
			// vector4_operation_inline.h:762
			VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

			// vector4_operation_inline.h:762
			VectorIntrinsicUnion::VectorIntrinsic vOne;

			{
				// vector4_operation_inline.h:762
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// vector4_operation_inline.h:762
				VectorIntrinsicUnion::VectorIntrinsic vOne;

			}
		}
	}
}

void rw::math::vpu::CompLessThan(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:305
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::And(const MaskScalar  a, const MaskScalar  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// maskscalar_operation_inline.h:31
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Select(const MaskScalar  mask, const rw::math::vpu::Vector3  trueValue, const rw::math::vpu::Vector3  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:772
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Select(const MaskScalar  mask, const VecFloat  trueValue, const VecFloat  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:350
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void Attrib::Gen::nativeparticleparams::StartColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::GetLayoutPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::MidColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::EndColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::TextureName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::UseDrag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::ParticleBlend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::LightingMin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::LightingMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::DragDuration() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::DragInitialVelocityScale() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::DragTerminalVelocityScale() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::Gravity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::LifeTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::RotationalSpeedMin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::RotationalSpeedMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::StartSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::MidSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::EndSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::MidTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::NearFade() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::FarFade() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::NearClip() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::FarClip() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::MaxScreenSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::NumberOfUVTilesWide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::NumberOfUVTilesHigh() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void cParticleRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cVector::cVector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleRender::Instance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleRender.h:167
		extern cParticleRender m_instance;

		{
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
		}
	}
}

void cParticleRender::Instance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnDirector::Camera::Camera::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsResource::SafeResourceHandle<renderengine::Texture>::SafeResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<renderengine::Texture>::operator=(const const SafeResourceHandle<renderengine::Texture> &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::CreateFromHandle(const ResourceHandle *  lpSrcHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cTime::~cTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __tcf_1() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::GetNextBucket() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::GetFinalParticleBirthTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucketManager::FreeBucket(FXBucketBase *  lpBucket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void cParticleMaterial::GetShaderType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::operator==<3u>(const const BaseResources<3u> &  lhs, const const BaseResources<3u> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:503
		uint32_t i;

	}
}

void EffectsVertexBufferIterator::SetBaseAddress(const uint8_t *const  lpStartAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EffectsVertexBufferIterator::SetCurrentAddress(uint8_t *const  lpCurrentAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexIteratorBaseClass::SetBuffer(void *const  m_buf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EffectsVertexBufferIterator::SetTopAddress(const uint8_t *const  lpTopAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EffectsVertexBufferIterator::SetStride(const uint32_t  luVertexStride) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::RaceCarParticleEffectHelper::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::JumpParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugJumping::IsForceJumping() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsStateMachine::Tick(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsStateMachine.cpp:40
		const BrnEffects::EffectsDebugComponent * lDebugComponent;

		// EffectsStateMachine.cpp:49
		bool lbTimeSignal;

		// EffectsStateMachine.cpp:62
		BrnEffects::EffectsState lNextState;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailSegmentCollection::ReadSegmentPosition(int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnParticle::Native::TrailSegmentCollection::WriteSegmentTangent(const rw::math::vpu::Vector3  lTangent, int32_t  lnIndex) {
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

void BrnParticle::Native::TrailSegmentCollection::WriteSegmentPosition(const rw::math::vpu::Vector3  lPosition, int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailSegmentCollection::WriteSegmentTime(const VecFloat  lvfTime, int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailSegmentCollection::WriteSegmentStrength(const VecFloat  lvfStrength, int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator=(const const SafeResourceHandle<BrnParticle::TextureNameMap> &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EffectsVertexBufferIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EffectsVertexBufferIterator::GetCurrentAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBuffer.h:126
		const uint8_t *const lpCurrentAddress;

	}
}

void EffectsVertexBufferIterator::GetBaseAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void iParticleRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cMatrix::cMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::LionParticleRender::LionParticleRender(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::LionBlendRenderer::GetVertexStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::LionBlendVertex::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendVertex.h:94
		const uint32_t luStride;

	}
}

void BrnEffects::ActiveRaceCarData::IsCrashing() {
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

void BrnEffects::ActiveRaceCarData::JustStartedCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::ActiveRaceCarData::WasCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::SizeAlign(uint32_t  size, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:401
		const uint32_t alignMask;

	}
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

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::GetNextBucket() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::GetFinalParticleBirthTime() {
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

void CgsResource::BaseResourcePtr::Reset() {
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

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
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

void CgsResource::SafeResourceHandle<renderengine::Texture>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
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

extern void CB4ParticleArrayStandardParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::ProgramVariableHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

void rw::IResourceAllocator::Free(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemAlign<renderengine::CoronaBuffer>(CoronaBuffer *  ptr, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:433
		const SPU::HostPtr alignMask;

	}
}

void renderengine::VertexDescriptor::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vertexdescriptor.h:181
		uint32_t n;

	}
}

void renderengine::VertexDescriptor::Parameters::SetElementStream(uint32_t  elementIndex, uint32_t  stream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementOffset(uint32_t  elementIndex, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementFormat(uint32_t  elementIndex, renderengine::VertexFormat  format) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementType(uint32_t  elementIndex, renderengine::VertexDescriptor::ElementType  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnCoronaManager::BrnSubmissionInterface::GetTypeParams(BrnCoronaType  lCoronaType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnCoronaTypeParams::GetCoronaTypeParams(BrnCoronaType  lCoronaType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsDebugComponent.cpp:285
		float32_t * lpPtr;

		BrnCoronaManager::BrnSubmissionInterface::GetTypeParams(/* parameters */);
	}
	{
		// BrnEffectsDebugComponent.cpp:286
		float32_t * lpPtr;

		BrnCoronaManager::BrnSubmissionInterface::GetTypeParams(/* parameters */);
	}
	{
		// BrnEffectsDebugComponent.cpp:291
		float32_t * lpPtr;

		BrnCoronaManager::BrnSubmissionInterface::GetTypeParams(/* parameters */);
	}
	{
		// BrnEffectsDebugComponent.cpp:292
		float32_t * lpPtr;

		BrnCoronaManager::BrnSubmissionInterface::GetTypeParams(/* parameters */);
	}
	{
		// BrnEffectsDebugComponent.cpp:293
		float32_t * lpPtr;

		BrnCoronaManager::BrnSubmissionInterface::GetTypeParams(/* parameters */);
	}
}

void BrnParticle::ParticleModule::SpawnSimple(const rw::math::vpu::Vector3  lPoint, const rw::math::vpu::Vector3  lVelocity, const SimpleParticleBatch::ENativeParticleType  lType, const float32_t  lfSizeScale, const float32_t  lfSpawnTime, const float32_t  lfAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2086
		float32_t lfRandomRotationalSpeed;

	}
	CgsNumeric::Random::RandomFloat(/* parameters */);
}

void BrnParticle::TextureNameMap::Entry::HashString(const char *  lpString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// TextureNameMapResourceType.h:51
		uint32_t uHash;

		// TextureNameMapResourceType.h:53
		uint32_t uLengthOfString;

		{
			// TextureNameMapResourceType.h:55
			uint32_t uByte;

		}
	}
}

void std::tolower(int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ctype.h:129
		int __x;

	}
}

void std::isupper(int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Free(const const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthFunction(renderengine::DepthStencilState::Function  function) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Allocator::ITaggedAllocator::~ITaggedAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Allocator::ICoreAllocator::~ICoreAllocator(/* parameters */);
	EA::Allocator::IAllocator::~IAllocator(/* parameters */);
}

void cParticleEmitter::GetBindings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cLionBindings::GetpLocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::nativeparticleparams(Attribute::Key  collectionKey, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::SetDefaultLayout(unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::UpdateSimpleParticleParams(const SimpleParticleBatch::ENativeParticleType &  lID, const nativeparticleparams &  lParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::nativeparticleparams::~nativeparticleparams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::LoadNativeParticleParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:590
		KeyToEnum[12] laNativeSimple;

		// EffectsModule.cpp:608
		Attribute::Key lAssetKey;

	}
	{
		// EffectsModule.cpp:610
		int lnCount;

		{
			// EffectsModule.cpp:614
			nativeparticleparams lParams;

			BrnParticle::ParticleModule::UpdateSimpleParticleParams(/* parameters */);
			Attrib::Gen::nativeparticleparams::~nativeparticleparams(/* parameters */);
		}
		Attrib::Gen::nativeparticleparams::nativeparticleparams(/* parameters */);
	}
}

void cParticleRender::GetLodDistance(const U32  aLodGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<2048,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void BrnEffects::EffectsModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<2048,16>::Prepare(/* parameters */);
}

void CgsModule::EventReceiverQueue<2048,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<2048,16>::Destruct(/* parameters */);
}

void BrnParticle::Native::TrailEmitter::PostRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.h:247
		TrailSegmentCollection * lpTemp;

	}
}

void BrnParticle::Native::EmitterArray::operator[](int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::EmitterArray::RemoveEntry(int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Push(const BrnParticle::Native::TrailEmitter *const&  lEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::EmitterArray::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::EndOfFrame(bool  lbStalled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Peek() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::EmitterArray::AddEntry(BrnParticle::Native::TrailEmitter *  lpEmitter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailEmitter::GetTrailTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailSegmentCollection::CopySegmentFromCollection(int32_t  lnDestIndex, const TrailSegmentCollection *  lpSourceCollection, int32_t  lnSourceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailSegmentCollection::ReadSegmentTime(int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::AddTrails(TrailEmitterData *  lpEmitterData, int8_t  lu8TrailTypeID, const rw::math::vpu::Vector3  lPoint, const rw::math::vpu::Vector3  lNormal, float32_t  lfSkidStrength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::SetType(uint32_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::SetBufferSize(uint32_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::BatchIterator::BatchIterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::BatchIterator::GetLockedBufferSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::BatchIterator::GetLockedBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void BrnGraphics::WorldTexturedVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void renderengine::ProgramBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetType(renderengine::ProgramBuffer::Type  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetBuffer(void *  buffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetSize(uint32_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::GetPixelProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dTexPlusLighting::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dTexPlusLighting.cpp:68
		const void *[8] lapVertexProgramBinary;

		// BrnIm3dTexPlusLighting.cpp:69
		uint32_t[8] lauVertexProgramSize;

		// BrnIm3dTexPlusLighting.cpp:70
		const void *[8] lapPixelProgramBinary;

		// BrnIm3dTexPlusLighting.cpp:71
		uint32_t[8] lauPixelProgramSize;

		CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::Construct(/* parameters */);
	}
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	WorldTexturedVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::GetPixelProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void BrnGraphics::SkidVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dSkidsRenderer::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dSkidsRenderer.cpp:68
		const void *[8] lapVertexProgramBinary;

		// BrnIm3dSkidsRenderer.cpp:69
		uint32_t[8] lauVertexProgramSize;

		// BrnIm3dSkidsRenderer.cpp:70
		const void *[8] lapPixelProgramBinary;

		// BrnIm3dSkidsRenderer.cpp:71
		uint32_t[8] lauPixelProgramSize;

		CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::Construct(/* parameters */);
	}
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	SkidVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::GetVertexProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void CgsGraphics::BasicColouredTexturedVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetPixelProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dSmokeRenderer::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dSmokeRenderer.cpp:72
		const void *[8] lapVertexProgramBinary;

		// BrnIm3dSmokeRenderer.cpp:73
		uint32_t[8] lauVertexProgramSize;

		// BrnIm3dSmokeRenderer.cpp:74
		const void *[8] lapPixelProgramBinary;

		// BrnIm3dSmokeRenderer.cpp:75
		uint32_t[8] lauPixelProgramSize;

		// BrnIm3dSmokeRenderer.cpp:89
		const int liNumShaderPrograms;

		CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::Construct(/* parameters */);
	}
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	CgsGraphics::BasicColouredTexturedVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetPixelProgram(/* parameters */);
}

void __tcf_2() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnParticle::IInternalAllocator::~IInternalAllocator(/* parameters */);
}

void BrnParticle::IInternalAllocator::~IInternalAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Allocator::ITaggedAllocator::~ITaggedAllocator(/* parameters */);
}

void BrnParticle::IInternalAllocator::~IInternalAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Allocator::ITaggedAllocator::~ITaggedAllocator(/* parameters */);
	EA::Allocator::IAllocator::~IAllocator(/* parameters */);
}

void BrnEffects::RaceCarParticleEffectHelper::EffectsModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::RandomNumberGenerator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomVector3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:379
		Vector3 lvResultPlusOne;

		// CgsRandom.h:382
		uint32_t luRandomA;

		// CgsRandom.h:383
		uint32_t luRandomB;

		// CgsRandom.h:385
		uint64_t luRandom;

	}
}

void rw::math::vpu::GetVector3_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Half() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:125
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnEffects::RaceCarParticleEffectHelper::ParticleModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Floor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:45
		const double maxMantissa;

		// scalar.h:46
		const double doubleInput;

		// scalar.h:47
		double c;

		// scalar.h:48
		double result;

	}
}

void rw::math::vpu::operator-=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::RaceCarParticleEffectHelper::RaceCarState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::RaceCarParticleEffectHelper::RaceCarData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
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

void BrnWorld::CollisionTag::GetSurfaceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionTag.h:269
		uint16_t lu16SurfaceIdShifted;

	}
}

void BrnEffects::EffectsModule::SurfaceList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::Surfaces(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// surfacelist.h:130
		const Attrib::RefSpec * resultptr;

	}
}

void Attrib::Gen::surface::surface(const const Attrib::RefSpec &  refspec, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surface::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surface::VisualFXSurface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::visualfxsurface(const const Attrib::RefSpec &  refspec, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::IsSkidSmokeEffectEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmokeSkidStartThreshold() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmokeParticlesPerMetre() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmokeBackwardEmissionFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmokeAngularVelocityFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmokeParticleType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::IsSkidSmokeEffect2Enabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmoke2SkidStartThreshold() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmoke2ParticlesPerMetre() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmoke2BackwardEmissionFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmoke2AngularVelocityFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidSmoke2ParticleType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::~visualfxsurface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surface::~surface() {
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

void renderengine::BlendState::Parameters::SetAlphaTestEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetAlphaTestReference(uint32_t  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetAlphaTestFunction(renderengine::BlendState::Function  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetDestinationAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  dest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetOperationAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Operation  op) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetSourceAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::EmitterArray::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::LionBlendRenderer::SetState(const DepthStencilState *const  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const DepthStencilState *const  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const DepthStencilState *  depthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::LionBlendRenderer::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const BlendState *const  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const BlendState *  blendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dBase<BrnGraphics::LionBlendVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void BrnGraphics::LionBlendVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendVertex.h:63
		uint32_t lOffset;

		// BrnLionBlendVertex.h:64
		uint32_t lElementIndex;

	}
}

void CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetPixelProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dBlend::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendIm3d.cpp:83
		const void *[8] lapVertexProgramBinary;

		// BrnLionBlendIm3d.cpp:84
		uint32_t[8] lauVertexProgramSize;

		// BrnLionBlendIm3d.cpp:85
		const void *[8] lapPixelProgramBinary;

		// BrnLionBlendIm3d.cpp:86
		uint32_t[8] lauPixelProgramSize;

		CgsGraphics::Im3dBase<BrnGraphics::LionBlendVertex>::Construct(/* parameters */);
	}
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	LionBlendVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::GetPixelProgram(/* parameters */);
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::HasFreeParticles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::GetNewParticle(float32_t  lfBirthTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// FXBuckets.h:181
		uint16_t lu16NewParticlePosition;

	}
}

void rw::math::fpu::Min<uint16_t>(const const uint16_t &  a, const const uint16_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// FXBuckets.h:292
		uint16_t lu16ParticleLoop;

	}
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::GetMaxNumParticles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::InsertBefore(FXBucket<BrnParticle::Native::BrnSpark,4> *const  lpBucket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::Isolate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4>::RecycleBucket() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sqrt<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::operator+(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1274
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1276
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1275
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator==<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:18
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:20
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:22
		bool ret;

	}
}

void rw::math::vpu::operator-<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
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

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::HasFreeParticles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::GetNewParticle(float32_t  lfBirthTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// FXBuckets.h:181
		uint16_t lu16NewParticlePosition;

	}
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// FXBuckets.h:292
		uint16_t lu16ParticleLoop;

	}
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::GetMaxNumParticles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::InsertBefore(FXBucket<BrnParticle::Native::BrnDebris,32> *const  lpBucket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::Isolate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::RecycleBucket() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector4 &  v, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IntFloor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_VelocityMin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_VelocityMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_EmissionAngleVariance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_NumParticles_Coloured() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_ParticleSizeMin_Coloured() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_ParticleSizeMax_Coloured() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_NumParticles_Shiny() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_ParticleSizeMin_Shiny() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_ParticleSizeMax_Shiny() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::BrnDebrisArray::GetParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_NumParticles_Dark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_ParticleSizeMin_Dark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_ParticleSizeMax_Dark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_NumParticles_HighDetail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_ParticleSizeMin_HighDetail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_ParticleSizeMax_HighDetail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebrisColourRandomiser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Utils::DebrisColourRandomiser::Prepare(const rw::math::vpu::Vector4  lBaseColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsUtils.h:185
		const VecFloat lIntensity;

		// BrnEffectsUtils.h:186
		const rw::math::vpu::Vector4 lGrey;

	}
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:116
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:117
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz_ww;

			// vector4_operation_inline.h:117
			VectorIntrinsicUnion::VectorIntrinsic zz_ww;

			// vector4_operation_inline.h:117
			VectorIntrinsicUnion::VectorIntrinsic xxpluszz_yyplusww;

			// vector4_operation_inline.h:117
			VectorIntrinsicUnion::VectorIntrinsic yyplusww;

		}
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

void rw::math::vpu::operator-=(const Vector4 &  v, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a) {
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

void rw::math::vpu::operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a) {
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

void Attrib::Gen::debrisparams::Burst_CameraDirectedBurstProbability() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos2(const rw::math::vpu::Vector2  lAnglesInXY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTrig.h:600
	Vector4 lResult;

	{
		// CgsTrig.h:597
		const rw::math::vpu::Vector4 lAngles;

		// CgsTrig.h:599
		const rw::math::vpu::Vector4 lCycles;

		// CgsTrig.h:600
		const rw::math::vpu::Vector4 lResult;

	}
}

void rw::math::vpl::VecMergeHigh_Word(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(const rw::math::vpu::Vector4  lCycles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTrig.h:390
	Vector4 lResult;

	{
		// CgsTrig.h:382
		Vector4 lX;

		// CgsTrig.h:384
		const rw::math::vpu::Vector4 lOneMinusX;

		// CgsTrig.h:389
		const rw::math::vpu::Vector4 lX2;

		// CgsTrig.h:390
		Vector4 lResult;

	}
}

void rw::math::vpl::VecFloor(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min(const rw::math::vpu::Vector4  v0, const rw::math::vpu::Vector4  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:86
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void rw::math::vpu::operator+=(const Vector4 &  v, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const rw::math::vpu::Vector4  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:131
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisX, VectorAxisW>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*=(const Vector3 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUnitVector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:551
		float_t lfV1;

		// CgsRandom.h:552
		float_t lfV2;

		// CgsRandom.h:553
		float_t lfS;

		// CgsRandom.h:554
		float_t lfAlpha;

	}
}

void CgsNumeric::Random::RandomSignedFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Utils::DebrisColourRandomiser::Randomise(const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnEffectsUtils.h:207
	Vector4 lFinalColour;

	{
		// BrnEffectsUtils.h:202
		const VecFloat lSaturationLerp;

		// BrnEffectsUtils.h:203
		const VecFloat lBrightnessLerp;

		// BrnEffectsUtils.h:204
		const rw::math::vpu::Vector4 lRandomSaturation;

		// BrnEffectsUtils.h:205
		const rw::math::vpu::Vector4 lRandomBrightness;

		// BrnEffectsUtils.h:207
		Vector4 lFinalColour;

	}
}

void CgsNumeric::Random::RandomVecFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:432
		uint32_t luOldestBufferIndex;

		// CgsRandom.h:434
		VecFloat lvResultPlusOne;

	}
}

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisW>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisW> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:582
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void BrnParticle::ParticleModule::HandleFireDebrisBurstEvent(const FireDebrisBurstEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1479
		int32_t lnDebrisTypeLoop;

		// ParticleModule.cpp:1480
		int32_t lnParticlesLoop;

		// ParticleModule.cpp:1481
		int32_t lnNumberOfParticlesToSpawn;

		// ParticleModule.cpp:1483
		float32_t lfParticleSizeMin;

		// ParticleModule.cpp:1484
		float32_t lfParticleSizeMax;

		// ParticleModule.cpp:1486
		Vector3 lvInheritedVelocity;

		// ParticleModule.cpp:1487
		Vector4 lvDebrisColour;

		// ParticleModule.cpp:1493
		float32_t lfVelocityMin;

		// ParticleModule.cpp:1494
		float32_t lfVelocityMax;

		// ParticleModule.cpp:1497
		float32_t lfAnglePhi;

		// ParticleModule.cpp:1498
		float32_t lfAngleTheta;

	}
	Attrib::Gen::debrisparams::Burst_VelocityMin(/* parameters */);
	rw::math::fpu::DegToRad<float>(/* parameters */);
	{
		// ParticleModule.cpp:1555
		DebrisColourRandomiser lColourRandomiser;

		Attrib::Gen::debrisparams::Burst_NumParticles_Coloured(/* parameters */);
		BrnEffects::Utils::DebrisColourRandomiser::Prepare(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
	}
	{
		// ParticleModule.cpp:1561
		float32_t lfParticleSize;

		// ParticleModule.cpp:1562
		float32_t lfRotationalVelocity;

		// ParticleModule.cpp:1564
		Vector3 lvVelocity;

		// ParticleModule.cpp:1565
		Vector3 lvSpawnOffset;

		// ParticleModule.cpp:1566
		Vector3 lvSpawnPosition;

		// ParticleModule.cpp:1567
		Vector3 lvRotationAxis;

		// ParticleModule.cpp:1569
		Vector4 lvSpawnAngles;

		// ParticleModule.cpp:1621
		const rw::math::vpu::Vector4 lRandomisedColour;

		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::GetX(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		{
			// ParticleModule.cpp:1585
			Vector3 lvTargetPosition;

			// ParticleModule.cpp:1588
			float32_t lfDistanceToCamera;

			rw::math::vpu::GetVecFloat_Half(/* parameters */);
			rw::math::vpu::GetVector3_YAxis(/* parameters */);
		}
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomUnitVector(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::fpu::Sqrt<float>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		BrnEffects::Utils::DebrisColourRandomiser::Randomise(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
		CgsNumeric::Random::RandomVecFloat(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	}
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos2(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::MultAdd(/* parameters */);
	rw::math::vpu::MultAdd(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpl::VecMergeHigh_Word(/* parameters */);
	{
	}
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpl::VecFloor(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisW>(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	Attrib::Gen::debrisparams::Burst_NumParticles_Shiny(/* parameters */);
	Attrib::Gen::debrisparams::Burst_NumParticles_Dark(/* parameters */);
	Attrib::Gen::debrisparams::Burst_NumParticles_HighDetail(/* parameters */);
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnEffects::Utils::ConvertVector4ToRwRgbaOverbright(VectorIntrinsicInParam  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnEffectsUtils.h:338
	RGBA lRGBA8;

	{
		// BrnEffectsUtils.h:329
		union {
			// BrnEffectsUtils.h:330
			uint32_t[4] maIntegers;

			// BrnEffectsUtils.h:331
			VectorIntrinsicUnion::VectorIntrinsic mVector;

		}
		// BrnEffectsUtils.h:332
		union  lConversionUnion;

		// BrnEffectsUtils.h:334
		const VectorIntrinsicUnion::VectorIntrinsic lColourTimesTwo;

		// BrnEffectsUtils.h:335
		const VectorIntrinsicUnion::VectorIntrinsic lColourClamped;

		// BrnEffectsUtils.h:338
		const RGBA lRGBA8;

	}
}

void rw::math::vpl::VecMult(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:235
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecMin(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:221
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecConvertFloatToUnsignedFixedPoint<0>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Utils::BuildUVs(const const BuildUVData &  lUVData, const VecFloat  lvfCurrentFrame, const VecFloat  lvfNextFrame, Vector4 *  laOutputUvUv) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsUtils.h:457
		VecFloat lU0Set1;

		// BrnEffectsUtils.h:458
		VecFloat lU1Set1;

		// BrnEffectsUtils.h:459
		VecFloat lV0Set1;

		// BrnEffectsUtils.h:460
		VecFloat lV1Set1;

		// BrnEffectsUtils.h:461
		VecFloat lU0Set2;

		// BrnEffectsUtils.h:462
		VecFloat lU1Set2;

		// BrnEffectsUtils.h:463
		VecFloat lV0Set2;

		// BrnEffectsUtils.h:464
		VecFloat lV1Set2;

	}
}

void BrnEffects::Utils::BuildMultiFrameUV(const const BuildUVData &  lUVData, const VecFloat  lvfFrame, const VecFloat &  lvfOutU0, const VecFloat &  lvfOutV0, const VecFloat &  lvfOutU1, const VecFloat &  lvfOutV1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsUtils.h:431
		const MaskScalar lMask;

		// BrnEffectsUtils.h:432
		const VecFloat lvfActualFrame;

		// BrnEffectsUtils.h:434
		const VecFloat lvfMaterialOneOverNumXFrames;

		// BrnEffectsUtils.h:435
		const VecFloat lvfMaterialOneOverNumYFrames;

		// BrnEffectsUtils.h:438
		const VecFloat lvfRow;

		// BrnEffectsUtils.h:439
		const VecFloat lvfColumn;

	}
}

void rw::math::vpu::CompGreaterEqual(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:328
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Floor(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:24
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

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

void BrnGraphics::LionBlendVertex::VertexIterator::Write(const rw::math::vpu::Vector4  lPosPlusWeight, const const RGBA8 &  lColour, const rw::math::vpu::Vector4  lUvUv) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EffectsVertexBufferIterator::GetVerticesFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBuffer.h:72
		const uint32_t luBytesFree;

		// EffectsVertexBuffer.h:73
		const uint32_t luVerticesFree;

	}
}

void EffectsVertexBufferIterator::GetBytesFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBuffer.h:141
		const uint32_t luBytesFree;

	}
}

void rw::math::fpu::Vector4Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Z() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::W() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleEmitter::GetDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleDescriptor::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleDescriptor::Material() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BuildUVData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Utils::BuildUVData::SetupFromMaterial(const const cParticleMaterial &  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleEmitter::GetCurrentBehaviour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

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

void rw::math::vpu::operator+<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::IsZero<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  value, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const const VecFloatRef<VectorAxisZ> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(const VecFloat  lAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTrig.h:578
	Vector4 lResult;

	{
		// CgsTrig.h:577
		const rw::math::vpu::Vector4 lCycles;

		// CgsTrig.h:578
		const rw::math::vpu::Vector4 lResult;

	}
}

void rw::math::vpu::operator*(const VecFloat  s, const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:381
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
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

void rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
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

void rw::math::vpu::operator*=<VectorAxisY>(const Vector3 &  v, VecFloatRef<VectorAxisY> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic vZero;

	}
}

void rw::math::vpu::operator*<VectorAxisY>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisY> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::Lerp(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:244
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:245
			VectorIntrinsicUnion::VectorIntrinsic temp_lerp_v;

		}
	}
}

void rw::math::vpu::operator*=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1122
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

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

void rw::math::vpu::Cross(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b, const Vector3 &  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator*=<VectorAxisX>(const Vector3 &  v, VecFloatRef<VectorAxisX> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

		// vector3_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic vZero;

	}
}

void rw::math::vpu::operator*<VectorAxisX>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisX> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator*<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

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

void rw::math::vpu::operator-<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1402
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1403
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1402
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1403
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::IsZero<VectorAxisX>(VecFloatRef<VectorAxisX> &  value, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const const VecFloatRef<VectorAxisX> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero<VectorAxisY>(VecFloatRef<VectorAxisY> &  value, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const const VecFloatRef<VectorAxisY> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Utils::FastMatrix33FromEulerXYZ(const rw::math::vpu::Vector3  lAnglesXYZ) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnEffectsUtils.h:288
	Matrix33 & lMatrix;

	{
		// BrnEffectsUtils.h:261
		const rw::math::vpu::Vector4 lSinCosXY;

		// BrnEffectsUtils.h:262
		const rw::math::vpu::Vector4 lSinCosZ;

		// BrnEffectsUtils.h:264
		const VecFloat lCh;

		// BrnEffectsUtils.h:265
		const VecFloat lSh;

		// BrnEffectsUtils.h:266
		const VecFloat lCj;

		// BrnEffectsUtils.h:267
		const VecFloat lSj;

		// BrnEffectsUtils.h:269
		const rw::math::vpu::Vector4 lA;

		// BrnEffectsUtils.h:270
		const rw::math::vpu::Vector4 lB;

		// BrnEffectsUtils.h:271
		const rw::math::vpu::Vector4 lC;

		// BrnEffectsUtils.h:272
		const rw::math::vpu::Vector4 lD;

		// BrnEffectsUtils.h:273
		const rw::math::vpu::Vector4 lE;

		// BrnEffectsUtils.h:275
		const VecFloat lCiCh;

		// BrnEffectsUtils.h:276
		const VecFloat lCiSh;

		// BrnEffectsUtils.h:277
		const VecFloat lSiCh;

		// BrnEffectsUtils.h:278
		const VecFloat lSiSh;

		// BrnEffectsUtils.h:279
		const VecFloat lCjCh;

		// BrnEffectsUtils.h:280
		const VecFloat lCjSh;

		// BrnEffectsUtils.h:281
		const VecFloat lSiSjCh;

		// BrnEffectsUtils.h:282
		const VecFloat lCiSjCh;

		// BrnEffectsUtils.h:283
		const VecFloat lSiSjSh;

		// BrnEffectsUtils.h:284
		const VecFloat lCiSjSh;

		// BrnEffectsUtils.h:285
		const VecFloat lSiCj;

		// BrnEffectsUtils.h:286
		const VecFloat lCiCj;

		// BrnEffectsUtils.h:288
		const rw::math::vpu::Matrix33 lMatrix;

	}
}

void rw::math::vpu::operator-(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:967
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:968
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  v, const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:25
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator+<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
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

void rw::math::vpu::operator*<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
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

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
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

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::CompEqual(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:808
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Or(const Mask4  a, const Mask4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// mask4_operation_inline.h:38
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Select(const Mask4  mask, const rw::math::vpu::Vector4  trueValue, const rw::math::vpu::Vector4  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:830
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

extern void BrnCrashTrianglePackedFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Add(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CollisionTag::Construct(uint16_t  lu16MaterialId, uint16_t  lu16GroupId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailEmitterData::Detatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::WheelStateMachine::GetPreviousPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b, const VecFloat &  r) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:894
		VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

		// vector3_operation_inline.h:894
		VectorIntrinsicUnion::VectorIntrinsic yy;

		// vector3_operation_inline.h:894
		VectorIntrinsicUnion::VectorIntrinsic zz;

	}
}

void Attrib::Gen::visualfxsurface::IsSkidMarkEffectEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidMarkSkidStartThreshold() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidMarkTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::WheelStateMachine::SetPreviousPosition(const rw::math::vpu::Vector3  lvPreviousPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::HandleWheels(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1745
		const BrnEffects::ActiveRaceCarData & lActiveRaceCar;

		// EffectsModule.cpp:1746
		const RaceCarState * lpRaceCarState;

		// EffectsModule.cpp:1754
		Matrix44Affine lPlayerCarTransform;

		RaceCarParticleEffectHelper::RaceCarState(/* parameters */);
	}
	RaceCarParticleEffectHelper::RaceCarData(/* parameters */);
	{
		// EffectsModule.cpp:1749
		int liWheel;

	}
	{
		// EffectsModule.cpp:1758
		int liWheel;

		{
			// EffectsModule.cpp:1760
			const const WheelLite & lWheel;

			BrnParticle::Native::TrailEmitterData::Detatch(/* parameters */);
			BrnParticle::Native::TrailEmitterData::Detatch(/* parameters */);
		}
	}
	{
		// EffectsModule.cpp:1773
		VecFloat lvfDotProduct;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		{
			// EffectsModule.cpp:1790
			uint8_t lSurfaceID;

			// EffectsModule.cpp:1791
			surface lSurface;

			// EffectsModule.cpp:1792
			visualfxsurface lVFXSurface;

			Attrib::Gen::surfacelist::Surfaces(/* parameters */);
			Attrib::Gen::surface::surface(/* parameters */);
			Attrib::Gen::visualfxsurface::visualfxsurface(/* parameters */);
			Attrib::Gen::visualfxsurface::IsSkidMarkEffectEnabled(/* parameters */);
			BrnParticle::Native::TrailEmitterData::Detatch(/* parameters */);
			Attrib::Gen::visualfxsurface::~visualfxsurface(/* parameters */);
			Attrib::Gen::surface::~surface(/* parameters */);
		}
	}
}

void BrnEffects::ParticleEffectHelper::StopEffect(const uint32_t &  lEffectHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEffectHelper.h:263
		LionEffect *const lpEffect;

	}
}

void BrnParticle::ParticleModule::GetLionEffect(const uint32_t  lEffectHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.h:381
		const uint32_t luArrayIndex;

		// ParticleModule.h:383
		LionEffect *const lpEffect;

	}
}

void BrnEffects::BoostStateMachine::Reset(const ParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:49
		uint32_t luTag;

	}
}

void BrnEffects::BurstAccumulator::Reset(const float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BoostStateMachine::AddTag(const ParticleEffectHelper &  lEffectHelper, const const LocatorPointSpec &  lTagPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::IsInJunkyard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::LionEffect::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsDebugComponent.cpp:175
		const int32_t lnEffectIndex;

		// BrnEffectsDebugComponent.cpp:177
		const uint32_t lLionEffectHandle;

		// BrnEffectsDebugComponent.cpp:178
		LionEffect *const lpLionEffect;

		BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	}
	{
		// BrnEffectsDebugComponent.cpp:181
		const const rw::math::vpu::Matrix44Affine & lTransform;

		BrnParticle::LionEffect::GetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
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

void BrnParticle::LionEffect::SetEnabled(const bool  lbEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::OnJunkyardEffectIndexChange(void *  lpValue, void *  lpUserParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsDebugComponent.cpp:423
		EffectsDebugComponent *const lpEffectsDebugComponent;

		// BrnEffectsDebugComponent.cpp:424
		EffectsModule *const lpEffectsModule;

		// BrnEffectsDebugComponent.cpp:427
		int lnEffectsCount;

	}
	{
		// BrnEffectsDebugComponent.cpp:430
		const uint32_t lLionEffectHandle;

		// BrnEffectsDebugComponent.cpp:431
		const LionEffect *const lpLionEffect;

		BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	}
	{
		// BrnEffectsDebugComponent.cpp:441
		int32_t lnCount2;

		{
			// BrnEffectsDebugComponent.cpp:443
			const uint32_t lLionEffectHandle;

			// BrnEffectsDebugComponent.cpp:444
			const LionEffect *const lpLionEffect;

			BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
		}
	}
	{
		// BrnEffectsDebugComponent.cpp:474
		const uint32_t lActiveLionEffectHandle;

		// BrnEffectsDebugComponent.cpp:475
		LionEffect *const lpActiveLionEffect;

		// BrnEffectsDebugComponent.cpp:477
		const const rw::math::vpu::Matrix44Affine & lTransform;

		BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
		BrnParticle::LionEffect::GetTransform(/* parameters */);
		rw::math::vpu::ATan2(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Vector3::X(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_re(/* parameters */);
		vec_andc(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_and(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
	}
	{
		// BrnEffectsDebugComponent.cpp:496
		int32_t lnCount;

		{
			// BrnEffectsDebugComponent.cpp:498
			const uint32_t lLionEffectHandle;

			// BrnEffectsDebugComponent.cpp:499
			LionEffect *const lpLionEffect;

			// BrnEffectsDebugComponent.cpp:500
			const bool lbActiveEffect;

			BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
			BrnParticle::LionEffect::SetEnabled(/* parameters */);
		}
	}
}

void rw::math::vpu::GetVector3_ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::LionEffect::SetTransform(const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::OnJunkyardEffectValueChange(void *  lpValue, void *  lpUserParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsDebugComponent.cpp:370
		EffectsDebugComponent *const lpEffectsDebugComponent;

		// BrnEffectsDebugComponent.cpp:371
		EffectsModule *const lpEffectsModule;

		// BrnEffectsDebugComponent.cpp:393
		const int32_t lnEffectIndex;

		// BrnEffectsDebugComponent.cpp:395
		const uint32_t lLionEffectHandle;

		// BrnEffectsDebugComponent.cpp:396
		LionEffect *const lpLionEffect;

	}
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	{
		// BrnEffectsDebugComponent.cpp:401
		const rw::math::vpu::Vector3 lPos;

		// BrnEffectsDebugComponent.cpp:405
		const VecFloat lAngle;

		// BrnEffectsDebugComponent.cpp:406
		const rw::math::vpu::Vector4 lSinCos;

		// BrnEffectsDebugComponent.cpp:408
		const rw::math::vpu::Matrix44Affine lTransform;

		CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::GetVector3_XAxis(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		BrnParticle::LionEffect::SetTransform(/* parameters */);
		rw::math::vpu::GetVector3_ZAxis(/* parameters */);
		rw::math::vpu::GetVector3_YAxis(/* parameters */);
		rw::math::vpl::VecFloor(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

void BrnEffects::EffectsDebugComponent::OnJunkyardEffectEditChange(void *  lpValue, void *  lpUserParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsDebugComponent.cpp:337
		EffectsDebugComponent *const lpEffectsDebugComponent;

		// BrnEffectsDebugComponent.cpp:338
		EffectsModule *const lpEffectsModule;

		// BrnEffectsDebugComponent.cpp:340
		const bool lbEnableEditor;

	}
	{
		// BrnEffectsDebugComponent.cpp:351
		int32_t lnCount;

		{
			// BrnEffectsDebugComponent.cpp:353
			const uint32_t lLionEffectHandle;

			// BrnEffectsDebugComponent.cpp:354
			LionEffect *const lpLionEffect;

			BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
		}
	}
	BrnParticle::LionEffect::SetEnabled(/* parameters */);
}

void BrnEffects::EffectsModule::JunkyardVfxStop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2501
		uint32_t luCount;

		{
			// EffectsModule.cpp:2503
			LionEffect *const lpLionEffect;

			BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
		}
	}
}

void BrnEffects::EffectsModule::HandleJumpAndLandingEffects(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper, float32_t  lfTimeStep, float32_t  lfCurrentTime, float32_t  lfLowestWheelHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2923
		const BrnEffects::ActiveRaceCarData & lActiveRaceCar;

		// EffectsModule.cpp:2927
		LionEffect *const lpJumpEffect;

		RaceCarParticleEffectHelper::RaceCarData(/* parameters */);
	}
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	BrnParticle::LionEffect::SetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

void BrnEffects::EffectsDebugJumping::VapourStartDelay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugJumping::VapourRampEndTime() {
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

void rw::math::vpu::operator>=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void BrnEffects::Curves::SmoothStep::Evaluate(const const Vector2Template<float> &  lvCurveParams, const const Vector2Template<float> &  lvScaleFactors, float32_t  lfCurrentValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Curves.h:65
		SmoothStep::Vector3 lvTempCurveParams;

	}
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Curves::SmoothStep::Evaluate(const const Vector3Template<float> &  lvCurveParams, const const Vector2Template<float> &  lvScaleFactors, float32_t  lfCurrentValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Curves.h:79
		float32_t lfInverseLerpValue;

		// Curves.h:80
		float32_t lfReturnValue;

	}
}

void rw::math::fpu::Vector3Template<float>::GetComponent(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetComponent(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::RaceCarParticleEffectHelper::SetDevStateBlend(const uint32_t *const  lpaEffectsArray, const uint32_t  luNumEffects, const float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEffectHelper.h:222
		float32_t lfValueToUse;

	}
}

void BrnEffects::EffectsDebugComponent::IsForceStateBlend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::ForceStateBlendValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::ParticleEffectHelper::SetEffectStateBlend(const uint32_t *const  lpaEffectsArray, const uint32_t  luNumEffects, const float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEffectHelper.h:122
		uint32_t luEffect;

		{
			// ParticleEffectHelper.h:124
			const uint32_t luEffectHandle;

			// ParticleEffectHelper.h:125
			LionEffect *const lpLionEffect;

		}
	}
}

void BrnParticle::LionEffect::SetStateBlendFactor(float32_t  lfStateBlendFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::JumpStateMachine::SetVapourBlend(float32_t  lTime, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JumpStateMachine.cpp:413
		float32_t lVapourDelayTime;

		// JumpStateMachine.cpp:414
		float32_t lVapourRampTime;

		// JumpStateMachine.cpp:417
		const const EffectsDebugJumping & params;

		// JumpStateMachine.cpp:423
		Vector3 lvMotionDir;

		// JumpStateMachine.cpp:425
		float32_t lAmount;

		// JumpStateMachine.cpp:426
		Vector3 lvVelocity;

		// JumpStateMachine.cpp:427
		VecFloat lvfSpeed;

		rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
		rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	}
	EffectsDebugJumping::VapourRampEndTime(/* parameters */);
	{
		{
		}
	}
	EffectsDebugComponent::JumpParams(/* parameters */);
	EffectsDebugJumping::VapourStartDelay(/* parameters */);
	{
		// JumpStateMachine.cpp:433
		Vector3 lFacingDir;

		// JumpStateMachine.cpp:436
		float32_t lAngle;

	}
	RaceCarParticleEffectHelper::SetDevStateBlend(/* parameters */);
	EffectsDebugComponent::ForceStateBlendValue(/* parameters */);
	ParticleEffectHelper::SetEffectStateBlend(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	Curves::SmoothStep::Evaluate(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	Curves::SmoothStep::Evaluate(/* parameters */);
	rw::math::fpu::Vector3Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	Curves::SmoothStep::Evaluate(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	BrnParticle::LionEffect::SetStateBlendFactor(/* parameters */);
	rw::math::fpu::Vector3Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Vector3Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
}

void BrnEffects::ParticleEffectHelper::SetEffectWorldIndex(const uint32_t  lEffectHandle, const uint32_t  luWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEffectHelper.h:82
		LionEffect *const lpEffect;

	}
}

void BrnParticle::LionEffect::SetWorldIndex(uint32_t  luWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BoostStateMachine::SetWorldIndex(const ParticleEffectHelper &  lEffectHelper, uint32_t  lIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:71
		uint32_t luBoostEffect;

	}
}

void BrnEffects::ParticleEffectHelper::SetEffectStateBlend(const uint32_t  lEffectHandle, const float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEffectHelper.h:108
		LionEffect *const lpEffect;

	}
}

void BrnEffects::BoostStateMachine::SetBlendValue(const ParticleEffectHelper &  lEffectHelper, float32_t  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:469
		uint32_t luBoostEffect;

	}
}

void BrnEffects::CarState::IsBoosting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::RaceCarParticleEffectHelper::CurrentGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::IsBoostTransitionEditing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::BoostTransitionMin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugComponent::BoostTransitionMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BoostStateMachine::OnDetermineNextState(const BrnEffects::CarState &  lCarState, bool  lbTimeSignal, BrnEffects::EffectsState  lCurrentState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:98
		BrnEffects::EffectsState lNextState;

	}
	{
		// BoostStateMachine.cpp:156
		float32_t lTransitionPointMin;

		// BoostStateMachine.cpp:157
		float32_t lTransitionPointMax;

		// BoostStateMachine.cpp:167
		float32_t lCurrentBoost;

		// BoostStateMachine.cpp:169
		float32_t lBlendAmount;

		Curves::SmoothStep::Evaluate(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
		Curves::SmoothStep::Evaluate(/* parameters */);
		rw::math::fpu::Vector3Template<float>::GetComponent(/* parameters */);
		rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	}
	{
		// BoostStateMachine.cpp:203
		const float32_t lfVehicleVelocity;

		// BoostStateMachine.cpp:206
		float32_t lfMaxVelocity;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BoostStateMachine.cpp:207
		uint32_t luWheel;

		{
			// BoostStateMachine.cpp:209
			const const WheelLite & lWheel;

			// BoostStateMachine.cpp:210
			const float32_t lfWheelEdgeVelocity;

		}
	}
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	EffectsDebugComponent::BoostTransitionMax(/* parameters */);
	EffectsDebugComponent::BoostTransitionMin(/* parameters */);
	rw::math::fpu::Vector3Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetComponent(/* parameters */);
}

void BrnEffects::ParticleEffectHelper::SetEffectEnabled(const uint32_t  lEffectHandle, const bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEffectHelper.h:69
		LionEffect *const lpEffect;

	}
}

void BrnEffects::BoostStateMachine::SetEnabled(const ParticleEffectHelper &  lEffectHelper, bool  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:478
		uint32_t luBoostEffect;

	}
}

void BrnEffects::BoostStateMachine::StopEffects(const ParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:498
		uint32_t luBoostTag;

	}
}

void BrnEffects::ParticleEffectHelper::SetEffectTransform(const uint32_t &  lEffectHandle, const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEffectHelper.h:95
		LionEffect *const lpEffect;

	}
}

void BrnEffects::RaceCarParticleEffectHelper::GetLocatorsInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BoostStateMachine::OnTick(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:372
		const BrnEffects::EffectsDebugComponent * lpDebugComponent;

		RaceCarParticleEffectHelper::DebugComponent(/* parameters */);
	}
	RaceCarParticleEffectHelper::GetLocatorsInterface(/* parameters */);
	{
		// BoostStateMachine.cpp:386
		bool lbFXPoint1Found;

		// BoostStateMachine.cpp:387
		bool lbFXPoint2Found;

		// BoostStateMachine.cpp:388
		bool lbFXPoint3Found;

		// BoostStateMachine.cpp:389
		bool lbFXPoint4Found;

		// BoostStateMachine.cpp:391
		const VehicleLocatorData * lpData;

		// BoostStateMachine.cpp:393
		Matrix44Affine lRaceCarTransform;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		{
			// BoostStateMachine.cpp:395
			int32_t lnLocatorLoop;

		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	{
		// BoostStateMachine.cpp:376
		float32_t lValue;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::GetPlayerRaceCarState(const RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2948
		const RaceCarState * lpRaceCarState;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	}
	{
		// EffectsModule.cpp:2952
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::ResetShadowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:817
		uint32_t uID;

	}
}

void CgsGraphics::ImRendererBase::SetState(const ProgramBuffer *const  lpVertexProgramBuffer, const ProgramBuffer *const  lpPixelProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetVertexProgram(const ProgramBuffer *  lpVertexProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetPixelProgram(const ProgramBuffer *  lpPixelProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetVertexDescriptor(const VertexDescriptor *  vdesc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:960
		uint32_t attributesToDisable;

		// shadowingdevice.h:961
		uint8_t attributeIndex;

	}
}

void CgsGraphics::ImRendererBase::SetState(const RasterizerState *const  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const RasterizerState *  rasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const SamplerState *const  lpSamplerState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const SamplerState *const  lpSamplerState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dTexPlusLighting::SetViewProjection(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dTexPlusLighting.h:141
		FloatShaderStateIterator lShaderStateIterator;

	}
}

extern void FloatShaderStateIterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::FloatShaderStateIterator::Write(const const rw::math::vpu::Matrix44 &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetProgramType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetConstantIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetNumConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::PS3GetProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetCgProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToHostPtr<_CGprogram>(_CGprogram *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetPixelProgramOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dTexPlusLighting::SetEye(const rw::math::vpu::Vector3  lEye) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dTexPlusLighting.h:154
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void renderengine::FloatShaderStateIterator::Write(const const rw::math::vpu::Vector4 &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dTexPlusLighting::SetLightDirection(const rw::math::vpu::Vector3  lLightVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dTexPlusLighting.h:169
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void BrnGraphics::Im3dTexPlusLighting::SetLightColour(const rw::math::vpu::Vector3  lLightColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dTexPlusLighting.h:183
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::BeginRendering(const int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const TextureState *  textureState, uint32_t  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:924
		const SamplerState *const lpSamplerState;

		// shadowingdevice.h:925
		renderengine::Texture *const lpTexture;

	}
}

void BrnGraphics::Im3dBlend::BeginRendering(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix, const float32_t  lfWhiteLevel, const bool8_t  lbEnableZFade, const float32_t  lfNearPlane, const float32_t  lfFarPlane, const float32_t  lfFadeDistance, const float32_t  lfDepthSamplerOffsetU, const float32_t  lfDepthSamplerOffsetV, TextureState *const  lpDepthTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendIm3d.cpp:132
		FloatShaderStateIterator lShaderStateIterator;

		shadow::Device::ResetShadowing(/* parameters */);
	}
	{
	}
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	{
		// BrnLionBlendIm3d.cpp:145
		const float32_t lfNearMinusFar;

		// BrnLionBlendIm3d.cpp:146
		const float32_t lfNearTimesFar;

		// BrnLionBlendIm3d.cpp:148
		const rw::math::vpu::Vector4 lVsPosScale;

		// BrnLionBlendIm3d.cpp:152
		const rw::math::vpu::Vector4 lVsPosOffset;

		// BrnLionBlendIm3d.cpp:157
		const rw::math::vpu::Vector4 lPsDepthConversion;

		// BrnLionBlendIm3d.cpp:162
		const rw::math::vpu::Vector4 lPsDepthFadeConstants;

		// BrnLionBlendIm3d.cpp:172
		const rw::math::vpu::Vector4 lColourScale;

		CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::BeginRendering(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	}
	{
		// BrnLionBlendIm3d.cpp:201
		const rw::math::vpu::Vector4 lColourScale;

		CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::BeginRendering(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		{
			renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		{
			renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
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
	}
	{
	}
	{
	}
}

void BrnGraphics::Im3dSmokeRenderer::SetConstants(const rw::math::vpu::Vector2  lvDepthUvOffset, const float32_t  lfNearPlane, const float32_t  lfFarPlane, const float32_t  lfFadeDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dSmokeRenderer.cpp:127
		const float32_t lfNearMinusFar;

		// BrnIm3dSmokeRenderer.cpp:128
		const float32_t lfNearTimesFar;

		// BrnIm3dSmokeRenderer.cpp:130
		const rw::math::vpu::Vector4 lVsPosScale;

		// BrnIm3dSmokeRenderer.cpp:134
		const rw::math::vpu::Vector4 lVsPosOffset;

		// BrnIm3dSmokeRenderer.cpp:139
		const rw::math::vpu::Vector4 lPsDepthConversion;

		// BrnIm3dSmokeRenderer.cpp:144
		const rw::math::vpu::Vector4 lPsDepthFadeConstants;

		// BrnIm3dSmokeRenderer.cpp:149
		FloatShaderStateIterator lShaderStateIterator;

		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dSkidsRenderer::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dSkidsRenderer.h:101
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void CgsGraphics::ImRendererBase::SetTexture(renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(renderengine::Texture *const  lpTexture, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dSkidsRenderer::SetBlendStartColour(const rw::math::vpu::Vector4  lvStartColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dSkidsRenderer.h:113
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void BrnGraphics::Im3dSkidsRenderer::SetBlendEndColour(const rw::math::vpu::Vector4  lvEndColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dSkidsRenderer.h:126
		FloatShaderStateIterator lShaderStateIterator;

	}
}

extern void SkidVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const BrnGraphics::SkidVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		BrnGraphics::SkidVertex::VertexIterator lVertexIterator;

		{
			// CgsImRenderer.h:678
			uint32_t i;

		}
	}
}

void renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::FlushBeforeRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::FlushVertexProgramState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawParameters::SetStartVertex(uint32_t  start) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawParameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::SkidVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3GPUSetLabelBackEnd(uint8_t  label, uint32_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3CPUGetLabelValue(uint8_t  label) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2293
		uint32_t value;

		// device.h:2295
		uint32_t volatile* labelAddress;

	}
}

void renderengine::DrawParameters::SetVertexCount(uint32_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::PS3GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetResource(renderengine::VertexBuffer *  vertexBuffer, uint32_t  id, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::SkidVertex::VertexIterator::Write(const const BrnGraphics::SkidVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailSegmentCollection::ReadSegmentTangent(int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailSegmentCollection::ReadSegmentStrength(int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::MultAdd(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b, const rw::math::vpu::Vector3  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:139
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:996
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::WaitOnParticleRenderJob(const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2335
		const ParticleCpuMonitors & lCpuMonitors;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::Camera::GetViewMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cTime::cTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cTime::SetTimeSeconds(const FP32  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<LionBatch,512u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EffectsVertexBufferManager::FlipBuffers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Frustum::Frustum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Plane::Plane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetFrustum(const Frustum &  frustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator==(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:155
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:157
		bool ret;

		{
			// vec_float_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:156
			VectorIntrinsicUnion u;

		}
	}
}

void rw::collision::Frustum::GetPlane(uint32_t  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Plane::GetNormal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisX, VectorAxisX, VectorAxisX>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
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

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisY, VectorAxisY, VectorAxisY, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
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

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisZ, VectorAxisZ, VectorAxisZ, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
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

void rw::collision::Plane::GetDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::BuildLionVertexBuffers(const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2217
		const ParticleCpuMonitors & lCpuMonitors;

		// ParticleModule.cpp:2222
		const rw::math::vpu::Matrix44Affine lViewMatrix;

		// ParticleModule.cpp:2223
		const rw::math::vpu::Matrix44 lViewProjMatrix;

		// ParticleModule.cpp:2226
		uint32_t luLastRenderedFrame;

		// ParticleModule.cpp:2227
		const bool8_t lbDuplicateFrame;

		// ParticleModule.cpp:2264
		const EffectsVertexBufferLocked & lLionVertexBuffer;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	CgsContainers::Array<LionBatch,512u>::Clear(/* parameters */);
	EffectsVertexBufferManager::FlipBuffers(/* parameters */);
	{
		// ParticleModule.cpp:2277
		Frustum lCameraFrustum;

		// ParticleModule.cpp:2279
		Plane lRwPlane0;

		// ParticleModule.cpp:2280
		Plane lRwPlane1;

		// ParticleModule.cpp:2281
		Plane lRwPlane2;

		// ParticleModule.cpp:2282
		Plane lRwPlane3;

		// ParticleModule.cpp:2283
		const rw::math::vpu::Vector4 lPackedFrustumLRTBxxxx;

		// ParticleModule.cpp:2284
		const rw::math::vpu::Vector4 lPackedFrustumLRTByyyy;

		// ParticleModule.cpp:2285
		const rw::math::vpu::Vector4 lPackedFrustumLRTBzzzz;

		// ParticleModule.cpp:2286
		const rw::math::vpu::Vector4 lPackedFrustumLRTBdddd;

		// ParticleModule.cpp:2287
		const rw::math::vpu::Matrix44 lPackedFrustumLRTB;

		// ParticleModule.cpp:2295
		cTime lCurrentTime;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		rw::collision::Frustum::Frustum(/* parameters */);
		CgsGraphics::Camera::GetFrustum(/* parameters */);
		rw::collision::Frustum::GetPlane(/* parameters */);
		Vector4<VectorAxisX, VectorAxisX, VectorAxisX, VectorAxisX>(/* parameters */);
		rw::collision::Plane::GetDistance(/* parameters */);
		Vector4<VectorAxisY, VectorAxisY, VectorAxisY, VectorAxisY>(/* parameters */);
		rw::collision::Frustum::GetPlane(/* parameters */);
		rw::collision::Frustum::GetPlane(/* parameters */);
		Vector4<VectorAxisZ, VectorAxisZ, VectorAxisZ, VectorAxisZ>(/* parameters */);
		rw::collision::Plane::GetNormal(/* parameters */);
		rw::collision::Frustum::GetPlane(/* parameters */);
		rw::collision::Plane::GetDistance(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::collision::Plane::GetDistance(/* parameters */);
		rw::collision::Plane::GetNormal(/* parameters */);
		rw::collision::Plane::GetDistance(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		cTime::SetTimeSeconds(/* parameters */);
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// ParticleModule.cpp:2245
		cTime lCurrentTime;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		cTime::SetTimeSeconds(/* parameters */);
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
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
	}
}

void CgsGraphics::Camera::GetProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::SimpleParticleBatchArray::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::Clear() {
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

void CgsSystem::JobManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::BeginParticleRenderJob(const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2138
		const ParticleCpuMonitors & lCpuMonitors;

		// ParticleModule.cpp:2144
		uint32_t luLastRenderedFrame;

		// ParticleModule.cpp:2145
		const bool8_t lbDuplicateFrame;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// ParticleModule.cpp:2155
		const rw::math::vpu::Matrix44Affine lViewMatrix;

		// ParticleModule.cpp:2156
		const rw::math::vpu::Matrix44 lProjMatrix;

		{
			// ParticleModule.cpp:2150
			uint32_t luSparkArray;

		}
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsGraphics::Camera::GetProjectionMatrix(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	}
	Native::SimpleParticleBatchArray::Clear(/* parameters */);
	CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::Clear(/* parameters */);
	EffectsVertexBufferManager::FlipBuffers(/* parameters */);
	EffectsVertexBufferManager::FlipBuffers(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<double>::operator=(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
}

extern void Vector3Randomiser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Utils::Vector3Randomiser::Prepare(const rw::math::vpu::Vector3  lMin, const rw::math::vpu::Vector3  lMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:133
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector3_operation_inline.h:133
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:133
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector3_operation_inline.h:133
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:133
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void BrnEffects::Utils::Vector3Randomiser::RandomiseXYZ(const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnEffectsUtils.h:123
	Vector3 lRandomVec;

	{
		// BrnEffectsUtils.h:123
		Vector3 lRandomVec;

	}
}

void BrnEffects::Utils::Vector3Randomiser::RandomInterpolate(const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnEffectsUtils.h:113
	Vector3 lRandomVec;

	{
		// BrnEffectsUtils.h:111
		VecFloat lrT;

		// BrnEffectsUtils.h:113
		Vector3 lRandomVec;

	}
}

void CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(int32_t  liMonitorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+=<VectorAxisY>(const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::HandleSpawnSparksAlongLineEvent(const SpawnSparksAlongLineEvent *  lpEvent, const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1341
		Vector3Randomiser lPosRandomiser;

		// ParticleModule.cpp:1342
		Vector3Randomiser lVelRandomiser;

		// ParticleModule.cpp:1343
		Vector3Randomiser lVelInheritanceRandomiser;

		// ParticleModule.cpp:1345
		Vector3 lvStep;

		// ParticleModule.cpp:1346
		Vector3 lvRandomisedVelocity;

		// ParticleModule.cpp:1347
		Vector3 lvRandomisedSpawnPos;

		// ParticleModule.cpp:1348
		Vector3 lvVelocityRandomness;

		// ParticleModule.cpp:1349
		Vector3 lvStartPosLoop;

		// ParticleModule.cpp:1350
		float32_t lrLength;

		// ParticleModule.cpp:1351
		float32_t lrHeightAboveGroundLoop;

		// ParticleModule.cpp:1352
		int32_t lnNumSparks;

		// ParticleModule.cpp:1353
		int32_t lnSparksLoops;

		// ParticleModule.cpp:1354
		bool lbSpawnIntoCrashBank;

		// ParticleModule.cpp:1368
		Vector3 lvSparkMinVel;

		// ParticleModule.cpp:1369
		Vector3 lvSparkMaxVel;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::GetVector3_One(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	BrnEffects::Utils::Vector3Randomiser::Prepare(/* parameters */);
	BrnEffects::Utils::Vector3Randomiser::Prepare(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnEffects::Utils::Vector3Randomiser::Prepare(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
		{
		}
	}
	{
		// ParticleModule.cpp:1427
		const ParticleCpuMonitors & lCpuMonitors;

		// ParticleModule.cpp:1428
		PerfMonCpuHelper lMonitor;

		CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	}
	rw::math::vpu::operator+=<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	BrnEffects::Utils::Vector3Randomiser::RandomiseXYZ(/* parameters */);
	BrnEffects::Utils::Vector3Randomiser::RandomInterpolate(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	BrnEffects::Utils::Vector3Randomiser::RandomiseXYZ(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

void BrnParticle::ParticleModule::EndSimulateDebris(const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1122
		const ParticleCpuMonitors & lCpuMonitors;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// ParticleModule.cpp:1130
		uint32_t luDebrisUpdateJob;

	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnEffects::Utils::ScalarRandomiser::Prepare(float32_t  lrMin, float32_t  lrMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Utils::ScalarRandomiser::RandomInterpolate(const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsUtils.h:80
		float32_t lrT;

		// BrnEffectsUtils.h:81
		float32_t lrRandomVal;

	}
}

void rw::math::vpu::operator*=(const Vector3 &  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:435
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnParticle::ParticleModule::HandleSpawnSparksFromPointEvent(const SpawnSparksFromPointEvent *  lpEvent, const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1149
		Vector3Randomiser lVelRandomiser;

		// ParticleModule.cpp:1150
		ScalarRandomiser lVelInheritanceScaleRandomiser;

		// ParticleModule.cpp:1152
		Vector3 lRandomisedVelocity;

		// ParticleModule.cpp:1153
		Vector3 lNormalScaled;

		// ParticleModule.cpp:1154
		VecFloat lvVelocityRandomness;

		// ParticleModule.cpp:1156
		float32_t lrDot;

		// ParticleModule.cpp:1157
		float32_t lrMagnitude;

		// ParticleModule.cpp:1159
		int32_t lnNumRegularSparks;

		// ParticleModule.cpp:1160
		int32_t lnNumCrashSparks;

		// ParticleModule.cpp:1161
		int32_t lnNumSparks;

		// ParticleModule.cpp:1186
		Vector3 lMinVelocity;

		// ParticleModule.cpp:1187
		Vector3 lMaxVelocity;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	BrnEffects::Utils::ScalarRandomiser::Prepare(/* parameters */);
	BrnEffects::Utils::Vector3Randomiser::Prepare(/* parameters */);
	BrnEffects::Utils::ScalarRandomiser::RandomInterpolate(/* parameters */);
	BrnEffects::Utils::Vector3Randomiser::RandomiseXYZ(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// ParticleModule.cpp:1226
		const ParticleCpuMonitors & lCpuMonitors;

		// ParticleModule.cpp:1227
		PerfMonCpuHelper lMonitor;

		CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

extern void Vector4Randomiser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Utils::Vector4Randomiser::Prepare(const rw::math::vpu::Vector4  lMin, const rw::math::vpu::Vector4  lMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisW>(VecFloatRef<VectorAxisW> &  a) {
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

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisZ, VectorAxisW, VectorAxisW, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
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

void BrnEffects::Utils::Vector4Randomiser::RandomiseXYZW(const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnEffectsUtils.h:165
	Vector4 lRandomVec;

	{
		// BrnEffectsUtils.h:165
		Vector4 lRandomVec;

	}
}

void CgsNumeric::Random::RandomVector4() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:404
		Vector4 lvResultPlusOne;

		// CgsRandom.h:407
		uint32_t luRandomA;

		// CgsRandom.h:408
		uint32_t luRandomB;

		// CgsRandom.h:409
		uint32_t luRandomC;

	}
}

void rw::math::vpu::operator*<VectorAxisW>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisW> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisZ>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisZ> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void BrnParticle::ParticleModule::HandleSpawnSparkShowerFromPointEvent(const SpawnSparkShowerFromPointEvent *const  lpEvent, const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1247
		const SparkArray & lSparkArray;

		// ParticleModule.cpp:1249
		const rw::math::vpu::Vector3 lXAxis;

		// ParticleModule.cpp:1250
		const rw::math::vpu::Vector3 lYAxis;

		// ParticleModule.cpp:1251
		const rw::math::vpu::Vector3 lZAxis;

		// ParticleModule.cpp:1252
		const rw::math::vpu::Vector3 lSpawnCentre;

		// ParticleModule.cpp:1253
		const rw::math::vpu::Vector3 lVelocityToInherit;

		// ParticleModule.cpp:1254
		const rw::math::vpu::Vector3 lReflectionVector;

		// ParticleModule.cpp:1256
		const VecFloat lVehicleSpeed;

		// ParticleModule.cpp:1257
		const VecFloat lSpeedThreshold;

		// ParticleModule.cpp:1258
		const VecFloat lSpawnVelocityScale;

		// ParticleModule.cpp:1260
		const float32_t lfGroundPositionY;

		// ParticleModule.cpp:1262
		Vector4Randomiser lParamsARandomiser;

		// ParticleModule.cpp:1272
		Vector4Randomiser lParamsBRandomiser;

		// ParticleModule.cpp:1282
		const uint32_t luNumToSpawn;

		// ParticleModule.cpp:1285
		float32_t lfSpawnTime;

		// ParticleModule.cpp:1286
		const float32_t lfSpawnTimeStep;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Vector4::Z(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Vector4::X(/* parameters */);
	rw::math::vpu::Vector4::X(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	Vector4<VectorAxisZ, VectorAxisW, VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	BrnEffects::Utils::Vector4Randomiser::Prepare(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	BrnEffects::Utils::Vector4Randomiser::Prepare(/* parameters */);
	{
		// ParticleModule.cpp:1287
		uint32_t luCount;

	}
	{
		// ParticleModule.cpp:1289
		const rw::math::vpu::Vector4 lParamsA;

		// ParticleModule.cpp:1290
		const rw::math::vpu::Vector4 lParamsB;

		// ParticleModule.cpp:1293
		const rw::math::vpu::Vector4 lSinCosSinCos;

		// ParticleModule.cpp:1294
		const rw::math::vpu::Vector3 lEmitterDirection;

		// ParticleModule.cpp:1298
		const rw::math::vpu::Vector3 lEmitterVelocity;

		// ParticleModule.cpp:1299
		const rw::math::vpu::Vector3 lInheritedVelocity;

		// ParticleModule.cpp:1300
		const rw::math::vpu::Vector3 lSpawnVelocity;

		// ParticleModule.cpp:1303
		const VecFloat lVelocityDotNormal;

		// ParticleModule.cpp:1304
		const VecFloat lClampedDot;

		// ParticleModule.cpp:1305
		const rw::math::vpu::Vector3 lRestrictedSpawnVelocity;

		// ParticleModule.cpp:1307
		const rw::math::vpu::Vector3 lSpawnPos;

		// ParticleModule.cpp:1312
		const float32_t lfHeightAbovePlane;

		// ParticleModule.cpp:1314
		const float32_t lfSparkSize;

		{
			// ParticleModule.cpp:1318
			const ParticleCpuMonitors & lCpuMonitors;

			// ParticleModule.cpp:1319
			PerfMonCpuHelper lMonitor;

			CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
			CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
		}
	}
	BrnEffects::Utils::Vector4Randomiser::RandomiseXYZW(/* parameters */);
	CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos2(/* parameters */);
	CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::MultAdd(/* parameters */);
	rw::math::vpu::MultAdd(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnEffects::Utils::Vector4Randomiser::RandomiseXYZW(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpl::VecMergeHigh_Word(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpl::VecFloor(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::EventReceiverQueue<16384,16>::Construct() {
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

void cTime::cTime(const U32  aTicks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Jobs::Job::SetCode(EA::Jobs::JobEnvironment  env, const void *  ptrToCode, int  codeSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Jobs::Job::SetName(const char *  name) {
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

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleCpuMonitors::Construct(const char *const  lpacPrefix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleCpuMonitors::AddMonitor(const char *const  lpacPrefix, const char *const  lpacName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:211
		char[32] lacBuffer;

		// ParticleModule.cpp:212
		const char *const lpacSeparator;

		// ParticleModule.cpp:214
		int32_t liCpuMon;

	}
}

void BrnParticle::ParticleModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:293
		cTime sCurrentTime;

		CgsModule::EventReceiverQueue<16384,16>::Construct(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		CgsNumeric::Random::Construct(/* parameters */);
		{
			CgsNumeric::Random::RandomFloat(/* parameters */);
		}
		{
			// ParticleModule.cpp:297
			uint32_t luEffect;

		}
		EA::Jobs::Job::SetCode(/* parameters */);
		EA::Jobs::Job::SetName(/* parameters */);
		EA::Jobs::Job::SetCode(/* parameters */);
		EA::Jobs::Job::SetName(/* parameters */);
		{
			// ParticleModule.cpp:360
			uint32_t luDebrisUpdateJob;

			{
				// ParticleModule.cpp:362
				char[32] lacJobName;

				EA::Jobs::Job::SetCode(/* parameters */);
				EA::Jobs::Job::SetName(/* parameters */);
			}
		}
		CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
		CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
		ParticleCpuMonitors::Construct(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::Construct(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
		ParticleCpuMonitors::AddMonitor(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	cTime::cTime(/* parameters */);
}

void CgsModule::EventReceiverQueue<2048,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<2048,16>::Construct(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	{
		// EffectsModule.cpp:357
		int32_t liIndex;

		{
			// EffectsModule.cpp:359
			const BrnEffects::ActiveRaceCarData & lActiveRaceCarData;

			{
				// EffectsModule.cpp:366
				int32_t liDebrisType;

			}
		}
	}
	{
		// EffectsModule.cpp:385
		uint32_t luCount;

	}
	{
		// EffectsModule.cpp:393
		uint32_t luJunkyardVfx;

	}
}

void CgsModule::VariableEventQueue<16384,16>::AllocateEventSafe(int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:601
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:602
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:600
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsVariableEventQueue.h:608
			CBufferEntry * lpBufferEntry;

			// CgsVariableEventQueue.h:609
			void * lpResult;

		}
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

void BrnParticle::ParticleModule::SpawnDebris(const rw::math::vpu::Vector3  lPoint, const rw::math::vpu::Vector3  lVelocity, const BrnParticle::Native::EDebrisArrayID  leType, const rw::math::vpu::Vector3  lRotationAxis, const float32_t  lfSize, const float32_t  lfSpawnTime, const rw::math::vpu::Vector4  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2021
		float32_t lfRotationAmount;

		// ParticleModule.cpp:2023
		const float32_t lfMinRotation;

		// ParticleModule.cpp:2024
		const float32_t lfMaxRotation;

	}
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	{
		// ParticleModule.cpp:2042
		DebrisColourRandomiser lColourRandomiser;

		BrnEffects::Utils::DebrisColourRandomiser::Randomise(/* parameters */);
	}
	{
		// ParticleModule.cpp:2059
		uint8_t * lpData;

		CgsModule::VariableEventQueue<16384,16>::AllocateEventSafe(/* parameters */);
	}
	BrnEffects::Utils::DebrisColourRandomiser::Prepare(/* parameters */);
	CgsNumeric::Random::RandomVecFloat(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	CgsNumeric::Random::RandomVecFloat(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnEffects::JumpStateMachine::FireWheelDebris(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JumpStateMachine.cpp:356
		const const WheelLite & lRearLeftWheel;

		// JumpStateMachine.cpp:357
		const const WheelLite & lRearRightWheel;

		// JumpStateMachine.cpp:358
		const RaceCarState *const lpRaceCarState;

		// JumpStateMachine.cpp:359
		const Random & lRandom;

		// JumpStateMachine.cpp:361
		const float32_t lfRaceCarVelocity;

		// JumpStateMachine.cpp:362
		const float32_t lfBlend;

		// JumpStateMachine.cpp:369
		const float32_t lfLerp;

		// JumpStateMachine.cpp:370
		const float32_t lfNumToSpawn;

		// JumpStateMachine.cpp:371
		const uint32_t luNumToSpawn;

		// JumpStateMachine.cpp:373
		Vector3Randomiser lPosRandomiser;

		// JumpStateMachine.cpp:374
		Vector3Randomiser lVelocityRandomiser;

		// JumpStateMachine.cpp:375
		Vector3Randomiser lInheritedVelocityRandomiser;

		// JumpStateMachine.cpp:378
		const VecFloat lVelocityLerp;

		// JumpStateMachine.cpp:381
		const rw::math::vpu::Vector3 lNormal;

		// JumpStateMachine.cpp:382
		const rw::math::vpu::Vector3 lRaceCarVelocityAlongGround;

		// JumpStateMachine.cpp:387
		const rw::math::vpu::Vector4 lColour;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	EffectsModule::RandomNumberGenerator(/* parameters */);
	RaceCarParticleEffectHelper::RaceCarState(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetY(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsNumeric::Random::RandomVecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	{
		// JumpStateMachine.cpp:389
		uint32_t luCount;

	}
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	Utils::Vector3Randomiser::Prepare(/* parameters */);
	Utils::Vector3Randomiser::Prepare(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Utils::Vector3Randomiser::Prepare(/* parameters */);
	{
		// JumpStateMachine.cpp:391
		const rw::math::vpu::Vector3 lDebrisPos;

		// JumpStateMachine.cpp:392
		const rw::math::vpu::Vector3 lSpawnVelocity;

		// JumpStateMachine.cpp:393
		const rw::math::vpu::Vector3 lInheritedVelocity;

		// JumpStateMachine.cpp:394
		const rw::math::vpu::Vector3 lDebrisVelocity;

		// JumpStateMachine.cpp:395
		const rw::math::vpu::Vector3 lRotationAxis;

		// JumpStateMachine.cpp:396
		const float32_t lfSizeRandom;

		// JumpStateMachine.cpp:397
		const float32_t lfSize;

		CgsNumeric::Random::RandomUnitVector(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
	}
	Utils::Vector3Randomiser::RandomInterpolate(/* parameters */);
	Utils::Vector3Randomiser::RandomiseXYZ(/* parameters */);
	Utils::Vector3Randomiser::RandomInterpolate(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	CgsNumeric::Random::RandomSignedFloat(/* parameters */);
	CgsNumeric::Random::RandomSignedFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
}

void rw::math::vpu::GetVecFloat_Two() {
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

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:147
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void BrnEffects::EffectsModule::BurstAreaEmitParticles(Vector3 *  lpCorners, const rw::math::vpu::Vector3  lvNormal, const rw::math::vpu::Vector3  lvInheritedVelocity, BrnParticle::Native::EDebrisArrayID  leDebrisType, float32_t  lfCurrentTime, float32_t  lfSizeMin, float32_t  lfSizeMax, float32_t  lfParticleDensity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2566
		const VecFloat lfZero;

		// EffectsModule.cpp:2567
		const VecFloat lfHalf;

		// EffectsModule.cpp:2568
		const VecFloat lfOne;

		// EffectsModule.cpp:2569
		const VecFloat lfFour;

		// EffectsModule.cpp:2575
		const rw::math::vpu::Vector3 lCornerA;

		// EffectsModule.cpp:2576
		const rw::math::vpu::Vector3 lCornerB;

		// EffectsModule.cpp:2577
		const rw::math::vpu::Vector3 lCornerC;

		// EffectsModule.cpp:2578
		const rw::math::vpu::Vector3 lCornerD;

		// EffectsModule.cpp:2580
		const rw::math::vpu::Vector3 lBminusA;

		// EffectsModule.cpp:2581
		const rw::math::vpu::Vector3 lCminusA;

		// EffectsModule.cpp:2582
		const rw::math::vpu::Vector3 lDminusA;

		// EffectsModule.cpp:2583
		const rw::math::vpu::Vector3 lDminusB;

		// EffectsModule.cpp:2584
		const rw::math::vpu::Vector3 lAminusBplusCminusB;

		// EffectsModule.cpp:2585
		const rw::math::vpu::Vector3 lCentrePos;

		// EffectsModule.cpp:2592
		const VecFloat lfWidthOverHeight;

		// EffectsModule.cpp:2595
		const rw::math::vpu::Vector3 lCrossABC;

		// EffectsModule.cpp:2596
		const rw::math::vpu::Vector3 lCrossACD;

		// EffectsModule.cpp:2597
		const VecFloat lfArea;

		// EffectsModule.cpp:2600
		const VecFloat lfSpawnCount;

		// EffectsModule.cpp:2603
		const float32_t lfInheritedVelocityMagnitude;

		// EffectsModule.cpp:2604
		const float32_t lfInheritedVelocityMagnitudeClamped;

		// EffectsModule.cpp:2607
		Vector3Randomiser lRandomiserA;

		// EffectsModule.cpp:2617
		Vector3Randomiser lRandomiserB;

	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::fpu::Sqrt<float>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Sqrt<float>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	Utils::Vector3Randomiser::Prepare(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
		{
			{
			}
		}
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	Utils::Vector3Randomiser::Prepare(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// EffectsModule.cpp:2625
		VecFloat lfCount;

		rw::math::vpu::operator<(/* parameters */);
		{
			// EffectsModule.cpp:2627
			const rw::math::vpu::Vector3 lParamsA;

			// EffectsModule.cpp:2628
			const rw::math::vpu::Vector3 lParamsB;

			// EffectsModule.cpp:2631
			Vector2 lUV;

			// EffectsModule.cpp:2634
			const rw::math::vpu::Vector3 lSpawnPos;

			// EffectsModule.cpp:2639
			const rw::math::vpu::Vector2 lOutVelScale;

			// EffectsModule.cpp:2642
			const rw::math::vpu::Vector3 lOutwardsVelocity;

			// EffectsModule.cpp:2643
			const rw::math::vpu::Vector3 lInheritedVelocity;

			// EffectsModule.cpp:2644
			const rw::math::vpu::Vector3 lRadialVelocity;

			// EffectsModule.cpp:2645
			const rw::math::vpu::Vector3 lSpawnVelocity;

			// EffectsModule.cpp:2648
			const float32_t lfSizeScale;

			Utils::Vector3Randomiser::RandomiseXYZ(/* parameters */);
			Utils::Vector3Randomiser::RandomiseXYZ(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			CgsNumeric::Random::RandomUnitVector(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
		}
		rw::math::vpu::operator+=(/* parameters */);
	}
}

void Attrib::Gen::debrisparams::Trail_VelocityMin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_VelocityMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_EmissionStartSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_EmissionMaxSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMin_Coloured() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMax_Coloured() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_MasterEmissionRate_Coloured() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_EmissionThreshold_Coloured() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMin_Shiny() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMax_Shiny() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_MasterEmissionRate_Shiny() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_EmissionThreshold_Shiny() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMin_Dark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMax_Dark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_MasterEmissionRate_Dark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_EmissionThreshold_Dark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMin_HighDetail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMax_HighDetail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_MasterEmissionRate_HighDetail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_EmissionThreshold_HighDetail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMin_GlassChunk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMax_GlassChunk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_MasterEmissionRate_GlassChunk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_EmissionThreshold_GlassChunk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomSignedVector3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:499
		Vector3 lvResult;

	}
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMin_Smoke() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_ParticleSizeMax_Smoke() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Trail_MasterEmissionRate_Smoke() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::HandleCrashingTrail(const BrnEffects::ActiveRaceCarData &  lActiveRaceCar, float32_t  lfCurrentTimeStep, float32_t  lfCurrentTime, const RaceCarState *  lpRaceCarState, EActiveRaceCarIndex  leActiveRaceCarIndex, const const RwRGBAReal &  lCarColour, const debrisparams &  lDebrisParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1833
		int32_t lnDebrisTypeLoop;

		// EffectsModule.cpp:1836
		float32_t lfParticleSizeMin;

		// EffectsModule.cpp:1837
		float32_t lfParticleSizeMax;

		// EffectsModule.cpp:1838
		float32_t lfEmissionRate;

		// EffectsModule.cpp:1839
		float32_t lfEmissionThreshold;

		// EffectsModule.cpp:1842
		Vector3 lvInheritedVelocity;

		// EffectsModule.cpp:1843
		Vector3 lvVolumeHalfExtent;

		// EffectsModule.cpp:1844
		Matrix44Affine lRaceCarTransform;

		// EffectsModule.cpp:1845
		float32_t lfParticleVelocityScaleMin;

		// EffectsModule.cpp:1846
		float32_t lfParticleVelocityScaleMax;

		// EffectsModule.cpp:1849
		Matrix44Affine lRaceCarsPreviousTransform;

		// EffectsModule.cpp:1852
		float32_t lfDistanceTravelled;

		// EffectsModule.cpp:1857
		float32_t lfSpeedRange;

		// EffectsModule.cpp:1860
		float32_t lfEmissionRateFactor;

		// EffectsModule.cpp:2017
		float32_t lfNumParticlesToEmit;

		// EffectsModule.cpp:2020
		Matrix44Affine lLastTransform;

		// EffectsModule.cpp:2021
		const rw::math::vpu::Vector3 lPosStep;

		// EffectsModule.cpp:2023
		uint32_t luNumberOfParticlesToEmit;

		// EffectsModule.cpp:2035
		float32_t lfLastEmissionTime;

		// EffectsModule.cpp:2038
		float32_t lfTimeDelta;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
		// EffectsModule.cpp:1877
		Vector4 lParticleColour;

		// EffectsModule.cpp:1880
		float32_t lfLastEmissionTime;

		// EffectsModule.cpp:1949
		float32_t lfNumParticlesToEmit;

		// EffectsModule.cpp:1952
		Matrix44Affine lLastTransform;

		// EffectsModule.cpp:1953
		const rw::math::vpu::Vector3 lPosStep;

		// EffectsModule.cpp:1955
		uint32_t luNumberOfParticlesToEmit;

		// EffectsModule.cpp:1967
		float32_t lfTimeDelta;

		rw::math::vpu::GetVector4_One(/* parameters */);
		rw::math::vpu::Vector4::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
			// EffectsModule.cpp:1969
			uint32_t luDebrisParticle;

		}
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// EffectsModule.cpp:2040
		uint32_t luDebrisParticle;

	}
	{
		// EffectsModule.cpp:1972
		Vector3 lvPosition;

		// EffectsModule.cpp:1978
		Vector3 lvVelocity;

		// EffectsModule.cpp:1987
		Vector3 lvRotationAxis;

		// EffectsModule.cpp:1990
		float32_t lfRandomSize;

		CgsNumeric::Random::RandomSignedVector3(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		CgsNumeric::Random::RandomUnitVector(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	{
		// EffectsModule.cpp:2043
		Vector3 lvPosition;

		// EffectsModule.cpp:2049
		Vector3 lvVelocity;

		// EffectsModule.cpp:2058
		Vector3 lvRotationAxis;

		// EffectsModule.cpp:2061
		float32_t lfRandomSize;

		CgsNumeric::Random::RandomSignedVector3(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		CgsNumeric::Random::RandomUnitVector(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
}

void BrnParticle::ParticleModule::SpawnSpark(const rw::math::vpu::Vector3  lSpawnPosition, const rw::math::vpu::Vector3  lSpawnVelocity, BrnParticle::Native::ESparkArrayID  lType, float32_t  lfSize, float32_t  lfSpawnTime, float32_t  lfHeightAboveGround, bool  lbUseCrashBank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1983
		uint8_t * lpData;

		CgsModule::VariableEventQueue<16384,16>::AllocateEventSafe(/* parameters */);
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

extern void SpawnSparkShowerFromPointEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
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
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsVariableEventQueue.h:516
			CBufferEntry * lpBufferEntry;

		}
	}
}

void BrnParticle::ParticleModule::SpawnSparkShowerFromPoint(const rw::math::vpu::Matrix44Affine &  lTransform, const rw::math::vpu::Vector4  lLateralAngleMinMaxForwardAngleMinMax, const rw::math::vpu::Vector4  lVelocityMinMaxInheritanceMinMax, const rw::math::vpu::Vector3  lVelocityToInherit, const rw::math::vpu::Vector4  lSparkSizeMinMaxSpawnRadiusXSpawnRadiusYZ, const float32_t  lfCurrentTime, const float32_t  lfGroundPositionY, const float32_t  lfVelocityScaleSpeedThreshold, const float32_t  lfReflectionAmount, const uint32_t  luNumToSpawn, const BrnParticle::Native::ESparkArrayID  leSparkType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2764
		SpawnSparkShowerFromPointEvent lEvent;

	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
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

void SparkShowerController::GetLateralAngleMinMaxForwardAngleMinMax(const VecFloat  lLerp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// EffectsModule.cpp:145
	Vector4 lLateralAngleMinMaxForwardAngleMinMax;

	{
		// EffectsModule.cpp:145
		const rw::math::vpu::Vector4 lLateralAngleMinMaxForwardAngleMinMax;

	}
}

void SparkShowerController::GetSpawnVelocityMinMaxInheritedVelocityMinMax(const VecFloat  lLerp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// EffectsModule.cpp:156
	Vector4 lSpawnVelocityMinMaxInheritedVelocityMinMax;

	{
		// EffectsModule.cpp:156
		const rw::math::vpu::Vector4 lSpawnVelocityMinMaxInheritedVelocityMinMax;

	}
}

void SparkShowerController::GetSparkSizeMinMaxSpawnRadiusXSpawnRadiusYZ(const VecFloat  lLerp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// EffectsModule.cpp:167
	Vector4 lSparkSizeMinMaxSpawnRadiusXSpawnRadiusYZ;

	{
		// EffectsModule.cpp:167
		const rw::math::vpu::Vector4 lSparkSizeMinMaxSpawnRadiusXSpawnRadiusYZ;

	}
}

void SparkShowerController::GetVelocitySpeedScaleThreshold() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void SparkShowerController::GetReflectionAmount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void SparkShowerController::GetSparkArrayId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::DoSparkShower(const const SparkShowerController &  lSparkShowerController, const VecFloat  lSparkShowerControllerLerp, const rw::math::vpu::Matrix44Affine &  lEmitterTransform, const rw::math::vpu::Vector3  lEmitterVelocity, const float32_t  lfCurrentTime, const float32_t  lfGroundPlaneY, const uint32_t  luNumToSpawn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2528
		const rw::math::vpu::Vector4 lLateralAngleMinMaxForwardAngleMinMax;

		// EffectsModule.cpp:2529
		const rw::math::vpu::Vector4 lVelocityMinMaxInheritedVelocityMinMax;

		// EffectsModule.cpp:2530
		const rw::math::vpu::Vector4 lSpawnSizeMinMaxSpawnRadiusXSpawnRadiusYZ;

		// EffectsModule.cpp:2531
		const float32_t lfVelocityScaleSpeedThreshold;

		// EffectsModule.cpp:2532
		const float32_t lfReflectionAmount;

		// EffectsModule.cpp:2533
		const BrnParticle::Native::ESparkArrayID leSparkArrayId;

		// EffectsModule.cpp:2535
		const rw::math::vpu::Vector4 lLateralAngleMinMaxForwardAngleMinMaxRadians;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	SparkShowerController::GetLateralAngleMinMaxForwardAngleMinMax(/* parameters */);
	SparkShowerController::GetSpawnVelocityMinMaxInheritedVelocityMinMax(/* parameters */);
	SparkShowerController::GetSparkSizeMinMaxSpawnRadiusXSpawnRadiusYZ(/* parameters */);
	SparkShowerController::GetSparkArrayId(/* parameters */);
	SparkShowerController::GetVelocitySpeedScaleThreshold(/* parameters */);
	SparkShowerController::GetReflectionAmount(/* parameters */);
}

void Attrib::Gen::visualfxsurface::GrindingCrashGrindingRateFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:407
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:408
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector3_operation_inline.h:408
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:408
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector3_operation_inline.h:408
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:408
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void BrnEffects::EffectsModule::FireJumpSparks(const float32_t  lfCurrentTimeStep, const float32_t  lfCurrentTime, const rw::math::vpu::Vector3  lWSContactPoint, const rw::math::vpu::Vector3  lWSContactNormal, const RaceCarState *  lpRaceCarState, const float32_t  lfGroundPositionY, const const CollisionTag &  lCollisionTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1618
		const uint8_t lSurfaceID;

		// EffectsModule.cpp:1619
		const surface lSurface;

		// EffectsModule.cpp:1620
		const visualfxsurface lVFXSurface;

		// EffectsModule.cpp:1621
		const float32_t lfGrindingRate;

		// EffectsModule.cpp:1635
		const rw::math::vpu::Vector3 lXAxis;

		// EffectsModule.cpp:1636
		const rw::math::vpu::Vector3 lRaceCarVelocity;

		// EffectsModule.cpp:1637
		const rw::math::vpu::Vector3 lVelocityProjectedOntoPlane;

		// EffectsModule.cpp:1638
		const VecFloat lVelocityMagnitude;

		// EffectsModule.cpp:1639
		const rw::math::vpu::Vector3 lYAxis;

		// EffectsModule.cpp:1640
		const rw::math::vpu::Vector3 lZAxis;

		// EffectsModule.cpp:1641
		const rw::math::vpu::Matrix44Affine lEmitterTransform;

		// EffectsModule.cpp:1643
		const float32_t lfSpeedAlongGround;

		// EffectsModule.cpp:1645
		const float32_t lfVelocityThreshold;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
	}
	Attrib::Gen::surface::surface(/* parameters */);
	Attrib::Gen::visualfxsurface::visualfxsurface(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	Attrib::Gen::visualfxsurface::~visualfxsurface(/* parameters */);
	Attrib::Gen::surface::~surface(/* parameters */);
	{
		// EffectsModule.cpp:1649
		const float32_t lfMinSparksPerMetre;

		// EffectsModule.cpp:1650
		const float32_t lfMaxSparksPerMetre;

		// EffectsModule.cpp:1651
		const float32_t lfRandom;

		// EffectsModule.cpp:1652
		const float32_t lfNumPerMetre;

		// EffectsModule.cpp:1653
		const float32_t lfNumToSpawn;

		// EffectsModule.cpp:1655
		const uint32_t luNumToSpawn;

		// EffectsModule.cpp:1657
		const VecFloat lSparkShowerControllerLerp;

		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
}

void BrnEffects::ActiveRaceCarData::GetGroundPositionY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::JumpStateMachine::FireWheelSparks(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JumpStateMachine.cpp:310
		const const WheelLite & lRearLeftWheel;

		// JumpStateMachine.cpp:311
		const const WheelLite & lRearRightWheel;

	}
	{
		// JumpStateMachine.cpp:316
		const const ActiveRaceCarData & lRaceCarData;

		// JumpStateMachine.cpp:317
		const float32_t lfGroundHeight;

		// JumpStateMachine.cpp:318
		const Random & lRandom;

		// JumpStateMachine.cpp:320
		const VecFloat lSparksLerpA;

		// JumpStateMachine.cpp:321
		const VecFloat lSparksLerpB;

		// JumpStateMachine.cpp:323
		const rw::math::vpu::Vector3 lSparksSpawnPosA;

		// JumpStateMachine.cpp:326
		const rw::math::vpu::Vector3 lSparksSpawnPosB;

		// JumpStateMachine.cpp:329
		const rw::math::vpu::Vector3 lSparksSpawnNormalA;

		// JumpStateMachine.cpp:332
		const rw::math::vpu::Vector3 lSparksSpawnNormalB;

		EffectsModule::RandomNumberGenerator(/* parameters */);
		CgsNumeric::Random::RandomVecFloat(/* parameters */);
		ActiveRaceCarData::GetGroundPositionY(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		CgsNumeric::Random::RandomVecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		RaceCarParticleEffectHelper::EffectsModule(/* parameters */);
		RaceCarParticleEffectHelper::RaceCarState(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		RaceCarParticleEffectHelper::EffectsModule(/* parameters */);
		RaceCarParticleEffectHelper::RaceCarState(/* parameters */);
	}
}

void BrnEffects::ActiveRaceCarData::GetBurstAccumulatorWorldGrinding() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BurstAccumulator::Update(const float32_t  lfNumSparksToAdd, const float32_t  lfCurrentTime, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ActiveRaceCarData.h:91
		const float32_t lfRandom;

		// ActiveRaceCarData.h:99
		const uint32_t luBurstSize;

	}
}

void BrnEffects::BurstAccumulator::GetBurstSizeAsInterpolatorBetweenMinAndMax(const uint32_t  luBurstSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ActiveRaceCarData.h:113
		const float32_t lfInterpolator;

		// ActiveRaceCarData.h:114
		const float32_t lfClampedInterpolator;

	}
}

void BrnEffects::EffectsModule::HandleVehicleVehicleSparks(const rw::math::vpu::Vector3  lContactPoint, const rw::math::vpu::Vector3  lSecondVehicleVelocity, const BrnEffects::ActiveRaceCarData &  lActiveRaceCar, const RaceCarState *const  lpRaceCarState, const float32_t  lfTimeStep, const float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1514
		const float32_t lfVelocityThreshold;

		// EffectsModule.cpp:1515
		const float32_t lfSparksPerMetreBase;

		// EffectsModule.cpp:1516
		const float32_t lfSparksPerMetreVariance;

		// EffectsModule.cpp:1517
		const float32_t lfSparksPerMetreVarianceFrequency;

		// EffectsModule.cpp:1519
		const rw::math::vpu::Vector3 lRaceCarVelocity;

		// EffectsModule.cpp:1520
		const float32_t lfRaceCarSpeed;

		// EffectsModule.cpp:1528
		const float32_t lfSparksPerMetre;

		// EffectsModule.cpp:1533
		const float32_t lfNumToSpawn;

		// EffectsModule.cpp:1536
		const BurstAccumulator & lBurstAccumulatorGrindingCars;

		// EffectsModule.cpp:1537
		const uint32_t luNumToSpawn;

		// EffectsModule.cpp:1544
		const rw::math::vpu::Vector3 lAverageVelocity;

		// EffectsModule.cpp:1547
		const float32_t lfBurstScale;

		// EffectsModule.cpp:1549
		const VecFloat lfSparkShowerControllerLerp;

		// EffectsModule.cpp:1556
		const rw::math::vpu::Vector3 lYAxis;

		// EffectsModule.cpp:1557
		const rw::math::vpu::Vector3 lZAxis;

		// EffectsModule.cpp:1558
		const rw::math::vpu::Vector3 lXAxis;

		// EffectsModule.cpp:1559
		const rw::math::vpu::Matrix44Affine lEmitterTransform;

	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	rw::math::fpu::Cos(/* parameters */);
	ActiveRaceCarData::GetBurstAccumulatorWorldGrinding(/* parameters */);
	BurstAccumulator::Update(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	BurstAccumulator::GetBurstSizeAsInterpolatorBetweenMinAndMax(/* parameters */);
	ActiveRaceCarData::GetGroundPositionY(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::fpu::Min<float>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
}

extern void SpawnSparksFromPointEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SpawnSparksFromPoint(float32_t  lfCurrentTime, const rw::math::vpu::Vector3  lPos, const rw::math::vpu::Vector3  lVelocity, const rw::math::vpu::Vector3  lNormal, BrnParticle::Native::ESparkArrayID  lType, float32_t  lrNumSparks, float32_t  lrHeightAboveGround, float32_t  lrVelocityInheritMin, float32_t  lrVelocityInheritMax, bool  lbIsCrashRelated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2733
		SpawnSparksFromPointEvent lEvent;

	}
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
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

void CB4SparkSpawnParams::VelocityToSpawnCount(float32_t  lrInputVelocity, float32_t  lrTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void Attrib::Gen::sparkeffect::T1_VelocityInheritanceMin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::T1_VelocityInheritanceMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::HandleRaceCarRaceCarSparks(float32_t  lfCurrentTimeStep, float32_t  lfCurrentTime, const rw::math::vpu::Vector3  lWSContactPoint, const rw::math::vpu::Vector3  lWSContactNormal, const RaceCarState *  lpRaceCarState, const float32_t  lfGroundHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1580
		bool8_t lbDisableThisEffect;

		// EffectsModule.cpp:1583
		float32_t lrNumSparks;

		// EffectsModule.cpp:1588
		Vector3 lVelocity;

		// EffectsModule.cpp:1592
		float32_t lrHeightAboveGround;

		// EffectsModule.cpp:1593
		bool lbIsCrashRelated;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	{
	}
	CB4SparkSpawnParams::VelocityToSpawnCount(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

extern void FireDebrisBurstEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::debrisparams(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::~debrisparams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::operator=(const const debrisparams &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::GetBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::operator=(const const Attrib::Instance &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~FireDebrisBurstEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::FireDebrisBurst(const rw::math::vpu::Vector3  lSpawnPosition, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector3  lEmitterHalfExtents, const rw::math::vpu::Vector3  lVelocityToInherit, float32_t  lfCurrentTime, float32_t  lfScaleFactor, const const debrisparams &  lDebrisParams, const rw::math::vpu::Vector4  lCarColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1460
		FireDebrisBurstEvent lEvent;

		FireDebrisBurstEvent(/* parameters */);
	}
	Attrib::Instance::SetDefaultLayout(/* parameters */);
	Attrib::Gen::debrisparams::operator=(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	~FireDebrisBurstEvent(/* parameters */);
	{
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

void Attrib::Gen::debrisparams::Burst_MinimumEmissionSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_MidPointEmissionSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_MinimumPercentage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_MidPointPercentage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_MaximumEmissionSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_MaximumPercentage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::EmitterHalfExtents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::HandleBurstDebris(const RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, EActiveRaceCarIndex  leActiveRaceCarIndex, float32_t  lfCurrentTimeStep, float32_t  lfCurrentTime, const rw::math::vpu::Vector3  lvContactPoint, const rw::math::vpu::Vector3  lvContactNormal, const RaceCarState *  lpRaceCarState, const Camera *  lpCamera, const const debrisparams &  lDebrisParams, const const RwRGBAReal &  lCarColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1682
		float32_t lfBurstDebrisScaleFactor;

		// EffectsModule.cpp:1685
		float32_t lfRaceCarVelocity;

		// EffectsModule.cpp:1695
		Vector3 lvSpawnPosition;

		// EffectsModule.cpp:1698
		const rw::math::vpu::Vector4 lCarColourAsVector4;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// EffectsModule.cpp:1704
		float32_t lfSpeedLerpValue;

	}
	{
		// EffectsModule.cpp:1717
		float32_t lfSpeedLerpValue;

		rw::math::fpu::Min<float>(/* parameters */);
	}
}

void BrnDirector::Camera::CameraState::IsFlagSet(BrnDirector::Camera::CameraState::EFlag  leFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<renderengine::Texture>::operator renderengine::Texture*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:490
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::EmitterArray::operator BrnParticle::Native::TrailEmitter**() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator!=(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::IsEqual(const ResourceHandle::Resource *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetGenericLocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::LocatorPointSpecList::GetNumLocatorPoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::TrailEmitterData::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::ChangeWithDefault(Attribute::Key  collectionkey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::Change(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surface::surface(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surface::DebugRenderColor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero(const rw::math::vpu::Vector4  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsZeroV4(VectorIntrinsicInParam  v, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:274
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:275
			VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

			{
				// vector_intrinsic_operation_inline.h:275
				const VectorIntrinsicUnion::VectorIntrinsic mask;

				// vector_intrinsic_operation_inline.h:275
				const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

			}
		}
	}
}

void Attrib::Gen::visualfxsurface::SkidMarkStartColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::SkidMarkEndColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::UpdateTrailType(int16_t  liSkidMarkTypeID, const rw::math::vpu::Vector4  lSkidMarkStartColour, const rw::math::vpu::Vector4  lSkidMarkEndColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::Num_Surfaces() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::PostWorldPreparePrepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Gen::surfacelist::ChangeWithDefault(/* parameters */);
	Attrib::Gen::surfacelist::Change(/* parameters */);
	{
		// EffectsModule.cpp:563
		surface lSampleSurface;

		// EffectsModule.cpp:564
		Vector4 lSampleColour;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		Attrib::Gen::surface::~surface(/* parameters */);
	}
	{
		// EffectsModule.cpp:569
		uint32_t i;

		{
			// EffectsModule.cpp:571
			surface lSurface;

			// EffectsModule.cpp:572
			visualfxsurface lVFXSurface;

			Attrib::Gen::surface::surface(/* parameters */);
			Attrib::Gen::visualfxsurface::visualfxsurface(/* parameters */);
			Attrib::Gen::visualfxsurface::SkidMarkTypeID(/* parameters */);
			BrnParticle::ParticleModule::UpdateTrailType(/* parameters */);
			Attrib::Gen::surface::~surface(/* parameters */);
			Attrib::Gen::visualfxsurface::~visualfxsurface(/* parameters */);
		}
		Attrib::Gen::surfacelist::Num_Surfaces(/* parameters */);
		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
	}
	{
		// EffectsModule.cpp:565
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void BrnEffects::EffectsIO::DispatchInputBuffer::GetBaseEffectsFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:372
		CgsDev::StrStream lStrStream;

	}
}

void BrnEffects::EffectsIO::DispatchInputBuffer::GetCameraInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:244
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::Camera::GetEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::GetMotionBlurData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::MotionBlurData::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetDepthOfField() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::DepthOfField::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetUseTint(bool  lbUseTint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetUseTint2d(bool  lbUseTint2d) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetUseVignette(bool  lbUseVignette) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetUseBloom(bool  lbUseBloom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetUseBlur(bool  lbUseBlur) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetUseDepthOfField(bool  lbUseDepthOfField) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VignetteData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetVignetteData(const const VignetteData &  lData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BloomData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::GetBloomLuminanceModifier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::GetBloomThresholdModifier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetBloomData(const const BloomData &  lData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TintData2d() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetTintData2d(const const TintData2d &  lData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::DepthOfField::GetFocusStartDistanceMeters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::DepthOfField::GetPerfectFocusStartDistanceMeters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::DepthOfField::GetPerfectFocusEndDistanceMeters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::DepthOfField::GetFocusEndDistanceMeters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::DepthOfField::GetBlurriness() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::DepthOfFieldData::Construct(float32_t  lfNearPlane, float32_t  lfFocalPlane, float32_t  lfFocalPlane2, float32_t  lfFarPlane, float32_t  lfDofAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetDepthOfFieldData(const const DepthOfFieldData &  lData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::b4blurasset::b4blurasset(Attribute::Key  collectionKey, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::b4blurasset::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BlurData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetBlurData(const const BlurData &  lData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::MotionBlurData::IsExpensiveMotionBlur() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::MotionBlurData::GetCarsBlendAmount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::MotionBlurData::GetWorldBlendAmount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetMotionBlurData(const const MotionBlurData &  lMotionBlurData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::GetLinearVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetLinearVelocity(const rw::math::vpu::Vector3  lvLinear) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::GetAngularVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetAngularVelocity(const rw::math::vpu::Vector3  lvAngular) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::GetSpeedMPH() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetSpeedMPH(float32_t  lSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::GetSteering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetSteering(float32_t  lSteering) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::GetCarTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetCarTransform(Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::GetIsRacingGameplayCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetIsRacingGameplayCamera(bool  lGameCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::GetCameraTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::SetCameraTransform(Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::b4blurasset::~b4blurasset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::GenerateRenderRequests(const DispatchInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1199
		BrnEffectsFrame * lpEffectsFrame;

		// EffectsModule.cpp:1201
		const Camera * lpCamera;

		// EffectsModule.cpp:1204
		bool lbCameraWantsBlur;

		// EffectsModule.cpp:1206
		bool lUseVignette;

		// EffectsModule.cpp:1207
		bool lUseBloom;

		// EffectsModule.cpp:1208
		bool lUseTint2D;

		// EffectsModule.cpp:1209
		bool lUseTint;

		// EffectsModule.cpp:1210
		bool lUseDepthOfField;

		// EffectsModule.cpp:1231
		Attribute::Key gDefaultVignetteAssetKey;

		// EffectsModule.cpp:1243
		Attribute::Key gDefaultBloomAssetKey;

		// EffectsModule.cpp:1259
		Attribute::Key gDefault2dTintAssetKey;

		// EffectsModule.cpp:1284
		Attribute::Key gDefaultB4BlurAssetKey;

		// EffectsModule.cpp:1285
		b4blurasset lB4BlurAsset;

		// EffectsModule.cpp:1297
		const const MotionBlurData & lOriginalMotionBlurData;

		// EffectsModule.cpp:1298
		MotionBlurData lMotionBlurData;

		EffectsIO::DispatchInputBuffer::GetBaseEffectsFrame(/* parameters */);
		EffectsIO::DispatchInputBuffer::GetCameraInput(/* parameters */);
		BrnDirector::Camera::DepthOfField::IsActive(/* parameters */);
		BrnDirector::Camera::Camera::GetDepthOfField(/* parameters */);
		BrnDirector::Camera::Camera::GetEffects(/* parameters */);
		BrnDirector::Camera::CameraEffects::GetMotionBlurData(/* parameters */);
		BrnEffectsFrame::SetUseTint(/* parameters */);
		BrnEffectsFrame::SetUseTint2d(/* parameters */);
		BrnEffectsFrame::SetUseVignette(/* parameters */);
		BrnEffectsFrame::SetUseBloom(/* parameters */);
		BrnEffectsFrame::SetUseBlur(/* parameters */);
		BrnEffectsFrame::SetUseDepthOfField(/* parameters */);
		{
			// EffectsModule.cpp:1273
			DepthOfFieldData lDepthOfFieldData;

			// EffectsModule.cpp:1275
			const const DepthOfField & lCameraDof;

			BrnDirector::Camera::DepthOfField::GetFocusEndDistanceMeters(/* parameters */);
			BrnDirector::Camera::DepthOfField::GetFocusStartDistanceMeters(/* parameters */);
			BrnDirector::Camera::DepthOfField::GetPerfectFocusStartDistanceMeters(/* parameters */);
			BrnDirector::Camera::DepthOfField::GetPerfectFocusEndDistanceMeters(/* parameters */);
			BrnEffectsFrame::SetDepthOfFieldData(/* parameters */);
		}
		Attrib::Gen::b4blurasset::b4blurasset(/* parameters */);
		BrnEffectsFrame::SetMotionBlurData(/* parameters */);
		TempRaceCarStateCache::GetCarTransform(/* parameters */);
		BrnEffectsFrame::SetCarTransform(/* parameters */);
		TempRaceCarStateCache::GetCameraTransform(/* parameters */);
		BrnEffectsFrame::SetSpeedMPH(/* parameters */);
		BrnEffectsFrame::SetSteering(/* parameters */);
		BrnEffectsFrame::SetCameraTransform(/* parameters */);
		Attrib::Gen::b4blurasset::~b4blurasset(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		BrnEffectsFrame::SetIsRacingGameplayCamera(/* parameters */);
	}
	{
		// EffectsModule.cpp:1235
		VignetteData lVignetteData;

		BrnEffectsFrame::SetVignetteData(/* parameters */);
	}
	{
		// EffectsModule.cpp:1247
		BloomData lBloomData;

		BrnEffectsFrame::SetBloomData(/* parameters */);
	}
	{
		// EffectsModule.cpp:1263
		TintData2d lTint2dData;

		BrnEffectsFrame::SetTintData2d(/* parameters */);
	}
	{
		// EffectsModule.cpp:1289
		BlurData lBlurData;

		BrnEffectsFrame::SetBlurData(/* parameters */);
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

void CgsModule::VariableEventQueue<13312,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<13312,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnEffects::EffectsModule::JunkyardVfxReadLine(const char *const  lpacLabel, char *const  lpacOutputBuffer, const uint32_t  luOutputBufferSize, const const char *&  lpcCurrentChar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2286
		const uint32_t luLabelLength;

	}
	{
		// EffectsModule.cpp:2324
		char * lpcCopyChar;

		{
			// EffectsModule.cpp:2330
			CgsDev::StrStream lStrStream;

		}
	}
	{
		// EffectsModule.cpp:2313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// EffectsModule.cpp:2337
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<128,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<128,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<128,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:824
		CgsDev::StrStream lStrStream;

	}
}

void BrnEffects::ActiveRaceCarData::HasChanged(CgsID  lID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarLoaded(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::ParticleEffectHelper::ParticleEffectHelper(const BrnParticle::ParticleModule &  lParticleModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarColour(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::Set(uint32_t  luOwner, uint32_t  luEntityIndex, uint32_t  luPartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterface::GetLocatorData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::operator std::uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterface::GetNumLocatorOutputs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::RaceCarParticleEffectHelper::RaceCarParticleEffectHelper(const BrnEffects::EffectsModule &  lEffectModule, const BrnEffects::ActiveRaceCarData &  lActiveRaceCar, const RaceCarState *  lpRaceCarState, const BrnParticle::ParticleModule &  lParticleModule, const BrnEffects::EffectsDebugComponent *  lDebugComponent, uint32_t  luWorldIndex, const const RwRGBAReal &  lCarColour, BrnGameState::GameStateModuleIO::EGameModeType  leCurrentGameMode, const VehicleLocatorOutput *  lpVehicleLocators) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetDeformationModelResourcePtr(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EffectsModuleParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarEngineOn(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerEngineOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::UpdateActiveRaceCars(EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, const const EffectsModuleParams &  lEffectsModuleParams, const RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const BoostOutputInfo *  lpBoostInfos, const DeformationOutputInterface *  lpDeformationInterface, const AudioEffectsMessageQueue *const  lpAudioEffectsMessageQueue, bool  lbPlayerCarHidden) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:3071
		EActiveRaceCarIndex leCurrentActiveRaceCarIndex;

		// EffectsModule.cpp:3074
		float32_t[8] lafExhaustPopIntensity;

		// EffectsModule.cpp:3075
		bool8_t[8] labExhaustPop;

		// EffectsModule.cpp:3081
		const CgsModule::Event * lpAudioEffectsEvent;

		// EffectsModule.cpp:3082
		int32_t lnActionSize;

		// EffectsModule.cpp:3083
		int32_t lnEventType;

		{
			// EffectsModule.cpp:3076
			uint32_t luRaceCarId;

		}
		CgsModule::VariableEventQueue<128,16>::GetFirstEvent(/* parameters */);
		{
			// EffectsModule.cpp:3090
			const PopEffectsMessage *const lpPopEffectsMessage;

			// EffectsModule.cpp:3091
			const uint8_t luRaceCarId;

		}
		{
			// EffectsModule.cpp:3113
			const BrnEffects::ActiveRaceCarData & lRaceCar;

			// EffectsModule.cpp:3114
			CgsID lCurrentRaceCarID;

			// EffectsModule.cpp:3115
			bool lbRaceCarHasChanged;

			// EffectsModule.cpp:3116
			bool lbRaceCarIsLoaded;

			// EffectsModule.cpp:3147
			const RaceCarState * lpActiveRaceCarState;

			// EffectsModule.cpp:3150
			RwRGBAReal lCarColour;

			// EffectsModule.cpp:3152
			uint32_t luWorldIndex;

			// EffectsModule.cpp:3155
			EffectsDebugComponent * lpDebugComponent;

			// EffectsModule.cpp:3159
			const VehicleLocatorOutput * lpLocatorData;

			// EffectsModule.cpp:3162
			EntityId lTempRaceCarEntityID;

			// EffectsModule.cpp:3174
			RaceCarParticleEffectHelper lEffectHelper;

			// EffectsModule.cpp:3198
			CarState lCarState;

			// EffectsModule.cpp:3243
			const RaceCarState * lpRaceCarState;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarLoaded(/* parameters */);
			rw::math::fpu::Max<float>(/* parameters */);
			rw::math::fpu::Max<float>(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarLoaded(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		}
		operator++(/* parameters */);
	}
	{
		// EffectsModule.cpp:3128
		ParticleEffectHelper lResetEffectHelper;

		ParticleEffectHelper::ParticleEffectHelper(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarColour(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	{
		// EffectsModule.cpp:3165
		int32_t lnLoop;

		BrnPhysics::Deformation::DeformationOutputInterface::GetNumLocatorOutputs(/* parameters */);
	}
	BrnPhysics::Deformation::DeformationOutputInterface::GetLocatorData(/* parameters */);
	RaceCarParticleEffectHelper::RaceCarParticleEffectHelper(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarEngineOn(/* parameters */);
	ActiveRaceCarData::JustStartedCrashing(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarColour(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetDeformationModelResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerEngineOn(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarColour(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterface::GetLocatorData(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnEffects::EffectsModule::ProcessActiveRaceCars(const const EffectsModuleParams &  lEffectsModuleParams, const RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const BoostOutputInfo *  lpBoostInfos, const DeformationOutputInterface *  lpDeformationInterface, const AudioEffectsMessageQueue *const  lpAudioEffectsMessageQueue, bool  lbPlayerCarHidden) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2980
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::GrindingRaceGrindingRateFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::Burst_TimeBetweenBursts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::visualfxsurface::IsGrindingEffectEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::BaseContact::IsContactWithWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::ProcessRaceCarContacts(const ContactSpyData::RaceCarContactQueue *  lpRaceCarContactQueue, const RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const const EffectsModuleParams &  lEffectsModuleParams, const Camera *  lpCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:3295
		int32_t lRaceCarContactQueueLenth;

		// EffectsModule.cpp:3298
		bool lbGameIsCurrentlyInRoadRageMode;

	}
	BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetLength(/* parameters */);
	{
		// EffectsModule.cpp:3302
		int32_t iRaceCarContact;

		{
			// EffectsModule.cpp:3305
			const const RaceCarContact & lRaceCarContact;

			// EffectsModule.cpp:3308
			EActiveRaceCarIndex leActiveRaceCarIndex;

			// EffectsModule.cpp:3312
			const RaceCarState * lpActiveRaceCarState;

			// EffectsModule.cpp:3323
			const BrnEffects::ActiveRaceCarData & lRaceCar;

			// EffectsModule.cpp:3326
			RwRGBAReal lCarColour;

			// EffectsModule.cpp:3329
			BrnWorld::EEntityTypeID leEntityBOwner;

			CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetEvent(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarColour(/* parameters */);
			CgsSceneManager::EntityId::GetOwner(/* parameters */);
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		// EffectsModule.cpp:3595
		const rw::math::vpu::Vector3 lRaceCarVelocity;

		// EffectsModule.cpp:3596
		const float32_t lfRaceCarSpeed;

		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
		{
			// EffectsModule.cpp:3601
			const float32_t KF_CRASH_DUST_PARTICLES_PER_METRE;

			// EffectsModule.cpp:3602
			const float32_t KF_CRASH_DUST_MIN_VELOCITY_INHERITANCE;

			// EffectsModule.cpp:3603
			const float32_t KF_CRASH_DUST_MAX_VELOCITY_INHERITANCE;

			// EffectsModule.cpp:3606
			const float32_t lfNumParticlesToSpawnThisFrame;

			// EffectsModule.cpp:3610
			const uint32_t luParticleCount;

			// EffectsModule.cpp:3613
			Vector3Randomiser lSpawnPosRandomiser;

			// EffectsModule.cpp:3618
			Vector4Randomiser lVelocityRandomiser;

			{
				// EffectsModule.cpp:3622
				uint32_t luCount;

			}
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			Utils::Vector4Randomiser::Prepare(/* parameters */);
			Utils::Vector3Randomiser::Prepare(/* parameters */);
			{
				// EffectsModule.cpp:3624
				const float32_t lfParticleSize;

				// EffectsModule.cpp:3626
				const rw::math::vpu::Vector3 lSpawnPosition;

				// EffectsModule.cpp:3627
				const rw::math::vpu::Vector4 lVelocity4;

				// EffectsModule.cpp:3628
				const rw::math::vpu::Vector3 lSpawnVelocity;

				CgsNumeric::Random::RandomFloat(/* parameters */);
				Utils::Vector3Randomiser::RandomiseXYZ(/* parameters */);
				Utils::Vector4Randomiser::RandomiseXYZW(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				CgsNumeric::Random::RandomUInt(/* parameters */);
				CgsNumeric::Random::RandomUInt(/* parameters */);
				CgsNumeric::Random::RandomUInt(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				CgsNumeric::Random::RandomUInt(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				CgsNumeric::Random::RandomUInt(/* parameters */);
				rw::math::vpu::operator+(/* parameters */);
				rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
			}
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		// EffectsModule.cpp:3338
		const float32_t lfVelocityThreshold;

		// EffectsModule.cpp:3339
		const float32_t lfSparksPerMetreBase;

		// EffectsModule.cpp:3340
		const float32_t lfSparksPerMetreVariance;

		// EffectsModule.cpp:3341
		const float32_t lfSparksPerMetreVarianceFrequency;

		// EffectsModule.cpp:3344
		const uint8_t lSurfaceID;

		// EffectsModule.cpp:3345
		const surface lSurface;

		// EffectsModule.cpp:3346
		const visualfxsurface lVFXSurface;

		// EffectsModule.cpp:3347
		const float32_t lfSurfaceGrindingRateFactor;

		// EffectsModule.cpp:3349
		const rw::math::vpu::Vector3 lRaceCarVelocity;

		// EffectsModule.cpp:3350
		const float32_t lfRaceCarSpeed;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Gen::visualfxsurface::visualfxsurface(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		Attrib::Gen::visualfxsurface::~visualfxsurface(/* parameters */);
		Attrib::Gen::surface::~surface(/* parameters */);
	}
	{
		// EffectsModule.cpp:3355
		const float32_t lfTime;

		// EffectsModule.cpp:3358
		const float32_t lfSparksPerMetre;

		// EffectsModule.cpp:3363
		const float32_t lfNumToSpawn;

		// EffectsModule.cpp:3366
		const BurstAccumulator & lBurstAccumulatorGrindingWorld;

		// EffectsModule.cpp:3367
		const uint32_t luNumToSpawn;

		rw::math::fpu::Cos(/* parameters */);
		ActiveRaceCarData::GetBurstAccumulatorWorldGrinding(/* parameters */);
		BurstAccumulator::Update(/* parameters */);
		{
			CgsNumeric::Random::RandomFloat(/* parameters */);
		}
		{
			// EffectsModule.cpp:3372
			const float32_t lfBurstScale;

			// EffectsModule.cpp:3374
			const VecFloat lfSparkShowerControllerLerp;

			// EffectsModule.cpp:3381
			const rw::math::vpu::Vector3 lContactNormal;

			// EffectsModule.cpp:3382
			const rw::math::vpu::Vector3 lNormalCrossYAxis;

			// EffectsModule.cpp:3383
			const rw::math::vpu::Vector3 lNormalCrossXAxis;

			// EffectsModule.cpp:3384
			const VecFloat lDot;

			// EffectsModule.cpp:3385
			const MaskScalar lMask;

			// EffectsModule.cpp:3386
			const rw::math::vpu::Vector3 lCrossToUse;

			// EffectsModule.cpp:3387
			const rw::math::vpu::Vector3 lZAxis;

			// EffectsModule.cpp:3388
			const rw::math::vpu::Vector3 lYAxis;

			// EffectsModule.cpp:3389
			const MaskScalar lDirectionMask;

			// EffectsModule.cpp:3390
			const rw::math::vpu::Vector3 lZAxisInDirectionOfMotion;

			// EffectsModule.cpp:3391
			const rw::math::vpu::Matrix44Affine lEmitterTransform;

			rw::math::vpu::GetVector3_YAxis(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Cross(/* parameters */);
			rw::math::vpu::Normalize(/* parameters */);
			BurstAccumulator::GetBurstSizeAsInterpolatorBetweenMinAndMax(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::GetVector3_XAxis(/* parameters */);
			rw::math::vpu::CompGreaterEqual(/* parameters */);
			rw::math::vpu::Select(/* parameters */);
			rw::math::vpu::Cross(/* parameters */);
			rw::math::fpu::Clamp<float>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
			rw::math::vpu::Select(/* parameters */);
			{
			}
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::Cross(/* parameters */);
			rw::math::vpu::CompLessThan(/* parameters */);
			ActiveRaceCarData::GetGroundPositionY(/* parameters */);
		}
	}
	{
		// EffectsModule.cpp:3527
		const rw::math::vpu::Vector3 lXAxis;

		// EffectsModule.cpp:3528
		const rw::math::vpu::Vector3 lRaceCarVelocity;

		// EffectsModule.cpp:3529
		const rw::math::vpu::Vector3 lVelocityProjectedOntoPlane;

		// EffectsModule.cpp:3530
		const VecFloat lVelocityMagnitude;

		// EffectsModule.cpp:3531
		const rw::math::vpu::Vector3 lYAxis;

		// EffectsModule.cpp:3532
		const rw::math::vpu::Vector3 lZAxis;

		// EffectsModule.cpp:3533
		const rw::math::vpu::Matrix44Affine lEmitterTransform;

		// EffectsModule.cpp:3535
		const float32_t lfSpeedAlongGround;

		// EffectsModule.cpp:3537
		const float32_t lfVelocityThreshold;

		// EffectsModule.cpp:3540
		uint8_t lSurfaceID;

		// EffectsModule.cpp:3541
		surface lSurface;

		// EffectsModule.cpp:3542
		visualfxsurface lVFXSurface;

		// EffectsModule.cpp:3544
		const float32_t lfSurfaceGrindingRateFactor;

		rw::math::vpu::Dot(/* parameters */);
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	Attrib::Gen::surfacelist::Surfaces(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	Attrib::Gen::surface::surface(/* parameters */);
	Attrib::Gen::visualfxsurface::visualfxsurface(/* parameters */);
	Attrib::Gen::visualfxsurface::GrindingRaceGrindingRateFactor(/* parameters */);
	Attrib::Gen::visualfxsurface::~visualfxsurface(/* parameters */);
	Attrib::Gen::surface::~surface(/* parameters */);
	{
		// EffectsModule.cpp:3412
		EActiveRaceCarIndex leActiveRaceCarIndexB;

		// EffectsModule.cpp:3413
		const RaceCarState * lpActiveRaceCarStateB;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		ActiveRaceCarData::GetGroundPositionY(/* parameters */);
		{
			// EffectsModule.cpp:3433
			CgsID lCurrentRaceCarID;

			// EffectsModule.cpp:3434
			EActiveRaceCarIndex leChosenCarIndex;

			// EffectsModule.cpp:3435
			const RaceCarState * lpChosenActiveRaceCarState;

			// EffectsModule.cpp:3436
			RwRGBAReal lChosenCarColour;

			// EffectsModule.cpp:3437
			Vector3 lvContactPoint;

			// EffectsModule.cpp:3438
			Vector3 lvContactNormal;

			CgsNumeric::Random::RandomFloat(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
		}
	}
	{
		// EffectsModule.cpp:3488
		const rw::math::vpu::Vector3 lTrafficCarVelocity;

		rw::math::vpu::GetVecFloat_Half(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	ActiveRaceCarData::GetGroundPositionY(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarColour(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// EffectsModule.cpp:3554
		const float32_t lfMaxToSpawnAt10mph;

		// EffectsModule.cpp:3555
		const float32_t lfMaxToSpawnAt50mph;

		// EffectsModule.cpp:3556
		const float32_t lfSpeedLerp;

		// EffectsModule.cpp:3557
		const float32_t lfSpeedLerpClamped;

		// EffectsModule.cpp:3558
		const float32_t lfSpeedLerpRandomised;

		// EffectsModule.cpp:3559
		const float32_t lfNumToSpawn;

		// EffectsModule.cpp:3561
		const uint32_t luNumToSpawn;

		// EffectsModule.cpp:3563
		const VecFloat lSparkShowerControllerLerp;

		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		ActiveRaceCarData::GetGroundPositionY(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
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
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
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

void BrnPhysics::Deformation::DeformationOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Construct(BrokenJointNotificationEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::SetEventPointer(BrokenJointNotificationEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Construct(DetachedPartNotificationEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::SetEventPointer(DetachedPartNotificationEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Construct(JointedPartStateEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::SetEventPointer(JointedPartStateEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Construct(GlassSmashOrCrackEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(GlassSmashOrCrackEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Construct(DetachedPartCurrentPositionEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::SetEventPointer(DetachedPartCurrentPositionEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnReplays::ReplayIO::StatusInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayStatusInterface.h:115
		int32_t liIndex;

	}
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::Construct(PropVFXLocatorEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::SetEventPointer(PropVFXLocatorEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Construct(PhysicalTrafficState *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::SetEventPointer(PhysicalTrafficState *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:714
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnRaceCarEntityModuleOutputInterface.h:715
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

	}
}

void CgsResource::ResourceHandle::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::operator++(const BrnGameState::GameStateModuleIO::EPlayerScoringIndex &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:158
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leOldEnumIndex;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetFraction(float32_t  lfFraction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:316
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::SetSeconds(int32_t  liSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayIO::RequestInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRequestInterface.h:75
		int32_t liIndex;

	}
}

void CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::ResourcePtr(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnParticle::VFXPropCollection>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:580
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::VFXPropCollection::GetTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::VFXPropCollection::GetTableSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Props::PropPhysicsDataHeader::GetNumberOfPropTypes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::VFXProp::GetNumStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::VFXProp::GetPropID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::SetHash(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropPhysicsDataHeader::GetType(uint32_t  liTypeId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::operator==(ID  lLhs, ID  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::VFXProp::GetState(const uint32_t  luState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::VFXRuntimeMaterialLef::Initialise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// PropCollisions.cpp:35
		uint32_t luCount;

	}
}

void CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:419
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::TextureNameMap::GetEntries() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::TextureNameMap::GetEntryCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleMaterial::GetTextureMapHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::LionBlendRenderer::SetState(const BlendState *const  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::LionBlendRenderer::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleMaterial::GetNormalMapName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetHeapAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:141
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:142
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:143
		CgsDev::StrStream lStrStream;

	}
}

void CgsMemory::HeapMalloc::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::IInternalAllocator::IInternalAllocator(HeapMalloc *  pAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetRWLinearResourceAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:150
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:151
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:152
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GetGraphicsAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::Prepare(const AllocatorList *  lpAllocatorList, PrepareOutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:427
		IInternalAllocator alloc;

		// ParticleModule.cpp:430
		rw::IResourceAllocator *const lpVfxAllocator;

		// ParticleModule.cpp:435
		const uint32_t KU_VERTEX_BUFFER_SIZE_LION;

		// ParticleModule.cpp:436
		const uint32_t KU_VERTEX_BUFFER_SIZE_SPARKS;

		// ParticleModule.cpp:437
		const uint32_t KU_VERTEX_BUFFER_SIZE_PARTICLES;

		// ParticleModule.cpp:445
		rw::IResourceAllocator *const lpGraphicsAllocator;

		// ParticleModule.cpp:483
		Matrix44Affine lViewIdentity;

		// ParticleModule.cpp:484
		Matrix44 lProjIdentity;

		BrnResource::GameDataIO::AllocatorList::GetHeapAllocator(/* parameters */);
		BrnResource::GameDataIO::AllocatorList::GetRWLinearResourceAllocator(/* parameters */);
		{
			// ParticleModule.cpp:478
			int lnCount;

		}
		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		{
			// ParticleModule.cpp:491
			int lnCount;

		}
		{
			// ParticleModule.cpp:504
			int lnCount;

		}
		{
			// ParticleModule.cpp:515
			int lnCount;

		}
	}
	IInternalAllocator::IInternalAllocator(/* parameters */);
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
	}
}

void BrnDirector::Camera::Camera::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::IsUsingNormalSloMo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::IsUsingSuperSloMo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::Update(const float32_t  lfCurrentTimeStep, const float32_t  lfCurrentTime, const float32_t  lfTimeStepMultiplier, const Camera *const  lpCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:730
		const float32_t lfAdjustedTimeStep;

		// ParticleModule.cpp:731
		const float32_t lfAdjustedCurrentTime;

	}
	cTime::SetTimeSeconds(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		// ParticleModule.cpp:774
		const const CameraState & lCameraState;

	}
	BrnDirector::Camera::CameraEffects::IsUsingNormalSloMo(/* parameters */);
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
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void BrnParticle::Native::BrnDebrisArray::ClearAllBuckets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDebrisRenderer.h:172
		BrnDebrisArray::DebrisBucket * lpCurrentBucket;

	}
}

void BrnParticle::ParticleModule::ProcessEventQueue(const DispatchThreadInputBuffer::CappedInterThreadEventQueue *const  lpEventQueue, const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:897
		const CgsModule::Event * lpEvent;

		// ParticleModule.cpp:898
		int32_t liEventSize;

		// ParticleModule.cpp:899
		int32_t liEventId;

		CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
		{
			// ParticleModule.cpp:908
			int lnCount;

			Native::BrnDebrisArray::ClearAllBuckets(/* parameters */);
		}
	}
	{
		// ParticleModule.cpp:918
		const SparkBatchSpawnEvent * lpSpawnEvent;

		// ParticleModule.cpp:920
		const uint8_t * lpRawBuffer;

		// ParticleModule.cpp:922
		const BrnParticle::SparkBatchSpawnEvent::SparkSpawnData * lpSpawnBuffer;

		{
			// ParticleModule.cpp:925
			uint16_t luSpark;

		}
		{
			// ParticleModule.cpp:927
			const const BrnParticle::SparkBatchSpawnEvent::SparkSpawnData & lSparkData;

			{
				// ParticleModule.cpp:932
				const ParticleCpuMonitors & lCpuMonitors;

				// ParticleModule.cpp:933
				PerfMonCpuHelper lMonitor;

				CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
				CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
			}
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// ParticleModule.cpp:968
		const DebrisBatchSpawnEvent * lpSpawnEvent;

		// ParticleModule.cpp:970
		const uint8_t * lpRawBuffer;

		// ParticleModule.cpp:972
		const BrnParticle::DebrisBatchSpawnEvent::DebrisSpawnData * lpSpawnBuffer;

		{
			// ParticleModule.cpp:975
			uint16_t luDebris;

		}
		{
			// ParticleModule.cpp:977
			const const BrnParticle::DebrisBatchSpawnEvent::DebrisSpawnData & lDebrisData;

			rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGame::DispatchThreadInputBuffer::GetParticleData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:97
		CgsDev::StrStream lStrStream;

	}
}

void BrnGame::DispatchThreadInputBuffer::GetBufferCrashTriangleCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:103
		CgsDev::StrStream lStrStream;

	}
}

void BrnGame::DispatchThreadInputBuffer::GetParticleRenderData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:100
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::Native::BrnDebrisArrayLite::Initialize(BrnDebrisArray *const  lpDebrisArray, const bool  lbCollisionEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::BeginSimulateDebris(const DispatchThreadInputBuffer *const  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1014
		const const BrnParticle::ParticleModule::DispatchThreadUpdateData & lData;

		// ParticleModule.cpp:1015
		const BrnEffects::BrnCrashTriangleCache *const lpTriCache;

		// ParticleModule.cpp:1016
		const const BrnParticle::ParticleModule::ParticleRenderData & lRenderData;

		// ParticleModule.cpp:1017
		const bool lbIs30fps;

		// ParticleModule.cpp:1018
		const bool lbCollisionEnabled;

		BrnGame::DispatchThreadInputBuffer::GetParticleData(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetBufferCrashTriangleCache(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetParticleRenderData(/* parameters */);
		{
			// ParticleModule.cpp:1026
			uint32_t luCount;

		}
		{
			{
				// ParticleModule.cpp:1066
				uint32_t luCount;

				{
					// ParticleModule.cpp:1068
					const bool lbUpdate;

					Native::BrnDebrisArrayLite::Initialize(/* parameters */);
					CgsNumeric::Random::RandomUInt(/* parameters */);
					CgsNumeric::Random::SetSeed(/* parameters */);
					{
						CgsNumeric::Random::RandomFloat(/* parameters */);
					}
				}
			}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGame::DispatchThreadInputBuffer::GetParticleInterThreadEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:106
		CgsDev::StrStream lStrStream;

	}
}

void cLionEffectManager::GetMe() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cLionEffectInstance::GetBindings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cLionBindings::GetpTrigger() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cParticleLocator::SetVel(const const cVector &  aVel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cLionBindings::GetpScaler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::DispatchThreadUpdate(const DispatchThreadInputBuffer *  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1639
		const const BrnParticle::ParticleModule::ParticleRenderData & lRenderData;

		// ParticleModule.cpp:1642
		const ParticleCpuMonitors & lCpuMonitors;

		// ParticleModule.cpp:1648
		const DispatchThreadInputBuffer::CappedInterThreadEventQueue *const lpInterThreadEventQueue;

		// ParticleModule.cpp:1656
		const const BrnParticle::ParticleModule::DispatchThreadUpdateData & lData;

		// ParticleModule.cpp:1659
		cTime lCurrentTime;

		BrnGame::DispatchThreadInputBuffer::GetParticleRenderData(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetParticleInterThreadEventQueue(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetParticleData(/* parameters */);
		cTime::SetTimeSeconds(/* parameters */);
		{
			// ParticleModule.cpp:1669
			uint32_t luIndex;

		}
		{
			// ParticleModule.cpp:1671
			const const LionEffect & lChangedEffect;

			// ParticleModule.cpp:1675
			const uint32_t luArrayIndex;

			{
				// ParticleModule.cpp:1704
				const const cLionBindings & binding;

				// ParticleModule.cpp:1706
				const bool lbIsEnabled;

				// ParticleModule.cpp:1709
				cMatrix lLionMat;

				// ParticleModule.cpp:1712
				cParticleLocator * lpLocator;

				cLionBindings::GetpLocator(/* parameters */);
				{
					// ParticleModule.cpp:1719
					cVector lLionVector;

					cParticleLocator::SetVel(/* parameters */);
					cVector::cVector(/* parameters */);
					cVector::operator=(/* parameters */);
					cVector::SetX(/* parameters */);
					cVector::SetZ(/* parameters */);
					cVector::SetY(/* parameters */);
				}
			}
		}
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void BrnEffects::EffectsModule::DispatchThreadUpdate(const DispatchThreadInputBuffer *  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
}

void CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:403
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::ParticleDescriptionCollection::GetTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleDescriptionCollection::GetTableSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cLionEffectDefinition::GetDurationMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffect.h:79
		FP32 lDuration;

	}
}

void BrnParticle::LionEffect::SetEffectDeathTime(float32_t  lfEffectDeathTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cTime::GetTimeSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cTime.h:66
		FP32 lSecs;

	}
}

void BrnParticle::ParticleModule::StartLionEffect(const uint32_t  luHashedName, const char *const  lpNameForDebug, const uint32_t  luWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1809
		cLionEffectDefinition * lpChosenDescription;

		// ParticleModule.cpp:1811
		ParticleDescription ** pTable;

		// ParticleModule.cpp:1812
		uint32_t luTableSize;

	}
	CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>::operator->(/* parameters */);
	ParticleDescriptionCollection::GetTable(/* parameters */);
	CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>::operator->(/* parameters */);
	ParticleDescriptionCollection::GetTableSize(/* parameters */);
	{
		// ParticleModule.cpp:1813
		uint32_t uIndex;

	}
	{
		// ParticleModule.cpp:1823
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// ParticleModule.cpp:1867
		CgsDev::StrStream lStrStream;

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
		// ParticleModule.cpp:1829
		uint32_t luCount;

		{
			// ParticleModule.cpp:1832
			const LionEffect & lLionEffect;

		}
		{
			// ParticleModule.cpp:1846
			const float32_t lfEffectMaxDuration;

			cLionEffectDefinition::GetDurationMax(/* parameters */);
			LionEffect::SetWorldIndex(/* parameters */);
			LionEffect::SetEffectDeathTime(/* parameters */);
			cTime::GetTimeSeconds(/* parameters */);
			LionEffect::SetEffectDeathTime(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnEffects::BrnGlassSmashEffect::Reset(uint32_t  luEffectInstance, BrnParticle::ParticleModule *  lpParticleModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsGlassManager.h:52
		LionEffect *const lpLionEffect;

	}
}

void BrnParticle::ParticleModule::StartLionEffect(const char *const  lpName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::StartLionEffect(const char *const  lpName, const uint32_t  luWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.h:331
		uint32_t uHashedName;

	}
}

void BrnParticle::ParticleDescription::HashString(const char *  lpString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptionResourceType.h:40
		uint32_t uHash;

		// ParticleDescriptionResourceType.h:42
		uint32_t uLengthOfString;

		{
			// ParticleDescriptionResourceType.h:44
			uint32_t uByte;

		}
	}
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::PropVFXLocatorEvent::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::PropVFXLocatorEvent::GetPropType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::PropVFXLocatorEvent::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::VFXRuntimeMaterialLef::TriggerLocators(const BrnParticle::ParticleModule &  lParticleModule, const float32_t  lfCurrentTimeStep, const float32_t  lfCurrentTime, const rw::math::vpu::Matrix44Affine &  lPropTransform, const VFXLocator *const  lpLocatorArray, const uint32_t  lNumLocators, const RaceCarState *const  lpRaceCarState, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// PropCollisions.cpp:61
		uint32_t i;

		{
			// PropCollisions.cpp:63
			const const VFXLocator & lLocator;

			// PropCollisions.cpp:65
			LionEffect * lpEffect;

			{
				// PropCollisions.cpp:69
				const rw::math::vpu::Vector3 lRaceCarVelocity;

				// PropCollisions.cpp:77
				const rw::math::vpu::Vector3 lZAxis;

				// PropCollisions.cpp:78
				const rw::math::vpu::Vector3 lUp;

				// PropCollisions.cpp:79
				const rw::math::vpu::Vector3 lCross;

				// PropCollisions.cpp:80
				const rw::math::vpu::Vector3 lXAxis;

				// PropCollisions.cpp:81
				const rw::math::vpu::Vector3 lYAxis;

				// PropCollisions.cpp:82
				const rw::math::vpu::Vector3 lWAxis;

				// PropCollisions.cpp:83
				Matrix44Affine lTransform;

				// PropCollisions.cpp:89
				const float32_t lfStateBlend;

			}
		}
	}
}

void BrnParticle::VFXLocator::GetHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::VFXRuntimeMaterialLef::CreateEffect(const BrnParticle::ParticleModule &  lParticleModule, const uint32_t  lHashName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// PropCollisions.cpp:106
		LionEffect * lpLionEffect;

		{
			// PropCollisions.cpp:111
			LionEffect *const lpCurrentEffect;

			// PropCollisions.cpp:118
			uint32_t lEffectHandle;

		}
	}
}

void BrnParticle::LionEffect::SetVelocity(const rw::math::vpu::Vector3  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::operator=(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::RaceCarParticleEffectHelper::WorldIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::ParticleEffectHelper::StartEffect(const char *const  lpEffectName, const uint32_t &  lEffectHandle, const uint32_t  luWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugJumping::LandingSparksTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::JumpStateMachine::OnChangeState(BrnEffects::EffectsState  lState, const RaceCarParticleEffectHelper &  lEffectHelper, const BrnEffects::CarState &  lCarState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ParticleEffectHelper::StopEffect(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	{
		// JumpStateMachine.cpp:257
		int liWheel;

		ParticleEffectHelper::StopEffect(/* parameters */);
		BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	}
	{
		// JumpStateMachine.cpp:281
		float32_t lLandingSparksTime;

	}
	ParticleEffectHelper::StartEffect(/* parameters */);
	RaceCarParticleEffectHelper::WorldIndex(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	BrnParticle::ParticleModule::StartLionEffect(/* parameters */);
	{
		std(/* parameters */);
	}
}

void BrnEffects::EffectsModule::ParticleModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::JumpStateMachine::OnDetermineNextState(const BrnEffects::CarState &  lCarState, bool  lTimeSignal, BrnEffects::EffectsState  lCurrentState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JumpStateMachine.cpp:49
		BrnEffects::EffectsState lNextState;

	}
	{
		// JumpStateMachine.cpp:94
		bool lbAtLeastOneWheelLanded;

		// JumpStateMachine.cpp:99
		bool lbIsInJunkyard;

		// JumpStateMachine.cpp:102
		bool lbMovingFastEnough;

		ParticleEffectHelper::StopEffect(/* parameters */);
		BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			// JumpStateMachine.cpp:107
			int liWheel;

			{
				// JumpStateMachine.cpp:109
				const const WheelLite & lWheel;

			}
		}
		{
			// JumpStateMachine.cpp:114
			const char * lpcEffectToUse;

			// JumpStateMachine.cpp:133
			LionEffect *const lpLionEffect;

			ParticleEffectHelper::StartEffect(/* parameters */);
			RaceCarParticleEffectHelper::WorldIndex(/* parameters */);
			BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
			BrnParticle::ParticleModule::StartLionEffect(/* parameters */);
			{
			}
			EffectsModule::ParticleModule(/* parameters */);
			BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
		}
		std(/* parameters */);
	}
	{
		// JumpStateMachine.cpp:160
		Matrix44Affine lTransform;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		BrnParticle::LionEffect::SetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	{
		// JumpStateMachine.cpp:143
		const rw::math::vpu::Vector3 lWheelVelocity;

		// JumpStateMachine.cpp:144
		const rw::math::vpu::Vector3 lSurfaceNormal;

		// JumpStateMachine.cpp:145
		const rw::math::vpu::Vector3 lConstrainedVelocity;

		// JumpStateMachine.cpp:151
		const rw::math::vpu::Vector3 lYAxis;

		// JumpStateMachine.cpp:152
		const rw::math::vpu::Vector3 lZAxis;

		// JumpStateMachine.cpp:153
		const rw::math::vpu::Vector3 lXAxis;

		// JumpStateMachine.cpp:154
		const rw::math::vpu::Matrix44Affine lTransform;

		BrnParticle::LionEffect::SetVelocity(/* parameters */);
	}
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	BrnParticle::LionEffect::SetTransform(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
}

void BrnParticle::ParticleModule::SetSimulationRate(float32_t  lfSimulationRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic bVI;

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

void BrnEffects::EffectsModule::HandleQADebugTests(float32_t  lfCurrentTimeStep, float32_t  lfCurrentTime, const RaceCarState *  lpRaceCarState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2122
		ParticleEffectHelper lEffectHelper;

		// EffectsModule.cpp:2143
		Vector3[11] gvEffectLocations;

		// EffectsModule.cpp:2159
		LionEffect *const lpEffectInstance;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
	{
		// EffectsModule.cpp:2174
		LionEffect *const lpQAEffect;

		BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
		BrnParticle::ParticleModule::StartLionEffect(/* parameters */);
	}
	ParticleEffectHelper::StopEffect(/* parameters */);
	BrnParticle::ParticleModule::SetSimulationRate(/* parameters */);
	{
		// EffectsModule.cpp:2163
		Matrix44Affine lWorldMat;

		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		BrnParticle::LionEffect::SetTransform(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	{
		// EffectsModule.cpp:2181
		Matrix44Affine lMat;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		BrnParticle::LionEffect::SetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
}

void Attrib::Gen::junkyardlocators::LocatorData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::JunkyardVfxStart(const rw::math::vpu::Vector3  lCameraPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2414
		Attrib::Gen::burnoutcarasset::_LayoutStruct::Text lJunkyardData;

		// EffectsModule.cpp:2415
		const char *const lpacLocatorsString;

		// EffectsModule.cpp:2417
		const char * lpcCurrentChar;

		// EffectsModule.cpp:2418
		uint32_t luVfxCount;

		// EffectsModule.cpp:2421
		const uint32_t KU_WORK_BUFFER_SIZE;

		// EffectsModule.cpp:2422
		char[200] lacWorkBuffer;

		{
			// EffectsModule.cpp:2407
			uint32_t luCount;

		}
		{
			// EffectsModule.cpp:2433
			const float32_t lfLocatorX;

			// EffectsModule.cpp:2439
			const float32_t lfLocatorY;

			// EffectsModule.cpp:2445
			const float32_t lfLocatorZ;

			// EffectsModule.cpp:2447
			VecFloat lRotationAngle;

			// EffectsModule.cpp:2464
			const rw::math::vpu::Vector3 lLocatorPos;

			// EffectsModule.cpp:2467
			const VecFloat lDistanceSq;

			{
				// EffectsModule.cpp:2450
				const float32_t lfAngleDegrees;

			}
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator<(/* parameters */);
			{
				// EffectsModule.cpp:2476
				const uint32_t lEffectHandle;

				// EffectsModule.cpp:2477
				LionEffect *const lpLionEffect;

				BrnParticle::ParticleModule::StartLionEffect(/* parameters */);
				{
				}
				BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
				{
					// EffectsModule.cpp:2482
					const rw::math::vpu::Vector4 lSinCos;

					// EffectsModule.cpp:2483
					const rw::math::vpu::Matrix44Affine lTransform;

					CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
					BrnParticle::LionEffect::SetTransform(/* parameters */);
					rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
				}
			}
			CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::GetVector3_ZAxis(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::GetVector3_YAxis(/* parameters */);
			rw::math::vpl::VecFloor(/* parameters */);
			rw::math::vpu::GetVector3_XAxis(/* parameters */);
			CgsNumeric::Random::RandomFloat(/* parameters */);
			BrnParticle::LionEffect::SetStateBlendFactor(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Min(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
		}
	}
	CgsNumeric::Random::RandomVecFloat(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	std(/* parameters */);
}

void BrnEffects::EffectsIO::InputBuffer::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:123
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::InputBuffer::GetCameraInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:119
		CgsDev::StrStream lStrStream;

	}
}

void BrnEffects::EffectsIO::InputBuffer::GetActiveRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:111
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatus::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetFloatVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt(uint32_t  luMin, uint32_t  luMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:302
		uint32_t luMod;

		// CgsRandom.h:305
		uint32_t luResult;

	}
}

void BrnEffects::EffectsModule::HandleShowtimeTrafficBounce(const JustBouncedAction *const  lpJustBouncedAction, const InputBuffer *const  lpEffectsInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2672
		const TimerStatus *const lpTimerStatus;

		// EffectsModule.cpp:2673
		const Camera *const lpCamera;

		// EffectsModule.cpp:2674
		const RCEntityActiveRaceCarOutputInterface *const lpActiveRaceCarInterface;

		// EffectsModule.cpp:2680
		const float32_t lfCurrentTime;

		// EffectsModule.cpp:2690
		const bool lbVehicleImpact;

	}
	EffectsIO::InputBuffer::GetTimerStatusInterface(/* parameters */);
	EffectsIO::InputBuffer::GetCameraInput(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	EffectsIO::InputBuffer::GetActiveRaceCarInterface(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	{
		// EffectsModule.cpp:2696
		const EActiveRaceCarIndex lePlayerCarIndex;

		// EffectsModule.cpp:2697
		const RaceCarState *const lpRaceCarState;

		// EffectsModule.cpp:2700
		const rw::math::vpu::Vector3 lContactPosition;

		// EffectsModule.cpp:2701
		const VecFloat lAngle;

		// EffectsModule.cpp:2702
		const rw::math::vpu::Vector4 lSinCos;

		// EffectsModule.cpp:2703
		const rw::math::vpu::Matrix44Affine lContactTransform;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		CgsNumeric::Random::RandomVecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::GetVector3_XAxis(/* parameters */);
		rw::math::vpu::GetVector3_ZAxis(/* parameters */);
		rw::math::vpu::GetVector3_YAxis(/* parameters */);
		rw::math::vpl::VecFloor(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		{
			// EffectsModule.cpp:2711
			const const RwRGBAReal & lCarColourRGBA;

			// EffectsModule.cpp:2712
			const rw::math::vpu::Vector4 lCarColour;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarColour(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
		}
		{
			// EffectsModule.cpp:2727
			Vector3[4] laGlassPaneVerts;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
		}
		{
			// EffectsModule.cpp:2746
			const uint32_t luSmallBurstSize;

			// EffectsModule.cpp:2747
			const uint32_t luLargeBurstSize;

			// EffectsModule.cpp:2749
			const uint32_t luNumToSpawn;

			// EffectsModule.cpp:2750
			const VecFloat lfSparkShowerControllerLerp;

			CgsNumeric::Random::RandomUInt(/* parameters */);
			CgsNumeric::Random::RandomVecFloat(/* parameters */);
			rw::math::vpu::GetVecFloat_One(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
		}
		{
			// EffectsModule.cpp:2763
			LionEffect *const lpOldLionEffect;

			// EffectsModule.cpp:2769
			const char *const KAC_SHOWTIME_BOUNCE_EFFECT;

			// EffectsModule.cpp:2771
			LionEffect *const lpNewLionEffect;

			BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
			BrnParticle::ParticleModule::StartLionEffect(/* parameters */);
			BrnParticle::ParticleModule::GetLionEffect(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnParticle::LionEffect::SetTransform(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	BrnParticle::LionEffect::SetStateBlendFactor(/* parameters */);
	BrnParticle::LionEffect::SetVelocity(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::HandleGameActions(const InputBuffer::GameActionQueue *const  lpGameActionQueue, const InputBuffer *const  lpEffectsInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2210
		int32_t liActionSize;

		// EffectsModule.cpp:2211
		const CgsModule::Event * lpAction;

		// EffectsModule.cpp:2213
		int32_t liType;

	}
	CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	{
		// EffectsModule.cpp:2258
		const JustBouncedAction *const lpJustBouncedAction;

	}
	{
		// EffectsModule.cpp:2238
		const PrepareForModeAction * lpPfmAction;

		// EffectsModule.cpp:2239
		const GameModeParams * lpGameModeParams;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnEffects::BoostStateMachine::StartEffects(const ParticleEffectHelper &  lEffectHelper, const char *  lpEffectName, uint32_t  luWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:488
		uint32_t luBoostTag;

	}
}

void BrnEffects::BoostStateMachine::OnChangeState(BrnEffects::EffectsState  lState, const RaceCarParticleEffectHelper &  lEffectHelper, const BrnEffects::CarState &  lCarState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BoostStateMachine.cpp:346
		const float32_t lfBlend;

		rw::math::fpu::Max<float>(/* parameters */);
	}
	{
		// BoostStateMachine.cpp:319
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnParticle::ParticleModule::ResumePlayingEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:1926
		uint32_t luCount;

		{
			// ParticleModule.cpp:1928
			LionEffect *const lpLionEffect;

			{
				// ParticleModule.cpp:1933
				const ParticleDescription *const*const lpTable;

				// ParticleModule.cpp:1934
				const uint32_t luTableSize;

				CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>::operator->(/* parameters */);
				CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>::operator->(/* parameters */);
				ParticleDescriptionCollection::GetTableSize(/* parameters */);
				{
					// ParticleModule.cpp:1935
					uint32_t luIndex;

				}
			}
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

void CgsDev::PerfMonCpu::StopMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnParticle::ParticleModule::OnLeavingCrashMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<16384,16>::AllocateEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
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

void BrnEffects::EffectsIO::InputBuffer::GetTriangleCacheInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:152
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(int32_t  liCacheSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(int32_t  liCachedObjectSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriangleCacheManager.h:367
		int32_t liIndexIntoTriangleCache;

	}
}

void CgsSceneManager::CacheSlot::GetIndexIntoTriangleCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::CachedTriangleList::GetCachedTriangle(int32_t  liTriangleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(int32_t  liCacheSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(int32_t  liCachedObjectSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::CacheSlot::GetNumCachedTriangleBatches() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::ActiveRaceCarData::JustFinishedCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::HandlePlayerTriangleCache(const InputBuffer *  lpInput, const RaceCarState *  lpRaceCarState, const BrnEffects::ActiveRaceCarData &  lActiveRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ActiveRaceCarData::JustStartedCrashing(/* parameters */);
	EffectsIO::InputBuffer::GetTriangleCacheInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	EffectsIO::InputBuffer::GetTriangleCacheInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	ActiveRaceCarData::JustFinishedCrashing(/* parameters */);
	EffectsIO::InputBuffer::GetTriangleCacheInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	EffectsIO::InputBuffer::GetTriangleCacheInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
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

extern void SpawnSparksAlongLineEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SpawnSparksAlongLine(float32_t  lfCurrentTime, const rw::math::vpu::Vector3  lvStartPos, const rw::math::vpu::Vector3  lvEndPos, const rw::math::vpu::Vector3  lVelocity, BrnParticle::Native::ESparkArrayID  leSparkType, float32_t  lrNumSparks, float32_t  lrHeightAboveGroundOfStartPos, bool  lbIsCrashing, float32_t  lfVelocityInheritanceMin, float32_t  lfVelocityInheritanceMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2794
		SpawnSparksAlongLineEvent lEvent;

	}
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
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

void rw::math::vpu::operator<(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:638
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:640
		bool ret;

		{
			// vec_float_operation_inline.h:639
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::IsZero(const rw::math::vpu::Vector3  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsZeroV3(VectorIntrinsicInParam  v, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:310
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:311
			VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

			{
				// vector_intrinsic_operation_inline.h:311
				const VectorIntrinsicUnion::VectorIntrinsic mask;

				// vector_intrinsic_operation_inline.h:311
				const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

			}
		}
	}
}

void Attrib::Gen::sparkeffect::SpawnLineLengthMin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::SpawnLineLengthMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::NumParticlesPerImpactMin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::NumParticlesPerImpactMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::HandleSparkContacts(const const BaseContact &  lContact, const rw::math::vpu::Vector3  lLinearVelocity, BrnParticle::Native::ESparkArrayID  leSparkType, float32_t  lfCurrentTimeStep, float32_t  lfCurrentTime, float32_t  lfGroundHeight, float32_t  lfStressSparkStartThreshold, float32_t  lfNumSparksFactor, bool  lbCrashingSparks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1455
		bool8_t lbDisableThisEffect;

		// EffectsModule.cpp:1464
		Vector3 lvSpawnVector;

		// EffectsModule.cpp:1465
		Vector3 lvVelocity;

		// EffectsModule.cpp:1466
		Vector3 lvNormalisedFrictionStress;

		// EffectsModule.cpp:1467
		Vector3 lvNormalisedNormalStress;

		// EffectsModule.cpp:1468
		Vector3 lvPerpendicularVector;

		// EffectsModule.cpp:1469
		Vector3 lvNormalisedVelocity;

		// EffectsModule.cpp:1472
		sparkeffect * lpSparkData;

		// EffectsModule.cpp:1490
		float32_t lfNumberOfSparks;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	{
	}
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::ProcessHingedPartContacts(const ContactSpyData::HingedCarPartContactQueue *  lpHingedPartContactsQueue, const const EffectsModuleParams &  lEffectsModuleParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:3770
		int32_t lnNumberHingedParts;

		BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50>::GetLength(/* parameters */);
	}
	{
		// EffectsModule.cpp:3773
		int32_t lnHingedPartLoop;

	}
	{
		// EffectsModule.cpp:3776
		HingedPartContact lHingedContact;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::GetEvent(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator>(/* parameters */);
	{
		// EffectsModule.cpp:3786
		uint8_t lSurfaceID;

		// EffectsModule.cpp:3787
		surface lSurface;

		// EffectsModule.cpp:3788
		visualfxsurface lVFXSurface;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Gen::visualfxsurface::visualfxsurface(/* parameters */);
		Attrib::Gen::visualfxsurface::~visualfxsurface(/* parameters */);
		Attrib::Gen::surface::~surface(/* parameters */);
	}
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::ProcessCarDetatchedPartContacts(const ContactSpyData::PhysicalCarPartContactQueue *  lpPhysicalCarPartContactQueue, const RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const const EffectsModuleParams &  lEffectsModuleParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:3657
		int32_t lPhysicalCarPartContactQueueLenth;

		BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::GetLength(/* parameters */);
	}
	{
		// EffectsModule.cpp:3660
		int32_t lnDetachedPartContact;

	}
	{
		// EffectsModule.cpp:3662
		uint16_t lu16ActiveRaceCarIndex;

		// EffectsModule.cpp:3665
		const PhysicalCarPartContact lDetachedPartContact;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetEvent(/* parameters */);
		CgsSceneManager::EntityId::GetOwner(/* parameters */);
		{
			// EffectsModule.cpp:3695
			float32_t lfNumTypeParticlesToSpawnThisFrame;

			// EffectsModule.cpp:3701
			int32_t lnTyreParticleCount;

			{
				// EffectsModule.cpp:3706
				int32_t lnTyreEffectLoop;

			}
		}
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::fpu::Floor<float>(/* parameters */);
	__fsel(/* parameters */);
	{
		// EffectsModule.cpp:3714
		float32_t lfParticleSize;

		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
	}
	{
		// EffectsModule.cpp:3733
		uint8_t lSurfaceID;

		// EffectsModule.cpp:3734
		surface lSurface;

		// EffectsModule.cpp:3735
		visualfxsurface lVFXSurface;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Gen::visualfxsurface::visualfxsurface(/* parameters */);
		Attrib::Gen::visualfxsurface::IsGrindingEffectEnabled(/* parameters */);
		Attrib::Gen::visualfxsurface::~visualfxsurface(/* parameters */);
		Attrib::Gen::surface::~surface(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnPhysics::ContactSpy::ContactSpyInterface::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::GetRaceCarContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetRaceCarContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::GetPhysicalCarPartContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetPhysicalCarPartContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::GetHingedPartContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetHingedPartContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::ProcessCarContactQueues(const const EffectsModuleParams &  lEffectsModuleParams, const RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const ContactSpyInterface *  lpContactSpyInterface, const Camera *  lpCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:3022
		const ContactSpyData::RaceCarContactQueue * lpRaceCarContactQueue;

		// EffectsModule.cpp:3023
		const ContactSpyData::PhysicalCarPartContactQueue * lpPhysicalCarPartContactQueue;

		// EffectsModule.cpp:3024
		const ContactSpyData::HingedCarPartContactQueue * lpHingedPartContactsQueue;

		BrnPhysics::ContactSpy::ContactSpyInterface::IsValid(/* parameters */);
	}
	BrnPhysics::ContactSpy::ContactSpyInterface::GetPhysicalCarPartContacts(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyInterface::GetHingedPartContacts(/* parameters */);
}

void BrnParticle::ParticleIO::DispatchInputBuffer::GetKeyLightDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleIO::DispatchInputBuffer::GetKeyLightColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleIO::DispatchInputBuffer::GetAverageIrradianceColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleIO::DispatchInputBuffer::GetEnvironmentMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleIO::DispatchInputBuffer::GetWhiteLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetIsRenderingAtFullFrameRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetParticleRenderData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:101
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::ParticleModule::GenerateRenderRequests(const DispatchInputBuffer *const  lpInput, DispatchThreadInputBuffer *const  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2846
		BrnParticle::ParticleModule::ParticleRenderData *const lpDestRenderData;

	}
	BrnGame::DispatchThreadInputBuffer::GetParticleRenderData(/* parameters */);
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

void CgsModule::BaseEventReceiverQueue::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:390
		int32_t liPrevEntryPosition;

		// CgsEventReceiverQueue.h:394
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpPrevBufferEntry;

		// CgsEventReceiverQueue.h:397
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsEventReceiverQueue.h:407
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsEventReceiverQueue.h:391
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsEventReceiverQueue.h:400
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsEventReceiverQueue.h:401
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnParticle::ParticleModule::GenerateDispatchLists(const DispatchInputBuffer *const  lpInput, DispatchThreadInputBuffer *const  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
}

void CgsModule::IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::DispatchInputBuffer::GetDispatchFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleIO::DispatchInputBuffer::SetDispatchFrame(CgsGraphics::DispatchFrame *  lpDispatchFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::DispatchInputBuffer::GetKeyLightColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleIO::DispatchInputBuffer::SetKeyLightColour(const rw::math::vpu::Vector3  lKeyLightColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::DispatchInputBuffer::GetKeyLightDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleIO::DispatchInputBuffer::SetKeyLightDirection(const rw::math::vpu::Vector3  lKeyLightDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::DispatchInputBuffer::GetAverageIrradianceColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleIO::DispatchInputBuffer::SetAverageIrradianceColour(const rw::math::vpu::Vector3  lAverageIrradianceColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::DispatchInputBuffer::GetEnvironmentMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:247
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::ParticleIO::DispatchInputBuffer::SetEnvironmentMap(const Texture *  lpEnvironmentMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::DispatchInputBuffer::GetWhiteLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:250
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::ParticleIO::DispatchInputBuffer::SetWhiteLevel(const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer>::operator BrnParticle::ParticleIO::DispatchInputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::GenerateDispatchLists(IOBufferStack *const  lpBufferStack, const DispatchInputBuffer *const  lpInput, DispatchThreadInputBuffer *const  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1408
		IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer> lpParticleInputBuffer;

	}
	CgsModule::IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer>::IOHelper(/* parameters */);
	BrnParticle::ParticleIO::DispatchInputBuffer::SetDispatchFrame(/* parameters */);
	EffectsIO::DispatchInputBuffer::GetEnvironmentMap(/* parameters */);
	BrnParticle::ParticleIO::DispatchInputBuffer::SetEnvironmentMap(/* parameters */);
	EffectsIO::DispatchInputBuffer::GetWhiteLevel(/* parameters */);
	BrnParticle::ParticleIO::DispatchInputBuffer::SetWhiteLevel(/* parameters */);
	CgsModule::IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer>::~IOHelper(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGame::DispatchThreadInputBuffer::GetParticleData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:98
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::LionEffect::GetEffectDeathTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern LionEffect & operator=(const const LionEffect &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetParticleInterThreadEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:107
		CgsDev::StrStream lStrStream;

	}
}

void BrnGame::DispatchThreadInputBuffer::AppendParticleInterThreadEventQueue(const DispatchThreadInputBuffer::CappedInterThreadEventQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:108
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
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

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::PreRenderUpdate(DispatchThreadInputBuffer *  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:798
		const BrnParticle::ParticleModule::DispatchThreadUpdateData & lData;

	}
	BrnGame::DispatchThreadInputBuffer::GetParticleData(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsGraphics::Camera::GetProjectionMatrix(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	{
		// ParticleModule.cpp:812
		uint32_t luIndex;

		{
			// ParticleModule.cpp:814
			LionEffect *const lpEffect;

			operator=(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		}
	}
	{
		// ParticleModule.cpp:849
		uint8_t * lpData;

		CgsModule::VariableEventQueue<16384,16>::AllocateEventSafe(/* parameters */);
		CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
		{
		}
	}
	{
		// ParticleModule.cpp:867
		uint8_t * lpData;

		CgsModule::VariableEventQueue<16384,16>::AllocateEventSafe(/* parameters */);
		CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
		{
		}
	}
	BrnGame::DispatchThreadInputBuffer::GetParticleInterThreadEventQueue(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	BrnGame::DispatchThreadInputBuffer::AppendParticleInterThreadEventQueue(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Append<16384, 16>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

void BrnGame::DispatchThreadInputBuffer::GetBufferCrashTriangleCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:104
		CgsDev::StrStream lStrStream;

	}
}

void BrnEffects::EffectsModule::PreRenderUpdate(DispatchThreadInputBuffer *  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:1158
		BrnCrashTriangleCache * lpCrashTriangleCache;

	}
	BrnGame::DispatchThreadInputBuffer::GetBufferCrashTriangleCache(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnEffects::EffectsIO::OutputBuffer::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:292
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcBundleName, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:904
		LoadBundleRequest lRequest;

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

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
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

void CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(const const LoadBundleRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcResourceName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:962
		AcquireResourceRequest lRequest;

	}
}

extern void AcquireResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolEvent() {
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

void CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(const const AcquireResourceRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::GetNextAcquireResourceResponse(const AcquireResourceResponse *  previousResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.h:655
		const CgsModule::Event * lpEvent;

		// EffectsModule.h:656
		int32_t liEventSize;

	}
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void CgsResource::Events::AcquireResourceResponse::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::OutputBuffer::GetVaultRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:296
		CgsDev::StrStream lStrStream;

	}
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterVault(BaseEventReceiverQueue *  lpEventReceiverQueue, ResourceHandle  lVaultResourceHandle, int32_t  liUserEventId, CgsAttribSys::AttribSysIO::EAttribSysVaultType  leVaultType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysSharedIO.h:301
		RegisterVaultRequest lRegisterVaultRequest;

		{
			// CgsAttribSysSharedIO.h:303
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void RegisterVaultRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsSourceEntryValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterVaultRequest::Construct(BaseEventReceiverQueue *  lpUserReceiverQueue, ResourceHandle  lVaultResourceHandle, int32_t  liEventId, CgsAttribSys::AttribSysIO::EAttribSysVaultType  leVaultType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::GetInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetColourCube(int  lnIndex, rw::graphics::postfx::ColourCube *  cube) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetTintBlendNumber(const const int &  lnTint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetTintBlendFactor(int  lnIndex, float  factor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::PrepareResources(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:694
		const AcquireResourceResponse * response;

		// EffectsModule.cpp:707
		ResourceHandle cubeResourceHandle;

		// EffectsModule.cpp:708
		rw::graphics::postfx::ColourCube * cube;

		// EffectsModule.cpp:712
		const BrnPostFx & lPostFx;

		GetNextAcquireResourceResponse(/* parameters */);
		EffectsIO::OutputBuffer::GetVaultRequestInterface(/* parameters */);
		CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterVault(/* parameters */);
		CgsAttribSys::AttribSysIO::RegisterVaultRequest::Construct(/* parameters */);
		AddEvent<CgsAttribSys::AttribSysIO::RegisterVaultRequest>(/* parameters */);
		GetNextAcquireResourceResponse(/* parameters */);
		BrnPostFx::SetColourCube(/* parameters */);
		BrnPostFx::SetTintBlendNumber(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		BrnPostFx::SetTintBlendFactor(/* parameters */);
		BrnPostFx::SetTintBlendFactor(/* parameters */);
		BrnPostFx::SetTintBlendFactor(/* parameters */);
		BrnPostFx::SetTintBlendFactor(/* parameters */);
		BrnPostFx::SetTintBlendFactor(/* parameters */);
		BrnPostFx::SetColourCube(/* parameters */);
		BrnPostFx::SetColourCube(/* parameters */);
		BrnPostFx::SetColourCube(/* parameters */);
		BrnPostFx::SetColourCube(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	EffectsIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	EffectsIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	{
		// EffectsModule.cpp:670
		const char *[2] lpcColourCubes;

		EffectsIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
		BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
		EffectsIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
		BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
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
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
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

void BrnParticle::ParticleIO::PrepareOutputBuffer::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::PropCollisions::SetPropCollection(ResourceHandle  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnParticle::VFXPropCollection>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>::operator=(const const ResourceHandle &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::BrnDebrisArray::AcquireMeshCollection(SafeResourceHandle<BrnParticle::BrnVFXMeshCollection>  lMeshCollection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::BrnVFXMeshCollection>::operator=(const const SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::BrnDebrisArray::GetTextureName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::BrnVFXMeshCollection>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:419
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::BrnVFXMeshCollection::GetMaterial() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::BrnDebrisArray::AcquireTexture(SafeResourceHandle<renderengine::Texture>  lTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:403
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::Native::SparkArray::GetTextureName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::SparkArray::AcquireTexture(SafeResourceHandle<renderengine::Texture>  lTexture, const BrnParticle::Native::ESparkArrayID  leArrayId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::BrnSimpleParticleArray::AcquireTexture(const uint32_t  uLionTextureNameHash, ResourceHandle  lTexture, const SimpleParticleBatch::ENativeParticleType  leArrayID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<renderengine::Texture>::operator=(const const ResourceHandle &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::LoadPropPhysics(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1496
		LoadGameDataEvent lRequest;

	}
}

void BrnResource::MakePropPhysicsId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, BrnResource::EAssetSet  lAssetType, bool  lbFailiureFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(BaseEventReceiverQueue *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(BrnResource::EAssetSet  leAssetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetFailureFlag(bool  lbFailureFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPropPhysicsResponse::GetPropPhysicsObjectHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::PropCollisions::SetPropDataResource(ResourceHandle  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::LoadFXBundle(PrepareOutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2878
		const CgsModule::Event * lpEvent;

		// ParticleModule.cpp:2880
		int32_t liEventId;

		// ParticleModule.cpp:2881
		int32_t liEventSize;

	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		// ParticleModule.cpp:3306
		const GetPropPhysicsResponse * lpGetPropPhysicsResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		BrnResource::GameDataIO::GetPropPhysicsResponse::GetPropPhysicsObjectHandle(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// ParticleModule.cpp:2919
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// ParticleModule.cpp:3189
		const AcquireResourceResponse * lpResponse;

		// ParticleModule.cpp:3193
		const SafeResourceHandle<renderengine::Texture> lHandle;

		Native::BrnDebrisArray::AcquireTexture(/* parameters */);
		CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
	}
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// ParticleModule.cpp:3080
		const AcquireResourceResponse * lpResponse;

		{
			// ParticleModule.cpp:3088
			ResourceHandle lHandle;

			CgsResource::Events::AcquireResourceResponse::GetHandle(/* parameters */);
			CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>::operator=(/* parameters */);
		}
	}
	{
		// ParticleModule.cpp:3209
		uint32_t luEntry;

		CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->(/* parameters */);
		BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
		CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// ParticleModule.cpp:3238
		const AcquireResourceResponse * lpResponse;

		CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->(/* parameters */);
		{
			// ParticleModule.cpp:3244
			const SafeResourceHandle<renderengine::Texture> lHandle;

			CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->(/* parameters */);
			{
				// ParticleModule.cpp:3250
				int lnCount;

				CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->(/* parameters */);
				Native::SparkArray::GetTextureName(/* parameters */);
				TextureNameMap::Entry::HashString(/* parameters */);
				{
				}
			}
			CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->(/* parameters */);
			{
				// ParticleModule.cpp:3264
				int lnCount;

				Native::BrnSimpleParticleArray::AcquireTexture(/* parameters */);
				CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->(/* parameters */);
				CgsResource::SafeResourceHandle<renderengine::Texture>::operator=(/* parameters */);
			}
		}
	}
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// ParticleModule.cpp:3021
		const AcquireResourceResponse * lpResponse;

		CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator=(/* parameters */);
		CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
	}
	{
		// ParticleModule.cpp:3111
		int lnCount;

		BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
		CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetEventId(/* parameters */);
		CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// ParticleModule.cpp:3138
		const AcquireResourceResponse * lpResponse;

		// ParticleModule.cpp:3142
		SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> lHandle;

		Native::BrnDebrisArray::AcquireMeshCollection(/* parameters */);
		CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// ParticleModule.cpp:2962
		const AcquireResourceResponse * lpResponse;

		{
			// ParticleModule.cpp:2970
			ResourceHandle lHandle;

			CgsResource::Events::AcquireResourceResponse::GetHandle(/* parameters */);
			BrnEffects::PropCollisions::SetPropCollection(/* parameters */);
		}
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadPropPhysics(/* parameters */);
	BrnResource::GameDataIO::GameDataEvent::Construct(/* parameters */);
	BrnResource::GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	AddEvent<BrnResource::GameDataIO::LoadGameDataEvent>(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// ParticleModule.cpp:3159
		int lnCount;

		{
			// ParticleModule.cpp:3161
			const char * lpTextureName;

			Native::BrnDebrisArray::GetTextureName(/* parameters */);
			BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
		}
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	std(/* parameters */);
	CgsResource::SafeResourceHandle<renderengine::Texture>::operator=(/* parameters */);
	CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
	std(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Native::SparkArray::AcquireTexture(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// ParticleModule.cpp:3275
		int lnCount;

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

void BrnParticle::ParticleModule::PostPreparePrepare(PrepareOutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>::operator BrnParticle::ParticleIO::PrepareOutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::OutputBuffer::SetResourceRequestInterface(const PrepareOutputBuffer::EffectsModuleResourceQueue *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:290
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::sparkeffect(Attribute::Key  collectionKey, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::operator=(const const sparkeffect &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::GetBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::operator=(const const Attrib::Instance &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::~sparkeffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::debrisparams(Attribute::Key  collectionKey, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::junkyardlocators(Attribute::Key  collectionKey, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::operator=(const const junkyardlocators &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::GetBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::operator=(const const Attrib::Instance &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::~junkyardlocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::GravityStrength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::Bounciness() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::MotionBlurTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::Radius() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::DragDuration() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::DragInitialVelocityScale() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::DragTerminalVelocityScale() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::SparkRandomColour1() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::SparkRandomColour2() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::SparkRandomColour3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::SparkRandomColour4() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::SparkLifetimes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::TextureName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::UpdateSparkParams(const BrnParticle::Native::ESparkArrayID  leType, const float32_t  lfGravity, const float32_t  lfBounceStrength, const float32_t  lfMotionBlurTime, const float32_t  lfSparkRadius, const float32_t  lfDragDuration, const float32_t  lfDragInitialVelocityScale, const float32_t  lfDragTerminalVelocityScale, const rw::math::vpu::Vector4  lvSparkColour1, const rw::math::vpu::Vector4  lvSparkColour2, const rw::math::vpu::Vector4  lvSparkColour3, const rw::math::vpu::Vector4  lvSparkColour4, const rw::math::vpu::Vector4  lvSparkLifetimes, Attrib::Gen::burnoutcarasset::_LayoutStruct::Text  lcTextureName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::Prepare(const AllocatorList *  lpAllocatorList, IOBufferStack *  lpOutputBufferStack, OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<2048,16>::Prepare(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// EffectsModule.cpp:438
		IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer> lpParticleOutputBuffer;

	}
	{
		// EffectsModule.cpp:525
		IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer> lpParticleOutputBuffer;

		CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>::IOHelper(/* parameters */);
		EffectsIO::OutputBuffer::SetResourceRequestInterface(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>::~IOHelper(/* parameters */);
	}
	CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>::IOHelper(/* parameters */);
	EffectsIO::OutputBuffer::SetResourceRequestInterface(/* parameters */);
	CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer>::~IOHelper(/* parameters */);
	{
		// EffectsModule.cpp:460
		Attribute::Key lAssetKey;

		// EffectsModule.cpp:463
		const char *[4] laSparkID;

		{
			// EffectsModule.cpp:471
			int lnCount;

			Attrib::Gen::sparkeffect::sparkeffect(/* parameters */);
			Attrib::Instance::SetDefaultLayout(/* parameters */);
			Attrib::Gen::sparkeffect::operator=(/* parameters */);
			Attrib::Gen::sparkeffect::~sparkeffect(/* parameters */);
		}
		Attrib::Gen::debrisparams::debrisparams(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::debrisparams::operator=(/* parameters */);
		Attrib::Gen::debrisparams::~debrisparams(/* parameters */);
		Attrib::Gen::debrisparams::debrisparams(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::debrisparams::operator=(/* parameters */);
		Attrib::Gen::debrisparams::~debrisparams(/* parameters */);
		Attrib::Gen::debrisparams::debrisparams(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::debrisparams::operator=(/* parameters */);
		Attrib::Gen::debrisparams::~debrisparams(/* parameters */);
		Attrib::Gen::junkyardlocators::junkyardlocators(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::junkyardlocators::operator=(/* parameters */);
		Attrib::Gen::junkyardlocators::~junkyardlocators(/* parameters */);
		{
			// EffectsModule.cpp:497
			int32_t lnCount;

			BrnParticle::ParticleModule::UpdateSparkParams(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGraphics::Im3dTexPlusLighting::SetShinyParams(const float32_t  lfUnused, const float32_t  lfAmbientAmount, const float32_t  lfSpecularPower, const float32_t  lfSpecularIntensity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dTexPlusLighting.h:201
		FloatShaderStateIterator lShaderStateIterator;

		// BrnIm3dTexPlusLighting.h:203
		const rw::math::vpu::Vector4 lShinyParams;

	}
}

void CgsResource::SafeResourceHandle<renderengine::Texture>::operator const renderengine::Texture*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:505
		CgsDev::StrStream lStrStream;

	}
}

void CgsGraphics::ImRendererBase::SetTexture(renderengine::Texture *const  lpTexture, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::BrnVFXMeshCollection>::operator const BrnParticle::BrnVFXMeshCollection*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:505
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::BrnVFXMeshCollection::GetNumDebrisTypes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::BrnVFXMeshCollection::GetMeshHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const MeshHelper *  meshState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetResource(IndexBuffer *  indexBuffer, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetStartIndex(uint32_t  start) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::BrnVFXMeshCollection::GetNumIndices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetIndexCount(uint32_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::NumParticlesInBucket() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::GetParticleBirthTimesAsArrayOfVector4() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// FXBuckets.h:124
		const rw::math::vpu::Vector4 *const lpaBirthTimes;

	}
}

void rw::math::vpu::GetMask4_False() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// constants_operation_inline.h:79
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-(const VecFloat  s, const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::CompLessThan(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:778
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32>::GetParticleData(const uint8_t  luParticle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Select(const MaskScalar  mask, const rw::math::vpu::Vector4  trueValue, const rw::math::vpu::Vector4  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:823
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisW, VectorAxisW, VectorAxisW, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
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

void CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::Sin(const rw::math::vpu::Vector4  lAngles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTrig.h:558
	Vector4 lResult;

	{
		// CgsTrig.h:557
		const rw::math::vpu::Vector4 lCycles;

		// CgsTrig.h:558
		const rw::math::vpu::Vector4 lResult;

	}
}

void CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::Cos(const rw::math::vpu::Vector4  lAngles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTrig.h:478
	Vector4 lResult;

	{
		// CgsTrig.h:477
		const rw::math::vpu::Vector4 lCycles;

		// CgsTrig.h:478
		const rw::math::vpu::Vector4 lResult;

	}
}

void BrnEffects::Utils::FastMatrix33FromAxisAngle(const rw::math::vpu::Vector3  lAxis, const VecFloat  lSinAngle, const VecFloat  lCosAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnEffectsUtils.h:318
	Matrix33 & lMatrix;

	{
		// BrnEffectsUtils.h:301
		const VecFloat lOneMinusCos;

		// BrnEffectsUtils.h:303
		const rw::math::vpu::Vector3 lAxisTimesOneMinusCos;

		// BrnEffectsUtils.h:304
		const rw::math::vpu::Vector3 lAxisTimesSin;

		// BrnEffectsUtils.h:306
		const rw::math::vpu::Vector3 lX;

		// BrnEffectsUtils.h:307
		const rw::math::vpu::Vector3 lY;

		// BrnEffectsUtils.h:308
		const rw::math::vpu::Vector3 lZ;

		// BrnEffectsUtils.h:310
		Vector3 lRow0;

		// BrnEffectsUtils.h:311
		Vector3 lRow1;

		// BrnEffectsUtils.h:312
		Vector3 lRow2;

		// BrnEffectsUtils.h:318
		const rw::math::vpu::Matrix33 lMatrix;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix33 &  m, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix33 &  m, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:34
		VectorIntrinsicUnion::VectorIntrinsic ret;

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

void rw::math::vpu::operator*<VectorAxisW>(const VecFloat  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisZ, VectorAxisW>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisW, VectorAxisW>(VecFloatRef<VectorAxisW> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+=(const Vector4 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dTexPlusLighting::SetTransformArray(const rw::math::vpu::Matrix44 *  laDebrisTransforms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3dTexPlusLighting.h:120
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void renderengine::FloatShaderStateIterator::Write(const rw::math::vpu::Vector4 *  values, uint32_t  numValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:295
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void BrnParticle::NativeParticleVertex::GetVertexDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(renderengine::VertexBuffer *const  lpVertexBuffer, const uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void EffectsVertexBufferBatch::GetVertexCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::Native::SparkArray::GetTexture(const BrnParticle::Native::ESparkArrayID  leArrayId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSparkRenderer.h:225
		renderengine::Texture *const lpTexture;

	}
}

void EffectsVertexBufferBatch::GetStartVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::Draw(const const DrawParameters &  drawParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EffectsVertexBufferManager::GetVertexBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetNearClipPlane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetFarClipPlane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::RenderFullResParticles(const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2468
		const ParticleCpuMonitors & lCpuMonitors;

		// ParticleModule.cpp:2473
		const float32_t lfWhiteLevel;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// ParticleModule.cpp:2505
		bool lbIsCrashing;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		{
			// ParticleModule.cpp:2513
			int lnCount;

		}
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// ParticleModule.cpp:2541
		renderengine::VertexBuffer *const lpSparksVertexBuffer;

		EffectsVertexBufferManager::GetVertexBuffer(/* parameters */);
		CgsGraphics::Camera::GetProjectionMatrix(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	}
	{
		// ParticleModule.cpp:2561
		renderengine::VertexBuffer *const lpLionVertexBuffer;

		// ParticleModule.cpp:2562
		const float32_t lfNearPlane;

		// ParticleModule.cpp:2563
		const float32_t lfFarPlane;

		// ParticleModule.cpp:2564
		const float32_t KF_LION_DEPTH_FADE_DISTANCE;

		// ParticleModule.cpp:2565
		const bool8_t lbEnableZFade;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		EffectsVertexBufferManager::GetVertexBuffer(/* parameters */);
	}
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
	}
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering(const int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetRenderTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetDepthStencilTextureState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::GetTextureState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const TextureState *const  lpTextureState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::Native::BrnSimpleParticleArray::GetTexture(const SimpleParticleBatch::ENativeParticleType  leParticleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSimpleParticleRenderer.h:368
		renderengine::Texture *const lpTexture;

	}
}

void BrnParticle::Native::SimpleParticleBatchArray::GetPreLionCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::RenderQuarterResParticles(const const BrnParticle::ParticleModule::ParticleRenderData &  lRenderData, CgsRenderTarget *const  lpZFadeRenderTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleModule.cpp:2597
		const ParticleCpuMonitors & lCpuMonitors;

		// ParticleModule.cpp:2602
		renderengine::VertexBuffer *const lpParticlesVertexBuffer;

		// ParticleModule.cpp:2604
		const uint32_t luSimpleParticleBatchCountPreLion;

		// ParticleModule.cpp:2605
		const uint32_t luSimpleParticleBatchCount;

		// ParticleModule.cpp:2606
		const float32_t lfNearPlane;

		// ParticleModule.cpp:2607
		const float32_t lfFarPlane;

		// ParticleModule.cpp:2608
		const float32_t lfWhiteLevel;

		// ParticleModule.cpp:2609
		const bool8_t lbIs30fps;

		// ParticleModule.cpp:2610
		const bool8_t lbDoSimpleParticleZFade;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	EffectsVertexBufferManager::GetVertexBuffer(/* parameters */);
	CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u>::GetLength(/* parameters */);
	Native::SimpleParticleBatchArray::GetPreLionCount(/* parameters */);
	CgsGraphics::Camera::GetFarClipPlane(/* parameters */);
	CgsGraphics::Camera::GetNearClipPlane(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// ParticleModule.cpp:2646
		renderengine::VertexBuffer *const lpLionVertexBuffer;

		// ParticleModule.cpp:2649
		const float32_t KF_LION_DEPTH_FADE_DISTANCE;

		// ParticleModule.cpp:2650
		TextureState * lpDepthTextureState;

		// ParticleModule.cpp:2651
		float32_t lfDepthSamplerOffsetU;

		// ParticleModule.cpp:2652
		float32_t lfDepthSamplerOffsetV;

		// ParticleModule.cpp:2653
		bool8_t lbDoLionZFade;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		EffectsVertexBufferManager::GetVertexBuffer(/* parameters */);
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnEffects::EffectsIO::InputBuffer::GetVehiclePhysicalStateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:115
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalTrafficState(const const PhysicalTrafficState &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::InputBuffer::GetDeformationInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:131
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Deformation::DeformationOutputInterface::GetSmashOrCrackEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GlassSmashOrCrackEvent(const const GlassSmashOrCrackEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Round(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Add(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:519
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator>=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:673
		bool result;

	}
}

void rw::math::vpu::CompGreaterThan(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:313
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1058
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnEffects::EffectsModule::HandleGlassSmashEventsForAllCars(const InputBuffer *  lpEffectInputBuffer, const RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfCurrentTimeStep, float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:2795
		const DeformationOutputInterface::GlassSmashOrCrackQueue * lpCrashOrCrackQueue;

		EffectsIO::InputBuffer::GetDeformationInterface(/* parameters */);
		{
			// EffectsModule.cpp:2800
			int32_t lnEventLoop;

			{
				// EffectsModule.cpp:2805
				bool lbIsRaceCar;

				// EffectsModule.cpp:2806
				bool lbIsTrafficCar;

				// EffectsModule.cpp:2807
				bool lbRaceCarIsCrashing;

				// EffectsModule.cpp:2810
				GlassSmashOrCrackEvent lGlassEvent;

				// EffectsModule.cpp:2854
				const rw::math::vpu::Vector3 lBminusA;

				// EffectsModule.cpp:2855
				const rw::math::vpu::Vector3 lCminusA;

				// EffectsModule.cpp:2856
				const rw::math::vpu::Vector3 lDminusA;

				// EffectsModule.cpp:2857
				const rw::math::vpu::Vector3 lDminusB;

				// EffectsModule.cpp:2858
				const rw::math::vpu::Vector3 lCrossABC;

				// EffectsModule.cpp:2859
				const rw::math::vpu::Vector3 lCrossACD;

				// EffectsModule.cpp:2860
				const VecFloat lfArea;

				// EffectsModule.cpp:2863
				const VecFloat lfEffectsPerMetreSq;

				// EffectsModule.cpp:2864
				VecFloat lfNumLionEffects;

				CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetEvent(/* parameters */);
				GlassSmashOrCrackEvent(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			}
		}
	}
	CgsSceneManager::EntityId::GetOwner(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Round(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	{
		// EffectsModule.cpp:2869
		const rw::math::vpu::Vector3 lWidth;

		// EffectsModule.cpp:2870
		const rw::math::vpu::Vector3 lHeight;

		// EffectsModule.cpp:2871
		const MaskScalar lMask;

		// EffectsModule.cpp:2874
		const rw::math::vpu::Vector3 lStep;

		// EffectsModule.cpp:2876
		const rw::math::vpu::Vector3 lOffset;

		// EffectsModule.cpp:2878
		Vector3 lSpawnPos;

		// EffectsModule.cpp:2882
		const rw::math::vpu::Vector3 lZAxis;

		// EffectsModule.cpp:2883
		const rw::math::vpu::Vector3 lXAxis;

		// EffectsModule.cpp:2884
		const rw::math::vpu::Vector3 lYAxis;

		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::GetVector3_YAxis(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::CompGreaterThan(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		{
			// EffectsModule.cpp:2889
			const VecFloat lfRotationAngle;

			// EffectsModule.cpp:2890
			const rw::math::vpu::Vector4 lSinCos;

			// EffectsModule.cpp:2891
			const rw::math::vpu::Matrix44Affine lGlassEffectTransform;

			CgsNumeric::Random::RandomFloat(/* parameters */);
			rw::math::vpu::operator-=(/* parameters */);
			CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
			CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpl::VecFloor(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Min(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
		}
		rw::math::vpu::operator>=(/* parameters */);
	}
	{
		// EffectsModule.cpp:2831
		ActiveRaceCarData * lpActiveRaceCar;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTimeStepMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::IsRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SetSparksEnabled(bool  lbSparksEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SetTrailsEnabled(bool  lbTrailsEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SetDebrisEnabled(bool  lbDebrisEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SetSimpleEnabled(bool  lbSimpleEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SetLionEnabled(bool  lbLionEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::SetZFadeEnabled(bool  lbEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::InputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:138
		CgsDev::StrStream lStrStream;

	}
}

void BrnParticle::ParticleModule::SetIsInJunkyard(const bool8_t  lbIsInJunkyard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::InputBuffer::GetAudioEffectsMessageQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:156
		CgsDev::StrStream lStrStream;

	}
}

void BrnEffects::EffectsIO::InputBuffer::GetContactSpyInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:127
		CgsDev::StrStream lStrStream;

	}
}

void BrnEffects::EffectsDebugComponent::PropParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::PropCollision() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsIO::InputBuffer::GetPropVFXLocatorQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModuleIO.h:149
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::CameraState::HasChanged(BrnDirector::Camera::CameraState::EFlag  leFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::SetLinearVelocity(const rw::math::vpu::Vector3  lvLinear) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::SetAngularVelocity(const rw::math::vpu::Vector3  lvAngular) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::SetSpeedMPH(float32_t  lSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::SetSteering(float32_t  lSteering) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::TempRaceCarStateCache::SetIsRacingGameplayCamera(bool  lGameCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsModule.cpp:976
		const const TimerStatus & lTimerStatus;

		// EffectsModule.cpp:978
		float32_t lfCurrentTime;

		// EffectsModule.cpp:979
		float32_t lfCurrentTimeStep;

		// EffectsModule.cpp:980
		float32_t lfTimeStepMultiplier;

		// EffectsModule.cpp:1018
		const Camera *const lpCamera;

		// EffectsModule.cpp:1020
		const const CameraState & lCameraState;

		// EffectsModule.cpp:1044
		const RCEntityActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

		// EffectsModule.cpp:1047
		EffectsModuleParams lEffectsModuleParams;

		// EffectsModule.cpp:1074
		int32_t lPropMaterial;

		// EffectsModule.cpp:1083
		const RaceCarState * lpPlayer;

	}
	EffectsIO::InputBuffer::GetTimerStatusInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
	BrnParticle::ParticleModule::SetSparksEnabled(/* parameters */);
	BrnParticle::ParticleModule::SetTrailsEnabled(/* parameters */);
	BrnParticle::ParticleModule::SetDebrisEnabled(/* parameters */);
	BrnParticle::ParticleModule::SetSimpleEnabled(/* parameters */);
	BrnParticle::ParticleModule::SetLionEnabled(/* parameters */);
	BrnParticle::ParticleModule::SetZFadeEnabled(/* parameters */);
	EffectsIO::InputBuffer::GetCameraInput(/* parameters */);
	BrnDirector::Camera::Camera::GetState(/* parameters */);
	EffectsIO::InputBuffer::GetGameActionQueue(/* parameters */);
	BrnDirector::Camera::CameraState::IsFlagSet(/* parameters */);
	EffectsIO::InputBuffer::GetActiveRaceCarInterface(/* parameters */);
	EffectsIO::InputBuffer::GetDeformationInterface(/* parameters */);
	EffectsIO::InputBuffer::GetAudioEffectsMessageQueue(/* parameters */);
	EffectsIO::InputBuffer::GetContactSpyInterface(/* parameters */);
	BrnParticle::ParticleModule::PropCollision(/* parameters */);
	EffectsIO::InputBuffer::GetPropVFXLocatorQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// EffectsModule.cpp:1097
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// EffectsModule.cpp:1103
		const RaceCarState * lpRaceCarState;

		{
			// EffectsModule.cpp:1115
			ParticleEffectHelper lEffectHelper;

			ParticleEffectHelper::ParticleEffectHelper(/* parameters */);
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// EffectsModule.cpp:1126
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// EffectsModule.cpp:1127
		const RaceCarState * lpRaceCarState;

		TempRaceCarStateCache::SetIsRacingGameplayCamera(/* parameters */);
		TempRaceCarStateCache::SetSpeedMPH(/* parameters */);
		TempRaceCarStateCache::SetSteering(/* parameters */);
	}
	BrnParticle::ParticleModule::SetIsInJunkyard(/* parameters */);
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
	BrnParticle::ParticleModule::SetIsInJunkyard(/* parameters */);
}

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

::::krSparkVelocityMaxRandomness = [66, 72, 0, 0];

::::krSparksCrashBankSpawnMultiplier = [65, 32, 0, 0];

::::kfNumParticlePerSecond = [66, 160, 0, 0];

::::krSparksRaceCarVehicleMinPointVelocity = [64, 214, 136, 137];

::::krSparksRaceCarVehicleMaxPointVelocity = [66, 50, 199, 28];

::::krSparksRaceCarVehicleMinPointVelocitySpawnCountPerSec = [66, 180, 0, 0];

::::krSparksRaceCarVehicleMaxPointVelocitySpawnCountPerSec = [67, 180, 0, 0];

::::kfDetachedPartStressSparkStartThreshold = [59, 163, 215, 10];

::::kfImpactSmokeVelocityThreshold = [64, 160, 0, 0];

::::gfBoostStopTime = [63, 64, 0, 0];

::::gBoostTransitionMin = [64, 64, 0, 0];

::::gBoostTransitionMax = [64, 192, 0, 0];

::::gfExhaustPopTime = [63, 0, 0, 0];

::::KF_EXHAUST_MAX_VEHICLE_SPEED = [65, 86, 148, 71];

::::kfLionGlassFillInEffectTime = [63, 128, 0, 0];

ICE::TWO_PI_ANGLE = [71, 128, 0, 0];

ICE::TWO_PI_DEG = [67, 180, 0, 0];

ICE::TWO_PI = [64, 201, 15, 219];

ICE::MILE = [63, 205, 254, 252];

ICE::ICE_PARAMETER_MAX = -1;

ICE::ICE_LENS_DEFAULT = [65, 192, 0, 0];

ICE::ICE_NEAR_CLIP_DEFAULT = [63, 0, 0, 0];

ICE::ICE_TANGENT_LENGTH_DEFAULT = [63, 128, 0, 0];

ICE::ICE_INVALID_KEY = -1;

ICE::ICE_INVALID_INTERVAL = -1;

ICE::ICE_EPSILON = [55, 39, 197, 172];

ICE::ICE_DATA_SMALL_FLOAT = [58, 131, 18, 111];

ICE::ICEMath::ASPECT_X = [63, 170, 61, 113];

ICE::ICEMath::LENS_BASE = [65, 64, 0, 0];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

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

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

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

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

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

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::visualfxsurface::IsSkidMarkEffectEnabled = -8616425488230502457;

Attrib::Hash::visualfxsurface::IsSkidSmokeEffect2Enabled = -6015004297057321797;

Attrib::Hash::visualfxsurface::SkidMarkEndColour = -4334239576075330690;

Attrib::Hash::visualfxsurface::SkidMarkStartColour = -2953714323094432676;

Attrib::Hash::visualfxsurface::SkidSmoke2ParticlesPerMetre = -9160301046750813169;

Attrib::Hash::visualfxsurface::SkidSmokeParticlesPerMetre = -8225472613319509868;

Attrib::Hash::surface::AudioSurface = -2951005994454003311;

Attrib::Hash::b4blurasset::Angle = -1649048904438053353;

Attrib::Hash::b4blurasset::BlendAmount = -6813478935364493855;

Attrib::Hash::b4blurasset::BlendCenter = -2906576694577061815;

Attrib::Hash::b4blurasset::BlurCenter = -2035782594184928450;

Attrib::Hash::vignetteasset::Amount = -4309066815653675434;

Attrib::Hash::vignetteasset::Angle = -1649048904438053353;

Attrib::Hash::vignetteasset::Center = -2519993486646411423;

Attrib::Hash::vignetteasset::InnerColour = -3714593082090592994;

Attrib::Hash::vignetteasset::OuterColour = -5367112154722819734;

Attrib::Hash::depthoffieldasset::Amount = -4309066815653675434;

Attrib::Hash::depthoffieldasset::Pt4_FarPlane = -3415219683637571629;

Attrib::Hash::bloomasset::BloomThreshold = -881496737272188009;

Attrib::Hash::junkyardlocators::LocatorData = -570084516953988955;

Attrib::Hash::sparkeffect::Bounciness = -3817220592226588377;

Attrib::Hash::sparkeffect::DragDuration = -5041530831918900097;

Attrib::Hash::sparkeffect::MotionBlurTime = -4706437283823970344;

Attrib::Hash::sparkeffect::NumParticlesPerImpactMin = -372394079317485815;

Attrib::Hash::sparkeffect::SparkRandomColour1 = -5500759238284303219;

Attrib::Hash::sparkeffect::SparkRandomColour2 = -377198750846029218;

Attrib::Hash::sparkeffect::SpawnLineLengthMax = -1484334559578632962;

Attrib::Hash::sparkeffect::T1_VelocityInheritanceMax = -1736401039282896638;

Attrib::Hash::debrisparams::Burst_CameraDirectedBurstProbability = -4911020043565991649;

Attrib::Hash::debrisparams::Burst_EmissionAngleVariance = -7672718436091033875;

Attrib::Hash::debrisparams::Burst_MaximumPercentage = -4045720663554568892;

Attrib::Hash::debrisparams::Burst_MidPointEmissionSpeed = -2388339733728337238;

Attrib::Hash::debrisparams::Burst_MidPointPercentage = -6093098408262815203;

Attrib::Hash::debrisparams::Burst_NumParticles_Coloured = -1120747857703290747;

Attrib::Hash::debrisparams::Burst_NumParticles_HighDetail = -8797829737603133935;

Attrib::Hash::debrisparams::Burst_NumParticles_Shiny = -2097299715269661146;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Coloured = -3250550009145791469;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Dark = -1303149371335787807;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_HighDetail = -2112811013008378960;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Shiny = -7404559354884103995;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_Coloured = -6589561312631380998;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_HighDetail = -1036632279311570142;

Attrib::Hash::debrisparams::Burst_VelocityMin = -6514586815391291054;

Attrib::Hash::debrisparams::EmitterHalfExtents = -7728054833146959017;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_Dark = -6557622440413492218;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_GlassChunk = -7044734835905075578;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_HighDetail = -4321421017727861513;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_HighDetail = -1066284894708561365;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_Shiny = -3177573945560636980;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Dark = -3104049988774297466;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_GlassChunk = -1130302925735451789;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_HighDetail = -2181416400992529396;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Shiny = -3160118430803200590;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Smoke = -50646744464768722;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_GlassChunk = -1113091167386479757;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_HighDetail = -3637246564704219172;

Attrib::Hash::debrisparams::Trail_VelocityMin = -2399476863096052342;

Attrib::Hash::nativeparticleparams::DragDuration = -5041530831918900097;

Attrib::Hash::nativeparticleparams::EndColour = -8627483912619234383;

Attrib::Hash::nativeparticleparams::EndSize = -8619726482830642788;

Attrib::Hash::nativeparticleparams::FarClip = -5692632252225236236;

Attrib::Hash::nativeparticleparams::LifeTime = -1608884447590013666;

Attrib::Hash::nativeparticleparams::LightingMin = -3106857269163792920;

Attrib::Hash::nativeparticleparams::MidColour = -6822591414946377124;

Attrib::Hash::nativeparticleparams::MidSize = -926488105834939848;

Attrib::Hash::nativeparticleparams::StartColour = -4735521137697763443;

Attrib::Hash::cameradefaults::ImpactShakeDecayRate = -7687775437294225719;

Attrib::Hash::cameradefaults::ImpactShakeScale = -842583479824379615;

Attrib::Hash::cameradefaults::ImpactShakeType = -5456835001829100036;

Attrib::Hash::cameradefaults::SpeedShakeThreshold = -2676194790771603092;

Attrib::Hash::cameradefaults::SpeedShakeType = -7084916540873237413;

Attrib::Hash::iceanim::Guid = -7097409704044230467;

Attrib::Hash::aftertouchcam::MaxDistance = -8557505899279475338;

Attrib::Hash::aftertouchcam::MinHeight = -4927329763252819482;

Attrib::Hash::aftertouchcam::Pitch = -4570886707007131269;

Attrib::Hash::cameraexternalbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::cameraexternalbehaviour::PivotLength = -5488398596126602666;

Attrib::Hash::cameraexternalbehaviour::TiltCameraScale = -2098857104130072476;

Attrib::Hash::cameraexternalbehaviour::ZAndTiltCutoffSpeedMPH = -4276768861718081255;

Attrib::Hash::camerabumperbehaviour::AccelerationResponse = -4777123151109968498;

Attrib::Hash::camerabumperbehaviour::BodyPitchScale = -6812158392904343490;

Attrib::Hash::camerabumperbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::camerabumperbehaviour::RollSpring = -2603261772359457364;

Attrib::Hash::camerabumperbehaviour::ZOffset = -2031833194172202669;

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

Attrib::ClassName::camerabumperbehaviour = -872580195161256039;

Attrib::ClassName::cameraexternalbehaviour = -1590435079418921852;

Attrib::ClassName::sparkeffect = -3821321658093367652;

Attrib::ClassName::bloomasset = -5317928624077281773;

Attrib::ClassName::depthoffieldasset = -6976247449173265222;

Attrib::ClassName::vignetteasset = -7856125605656217793;

Attrib::ClassName::b4blurasset = -1180102512441370417;

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

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

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

BrnParticle::mParticleStatsPositionX = [68, 97, 0, 0];

BrnParticle::mParticleStatsPositionY = [67, 12, 0, 0];

BrnParticle::Native::krDebrisLifetimeMin = [64, 224, 0, 0];

BrnParticle::Native::krDebrisLifetimeMax = [65, 32, 0, 0];

BrnParticle::Native::krRunningAt60LifetimeScale = [62, 76, 204, 205];

BrnParticle::Native::krDebrisFadeOutDuration = [63, 76, 204, 205];

BrnParticle::Native::kfMinNumberBounces = [64, 0, 0, 0];

BrnParticle::Native::kfMaxNumberBounces = [64, 160, 0, 0];

BrnParticle::Native::KF_DEBRIS_DEFAULT_DRAG_RESISTANCE = [63, 76, 204, 205];

BrnParticle::Native::krSparkFrameQueueTimestepThreshold = [60, 128, 0, 0];

BrnParticle::Native::krTrailBaseLife = [65, 32, 0, 0];

BrnParticle::Native::krTrailHeightAdjustment = [60, 245, 194, 143];

BrnParticle::Native::krTrailsMinSegmentLength = [62, 153, 153, 154];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

BrnEffects::SKID_FACTOR_THRESHOLD = [62, 153, 153, 154];

BrnEffects::Utils::KU_LION_PRIMARY_RENDERING_WORLD;

BrnEffects::Utils::KU_LION_NON_RENDERING_WORLD;

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::PI = [64, 73, 15, 219];

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

