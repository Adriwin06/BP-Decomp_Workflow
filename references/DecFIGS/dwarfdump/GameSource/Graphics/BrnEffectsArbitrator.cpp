// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// BrnEffectsArbitrator.cpp:25
	extern uint8_t[3] kau8SlotsPerEffectsLayer;

	// BrnEffectsArbitrator.cpp:35
	extern uint8_t[3] kau8ColourCubesPerEffectsLayer;

}

// BrnEffectsArbitrator.cpp:135
void BrnGraphics::EffectsArbitrator::StartOfFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:151
void BrnGraphics::EffectsArbitrator::EndOfFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:157
		uint8_t lu8Layer;

		{
			// BrnEffectsArbitrator.cpp:159
			uint8_t lu8Slot;

		}
	}
}

// BrnEffectsArbitrator.cpp:119
void BrnGraphics::EffectsArbitrator::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:52
bool EvalUseEffect<BrnEffects::TintData>(const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:391
		const const BrnEffectsFrame & lSlot;

	}
}

// BrnEffectsArbitrator.cpp:664
bool UseEffect<BrnEffects::TintData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:275
void BrnGraphics::EffectsArbitrator::EvalTint(rw::graphics::postfx::ColourCube **  lppColourCubes, float32_t *  lpfWeights) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:279
		uint8_t luColourCube;

		// BrnEffectsArbitrator.cpp:280
		uint8_t lu8Layer;

		// BrnEffectsArbitrator.cpp:281
		uint8_t lu8Slot;

		{
			// BrnEffectsArbitrator.cpp:296
			float32_t lfLayerWeight;

			// BrnEffectsArbitrator.cpp:297
			int8_t li8LayerBase;

			// BrnEffectsArbitrator.cpp:324
			float32_t lfLayerWeight_c;

			{
				// BrnEffectsArbitrator.cpp:301
				const const BrnEffectsFrame & lSlot;

			}
			{
				// BrnEffectsArbitrator.cpp:314
				char[256] lacError;

			}
		}
	}
	{
		// BrnEffectsArbitrator.cpp:285
		const const BrnEffectsFrame & lSlot;

	}
}

// BrnEffectsArbitrator.cpp:52
bool EvalUseEffect<BrnEffects::DepthOfFieldData>(const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:391
		const const BrnEffectsFrame & lSlot;

	}
}

// BrnEffectsArbitrator.cpp:650
bool UseEffect<BrnEffects::DepthOfFieldData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:59
void EvalEffectData<BrnEffects::DepthOfFieldData>(const DepthOfFieldData &  lRes, const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:404
		uint8_t lu8Layer;

		{
			// BrnEffectsArbitrator.cpp:410
			const const BrnEffectsFrame & lSlot;

		}
		{
			// BrnEffectsArbitrator.cpp:419
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:421
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:424
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:434
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:436
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:438
			const const BrnEffectsFrame & lSlot2;

			// BrnEffectsArbitrator.cpp:440
			const const BrnEffectsFrame & lSlot3;

			// BrnEffectsArbitrator.cpp:443
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:466
			DepthOfFieldData lAltData;

			// BrnEffectsArbitrator.cpp:467
			float32_t lrAltWeight;

			{
				// BrnEffectsArbitrator.cpp:472
				const const BrnEffectsFrame & lSlot;

			}
			{
				// BrnEffectsArbitrator.cpp:482
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:484
				const const BrnEffectsFrame & lSlot1;

			}
			{
				// BrnEffectsArbitrator.cpp:497
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:499
				const const BrnEffectsFrame & lSlot1;

				// BrnEffectsArbitrator.cpp:501
				const const BrnEffectsFrame & lSlot2;

				// BrnEffectsArbitrator.cpp:503
				const const BrnEffectsFrame & lSlot3;

			}
			{
				// BrnEffectsArbitrator.cpp:534
				char[256] lacError;

			}
		}
	}
}

// BrnEffectsArbitrator.cpp:566
const DepthOfFieldData & EffectData<BrnEffects::DepthOfFieldData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:608
float32_t EffectWeight<BrnEffects::DepthOfFieldData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:226
void BrnGraphics::EffectsArbitrator::EvalDepthOfField(const DepthOfFieldData &  lData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EvalUseEffect<BrnEffects::DepthOfFieldData>(/* parameters */);
	EvalEffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
	{
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
		BrnEffects::DepthOfFieldData::SetToBlend(/* parameters */);
	}
	{
	}
	{
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
		BrnEffects::DepthOfFieldData::SetToBlend(/* parameters */);
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
	}
	{
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
		BrnEffects::DepthOfFieldData::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
	}
	{
		EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
		EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
	}
	EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
	EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
	EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
	EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
	EffectWeight<BrnEffects::DepthOfFieldData>(/* parameters */);
	EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
	EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
	EffectData<BrnEffects::DepthOfFieldData>(/* parameters */);
	{
	}
}

// BrnEffectsArbitrator.cpp:87
void BrnGraphics::EffectsArbitrator::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:89
		uint8_t lu8Layer;

		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		{
			// BrnEffectsArbitrator.cpp:95
			uint8_t lu8Slot;

		}
	}
	{
		// BrnEffectsArbitrator.cpp:97
		const EffectsArbitrator::EffectsFramePair & lEffectFrames;

	}
}

// BrnEffectsArbitrator.cpp:52
bool EvalUseEffect<BrnEffects::TintData2d>(const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:391
		const const BrnEffectsFrame & lSlot;

	}
}

// BrnEffectsArbitrator.cpp:671
bool UseEffect<BrnEffects::TintData2d>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:59
void EvalEffectData<BrnEffects::TintData2d>(const TintData2d &  lRes, const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:404
		uint8_t lu8Layer;

		{
			// BrnEffectsArbitrator.cpp:410
			const const BrnEffectsFrame & lSlot;

		}
		{
			// BrnEffectsArbitrator.cpp:419
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:421
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:424
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:434
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:436
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:438
			const const BrnEffectsFrame & lSlot2;

			// BrnEffectsArbitrator.cpp:440
			const const BrnEffectsFrame & lSlot3;

			// BrnEffectsArbitrator.cpp:443
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:466
			TintData2d lAltData;

			// BrnEffectsArbitrator.cpp:467
			float32_t lrAltWeight;

			{
				// BrnEffectsArbitrator.cpp:472
				const const BrnEffectsFrame & lSlot;

			}
			{
				// BrnEffectsArbitrator.cpp:482
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:484
				const const BrnEffectsFrame & lSlot1;

			}
			{
				// BrnEffectsArbitrator.cpp:497
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:499
				const const BrnEffectsFrame & lSlot1;

				// BrnEffectsArbitrator.cpp:501
				const const BrnEffectsFrame & lSlot2;

				// BrnEffectsArbitrator.cpp:503
				const const BrnEffectsFrame & lSlot3;

			}
			{
				// BrnEffectsArbitrator.cpp:534
				char[256] lacError;

			}
		}
	}
}

// BrnEffectsArbitrator.cpp:587
const TintData2d & EffectData<BrnEffects::TintData2d>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:629
float32_t EffectWeight<BrnEffects::TintData2d>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:350
void BrnGraphics::EffectsArbitrator::EvalTint2d(const TintData2d &  lData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EvalUseEffect<BrnEffects::TintData2d>(/* parameters */);
	EvalEffectData<BrnEffects::TintData2d>(/* parameters */);
	{
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
		BrnEffects::TintData2d::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
		}
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		BrnEffects::TintData2d::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		BrnEffects::TintData2d::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		EffectWeight<BrnEffects::TintData2d>(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	EffectWeight<BrnEffects::TintData2d>(/* parameters */);
	EffectWeight<BrnEffects::TintData2d>(/* parameters */);
	EffectWeight<BrnEffects::TintData2d>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	EffectWeight<BrnEffects::TintData2d>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
}

// BrnEffectsArbitrator.cpp:52
bool EvalUseEffect<BrnEffects::BloomData>(const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:391
		const const BrnEffectsFrame & lSlot;

	}
}

// BrnEffectsArbitrator.cpp:636
bool UseEffect<BrnEffects::BloomData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:59
void EvalEffectData<BrnEffects::BloomData>(const BloomData &  lRes, const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:404
		uint8_t lu8Layer;

		{
			// BrnEffectsArbitrator.cpp:410
			const const BrnEffectsFrame & lSlot;

		}
		{
			// BrnEffectsArbitrator.cpp:419
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:421
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:424
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:434
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:436
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:438
			const const BrnEffectsFrame & lSlot2;

			// BrnEffectsArbitrator.cpp:440
			const const BrnEffectsFrame & lSlot3;

			// BrnEffectsArbitrator.cpp:443
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:466
			BloomData lAltData;

			// BrnEffectsArbitrator.cpp:467
			float32_t lrAltWeight;

			{
				// BrnEffectsArbitrator.cpp:472
				const const BrnEffectsFrame & lSlot;

			}
			{
				// BrnEffectsArbitrator.cpp:482
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:484
				const const BrnEffectsFrame & lSlot1;

			}
			{
				// BrnEffectsArbitrator.cpp:497
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:499
				const const BrnEffectsFrame & lSlot1;

				// BrnEffectsArbitrator.cpp:501
				const const BrnEffectsFrame & lSlot2;

				// BrnEffectsArbitrator.cpp:503
				const const BrnEffectsFrame & lSlot3;

			}
			{
				// BrnEffectsArbitrator.cpp:534
				char[256] lacError;

			}
		}
	}
}

// BrnEffectsArbitrator.cpp:552
const BloomData & EffectData<BrnEffects::BloomData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:594
float32_t EffectWeight<BrnEffects::BloomData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:178
void BrnGraphics::EffectsArbitrator::EvalBloom(const BloomData &  lData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EvalUseEffect<BrnEffects::BloomData>(/* parameters */);
	EvalEffectData<BrnEffects::BloomData>(/* parameters */);
	{
		BrnEffects::BloomData::SetToBlend(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
		EffectData<BrnEffects::BloomData>(/* parameters */);
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
		EffectData<BrnEffects::BloomData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
	}
	{
		BrnEffects::BloomData::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
		EffectData<BrnEffects::BloomData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectData<BrnEffects::BloomData>(/* parameters */);
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
		EffectData<BrnEffects::BloomData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
		EffectData<BrnEffects::BloomData>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
		EffectData<BrnEffects::BloomData>(/* parameters */);
		BrnEffects::BloomData::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
		EffectData<BrnEffects::BloomData>(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		EffectWeight<BrnEffects::BloomData>(/* parameters */);
	}
	EffectWeight<BrnEffects::BloomData>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	EffectWeight<BrnEffects::BloomData>(/* parameters */);
	EffectWeight<BrnEffects::BloomData>(/* parameters */);
	EffectData<BrnEffects::BloomData>(/* parameters */);
	EffectData<BrnEffects::BloomData>(/* parameters */);
	EffectWeight<BrnEffects::BloomData>(/* parameters */);
	EffectData<BrnEffects::BloomData>(/* parameters */);
	EffectData<BrnEffects::BloomData>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
}

// BrnEffectsArbitrator.cpp:52
bool EvalUseEffect<BrnEffects::VignetteData>(const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:391
		const const BrnEffectsFrame & lSlot;

	}
}

// BrnEffectsArbitrator.cpp:643
bool UseEffect<BrnEffects::VignetteData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:59
void EvalEffectData<BrnEffects::VignetteData>(const VignetteData &  lRes, const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:404
		uint8_t lu8Layer;

		{
			// BrnEffectsArbitrator.cpp:410
			const const BrnEffectsFrame & lSlot;

		}
		{
			// BrnEffectsArbitrator.cpp:419
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:421
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:424
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:434
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:436
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:438
			const const BrnEffectsFrame & lSlot2;

			// BrnEffectsArbitrator.cpp:440
			const const BrnEffectsFrame & lSlot3;

			// BrnEffectsArbitrator.cpp:443
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:466
			VignetteData lAltData;

			// BrnEffectsArbitrator.cpp:467
			float32_t lrAltWeight;

			{
				// BrnEffectsArbitrator.cpp:472
				const const BrnEffectsFrame & lSlot;

			}
			{
				// BrnEffectsArbitrator.cpp:482
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:484
				const const BrnEffectsFrame & lSlot1;

			}
			{
				// BrnEffectsArbitrator.cpp:497
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:499
				const const BrnEffectsFrame & lSlot1;

				// BrnEffectsArbitrator.cpp:501
				const const BrnEffectsFrame & lSlot2;

				// BrnEffectsArbitrator.cpp:503
				const const BrnEffectsFrame & lSlot3;

			}
			{
				// BrnEffectsArbitrator.cpp:534
				char[256] lacError;

			}
		}
	}
}

// BrnEffectsArbitrator.cpp:559
const VignetteData & EffectData<BrnEffects::VignetteData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:601
float32_t EffectWeight<BrnEffects::VignetteData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:202
void BrnGraphics::EffectsArbitrator::EvalVignette(const VignetteData &  lData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EvalUseEffect<BrnEffects::VignetteData>(/* parameters */);
	EvalEffectData<BrnEffects::VignetteData>(/* parameters */);
	{
		BrnEffects::VignetteData::SetToBlend(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
		EffectData<BrnEffects::VignetteData>(/* parameters */);
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
		EffectData<BrnEffects::VignetteData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
	}
	{
		BrnEffects::VignetteData::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
		EffectData<BrnEffects::VignetteData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectData<BrnEffects::VignetteData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		EffectData<BrnEffects::VignetteData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
		EffectData<BrnEffects::VignetteData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
		EffectData<BrnEffects::VignetteData>(/* parameters */);
		BrnEffects::VignetteData::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
		EffectData<BrnEffects::VignetteData>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		{
		}
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		EffectWeight<BrnEffects::VignetteData>(/* parameters */);
	}
	EffectWeight<BrnEffects::VignetteData>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	EffectWeight<BrnEffects::VignetteData>(/* parameters */);
	EffectWeight<BrnEffects::VignetteData>(/* parameters */);
	EffectData<BrnEffects::VignetteData>(/* parameters */);
	EffectData<BrnEffects::VignetteData>(/* parameters */);
	EffectWeight<BrnEffects::VignetteData>(/* parameters */);
	EffectData<BrnEffects::VignetteData>(/* parameters */);
	EffectData<BrnEffects::VignetteData>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	{
	}
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	{
	}
	{
	}
}

// BrnEffectsArbitrator.cpp:52
bool EvalUseEffect<BrnEffects::BlurData>(const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:391
		const const BrnEffectsFrame & lSlot;

	}
}

// BrnEffectsArbitrator.cpp:657
bool UseEffect<BrnEffects::BlurData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:59
void EvalEffectData<BrnEffects::BlurData>(const BlurData &  lRes, const EffectsArbitrator::EffectsFramePair * &[3]  lapaEffectsFrames, uint8_t  lu8EffectsFrameInternal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEffectsArbitrator.cpp:404
		uint8_t lu8Layer;

		{
			// BrnEffectsArbitrator.cpp:410
			const const BrnEffectsFrame & lSlot;

		}
		{
			// BrnEffectsArbitrator.cpp:419
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:421
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:424
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:434
			const const BrnEffectsFrame & lSlot0;

			// BrnEffectsArbitrator.cpp:436
			const const BrnEffectsFrame & lSlot1;

			// BrnEffectsArbitrator.cpp:438
			const const BrnEffectsFrame & lSlot2;

			// BrnEffectsArbitrator.cpp:440
			const const BrnEffectsFrame & lSlot3;

			// BrnEffectsArbitrator.cpp:443
			float32_t lrTotalWeight;

		}
		{
			// BrnEffectsArbitrator.cpp:466
			BlurData lAltData;

			// BrnEffectsArbitrator.cpp:467
			float32_t lrAltWeight;

			{
				// BrnEffectsArbitrator.cpp:472
				const const BrnEffectsFrame & lSlot;

			}
			{
				// BrnEffectsArbitrator.cpp:482
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:484
				const const BrnEffectsFrame & lSlot1;

			}
			{
				// BrnEffectsArbitrator.cpp:497
				const const BrnEffectsFrame & lSlot0;

				// BrnEffectsArbitrator.cpp:499
				const const BrnEffectsFrame & lSlot1;

				// BrnEffectsArbitrator.cpp:501
				const const BrnEffectsFrame & lSlot2;

				// BrnEffectsArbitrator.cpp:503
				const const BrnEffectsFrame & lSlot3;

			}
			{
				// BrnEffectsArbitrator.cpp:534
				char[256] lacError;

			}
		}
	}
}

// BrnEffectsArbitrator.cpp:573
const BlurData & EffectData<BrnEffects::BlurData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:615
float32_t EffectWeight<BrnEffects::BlurData>(const const BrnEffectsFrame &  lEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectsArbitrator.cpp:250
void BrnGraphics::EffectsArbitrator::EvalBlur(const BlurData &  lData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EvalUseEffect<BrnEffects::BlurData>(/* parameters */);
	EvalEffectData<BrnEffects::BlurData>(/* parameters */);
	{
		BrnEffects::BlurData::SetToBlend(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
		EffectData<BrnEffects::BlurData>(/* parameters */);
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
		EffectData<BrnEffects::BlurData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
	}
	{
		BrnEffects::BlurData::SetToBlend(/* parameters */);
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
		EffectData<BrnEffects::BlurData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectData<BrnEffects::BlurData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		EffectData<BrnEffects::BlurData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
		EffectData<BrnEffects::BlurData>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
		BrnEffects::BlurData::SetToBlend(/* parameters */);
		EffectData<BrnEffects::BlurData>(/* parameters */);
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
		EffectData<BrnEffects::BlurData>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		EffectWeight<BrnEffects::BlurData>(/* parameters */);
	}
	EffectWeight<BrnEffects::BlurData>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	EffectWeight<BrnEffects::BlurData>(/* parameters */);
	EffectWeight<BrnEffects::BlurData>(/* parameters */);
	EffectData<BrnEffects::BlurData>(/* parameters */);
	EffectData<BrnEffects::BlurData>(/* parameters */);
	EffectWeight<BrnEffects::BlurData>(/* parameters */);
	EffectData<BrnEffects::BlurData>(/* parameters */);
	EffectData<BrnEffects::BlurData>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
}

