// gcm_implementation_sub.h:997
extern void cellGcmSetVertexDataArrayInline(CellGcmContextData *  thisContext, uint8_t  index, uint16_t  frequency, uint8_t  stride, uint8_t  size, uint8_t  type, uint8_t  location, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:1032
extern void cellGcmSetVertexProgramParameterBlockInline(CellGcmContextData *  thisContext, uint32_t  baseConst, uint32_t  constCount, const float *  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:1034
		uint32_t i;

		// gcm_implementation_sub.h:1035
		uint32_t blockCount;

		// gcm_implementation_sub.h:1036
		uint32_t blockRemain;

		{
			// gcm_implementation_sub.h:1042
			uint32_t loadAt;

		}
	}
}

// gcm_implementation_sub.h:1071
extern void cellGcmSetUpdateFragmentProgramParameterInline(CellGcmContextData *  thisContext, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:2773
extern void cellGcmSetUpdateFragmentProgramParameterLocationInline(CellGcmContextData *  thisContext, const uint32_t  offset, const uint32_t  location) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:195
extern void cellGcmSetWriteBackEndLabelInline(CellGcmContextData *  thisContext, uint8_t  index, uint32_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:200
		uint32_t war_value;

		// gcm_implementation_sub.h:205
		uint32_t offset;

	}
}

// gcm_implementation_sub.h:877
extern void cellGcmSetDrawIndexArrayInline(CellGcmContextData *  thisContext, uint8_t  mode, uint32_t  count, uint8_t  type, uint8_t  location, uint32_t  indicies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:880
		uint32_t startOffset;

		// gcm_implementation_sub.h:881
		uint32_t startIndex;

		// gcm_implementation_sub.h:882
		uint32_t misalignedIndexCount;

		{
			// gcm_implementation_sub.h:915
			uint32_t tmp;

		}
		{
			// gcm_implementation_sub.h:935
			uint32_t lcount;

		}
	}
}

// gcm_implementation_sub.h:1095
extern void cellGcmSetVertexProgramConstantsInline(CellGcmContextData *  thisContext, uint32_t  first, uint32_t  count, const float *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:1098
		uint32_t loop;

		// gcm_implementation_sub.h:1098
		uint32_t rest;

		// gcm_implementation_sub.h:1098
		uint32_t i;

		// gcm_implementation_sub.h:1099
		const float * value;

		{
			// gcm_implementation_sub.h:1108
			uint32_t loadAt;

		}
		{
			// gcm_implementation_sub.h:1127
			CellGcmCast d0;

		}
	}
}

// gcm_implementation_sub.h:997
extern void cellGcmSetVertexDataArrayUnsafeInline(CellGcmContextData *  thisContext, uint8_t  index, uint16_t  frequency, uint8_t  stride, uint8_t  size, uint8_t  type, uint8_t  location, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:877
extern void cellGcmSetDrawIndexArrayUnsafeInline(CellGcmContextData *  thisContext, uint8_t  mode, uint32_t  count, uint8_t  type, uint8_t  location, uint32_t  indicies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:880
		uint32_t startOffset;

		// gcm_implementation_sub.h:881
		uint32_t startIndex;

		// gcm_implementation_sub.h:882
		uint32_t misalignedIndexCount;

		{
			// gcm_implementation_sub.h:915
			uint32_t tmp;

		}
		{
			// gcm_implementation_sub.h:935
			uint32_t lcount;

		}
	}
}

// gcm_implementation_sub.h:172
extern void cellGcmSetWaitLabelInline(CellGcmContextData *  thisContext, uint8_t  index, uint32_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:176
		uint32_t offset;

	}
}

// gcm_implementation_sub.h:715
extern void cellGcmSetTextureBorderColorUnsafeInline(CellGcmContextData *  thisContext, uint8_t  index, uint32_t  color) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:749
extern void cellGcmSetTextureControlUnsafeInline(CellGcmContextData *  thisContext, uint8_t  index, uint32_t  enable, uint16_t  minlod, uint16_t  maxlod, uint8_t  maxaniso) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:738
extern void cellGcmSetTextureAddressUnsafeInline(CellGcmContextData *  thisContext, uint8_t  index, uint8_t  wraps, uint8_t  wrapt, uint8_t  wrapr, uint8_t  unsignedRemap, uint8_t  zfunc, uint8_t  gamma) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:724
extern void cellGcmSetTextureFilterUnsafeInline(CellGcmContextData *  thisContext, uint8_t  index, uint16_t  bias, uint8_t  min, uint8_t  mag, uint8_t  conv) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:781
extern void cellGcmSetTextureUnsafeInline(CellGcmContextData *  thisContext, uint8_t  index, const CellGcmTexture *  texture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:784
		uint32_t format;

		// gcm_implementation_sub.h:784
		uint32_t offset;

		// gcm_implementation_sub.h:784
		uint32_t control1;

		// gcm_implementation_sub.h:784
		uint32_t control3;

		// gcm_implementation_sub.h:784
		uint32_t imagerect;

	}
}

// gcm_implementation_sub.h:605
extern void cellGcmSetBlendEnableUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:613
extern void cellGcmSetBlendEnableMrtUnsafeInline(CellGcmContextData *  thisContext, uint32_t  mrt1, uint32_t  mrt2, uint32_t  mrt3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:267
extern void cellGcmSetBlendFuncUnsafeInline(CellGcmContextData *  thisContext, uint16_t  sfcolor, uint16_t  dfcolor, uint16_t  sfalpha, uint16_t  dfalpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:258
extern void cellGcmSetBlendEquationUnsafeInline(CellGcmContextData *  thisContext, uint16_t  color, uint16_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:248
extern void cellGcmSetBlendColorUnsafeInline(CellGcmContextData *  thisContext, uint32_t  color, uint32_t  color2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:302
extern void cellGcmSetColorMaskUnsafeInline(CellGcmContextData *  thisContext, uint32_t  mask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:310
extern void cellGcmSetColorMaskMrtUnsafeInline(CellGcmContextData *  thisContext, uint32_t  mask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:597
extern void cellGcmSetAlphaTestEnableUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:240
extern void cellGcmSetAlphaFuncUnsafeInline(CellGcmContextData *  thisContext, uint32_t  af, uint32_t  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:162
extern void cellGcmSetAntiAliasingControlUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable, uint32_t  alphaToCoverage, uint32_t  alphaToOne, uint32_t  sampleMask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:647
extern void cellGcmSetDepthTestEnableUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:338
extern void cellGcmSetDepthFuncUnsafeInline(CellGcmContextData *  thisContext, uint32_t  zf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:346
extern void cellGcmSetDepthMaskUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:663
extern void cellGcmSetStencilTestEnableUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:671
extern void cellGcmSetTwoSidedStencilTestEnableUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:500
extern void cellGcmSetStencilFuncUnsafeInline(CellGcmContextData *  thisContext, uint32_t  func, int32_t  ref, uint32_t  mask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:520
extern void cellGcmSetStencilMaskUnsafeInline(CellGcmContextData *  thisContext, uint32_t  sm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:536
extern void cellGcmSetStencilOpUnsafeInline(CellGcmContextData *  thisContext, uint32_t  fail, uint32_t  depthFail, uint32_t  depthPass) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:510
extern void cellGcmSetBackStencilFuncUnsafeInline(CellGcmContextData *  thisContext, uint32_t  func, int32_t  ref, uint32_t  mask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:528
extern void cellGcmSetBackStencilMaskUnsafeInline(CellGcmContextData *  thisContext, uint32_t  sm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:546
extern void cellGcmSetBackStencilOpUnsafeInline(CellGcmContextData *  thisContext, uint32_t  fail, uint32_t  depthFail, uint32_t  depthPass) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:459
extern void cellGcmSetFrontPolygonModeUnsafeInline(CellGcmContextData *  thisContext, uint32_t  mode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:467
extern void cellGcmSetBackPolygonModeUnsafeInline(CellGcmContextData *  thisContext, uint32_t  mode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:318
extern void cellGcmSetCullFaceUnsafeInline(CellGcmContextData *  thisContext, uint32_t  cfm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:631
extern void cellGcmSetCullFaceEnableUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:419
extern void cellGcmSetPolygonOffsetUnsafeInline(CellGcmContextData *  thisContext, float  factor, float  units) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:421
		CellGcmCast d0;

		// gcm_implementation_sub.h:421
		CellGcmCast d1;

	}
}

// gcm_implementation_sub.h:679
extern void cellGcmSetPolygonOffsetFillEnableUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:475
extern void cellGcmSetScissorUnsafeInline(CellGcmContextData *  thisContext, uint16_t  x, uint16_t  y, uint16_t  w, uint16_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:354
extern void cellGcmSetFrontFaceUnsafeInline(CellGcmContextData *  thisContext, uint32_t  dir) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:484
extern void cellGcmSetShadeModeUnsafeInline(CellGcmContextData *  thisContext, uint32_t  sm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:687
extern void cellGcmSetRestartIndexEnableUnsafeInline(CellGcmContextData *  thisContext, uint32_t  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:978
extern void cellGcmSetRestartIndexUnsafeInline(CellGcmContextData *  thisContext, uint32_t  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:967
extern void cellGcmSetInvalidateVertexCacheInline(CellGcmContextData *  thisContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gcm_implementation_sub.h:1455
extern void cellGcmSetRenderEnableInline(CellGcmContextData *  thisContext, uint8_t  mode, uint32_t  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// gcm_implementation_sub.h:1459
		uint32_t hwOffset;

	}
}

