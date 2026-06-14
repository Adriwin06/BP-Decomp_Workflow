// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsIntervalList.cpp:28
	const uint16_t KU_SENTINEL_OBJECT_INDEX = 65535;

	// CgsIntervalList.cpp:29
	const float32_t KF_SENTINEL_INTERVAL;

}

// CgsIntervalList.cpp:134
void CgsSceneManager::IntervalList::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIntervalList.cpp:52
void CgsSceneManager::IntervalList::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIntervalList.cpp:72
void CgsSceneManager::IntervalList::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIntervalList.cpp:92
void CgsSceneManager::IntervalList::Prepare(Interval *  lpaIntervalsMem, ObjectToIntervalMap *  lpaObjectToIntervalMapMem, uint32_t  luMaxNumIntervals) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIntervalList.cpp:117
void CgsSceneManager::IntervalList::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIntervalList.cpp:400
void CgsSceneManager::IntervalList::AddSentinelInterval() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:402
		Vector3 lSentinelMinVector;

		// CgsIntervalList.cpp:403
		Vector3 lSentinelMaxVector;

		// CgsIntervalList.cpp:404
		uint32_t luNewObjectMax;

	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	Interval::SetIntervals(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
	Interval::SetObjectIndex(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Interval::SetMax(/* parameters */);
}

// CgsIntervalList.cpp:682
void CgsSceneManager::IntervalList::RepairMappings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:684
		int32_t liCurrentInterval;

		// CgsIntervalList.cpp:685
		int32_t liCurrentObjectIndex;

		ObjectToIntervalMap::SetIntervalIndex(/* parameters */);
	}
}

// CgsIntervalList.cpp:696
void CgsSceneManager::IntervalList::SanityCheck() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:698
		uint32_t liCurrentInterval;

		// CgsIntervalList.cpp:699
		uint32_t liCurrentObjectIndex;

	}
}

// CgsIntervalList.cpp:156
void CgsSceneManager::IntervalList::AddObject(uint16_t  luObjectIndex, const const Interval &  lMin, const const Interval &  lMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:158
		uint32_t luNewObjectMin;

		// CgsIntervalList.cpp:159
		uint32_t luNewObjectMax;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	ObjectToIntervalMap::SetIntervalIndex(/* parameters */);
	ObjectToIntervalMap::SetIntervalIndex(/* parameters */);
}

// CgsIntervalList.cpp:240
void CgsSceneManager::IntervalList::RemoveInterval(uint16_t  luIntervalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:251
		uint32_t luMinMaxIndex;

		// CgsIntervalList.cpp:252
		uint32_t luIntervalToMove;

	}
	ObjectToIntervalMap::SetIntervalIndex(/* parameters */);
}

// CgsIntervalList.cpp:316
void CgsSceneManager::IntervalList::GetIntervalsAndRemoveObject(uint16_t  luObjectIndex, Interval *  lpMinIntervalOut, Interval *  lpMaxIntervalOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:322
		uint16_t luRemoveInterval;

	}
	ObjectToIntervalMap::Construct(/* parameters */);
}

// CgsIntervalList.cpp:285
void CgsSceneManager::IntervalList::RemoveObject(uint16_t  luObjectIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:288
		uint16_t luRemoveInterval;

	}
	ObjectToIntervalMap::Construct(/* parameters */);
}

// CgsIntervalList.cpp:356
void CgsSceneManager::IntervalList::UpdateObject(uint16_t  luObjectIndex, const rw::math::vpu::Vector3  lMin, const rw::math::vpu::Vector3  lMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:358
		int32_t liIntervalIndex;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Interval::SetIntervals(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Interval::SetIntervals(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// CgsIntervalList.cpp:382
void CgsSceneManager::IntervalList::Sort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	std::sort<CgsSceneManager::Interval*>(/* parameters */);
}

// CgsIntervalList.cpp:433
void CgsSceneManager::IntervalList::SweepIntervals(OverlapPairQueue *  lpOverlappingPairQueue, IntervalStack *  lpDynamicStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:435
		uint32_t luNumDynamicIntervals;

		// CgsIntervalList.cpp:436
		uint32_t luCurrentDynamicInterval;

		// CgsIntervalList.cpp:437
		const Interval * lpDynamicInterval;

		// CgsIntervalList.cpp:438
		uint32_t liStackLength;

		GetNumIntervals(/* parameters */);
	}
	GetInterval(/* parameters */);
	IntervalStack::Pop(/* parameters */);
	{
		// CgsIntervalList.cpp:447
		const const Interval & lCurrentIntervalData;

		IntervalStack::CheckOverlappingAndAddToQueue(/* parameters */);
		IntervalStack::Push(/* parameters */);
		{
			{
				CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::AllocateEvent(/* parameters */);
				OverlappingIntervalPair::Set(/* parameters */);
			}
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::CompLessEqual(/* parameters */);
		rw::math::vpu::CompAllTrue(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	}
}

// CgsIntervalList.cpp:480
void CgsSceneManager::IntervalList::SweepAgainstList(const const IntervalList &  lSortedListToSweep, OverlapPairQueue *  lpOverlappingPairQueue, IntervalStack *  lpStaticStackA, IntervalStack *  lpStaticStackB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:482
		uint32_t luNumStaticIntervalsA;

		// CgsIntervalList.cpp:483
		uint32_t luNumStaticIntervalsB;

		// CgsIntervalList.cpp:484
		uint32_t luCurrentStaticIntervalA;

		// CgsIntervalList.cpp:485
		uint32_t luCurrentStaticIntervalB;

		// CgsIntervalList.cpp:486
		const Interval * lpStaticIntervalA;

		// CgsIntervalList.cpp:487
		const Interval * lpStaticIntervalB;

		// CgsIntervalList.cpp:488
		uint32_t luStackALength;

		// CgsIntervalList.cpp:489
		uint32_t luStackBLength;

		GetNumIntervals(/* parameters */);
	}
	GetNumIntervals(/* parameters */);
	GetInterval(/* parameters */);
	GetInterval(/* parameters */);
	{
		// CgsIntervalList.cpp:511
		const const Interval & lCurrentIntervalData;

		IntervalStack::Pop(/* parameters */);
	}
	{
		// CgsIntervalList.cpp:539
		const const Interval & lCurrentIntervalData;

		IntervalStack::Pop(/* parameters */);
	}
	Interval::GetInterval(/* parameters */);
	IntervalStack::CheckOverlappingAndAddToQueue(/* parameters */);
	IntervalStack::Push(/* parameters */);
	IntervalStack::CheckOverlappingAndAddToQueue(/* parameters */);
	IntervalStack::Push(/* parameters */);
	{
		{
			CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::AllocateEvent(/* parameters */);
			OverlappingIntervalPair::Set(/* parameters */);
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::CompAllTrue(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	{
		{
			CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::AllocateEvent(/* parameters */);
			OverlappingIntervalPair::Set(/* parameters */);
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::CompAllTrue(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
}

// CgsIntervalList.cpp:196
void CgsSceneManager::IntervalList::AddObject(uint16_t  luObjectIndex, const rw::math::vpu::Vector3  lMin, const rw::math::vpu::Vector3  lMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:198
		uint32_t luNewObjectMin;

		// CgsIntervalList.cpp:199
		uint32_t luNewObjectMax;

	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Interval::SetIntervals(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Interval::SetIntervals(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Interval::SetObjectIndex(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	ObjectToIntervalMap::SetIntervalIndex(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Interval::SetMax(/* parameters */);
	Interval::SetObjectIndex(/* parameters */);
	Interval::SetMin(/* parameters */);
	ObjectToIntervalMap::SetIntervalIndex(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// CgsIntervalList.cpp:204
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsIntervalList.cpp:202
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// CgsIntervalList.cpp:583
void CgsSceneManager::IntervalList::SweepWithStaticList(IntervalList *  lpSortedListToSweep, OverlapPairQueue *  lpOverlappingPairQueue, IntervalStack  lDynamicStack, IntervalStack  lStaticStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntervalList.cpp:585
		uint32_t luNumDynamicIntervals;

		// CgsIntervalList.cpp:586
		uint32_t luNumStaticIntervals;

		// CgsIntervalList.cpp:587
		uint32_t luCurrentDynamicInterval;

		// CgsIntervalList.cpp:588
		uint32_t luCurrentStaticInterval;

		// CgsIntervalList.cpp:589
		const Interval * lpDynamicInterval;

		// CgsIntervalList.cpp:590
		const Interval * lpStaticInterval;

		GetNumIntervals(/* parameters */);
	}
	GetNumIntervals(/* parameters */);
	GetInterval(/* parameters */);
	GetInterval(/* parameters */);
	IntervalStack::Pop(/* parameters */);
	IntervalStack::Pop(/* parameters */);
	Interval::GetInterval(/* parameters */);
	{
		// CgsIntervalList.cpp:641
		const const Interval & lCurrentIntervalData;

		IntervalStack::CheckOverlappingAndAddToQueue(/* parameters */);
		IntervalStack::CheckOverlappingAndAddToQueue(/* parameters */);
		IntervalStack::Push(/* parameters */);
	}
	{
		// CgsIntervalList.cpp:620
		const const Interval & lCurrentIntervalData;

		IntervalStack::CheckOverlappingAndAddToQueue(/* parameters */);
		IntervalStack::Push(/* parameters */);
	}
	{
		// CgsIntervalList.cpp:612
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Interval::GetInterval(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Interval::GetInterval(/* parameters */);
		{
		}
	}
	{
		{
			CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::AllocateEvent(/* parameters */);
			OverlappingIntervalPair::Set(/* parameters */);
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::CompAllTrue(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	{
		{
			CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::AllocateEvent(/* parameters */);
			OverlappingIntervalPair::Set(/* parameters */);
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::CompAllTrue(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	{
		{
			CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair>::AllocateEvent(/* parameters */);
			OverlappingIntervalPair::Set(/* parameters */);
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	rw::math::vpu::CompAllTrue(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
}

