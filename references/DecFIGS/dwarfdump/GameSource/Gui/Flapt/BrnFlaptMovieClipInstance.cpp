// BrnFlaptMovieClipInstance.cpp:1252
void BrnFlapt::MovieClipInstance::GetNthChild(uint32_t  luChild) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptMovieClipInstance.cpp:1233
void BrnFlapt::MovieClipInstance::GetNthChild(uint32_t  luChild, BrnFlapt::MovieClipRef *  lpOutMovieClipRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MovieClipRef::Construct(/* parameters */);
}

// BrnFlaptMovieClipInstance.cpp:686
void BrnFlapt::MovieClipInstance::SetSoundTriggerHandler(MovieClipInstance::SoundTriggerCallback  lpCallback, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptMovieClipInstance.cpp:1330
void BrnFlapt::MovieClipInstance::GetTriggerParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptMovieClipInstance.cpp:74
void BrnFlapt::MovieClipInstance::Construct(const MovieClip *  lpMovieClip, const char *  lpcDEBUGName, BrnFlapt::MovieClipInstance *  lpParentInstance, LinearMalloc *  lpAlloc, const BrnFlapt::FlaptRenderer *  lpRenderer, const RGBA *  lpAlternateTextColours, int32_t  liNumAlternateColours) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:137
		uint32_t luTextField;

		// BrnFlaptMovieClipInstance.cpp:148
		uint32_t luObject;

		// BrnFlaptMovieClipInstance.cpp:163
		uint32_t luPlacedChildren;

	}
	MovieClip::GetNumObjects(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:121
		uint32_t luChild;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:124
		uint32_t luChildMovieClip;

	}
	MallocArray<BrnFlapt::TextFieldInstance>(/* parameters */);
	MallocArray<CgsGraphics::Im2dTransform>(/* parameters */);
	MallocArray<BrnFlapt::MovieClipInstance>(/* parameters */);
}

// BrnFlaptMovieClipInstance.cpp:529
void BrnFlapt::MovieClipInstance::FireTrigger(BrnFlapt::FScriptCommand::TriggerTypes  leType, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:532
		const MovieClipInstance * lpComponent;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:554
		const TriggerParameters * lpParams;

		// BrnFlaptMovieClipInstance.cpp:555
		const char * lpcComponentName;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:577
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnFlaptMovieClipInstance.cpp:703
void BrnFlapt::MovieClipInstance::DEBUGSetTransformsInvalid(uint32_t  luKeyFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptMovieClipInstance.cpp:799
void BrnFlapt::MovieClipInstance::DEBUGCheckTransformsValid(uint32_t  luKeyFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptMovieClipInstance.cpp:590
void BrnFlapt::MovieClipInstance::GotoFrame(uint32_t  luFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:607
		uint32_t luObject;

		// BrnFlaptMovieClipInstance.cpp:608
		Vector4 K_IDENT_COLOUR_SCALE;

		// BrnFlaptMovieClipInstance.cpp:609
		Vector4 K_IDENT_COLOUR_SHIFT;

		// BrnFlaptMovieClipInstance.cpp:617
		uint32_t luKeyFrame;

	}
	MovieClip::GetKeyframeForFrame(/* parameters */);
	MovieClip::GetKeyframeForFrame(/* parameters */);
	SetChangedFrame(/* parameters */);
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
}

// BrnFlaptMovieClipInstance.cpp:1271
void BrnFlapt::MovieClipInstance::GotoAndPlayLabel(uint32_t  luLabelHash, const char *  lpcDEBUGName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:1276
		uint32_t luFrame;

	}
	MovieClip::FindLabelledFrameIndex(/* parameters */);
	ClearStopped(/* parameters */);
}

// BrnFlaptMovieClipInstance.cpp:636
void BrnFlapt::MovieClipInstance::ResetTimeline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:646
		uint32_t luPlacedChildren;

		ClearStopped(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:412
void BrnFlapt::MovieClipInstance::ProcessFScript(const FScriptCommand *  lpStream, uint32_t  luStreamLength, uint32_t  luKeyFrameIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:416
		const FScriptCommand * lpCommand;

		// BrnFlaptMovieClipInstance.cpp:417
		const FScriptCommand * lpStreamEnd;

	}
	SetStopped(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:431
		BrnFlapt::MovieClipInstance * lpMovie;

		ClearStopped(/* parameters */);
		MovieClip::GetKeyframeForFrame(/* parameters */);
		{
			// BrnFlaptMovieClipInstance.cpp:446
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnFlaptMovieClipInstance.cpp:454
		BrnFlapt::MovieClipInstance * lpMovie;

		SetStopped(/* parameters */);
		MovieClip::GetKeyframeForFrame(/* parameters */);
	}
	{
		// BrnFlaptMovieClipInstance.cpp:478
		bool lbVisible;

		SetVisible(/* parameters */);
	}
	SetParameterIndex(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:512
		CgsDev::StrStream lStrStream;

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
	{
		// BrnFlaptMovieClipInstance.cpp:505
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
	SetVisible(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:469
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnFlaptMovieClipInstance.cpp:504
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:258
void BrnFlapt::MovieClipInstance::ApplyKeyFrame(uint32_t  luKeyFrameIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:269
		const KeyFrameAnims * lpAnims;

		ClearChangedFrame(/* parameters */);
		{
			// BrnFlaptMovieClipInstance.cpp:283
			const uint32_t * lpaxCurrentPlacedChildren;

			// BrnFlaptMovieClipInstance.cpp:329
			uint32_t luPlacedChildren32;

			// BrnFlaptMovieClipInstance.cpp:330
			uint32_t luChild;

			// BrnFlaptMovieClipInstance.cpp:371
			uint32_t luTransform;

			// BrnFlaptMovieClipInstance.cpp:382
			uint32_t luColourTransform;

			{
				// BrnFlaptMovieClipInstance.cpp:333
				uint32_t lxNewlyPlacedChildren;

				// BrnFlaptMovieClipInstance.cpp:334
				uint32_t luMaxChildThisLoop;

				{
					// BrnFlaptMovieClipInstance.cpp:340
					uint32_t lxMask;

					// BrnFlaptMovieClipInstance.cpp:341
					uint32_t luNumChildrenThisLoop;

					CgsNumeric::Min(/* parameters */);
					{
						// BrnFlaptMovieClipInstance.cpp:355
						BrnFlapt::MovieClipInstance * lpChild;

					}
				}
			}
			{
				// BrnFlaptMovieClipInstance.cpp:385
				uint32_t luObject;

			}
		}
	}
	{
		// BrnFlaptMovieClipInstance.cpp:374
		uint32_t luObject;

	}
}

// BrnFlaptMovieClipInstance.cpp:182
void BrnFlapt::MovieClipInstance::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:213
		uint32_t luPlacedChildren32;

		// BrnFlaptMovieClipInstance.cpp:214
		uint32_t luChild;

		{
			// BrnFlaptMovieClipInstance.cpp:217
			uint32_t luMaxChildThisLoop;

			// BrnFlaptMovieClipInstance.cpp:218
			uint32_t lxPlacedChildren32;

		}
		{
			// BrnFlaptMovieClipInstance.cpp:221
			uint32_t lxMask;

			// BrnFlaptMovieClipInstance.cpp:222
			uint32_t luNumChildrenThisLoop;

			CgsNumeric::Min(/* parameters */);
			{
				// BrnFlaptMovieClipInstance.cpp:234
				BrnFlapt::MovieClipInstance * lpChild;

			}
		}
	}
	SetStopped(/* parameters */);
	MovieClip::GetKeyframeForFrame(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:197
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:665
void BrnFlapt::MovieClipInstance::SetFrameTriggerCallback(MovieClipInstance::FrameTriggerCallback  lpCallback, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:668
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:1045
void BrnFlapt::MovieClipInstance::FindChildMovieClip(uint32_t  luHashedName, BrnFlapt::MovieClipRef *  lpOutMovieClipRef, const char *  lpcDEBUGName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:1052
		uint32_t luChild;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:1060
		uint32_t luTransform;

	}
	MovieClipRef::Construct(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:1065
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:1079
void BrnFlapt::MovieClipInstance::FindChildTextField(uint32_t  luHashedName, TextFieldRef *  lpOutTextFieldRef, const char *  lpcDEBUGName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:1087
		uint32_t luTextField;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:1095
		uint32_t luTransform;

	}
	TextFieldRef::Construct(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:1100
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:1114
void BrnFlapt::MovieClipInstance::FindChildMovieClipOnFrame(uint32_t  luHashedName, BrnFlapt::MovieClipRef *  lpOutMovieClipRef, const char *  lpcDEBUGName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:1122
		uint32_t luChild;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:1134
		uint32_t luTransform;

	}
	MovieClipRef::Construct(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:1139
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:1153
void BrnFlapt::MovieClipInstance::TryFindChildComponentRecursively(uint32_t  luHashedName, BrnFlapt::MovieClipRef *  lpOutMovieClipRef, const char *  lpcDEBUGName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:1158
		uint32_t luChild;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:1180
		uint32_t luTransform;

		MovieClipRef::Construct(/* parameters */);
	}
	{
		// BrnFlaptMovieClipInstance.cpp:1177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:1197
void BrnFlapt::MovieClipInstance::GetParent(BrnFlapt::MovieClipRef *  lpOutMovieClipRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:1206
		uint32_t luParentIndex;

		// BrnFlaptMovieClipInstance.cpp:1207
		BrnFlapt::MovieClipInstance * lpGrandParent;

		// BrnFlaptMovieClipInstance.cpp:1208
		const MovieClip * lpGrandParentClip;

	}
	MovieClipRef::Construct(/* parameters */);
	{
		// BrnFlaptMovieClipInstance.cpp:1200
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnFlaptMovieClipInstance.cpp:1202
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:1302
void BrnFlapt::MovieClipInstance::GotoAndStopLabel(uint32_t  luLabelHash, const char *  lpcDEBUGName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:1307
		uint32_t luFrame;

	}
	MovieClip::FindLabelledFrameIndex(/* parameters */);
	SetStopped(/* parameters */);
}

// BrnFlaptMovieClipInstance.cpp:893
void BrnFlapt::MovieClipInstance::Render(BrnFlapt::FlaptRenderer *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipInstance.cpp:903
		const MovieClip * lpMovieClip;

		// BrnFlaptMovieClipInstance.cpp:904
		const Im2dTransform * lpTransforms;

		// BrnFlaptMovieClipInstance.cpp:905
		const MovieClipInstance * lpChildInstances;

		// BrnFlaptMovieClipInstance.cpp:906
		BrnFlapt::TextFieldInstance * lpTextFieldInstances;

		// BrnFlaptMovieClipInstance.cpp:908
		const uintptr_t KU_CACHE_LOOK_AHEAD;

		// BrnFlaptMovieClipInstance.cpp:910
		uint32_t luLayer;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:913
		const RenderLayer * lpRenderLayer;

		// BrnFlaptMovieClipInstance.cpp:914
		const RenderLayerKeyFrame * lpLayerKeyFrame;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:916
		uintptr_t luAddress;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:917
		uintptr_t luAddress;

	}
	{
		// BrnFlaptMovieClipInstance.cpp:929
		uint32_t luMovieClip;

		// BrnFlaptMovieClipInstance.cpp:930
		uint32_t lxMovieClipMask;

		// BrnFlaptMovieClipInstance.cpp:931
		uint32_t luBaseTransform;

		{
			// BrnFlaptMovieClipInstance.cpp:936
			uintptr_t luAddress;

		}
		{
			// BrnFlaptMovieClipInstance.cpp:937
			uintptr_t luAddress;

		}
		{
			// BrnFlaptMovieClipInstance.cpp:944
			VecFloat lfCombinedAlpha;

			rw::math::vpu::operator+<VectorAxisW, VectorAxisW>(/* parameters */);
			rw::math::vpu::operator>(/* parameters */);
			FlaptRenderer::PushTransform(/* parameters */);
			rw::math::vpl::VecSplat_Word<0>(/* parameters */);
			rw::math::vpl::VecPermute(/* parameters */);
			rw::math::vpl::VecSplat_Word<1>(/* parameters */);
			rw::math::vpl::VecSplat_Word<0>(/* parameters */);
			rw::math::vpl::VecMult(/* parameters */);
			rw::math::vpl::VecSplat_Word<1>(/* parameters */);
			rw::math::vpl::VecMult(/* parameters */);
			rw::math::vpl::VecSplat_Word<3>(/* parameters */);
			rw::math::vpl::VecMult(/* parameters */);
			rw::math::vpl::VecSplat_Word<2>(/* parameters */);
			rw::math::vpl::VecMult(/* parameters */);
			rw::math::vpl::VecMult(/* parameters */);
			rw::math::vpl::VecMult(/* parameters */);
			rw::math::vpl::VecAdd(/* parameters */);
			rw::math::vpl::VecMult(/* parameters */);
			rw::math::vpl::VecAdd(/* parameters */);
			rw::math::vpl::VecAdd(/* parameters */);
			rw::math::vpl::VecAdd(/* parameters */);
			rw::math::vpl::VecAdd(/* parameters */);
			FlaptRenderer::PopTransform(/* parameters */);
		}
	}
	{
		// BrnFlaptMovieClipInstance.cpp:968
		uint32_t luMesh;

		// BrnFlaptMovieClipInstance.cpp:969
		uint32_t lxMeshMask;

		// BrnFlaptMovieClipInstance.cpp:970
		uint32_t luBaseTransform;

		{
			// BrnFlaptMovieClipInstance.cpp:975
			uintptr_t luAddress;

		}
		{
			// BrnFlaptMovieClipInstance.cpp:976
			uintptr_t luAddress;

		}
		FlaptRenderer::PushTransform(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpl::VecPermute(/* parameters */);
		rw::math::vpl::VecSplat_Word<1>(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecSplat_Word<1>(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecSplat_Word<3>(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecSplat_Word<2>(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		FlaptRenderer::PopTransform(/* parameters */);
	}
	{
		// BrnFlaptMovieClipInstance.cpp:994
		uint32_t luTextField;

		// BrnFlaptMovieClipInstance.cpp:995
		uint32_t lxTextFieldMask;

		// BrnFlaptMovieClipInstance.cpp:996
		uint32_t luBaseTransform;

		{
			// BrnFlaptMovieClipInstance.cpp:1001
			uintptr_t luAddress;

		}
		{
			// BrnFlaptMovieClipInstance.cpp:1002
			uintptr_t luAddress;

		}
		FlaptRenderer::PushTransform(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpl::VecPermute(/* parameters */);
		rw::math::vpl::VecSplat_Word<1>(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecSplat_Word<1>(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecSplat_Word<3>(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecSplat_Word<2>(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		rw::math::vpl::VecAdd(/* parameters */);
		FlaptRenderer::PopTransform(/* parameters */);
	}
}

// BrnFlaptMovieClipInstance.cpp:53
// BrnFlaptMovieClipInstance.cpp:54
// BrnFlaptMovieClipInstance.cpp:55
// BrnFlaptMovieClipInstance.cpp:56
// BrnFlaptMovieClipInstance.cpp:39
// BrnFlaptMovieClipInstance.cpp:40
