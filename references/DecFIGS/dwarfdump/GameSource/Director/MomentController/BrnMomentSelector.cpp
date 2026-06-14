// BrnMomentSelector.cpp:246
void BrnDirector::MomentSelector::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::Clear(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::Clear(/* parameters */);
}

// BrnMomentSelector.cpp:33
void BrnDirector::MomentSelector::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::Construct(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::Construct(/* parameters */);
	CgsContainers::Array<float32_t,10u>::Construct(/* parameters */);
}

// BrnMomentSelector.cpp:524
void BrnDirector::MomentSelector::PickWorstUninhibitedMoment(uint32_t *  lpuIndex, BrnDirector::MomentSelector::EPickWorstUninhibitedOptions  leOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:528
		bool lbIgnoreConditionsMet;

		// BrnMomentSelector.cpp:550
		bool lbGotWorst;

		// BrnMomentSelector.cpp:552
		uint32_t luWorstIndex;

		// BrnMomentSelector.cpp:553
		uint32_t luNumMoments;

		// BrnMomentSelector.cpp:554
		uint32_t luLoop;

		// BrnMomentSelector.cpp:555
		float32_t lfWorstWeighting;

		{
			// BrnMomentSelector.cpp:545
			CgsDev::StrStream lStrStream;

		}
		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
		CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
		CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
		{
			// BrnMomentSelector.cpp:575
			float32_t lfWeighting;

			CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
			CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
		}
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
	}
}

// BrnMomentSelector.cpp:280
void BrnDirector::MomentSelector::AddMoment(MomentDescription  lMoment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:285
		MomentHandle lMomentHandle;

	}
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::Append(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::Append(/* parameters */);
	CgsContainers::Array<float32_t,10u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnMomentSelector.cpp:302
void BrnDirector::MomentSelector::AddMoment(BrnDirector::Moment::EType  meMomentType, BrnDirector::MomentParameterBank::EMomentParamID  meMomentParamID, float32_t  mfWeighting, bool  mbCanBeInhibited) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:304
		MomentDescription lDescription;

	}
}

// BrnMomentSelector.cpp:595
void BrnDirector::MomentSelector::ActualDebugRender(const BrnDirector::DebugPrinter &  lDebugPrinter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:598
		uint32_t luMomentCount;

		// BrnMomentSelector.cpp:599
		uint32_t luLoop;

		CgsContainers::Array<BrnDirector::MomentDescription,10u>::GetLength(/* parameters */);
	}
	{
		// BrnMomentSelector.cpp:604
		uint8_t lu8Recency;

	}
	CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	DebugPrinter::PrintName(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	DebugPrinter::PrintName(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	DebugPrinter::PrintName(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	DebugPrinter::PrintName(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	DebugPrinter::PrintName(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	DebugPrinter::PrintName(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	DebugPrinter::PrintName(/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	DebugPrinter::PrintName(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnMomentSelector.cpp:222
void BrnDirector::MomentSelector::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:224
		uint32_t luMomentCount;

		// BrnMomentSelector.cpp:225
		int32_t luLoop;

		CgsContainers::Array<BrnDirector::MomentDescription,10u>::GetLength(/* parameters */);
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnMomentSelector.cpp:255
void BrnDirector::MomentSelector::SnoopNumValidMoments() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:258
		uint32_t luMomentCount;

		// BrnMomentSelector.cpp:259
		uint32_t luLoop;

		CgsContainers::Array<BrnDirector::MomentDescription,10u>::GetLength(/* parameters */);
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnMomentSelector.cpp:351
void BrnDirector::MomentSelector::SelectBestLRUMomentWithExclusion(int32_t  liExclusion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:360
		int32_t liMomentCount;

		// BrnMomentSelector.cpp:361
		int32_t liLoop;

		// BrnMomentSelector.cpp:362
		bool lbGotBest;

		// BrnMomentSelector.cpp:363
		int32_t liBest;

		// BrnMomentSelector.cpp:364
		float32_t lfBest;

	}
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	{
		// BrnMomentSelector.cpp:373
		float32_t lfFitness;

		CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
		CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
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

// BrnMomentSelector.cpp:406
void BrnDirector::MomentSelector::SelectBestRandomMomentWithExclusion(const Random &  lRandom, int32_t  liExclusion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:414
		Selector<uint32_t,10u> lSelector;

		// BrnMomentSelector.cpp:418
		int32_t liMomentCount;

		// BrnMomentSelector.cpp:419
		int32_t liLoop;

	}
	{
		// BrnMomentSelector.cpp:436
		int32_t liSelection;

	}
	Selector(/* parameters */);
	CgsContainers::Array<float32_t,9u>::Array(/* parameters */);
	CgsContainers::Array<float32_t,10u>::Array(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Selector<uint32_t,10u>::GetLength(/* parameters */);
	CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
	CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
	Selector<uint32_t,10u>::AddElement(/* parameters */);
	CgsContainers::Array<float32_t,10u>::Append(/* parameters */);
	CgsContainers::Array<uint32_t,10u>::Append(/* parameters */);
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

// BrnMomentSelector.cpp:320
void BrnDirector::MomentSelector::SelectBestMomentWithExclusion(const Random &  lRandom, int32_t  liExclusion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMomentSelector.cpp:53
void BrnDirector::MomentSelector::Prepare(const MomentController &  lrMomentController, const BehaviourManager &  lBehaviourManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:55
		uint32_t luMomentCount;

		// BrnMomentSelector.cpp:56
		uint32_t luLoop;

		CgsContainers::Array<BrnDirector::MomentDescription,10u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		{
			// BrnMomentSelector.cpp:68
			MomentDescription lMomentDescription;

			CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
			CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			// BrnMomentSelector.cpp:87
			uint32_t luMomentsToNotInhibit;

			CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
			CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
			CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
			CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
			CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
			MomentController::MomentHandle::GetMoment(/* parameters */);
			Moment::Inhibit(/* parameters */);
		}
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

// BrnMomentSelector.cpp:454
void BrnDirector::MomentSelector::PickBestInhibitedMoment(uint32_t *  lpuIndex, BrnDirector::MomentSelector::EPickBestInhibitedOptions  leOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:458
		bool lbIgnoreConditionsMet;

		// BrnMomentSelector.cpp:481
		bool lbGotBest;

		// BrnMomentSelector.cpp:483
		uint32_t luBestIndex;

		// BrnMomentSelector.cpp:484
		uint32_t luNumMoments;

		// BrnMomentSelector.cpp:485
		uint32_t luLoop;

		// BrnMomentSelector.cpp:486
		float32_t lfBestWeighting;

	}
	{
		// BrnMomentSelector.cpp:476
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
	CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	MomentController::MomentHandle::GetMoment(/* parameters */);
	{
		// BrnMomentSelector.cpp:503
		float32_t lfWeighting;

		CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
		CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
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

// BrnMomentSelector.cpp:115
void BrnDirector::MomentSelector::Update(float32_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentSelector.cpp:123
		int32_t liMomentCount;

		// BrnMomentSelector.cpp:124
		int32_t liLoop;

		// BrnMomentSelector.cpp:126
		uint32_t luInvalidMoments;

		// BrnMomentSelector.cpp:127
		uint32_t luPotentiallyValidMoments;

		// BrnMomentSelector.cpp:128
		uint32_t luUninhibitedMoments;

	}
	CgsContainers::Array<float32_t,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
	{
		// BrnMomentSelector.cpp:179
		uint32_t luMomentToUninhibit;

		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		Moment::Uninhibit(/* parameters */);
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	{
	}
	{
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	{
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		// BrnMomentSelector.cpp:204
		uint32_t luMomentToUninhibit;

		// BrnMomentSelector.cpp:205
		uint32_t luMomentInhibit;

		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
		Moment::Uninhibit(/* parameters */);
		CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	}
	{
	}
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	Moment::Uninhibit(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::operator[](/* parameters */);
	Moment::Uninhibit(/* parameters */);
	{
	}
	{
	}
}

