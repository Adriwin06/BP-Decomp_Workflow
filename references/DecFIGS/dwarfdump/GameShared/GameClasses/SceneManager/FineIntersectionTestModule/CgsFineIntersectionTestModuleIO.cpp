// CgsFineIntersectionTestModuleIO.cpp:60
void CgsSceneManager::FineIntersectionTestIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsFineIntersectionTestModuleIO.cpp:41
void CgsSceneManager::FineIntersectionTestIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsSceneManager::LineTestIntersection,256u>::Construct(/* parameters */);
	CgsContainers::Array<std::uint16_t,16384u>::Construct(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
}

