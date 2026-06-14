// ICEMemory.hpp:47
struct ICE::ICEMemory : public HeapMalloc {
public:
	// ICEMemory.hpp:52
	void Construct(void *, int32_t);

	// ICEMemory.hpp:56
	void * GetMemory(uint32_t);

	// ICEMemory.hpp:60
	void FreeMemory(void *);

}

// ICEMemory.hpp:79
struct ICE::ICEPointers {
	// ICEMemory.hpp:89
	ICEMemory * mpICEMemory;

	// ICEMemory.hpp:90
	ICEFileHandler * mpICEFileHandler;

	// ICEMemory.hpp:91
	ActionQueue * mpActionQueue;

	// ICEMemory.hpp:92
	ICE::ICECameraAnchor * mpICECameraAnchor;

	// ICEMemory.hpp:93
	ICE::ICETimer * mpICETimer;

	// ICEMemory.hpp:94
	const ICE::IResourceManager * mpResourceManager;

public:
	// ICEMemory.hpp:87
	void Construct(ICEFileHandler *, ActionQueue *, ICEMemory *, ICE::ICECameraAnchor *, ICE::ICETimer *, const ICE::IResourceManager *);

}

// ICEMemory.hpp:105
struct ICE::bNode {
	// ICEMemory.hpp:151
	bNode * Next;

	// ICEMemory.hpp:152
	bNode * Prev;

public:
	// ICEMemory.hpp:109
	void Construct();

	// ICEMemory.hpp:110
	void Destruct();

	// ICEMemory.hpp:113
	bNode * GetNext();

	// ICEMemory.hpp:114
	bNode * GetPrev();

	// ICEMemory.hpp:117
	bNode * Remove();

	// ICEMemory.hpp:127
	bNode * AddAfter(bNode *);

	// ICEMemory.hpp:139
	bNode * AddBefore(bNode *);

}

// ICEMemory.hpp:191
struct ICE::bList {
private:
	// ICEMemory.hpp:193
	bNode HeadNode;

	// ICEMemory.hpp:195
	int32_t TraversebList(bNode *);

public:
	// ICEMemory.hpp:199
	void Construct();

	// ICEMemory.hpp:200
	void InitList();

	// ICEMemory.hpp:203
	bool IsEmpty();

	// ICEMemory.hpp:207
	bNode * EndOfList();

	// ICEMemory.hpp:210
	bNode * GetHead();

	// ICEMemory.hpp:211
	bNode * GetTail();

	// ICEMemory.hpp:214
	bNode * GetByPos(int32_t);

	// ICEMemory.hpp:217
	bNode * GetNextCircular(bNode *);

	// ICEMemory.hpp:218
	bNode * GetPrevCircular(bNode *);

	// ICEMemory.hpp:221
	bNode * AddHead(bNode *);

	// ICEMemory.hpp:222
	bNode * AddTail(bNode *);

	// ICEMemory.hpp:225
	bNode * AddBefore(bNode *, bNode *);

	// ICEMemory.hpp:226
	bNode * AddAfter(bNode *, bNode *);

	// ICEMemory.hpp:229
	bNode * Remove(bNode *);

	// ICEMemory.hpp:230
	bNode * RemoveHead();

	// ICEMemory.hpp:231
	bNode * RemoveTail();

	// ICEMemory.hpp:234
	void AddTail(bList *);

	// ICEMemory.hpp:237
	void AddHead(bList *);

	// ICEMemory.hpp:240
	bNode * GetNode(int32_t);

	// ICEMemory.hpp:243
	int32_t GetNodeNumber(bNode *);

	// ICEMemory.hpp:246
	int32_t IsInList(bNode *);

	// ICEMemory.hpp:249
	int32_t CountElements();

	// ICEMemory.hpp:271
	bNode * AddSorted(int32_t (*)(bNode *, bNode *), bNode *);

	// ICEMemory.hpp:272
	void Sort(int32_t (*)(bNode *, bNode *));

private:
	// ICEMemory.hpp:284
	void MergeSort(int32_t (*)(bNode *, bNode *));

}

// ICEMemory.hpp:166
struct ICE::bTNode<ICE::ICETakeData> : public bNode {
public:
	// ICEMemory.hpp:168
	void Construct();

	// ICEMemory.hpp:169
	void Destruct();

	// ICEMemory.hpp:172
	ICE::ICETakeData * GetNext();

	// ICEMemory.hpp:173
	ICE::ICETakeData * GetPrev();

	// ICEMemory.hpp:176
	ICE::ICETakeData * Remove();

	// ICEMemory.hpp:179
	ICE::ICETakeData * AddAfter(ICE::ICETakeData *);

	// ICEMemory.hpp:180
	ICE::ICETakeData * AddBefore(ICE::ICETakeData *);

}

// ICEMemory.hpp:298
struct ICE::bTList<ICE::ICETakeData> : public bList {
	struct iterator;

	struct reverse_iterator;

public:
	// ICEMemory.hpp:305
	void Destruct();

	// ICEMemory.hpp:309
	void DeleteAllElements();

	// ICEMemory.hpp:315
	ICE::ICETakeData * EndOfList();

	// ICEMemory.hpp:316
	ICE::ICETakeData * GetHead();

	// ICEMemory.hpp:317
	ICE::ICETakeData * GetByPos(int);

	// ICEMemory.hpp:318
	ICE::ICETakeData * GetTail();

	// ICEMemory.hpp:319
	ICE::ICETakeData * GetNextCircular(bNode *);

	// ICEMemory.hpp:320
	ICE::ICETakeData * GetPrevCircular(bNode *);

	// ICEMemory.hpp:321
	ICE::ICETakeData * AddHead(bNode *);

	// ICEMemory.hpp:322
	ICE::ICETakeData * AddTail(bNode *);

	// ICEMemory.hpp:323
	ICE::ICETakeData * AddBefore(bNode *, bNode *);

	// ICEMemory.hpp:324
	ICE::ICETakeData * AddAfter(bNode *, bNode *);

	// ICEMemory.hpp:325
	ICE::ICETakeData * Remove(bNode *);

	// ICEMemory.hpp:326
	ICE::ICETakeData * RemoveHead();

	// ICEMemory.hpp:327
	ICE::ICETakeData * RemoveTail();

	// ICEMemory.hpp:328
	ICE::ICETakeData * GetNode(int);

	// ICEMemory.hpp:329
	void AddHead(bList *);

	// ICEMemory.hpp:330
	void AddTail(bList *);

	// ICEMemory.hpp:334
	ICE::ICETakeData * AddSorted(int32_t (*)(ICE::ICETakeData *, ICE::ICETakeData *), ICE::ICETakeData *);

	// ICEMemory.hpp:335
	void Sort(int32_t (*)(ICE::ICETakeData *, ICE::ICETakeData *));

	// ICEMemory.hpp:336
	void Sort(int32_t (*)(bNode *, bNode *));

	// ICEMemory.hpp:339
	ICE::ICETakeData * AddSorted(long int (*)(ICE::ICETakeData *, ICE::ICETakeData *), ICE::ICETakeData *);

	// ICEMemory.hpp:340
	void Sort(long int (*)(ICE::ICETakeData *, ICE::ICETakeData *));

	// ICEMemory.hpp:341
	void Sort(long int (*)(bNode *, bNode *));

	// ICEMemory.hpp:396
	bTList<ICE::ICETakeData>::iterator begin();

	// ICEMemory.hpp:397
	bTList<ICE::ICETakeData>::iterator end();

	// ICEMemory.hpp:398
	bTList<ICE::ICETakeData>::reverse_iterator rbegin();

	// ICEMemory.hpp:399
	bTList<ICE::ICETakeData>::reverse_iterator rend();

	// ICEMemory.hpp:401
	ICE::ICETakeData *& front();

	// ICEMemory.hpp:402
	ICE::ICETakeData *& back();

}

// ICEMemory.hpp:30
extern ICEMemory * spICEMemory;

// Behaviour.h:50
namespace ICE {
	// ICEMemory.hpp:30
	extern ICEMemory * spICEMemory;

}

// ICEActionQueue.hpp:21
namespace ICE {
	// ICEMemory.hpp:412
	extern char bToUpper(char);

}

// ICEMath.hpp:43
namespace ICE {
	// ICEMemory.hpp:30
	extern ICEMemory * spICEMemory;

}

