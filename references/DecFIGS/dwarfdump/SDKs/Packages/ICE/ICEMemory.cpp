// ICEActionQueue.hpp:21
namespace ICE {
	// ICEMemory.cpp:178
	extern uint32_t bStringHash(const char *);

	// ICEMemory.cpp:154
	extern uint32_t bStringHashUpper(const char *);

	// ICEMemory.cpp:25
	extern ICEMemory * spICEMemory;

}

// ICEMemory.cpp:99
void ICE::ICEMemory::FreeMemory(void *  lpMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEMemory.cpp:42
void ICE::ICEMemory::Construct(void *  lpBuffer, int32_t  lnBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEMemory.cpp:202
extern uint32_t bStringHash(const char *  text, int32_t  prefix_hash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:204
		uint32_t h;

	}
}

// ICEMemory.cpp:130
void ICE::bList::GetByPos(int32_t  liPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:132
		bNode * lpPosition;

		// ICEMemory.cpp:133
		int32_t liLoop;

		GetHead(/* parameters */);
		bNode::GetNext(/* parameters */);
	}
}

// ICEMemory.cpp:225
void ICE::bList::GetNode(int32_t  ordinal_number) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:227
		int32_t n;

		// ICEMemory.cpp:228
		bNode * node;

		GetHead(/* parameters */);
		bNode::GetNext(/* parameters */);
	}
}

// ICEMemory.cpp:250
void ICE::bList::TraversebList(bNode *  match_node) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:252
		bNode * node;

		// ICEMemory.cpp:253
		int32_t n;

		GetHead(/* parameters */);
		bNode::GetNext(/* parameters */);
	}
}

// ICEMemory.cpp:330
void ICE::bList::AddSorted(int32_t (*)(bNode *, bNode *)  check_flip, bNode *  node) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:332
		bNode * insert_point;

		GetHead(/* parameters */);
	}
	bNode::GetNext(/* parameters */);
	AddTail(/* parameters */);
	bNode::AddBefore(/* parameters */);
}

// ICEMemory.cpp:275
void ICE::bList::AddTail(bList *  list) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:277
		bNode * that_head;

		// ICEMemory.cpp:278
		bNode * that_tail;

		GetHead(/* parameters */);
		GetTail(/* parameters */);
		{
			// ICEMemory.cpp:281
			bNode * this_tail;

			GetTail(/* parameters */);
		}
	}
}

// ICEMemory.cpp:302
void ICE::bList::AddHead(bList *  list) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:304
		bNode * that_head;

		// ICEMemory.cpp:305
		bNode * that_tail;

		GetHead(/* parameters */);
		GetTail(/* parameters */);
		{
			// ICEMemory.cpp:308
			bNode * this_head;

			GetHead(/* parameters */);
		}
	}
}

// ICEMemory.cpp:408
void ICE::bList::MergeSort(int32_t (*)(bNode *, bNode *)  cmp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:419
		bNode * list;

		// ICEMemory.cpp:424
		bNode * p;

		// ICEMemory.cpp:424
		bNode * q;

		// ICEMemory.cpp:424
		bNode * e;

		// ICEMemory.cpp:424
		bNode * tail;

		// ICEMemory.cpp:424
		bNode * oldhead;

		// ICEMemory.cpp:425
		int32_t insize;

		// ICEMemory.cpp:425
		int32_t nmerges;

		// ICEMemory.cpp:425
		int32_t psize;

		// ICEMemory.cpp:425
		int32_t qsize;

		// ICEMemory.cpp:425
		int32_t i;

		IsEmpty(/* parameters */);
	}
}

// ICEMemory.cpp:356
void ICE::bList::Sort(int32_t (*)(bNode *, bNode *)  check_flip) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:358
		bNode * node;

		// ICEMemory.cpp:358
		bNode * next_node;

		// ICEMemory.cpp:359
		int32_t did_swap;

		GetHead(/* parameters */);
	}
	bNode::GetNext(/* parameters */);
	bNode::Remove(/* parameters */);
	bNode::AddBefore(/* parameters */);
	bNode::GetNext(/* parameters */);
	bNode::GetNext(/* parameters */);
}

// ICEMemory.cpp:71
void ICE::ICEMemory::GetMemory(uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEMemory.cpp:81
		void * lpRet;

	}
	{
		// ICEMemory.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// ICEMemory.cpp:31
	const uint32_t KU_ICE_DEBUG_MEMORY_SIZE = 1835008;

	// ICEMemory.cpp:32
	const uint32_t KU_ICE_DEBUG_MEMORY_ALIGNMENT = 4;

}

