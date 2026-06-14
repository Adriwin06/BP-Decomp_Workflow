// CgsVoiceHierarchy.cpp:57
void CgsSound::Logic::VoiceHierarchyNode::SetId(VoiceHierarchyNode::VoiceId  lVoiceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:73
void CgsSound::Logic::VoiceHierarchyNode::SetParentId(VoiceHierarchyNode::VoiceId  lVoiceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:92
void CgsSound::Logic::VoiceHierarchyNode::SetOtherSends(const CgsSound::Logic::SendDescriptor *  lpOtherSends, int32_t  liNumOtherSends) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:114
void CgsSound::Logic::VoiceHierarchyNode::SetDefaultSendName(VoiceHierarchyNode::QueueElement  lDefaultSendName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:132
void CgsSound::Logic::VoiceHierarchyNode::SetVoiceType(CgsSound::Logic::VoiceHierarchyNode::eVoiceType  leVoiceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:255
void CgsSound::Logic::VoiceHierarchy::VoiceHierarchy(const VoiceHierarchyNode *  lpNodes, int32_t  liNumNodes, int32_t  liMapState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:276
void CgsSound::Logic::VoiceHierarchy::GetNumNodes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:329
void CgsSound::Logic::VoiceHierarchy::SetExternalConnections(const CgsSound::Logic::ExternalConnectionDescriptor *  lpExternalConnections, int32_t  liNumExternalConnections) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:391
void CgsSound::Logic::SendDescriptor::SetTargetMapState(int32_t  liTargetMapState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:409
void CgsSound::Logic::ExternalConnectionDescriptor::SetMapState(int32_t  liMapState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:427
void CgsSound::Logic::ExternalConnectionDescriptor::SetNodeIndex(int32_t  liNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:350
void CgsSound::Logic::SendDescriptor::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:444
void CgsSound::Logic::ExternalConnectionDescriptor::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.cpp:150
void CgsSound::Logic::VoiceHierarchyNode::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoiceHierarchy.cpp:152
		void * lpBaseAddr;

		// CgsVoiceHierarchy.cpp:177
		int32_t liIndex;

	}
	rw::Resource::GetMemoryResource(/* parameters */);
	{
		// CgsVoiceHierarchy.cpp:180
		SendDescriptor * lpConnection;

		GetOtherSend(/* parameters */);
	}
}

// CgsVoiceHierarchy.cpp:297
void CgsSound::Logic::VoiceHierarchy::GetNodeById(VoiceHierarchyNode::VoiceId  lVoiceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoiceHierarchy.cpp:299
		const VoiceHierarchyNode * lpNode;

		// CgsVoiceHierarchy.cpp:302
		int32_t liIndex;

		GetHierarchyNode(/* parameters */);
	}
}

