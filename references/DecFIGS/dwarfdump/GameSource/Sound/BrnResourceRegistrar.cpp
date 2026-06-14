// BrnResourceRegistrar.cpp:469
void BrnSound::Logic::ResourceRegistrar::SearchQueued(BrnSound::Logic::IResourceRequester *  lpRequester, bool  lbSearchForResource, uint32_t  lu32ResourceHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:471
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * lpIterator;

		// BrnResourceRegistrar.cpp:472
		bool lbQueued;

		CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::GetHead(/* parameters */);
	}
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetData(/* parameters */);
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
}

// BrnResourceRegistrar.cpp:449
void BrnSound::Logic::ResourceRegistrar::DoesRequesterHaveAnyQueued(BrnSound::Logic::IResourceRequester *  lpRequester) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResourceRegistrar.cpp:536
void BrnSound::Logic::ResourceRegistrar::GetResource(const char *  lpcFileName, const char *  lpcResourceName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:538
		uint32_t liResourceNameHash;

		// BrnResourceRegistrar.cpp:540
		uint32_t liFileNameHash;

		// BrnResourceRegistrar.cpp:546
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * lpIterator;

	}
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::GetHead(/* parameters */);
	{
		// BrnResourceRegistrar.cpp:550
		BrnSound::Logic::ResourceRegistrar::RequestedResource * lpData;

		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetData(/* parameters */);
		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetNext(/* parameters */);
	}
	{
		// BrnResourceRegistrar.cpp:556
		ID lDebugId;

		CgsResource::ID::Construct(/* parameters */);
	}
}

// BrnResourceRegistrar.cpp:585
void BrnSound::Logic::ResourceRegistrar::QueuedResource::QueuedResource(const char *  lpcResourceName, const char *  lpcFileName, BrnSound::Logic::IResourceRequester *  lpResourceRequester, int32_t  liPoolId, BrnSound::Logic::ResourceRegistrar::EType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResourceRegistrar.cpp:42
void BrnSound::Logic::ResourceRegistrar::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Construct(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::Clear(/* parameters */);
	CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource>::Init(/* parameters */);
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::Clear(/* parameters */);
	CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>::Init(/* parameters */);
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::Clear(/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Construct(/* parameters */);
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

// BrnResourceRegistrar.cpp:64
void BrnSound::Logic::ResourceRegistrar::AddRequest(const BrnSound::Logic::ResourceRegistrar::QueuedResource &  lQueuedResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:68
		uint32_t lFileNameHash;

		// BrnResourceRegistrar.cpp:69
		uint32_t lResourceNameHash;

		// BrnResourceRegistrar.cpp:71
		bool lbFileHasAlreadyBeenRequested;

		QueuedResource::GetFileNameHash(/* parameters */);
	}
	{
		// BrnResourceRegistrar.cpp:72
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * lpQueuedIter;

		CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::GetHead(/* parameters */);
	}
	QueuedResource::GetResourceNameHash(/* parameters */);
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetData(/* parameters */);
	QueuedResource::GetFileNameHash(/* parameters */);
	QueuedResource::MarkAsRequestAlreadyMade(/* parameters */);
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::AddTail(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResourceRegistrar.cpp:365
void BrnSound::Logic::ResourceRegistrar::RemoveRequests(BrnSound::Logic::IResourceRequester *  lpResourceRequester) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:369
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * lpIterator;

		CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::GetHead(/* parameters */);
		{
			// BrnResourceRegistrar.cpp:373
			BrnSound::Logic::ResourceRegistrar::RequestedResource * lpData;

			CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetData(/* parameters */);
			RequestedResource::ClearReferencesToResource(/* parameters */);
			CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetNext(/* parameters */);
		}
	}
	CgsContainers::LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u>::RemoveNode(/* parameters */);
	CgsContainers::LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u>::Find(/* parameters */);
	AddNodeToRemoveResourceCandidateList(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnResourceRegistrar.cpp:996
void BrnSound::Logic::ResourceRegistrar::QueuedResource::ReleaseAttribSys(const BrnSound::Logic::ResourceRegistrar &  lRegistrar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:1005
		const RootOutputBuffer::AttribSysRequestInterface & lAttribSysInterface;

		GetAttribsysRequestInterface(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::UnregisterVault(/* parameters */);
	CgsAttribSys::AttribSysIO::UnregisterVaultRequest::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceRegistrar.cpp:1034
		const CgsModule::Event * lpEvent;

		// BrnResourceRegistrar.cpp:1035
		int32_t liEventSize;

		// BrnResourceRegistrar.cpp:1042
		const VaultUnregisteredResponse * lpVaultUnRegistered;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
}

// BrnResourceRegistrar.cpp:632
void BrnSound::Logic::ResourceRegistrar::QueuedResource::Release(const BrnSound::Logic::ResourceRegistrar &  lRegistrar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:648
		bool lbDone;

	}
	CgsResource::ResourceHandle::Clear(/* parameters */);
	GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::UnloadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::UnloadBundle(/* parameters */);
	{
		// BrnResourceRegistrar.cpp:713
		const CgsModule::Event * lpEvent;

		// BrnResourceRegistrar.cpp:714
		int32_t liEventSize;

		// BrnResourceRegistrar.cpp:722
		const UnloadBundleResponse * lpUnLoad;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
}

// BrnResourceRegistrar.cpp:916
void BrnSound::Logic::ResourceRegistrar::QueuedResource::PrepareAttribSys(const BrnSound::Logic::ResourceRegistrar &  lRegistrar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:925
		const RootOutputBuffer::AttribSysRequestInterface & lAttribSysInterface;

		GetAttribsysRequestInterface(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterVault(/* parameters */);
	AddEvent<CgsAttribSys::AttribSysIO::RegisterVaultRequest>(/* parameters */);
	CgsAttribSys::AttribSysIO::RegisterVaultRequest::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceRegistrar.cpp:954
		const CgsModule::Event * lpEvent;

		// BrnResourceRegistrar.cpp:955
		int32_t liEventSize;

		// BrnResourceRegistrar.cpp:962
		const VaultRegisteredResponse * lpVaultRegistered;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResourceRegistrar.cpp:765
void BrnSound::Logic::ResourceRegistrar::QueuedResource::Prepare(const BrnSound::Logic::ResourceRegistrar &  lRegistrar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:767
		const RootOutputBuffer::SoundResourceRequestInterface & lRequestInterface;

		GetResourceRequestInterface(/* parameters */);
	}
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	{
		// BrnResourceRegistrar.cpp:792
		const CgsModule::Event * lpEvent;

		// BrnResourceRegistrar.cpp:793
		const LoadBundleResponse * lpLoad;

		// BrnResourceRegistrar.cpp:794
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	{
		// BrnResourceRegistrar.cpp:835
		const CgsModule::Event * lpEvent;

		// BrnResourceRegistrar.cpp:836
		const AcquireResourceResponse * lpAcquire;

		// BrnResourceRegistrar.cpp:837
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	{
		// BrnResourceRegistrar.cpp:862
		bool lbDone;

	}
}

// BrnResourceRegistrar.cpp:233
void BrnSound::Logic::ResourceRegistrar::UpdateQueued() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:238
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * lpIterator;

		CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::GetHead(/* parameters */);
	}
	{
		// BrnResourceRegistrar.cpp:243
		BrnSound::Logic::ResourceRegistrar::QueuedResource * lpQueuedResource;

		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetData(/* parameters */);
		{
			// BrnResourceRegistrar.cpp:255
			BrnSound::Logic::ResourceRegistrar::RequestedResource lLoadedResource;

			RequestedResource::RequestedResource(/* parameters */);
			CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::AddTail(/* parameters */);
		}
		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
	}
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::GetHead(/* parameters */);
	{
		// BrnResourceRegistrar.cpp:270
		BrnSound::Logic::ResourceRegistrar::QueuedResource * lpQueuedResource;

		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
	}
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetData(/* parameters */);
	{
		// BrnResourceRegistrar.cpp:278
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * lpNodeToDelete;

		CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::RemoveNode(/* parameters */);
	}
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
	CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>::AddHead(/* parameters */);
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

// BrnResourceRegistrar.cpp:104
void BrnSound::Logic::ResourceRegistrar::UpdateRequests() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:109
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * lpQueuedIter;

		CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::GetHead(/* parameters */);
	}
	{
		// BrnResourceRegistrar.cpp:118
		uint32_t lFileNameHash;

		// BrnResourceRegistrar.cpp:119
		uint32_t lResourceNameHash;

		// BrnResourceRegistrar.cpp:120
		bool lbDoIncrement;

		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetData(/* parameters */);
		QueuedResource::GetFileNameHash(/* parameters */);
		{
			// BrnResourceRegistrar.cpp:122
			LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * lpLoadedIter;

			CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::GetHead(/* parameters */);
		}
		QueuedResource::GetResourceNameHash(/* parameters */);
		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetData(/* parameters */);
		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetNext(/* parameters */);
	}
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
	{
		// BrnResourceRegistrar.cpp:202
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * lpRemove;

		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetData(/* parameters */);
		{
			// BrnResourceRegistrar.cpp:130
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Contains(/* parameters */);
		AddNodeToRemoveResourceCandidateList(/* parameters */);
		{
			// BrnResourceRegistrar.cpp:165
			bool lbEffectHasOtherRequests;

			{
				// BrnResourceRegistrar.cpp:149
				uint32_t luNodeIndex;

				CgsContainers::LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u>::AddTail(/* parameters */);
				CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::FindFirstInstanceOf(/* parameters */);
				CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::EraseFast(/* parameters */);
			}
			{
				// BrnResourceRegistrar.cpp:166
				LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * lpComparedQueuedIter;

				CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::GetHead(/* parameters */);
				CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
			}
		}
		CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::RemoveNode(/* parameters */);
		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
		CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>::AddHead(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}

// BrnResourceRegistrar.cpp:301
void BrnSound::Logic::ResourceRegistrar::ClearUnreferancedFiles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:303
		uint32_t luNodeIndex;

		{
			// BrnResourceRegistrar.cpp:307
			LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * lpListNode;

			CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetData(/* parameters */);
			RequestedResource::GetNumberOfReferences(/* parameters */);
			{
				// BrnResourceRegistrar.cpp:314
				LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * lpToDelete;

				// BrnResourceRegistrar.cpp:315
				BrnSound::Logic::ResourceRegistrar::RequestedResource * lpDataToDelete;

				// BrnResourceRegistrar.cpp:319
				BrnSound::Logic::ResourceRegistrar::QueuedResource lUnloadingItem;

				QueuedResource::QueuedResource(/* parameters */);
				CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::AddHead(/* parameters */);
				CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::SetData(/* parameters */);
				CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>::AddHead(/* parameters */);
				CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::RemoveNode(/* parameters */);
				CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::CountElements(/* parameters */);
				CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource>::AddHead(/* parameters */);
			}
		}
		CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::GetLength(/* parameters */);
		{
			// BrnResourceRegistrar.cpp:329
			Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u> lapRemainingRemovalCandidates;

			// BrnResourceRegistrar.cpp:330
			uint32_t luRemainingRemovalCandidateIndex;

			AppendArray<124u>(/* parameters */);
		}
		CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Clear(/* parameters */);
	}
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Construct(/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Append(/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::GetLength(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Clear(/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Append(/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnResourceRegistrar.cpp:506
void BrnSound::Logic::ResourceRegistrar::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::GetLength(/* parameters */);
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

// BrnResourceRegistrar.cpp:398
void BrnSound::Logic::ResourceRegistrar::RemoveRefsToResource(BrnSound::Logic::IResourceRequester *  lpRequester, const char *  lpcResourceName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceRegistrar.cpp:402
		uint32_t lu32NameHash;

		// BrnResourceRegistrar.cpp:404
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> * lpQueuedIterator;

		// BrnResourceRegistrar.cpp:417
		LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> * lpIterator;

	}
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::GetHead(/* parameters */);
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetNext(/* parameters */);
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>::GetData(/* parameters */);
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::GetHead(/* parameters */);
	{
		// BrnResourceRegistrar.cpp:421
		BrnSound::Logic::ResourceRegistrar::RequestedResource * lpData;

		CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetNext(/* parameters */);
	}
	CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>::GetData(/* parameters */);
	RequestedResource::ClearReferencesToResource(/* parameters */);
	AddNodeToRemoveResourceCandidateList(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// BrnResourceRegistrar.cpp:21
	extern int32_t KI_DEBUG_PRINT_FILE_IO;

}

