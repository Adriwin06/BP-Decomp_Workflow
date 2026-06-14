// BrnRouteMapModuleIO.cpp:49
void BrnAI::RouteMapModuleIO::RaceRouteRequest::Construct(uint16_t  luOwnerId, uint16_t  luEventId, const rw::math::vpu::Vector3  lStartPosition, const rw::math::vpu::Vector3  lEndPosition, uint16_t  luStartSectionIndex, uint16_t  luEndSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnAI::AISectionId,16u>::Construct(/* parameters */);
}

// BrnRouteMapModuleIO.cpp:73
void BrnAI::RouteMapModuleIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>::Construct(/* parameters */);
}

// BrnRouteMapModuleIO.cpp:91
void BrnAI::RouteMapModuleIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnRouteMapModuleIO.cpp:106
void BrnAI::RouteMapModuleIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>::Construct(/* parameters */);
}

// BrnRouteMapModuleIO.cpp:123
void BrnAI::RouteMapModuleIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

