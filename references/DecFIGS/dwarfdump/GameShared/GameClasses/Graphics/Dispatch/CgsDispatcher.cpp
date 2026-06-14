// CgsDispatcher.cpp:198
void CgsGraphics::DispatchBin::SetBinRange(DispatchCommand *  lpNewStart, DispatchCommand *  lpNewEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:407
void CgsGraphics::DispatchBin::SetMemoryCallback(void (*)(void *)  lpCallback, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:756
void CgsGraphics::DispatchList::SetSingleKeyBlock(SortKeyBlock *  lpKeyBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:383
void CgsGraphics::DispatchBin::ConstructWithSharedBinMemory(uintptr_t  luSharedMemoryStartAddress, uint32_t *  lpSharedMemoryBlockNextFreeAtomic, uint32_t  luSharedMemoryBlockMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:374
void CgsGraphics::DispatchBin::SetDispatchFrame(CgsGraphics::DispatchFrame *  lpDispatchFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:132
void CgsGraphics::DispatchList::Construct(CgsGraphics::DispatchBin *  lpDispatchBin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:84
void CgsGraphics::DispatchBin::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:102
void CgsGraphics::DispatchBin::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:148
void CgsGraphics::DispatchList::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:725
void CgsGraphics::DispatchFrame::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:729
		uint32_t uList;

	}
}

// CgsDispatcher.cpp:192
void CgsGraphics::DispatchBin::SetBinCurrent(DispatchCommand *  lpNewCurrent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:345
void CgsGraphics::DispatchList::GetCommandFromIndex(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:356
		uint32_t luCurrentBlockBase;

		// CgsDispatcher.cpp:357
		SortKeyBlock * lpCurrentBlock;

		// CgsDispatcher.cpp:366
		uint32_t luIndexIntoBlock;

		// CgsDispatcher.cpp:367
		SortKey luKey;

		// CgsDispatcher.cpp:369
		uint64_t luOffset;

	}
}

// CgsDispatcher.cpp:233
void CgsGraphics::DispatchList::ReconnectChainBlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:244
		uint32_t luChain;

		{
			// CgsDispatcher.cpp:247
			SortKeyBlock * lpBlockWithinChain;

			// CgsDispatcher.cpp:259
			SortKeyBlock * lpLastBlockInChain;

		}
	}
}

// CgsDispatcher.cpp:483
void CgsGraphics::DispatchList::Append(DispatchList *  lpListToAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:524
void CgsGraphics::DispatchList::DispatchAll(const DispatchPacketInterpreter *  pInterpreter, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DrawRenderableMesh::SetMaterialShadowingAddress(/* parameters */);
	shadow::Device::ResetShadowingForShaders(/* parameters */);
	{
		// CgsDispatcher.cpp:532
		uint32_t uCurrent;

	}
	DrawRenderableMeshZOnly::SetMaterialShadowingAddress(/* parameters */);
}

// CgsDispatcher.cpp:51
void CgsGraphics::DispatchBin::Construct(uint32_t  luCapacityBytes, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:76
		uint32_t lu32SizeAligned128;

		// CgsDispatcher.cpp:77
		ResourceDescriptor ListResDesc;

		// CgsDispatcher.cpp:78
		Resource ListRes;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsDispatcher.cpp:708
void CgsGraphics::DispatchFrame::Construct(uint32_t  luNumDispatchLists, uint32_t  luBinCapacityBytes, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:719
		uint32_t uList;

	}
}

// CgsDispatcher.cpp:675
void CgsGraphics::DispatchList::DispatchAllMeshOcclusionQueries_Bulk(const DispatchPacketInterpreter *  pInterpreter, int32_t  liStartIndex, int32_t  liNumToDispatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:686
		int32_t liEndIndex;

		shadow::Device::ResetShadowingForShaders(/* parameters */);
	}
	DrawRenderableMesh::SetMaterialShadowingAddress(/* parameters */);
	DrawRenderableMeshZOnly::SetMaterialShadowingAddress(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	{
		// CgsDispatcher.cpp:692
		uint32_t uCurrent;

		GetCommandFromIndex_Sorted(/* parameters */);
	}
}

// CgsDispatcher.cpp:645
void CgsGraphics::DispatchList::DispatchAllMeshOcclusionQueries(const DispatchPacketInterpreter *  pInterpreter, int32_t  liStartIndex, int32_t  liNumToDispatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:652
		int32_t liEndIndex;

		shadow::Device::ResetShadowingForShaders(/* parameters */);
	}
	DrawRenderableMesh::SetMaterialShadowingAddress(/* parameters */);
	DrawRenderableMeshZOnly::SetMaterialShadowingAddress(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	{
		// CgsDispatcher.cpp:658
		uint32_t uCurrent;

		GetCommandFromIndex_Sorted(/* parameters */);
	}
}

// CgsDispatcher.cpp:628
void CgsGraphics::DispatchList::DispatchAllMeshesZOnly(const DispatchPacketInterpreter *  pInterpreter, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DrawRenderableMesh::SetMaterialShadowingAddress(/* parameters */);
	shadow::Device::ResetShadowingForShaders(/* parameters */);
	{
		// CgsDispatcher.cpp:635
		uint32_t luCurrent;

	}
	DrawRenderableMeshZOnly::SetMaterialShadowingAddress(/* parameters */);
	GetCommandFromIndex_Sorted(/* parameters */);
}

// CgsDispatcher.cpp:414
void CgsGraphics::DispatchBin::HandleMemoryOverflow(uint32_t  luRequestedQuadWords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:416
		bool lbSuccess;

		// CgsDispatcher.cpp:417
		bool lbSharedMemoryExhausted;

	}
	{
		// CgsDispatcher.cpp:423
		uint32_t luNextFreeBlock;

	}
	{
		// CgsDispatcher.cpp:465
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
	}
}

// CgsDispatcher.cpp:279
void CgsGraphics::DispatchList::PrepareSortJobInfo(const SortJobInputOutput &  lSortedJobInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:294
		uint32_t luBytesToAllocate;

		// CgsDispatcher.cpp:296
		const int kiCacheLineSize;

		// CgsDispatcher.cpp:300
		uint32_t luQuadWordsToAllocate;

		// CgsDispatcher.cpp:302
		void * lpRawMemory;

		// CgsDispatcher.cpp:306
		SortKeyBlock * lpCurrentBlock;

		// CgsDispatcher.cpp:307
		uint32_t luKeysCopied;

		DispatchBin::AllocateMemoryFast(/* parameters */);
	}
}

// CgsDispatcher.cpp:114
void CgsGraphics::DispatchBin::Align(uint32_t  luAlignmentSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:116
		uintptr_t lCurrent;

		// CgsDispatcher.cpp:117
		uintptr_t lCurrentAligned;

		// CgsDispatcher.cpp:119
		uint32_t luBytesToAlign;

	}
	AllocateMemoryFast(/* parameters */);
}

// CgsDispatcher.cpp:153
void CgsGraphics::DispatchList::AllocateKeyBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:157
		const uint32_t luBytesForHeader;

		// CgsDispatcher.cpp:158
		const uint32_t luBytesForKeyArray;

		// CgsDispatcher.cpp:160
		uint32_t luBytesToAllocate;

		// CgsDispatcher.cpp:161
		uint32_t luQuadWordsToAllocate;

		// CgsDispatcher.cpp:164
		char * lpRawMemory;

		// CgsDispatcher.cpp:166
		SortKeyBlock * lpNewListBlock;

		// CgsDispatcher.cpp:169
		SortKeyBlock * lpPreviousListTail;

	}
	DispatchBin::AllocateMemoryFast(/* parameters */);
}

// CgsDispatcher.cpp:331
void CgsGraphics::DispatchList::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcher.cpp:741
void CgsGraphics::DispatchFrame::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:747
		uint32_t uList;

	}
}

// CgsDispatcher.cpp:544
void CgsGraphics::DispatchList::DispatchAllObjectToMesh(const DispatchPacketInterpreter *  pInterpreter, CgsGraphics::DispatchFrame *  lpDispatchFrame, void *  lpContext, int32_t  liStartIndex, int32_t  liNumToDispatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.cpp:546
		int32_t liEndIndex;

		// CgsDispatcher.cpp:565
		uint32_t luCurrentBlockBase;

		// CgsDispatcher.cpp:566
		SortKeyBlock * lpCurrentBlock;

	}
	rw::core::stdc::Min(/* parameters */);
	{
		// CgsDispatcher.cpp:570
		int32_t liStartIndexInBlock;

		// CgsDispatcher.cpp:571
		int32_t liEndIndexInBlock;

		// CgsDispatcher.cpp:578
		const int32_t liKeysInThisBlock;

	}
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	{
		// CgsDispatcher.cpp:585
		int32_t liLocalIndex;

		{
			// CgsDispatcher.cpp:587
			SortKey luKey;

			// CgsDispatcher.cpp:588
			uint64_t luOffset;

			// CgsDispatcher.cpp:589
			DispatchCommand * lpCommand;

		}
	}
}

