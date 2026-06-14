// BrnContactSpyData.cpp:80
void BrnPhysics::ContactSpy::ContactSpyData::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Destruct(/* parameters */);
}

// BrnContactSpyData.cpp:52
void BrnPhysics::ContactSpy::ContactSpyData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::Clear(/* parameters */);
	ContactSpyRunList<8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
	ContactSpyRunList<64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
	ContactSpyRunList<50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
	ContactSpyRunList<100>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData>::Clear(/* parameters */);
}

// BrnContactSpyData.cpp:108
void BrnPhysics::ContactSpy::ContactSpyData::SortQueuesByEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnContactSpyData.cpp:134
void BrnPhysics::ContactSpy::ContactSpyData::Append(const ContactSpyData *  lpDataToAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetRaceCarContactRunList(/* parameters */);
	ContactSpyRunList<8>::AppendSafe<8>(/* parameters */);
	GetTrafficContactRunList(/* parameters */);
	ContactSpyRunList<64>::AppendSafe<64>(/* parameters */);
	GetPhysicalCarPartContactRunList(/* parameters */);
	ContactSpyRunList<50>::AppendSafe<50>(/* parameters */);
	GetPropContactRunList(/* parameters */);
	ContactSpyRunList<100>::AppendSafe<100>(/* parameters */);
	{
		ContactSpyRunList<8>::GetRunData(/* parameters */);
	}
	ContactSpyRunData::SetStartIndex(/* parameters */);
	{
		ContactSpyRunList<64>::GetRunData(/* parameters */);
	}
	ContactSpyRunData::SetStartIndex(/* parameters */);
	{
		ContactSpyRunList<50>::GetRunData(/* parameters */);
	}
	ContactSpyRunData::SetStartIndex(/* parameters */);
	{
		ContactSpyRunList<100>::GetRunData(/* parameters */);
	}
	ContactSpyRunData::SetStartIndex(/* parameters */);
	ContactSpyRunList<100>::GetRunData(/* parameters */);
	ContactSpyRunList<50>::GetRunData(/* parameters */);
	ContactSpyRunList<64>::GetRunData(/* parameters */);
	ContactSpyRunList<8>::GetRunData(/* parameters */);
}

