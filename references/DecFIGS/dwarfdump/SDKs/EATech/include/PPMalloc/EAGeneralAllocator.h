// icoreallocator_interface.h:31
namespace EA {
	// icoreallocator_interface.h:33
	namespace Allocator {
		// Declaration
		struct GeneralAllocator {
			// EAGeneralAllocator.h:595
			enum HookType {
				kHookTypeMalloc = 0,
				kHookTypeFree = 1,
				kHookTypeCoreAlloc = 2,
				kHookTypeCoreFree = 3,
			}

			// EAGeneralAllocator.h:605
			enum HookSubType {
				kHookSubTypeNone = 0,
				kHookSubTypeMalloc = 1,
				kHookSubTypeCalloc = 2,
				kHookSubTypeRealloc = 3,
				kHookSubTypeMallocAligned = 4,
				kHookSubTypeMallocMultiple1 = 5,
				kHookSubTypeMallocMultiple2 = 6,
			}

			// EAGeneralAllocator.h:619
			struct HookInfo {
				// EAGeneralAllocator.h:620
				EA::Allocator::GeneralAllocator * mpGeneralAllocator;

				// EAGeneralAllocator.h:621
				bool mbEntry;

				// EAGeneralAllocator.h:622
				EA::Allocator::GeneralAllocator::HookType mHookType;

				// EAGeneralAllocator.h:623
				EA::Allocator::GeneralAllocator::HookSubType mHookSubType;

				// EAGeneralAllocator.h:624
				size_t mnSizeInputTotal;

				// EAGeneralAllocator.h:625
				const void * mpDataInput;

				// EAGeneralAllocator.h:626
				size_t mnCountInput;

				// EAGeneralAllocator.h:627
				size_t mnSizeInput;

				// EAGeneralAllocator.h:628
				const size_t * mpSizeInputArray;

				// EAGeneralAllocator.h:629
				size_t mnAlignmentInput;

				// EAGeneralAllocator.h:630
				int mnAllocationFlags;

				// EAGeneralAllocator.h:631
				void * mpDataOutput;

				// EAGeneralAllocator.h:632
				void ** mpArrayOutput;

				// EAGeneralAllocator.h:633
				size_t mnSizeOutput;

			}

			// EAGeneralAllocator.h:744
			struct InitCallbackNode {
				// EAGeneralAllocator.h:745
				void (*)(EA::Allocator::GeneralAllocator *, bool, void *) mpInitCallbackFunction;

				// EAGeneralAllocator.h:746
				void * mpContext;

				// EAGeneralAllocator.h:747
				EA::Allocator::GeneralAllocator::InitCallbackNode * mpNext;

			}

			// EAGeneralAllocator.h:799
			enum HeapValidationLevel {
				kHeapValidationLevelNone = 0,
				kHeapValidationLevelBasic = 1,
				kHeapValidationLevelDetail = 2,
				kHeapValidationLevelFull = 3,
			}

			// EAGeneralAllocator.h:924
			struct BlockInfo {
				// EAGeneralAllocator.h:925
				const void * mpCore;

				// EAGeneralAllocator.h:926
				const void * mpBlock;

				// EAGeneralAllocator.h:927
				size_t mnBlockSize;

				// EAGeneralAllocator.h:928
				void * mpData;

				// EAGeneralAllocator.h:929
				size_t mnDataSize;

				// EAGeneralAllocator.h:930
				char mBlockType;

				// EAGeneralAllocator.h:931
				bool mbMemoryMapped;

			}

			// EAGeneralAllocator.h:1005
			struct Chunk {
				// EAGeneralAllocator.h:1006
				uint32_t mnPriorSize;

				// EAGeneralAllocator.h:1007
				uint32_t mnSize;

				// EAGeneralAllocator.h:1008
				EA::Allocator::GeneralAllocator::Chunk * mpPrevChunk;

				// EAGeneralAllocator.h:1009
				EA::Allocator::GeneralAllocator::Chunk * mpNextChunk;

			}

			// EAGeneralAllocator.h:1017
			struct CoreBlock {
				// EAGeneralAllocator.h:1018
				char * mpCore;

				// EAGeneralAllocator.h:1019
				size_t mnSize;

				// EAGeneralAllocator.h:1020
				size_t mnReservedSize;

				// EAGeneralAllocator.h:1021
				bool mbMMappedMemory;

				// EAGeneralAllocator.h:1022
				bool mbShouldFree;

				// EAGeneralAllocator.h:1023
				bool mbShouldFreeOnShutdown;

				// EAGeneralAllocator.h:1024
				bool mbShouldTrim;

				// EAGeneralAllocator.h:1025
				size_t (*)(EA::Allocator::GeneralAllocator *, void *, size_t, void *) mpCoreFreeFunction;

				// EAGeneralAllocator.h:1026
				void * mpCoreFreeFunctionContext;

				// EAGeneralAllocator.h:1027
				EA::Allocator::GeneralAllocator::CoreBlock * mpPrevCoreBlock;

				// EAGeneralAllocator.h:1028
				EA::Allocator::GeneralAllocator::CoreBlock * mpNextCoreBlock;

			}

			// EAGeneralAllocator.h:1102
			enum DataType {
				kDataTypeBinary = 0,
				kDataTypeChar = 1,
				kDataTypeWChar = 2,
			}

			// EAGeneralAllocator.h:1108
			enum BinType {
				kBinTypeNone = 0,
				kBinTypeFast = 1,
				kBinTypeNormal = 2,
				kBinTypeTop = 3,
			}

		}

	}

}

// EAGeneralAllocator.h:351
struct EA::Allocator::GeneralAllocator {
	// EAGeneralAllocator.h:357
	extern const int kTypeId = 883630667;

protected:
	// EAGeneralAllocator.h:1250
	bool mbInitialized;

	// EAGeneralAllocator.h:1251
	uint32_t mnMaxFastBinChunkSize;

	// EAGeneralAllocator.h:1252
	EA::Allocator::GeneralAllocator::Chunk *[10] mpFastBinArray;

	// EAGeneralAllocator.h:1253
	EA::Allocator::GeneralAllocator::Chunk *[256] mpBinArray;

	// EAGeneralAllocator.h:1254
	unsigned int[4] mBinBitmap;

	// EAGeneralAllocator.h:1255
	EA::Allocator::GeneralAllocator::Chunk * mpTopChunk;

	// EAGeneralAllocator.h:1256
	EA::Allocator::GeneralAllocator::Chunk * mpLastRemainderChunk;

	// EAGeneralAllocator.h:1257
	EA::Allocator::GeneralAllocator::CoreBlock mHeadCoreBlock;

	// EAGeneralAllocator.h:1258
	void * mpHighFence;

	// EAGeneralAllocator.h:1259
	bool mbHighFenceInternallyDisabled;

	// EAGeneralAllocator.h:1260
	bool mbSystemAllocEnabled;

	// EAGeneralAllocator.h:1261
	int mnCheckChunkReentrancyCount;

	// EAGeneralAllocator.h:1262
	unsigned char mcTraceFieldDelimiter;

	// EAGeneralAllocator.h:1263
	unsigned char mcTraceRecordDelimiter;

	// EAGeneralAllocator.h:1266
	EA::Allocator::GeneralAllocator::HeapValidationLevel mAutoHeapValidationLevel;

	// EAGeneralAllocator.h:1267
	size_t mnAutoHeapValidationFrequency;

	// EAGeneralAllocator.h:1268
	size_t mnAutoHeapValidationEventCount;

	// EAGeneralAllocator.h:1269
	bool mbHeapValidationActive;

	// EAGeneralAllocator.h:1272
	int mnMMapCount;

	// EAGeneralAllocator.h:1273
	size_t mnMMapMallocTotal;

	// EAGeneralAllocator.h:1274
	int mnMMapMaxAllowed;

	// EAGeneralAllocator.h:1275
	uint32_t mnMMapThreshold;

	// EAGeneralAllocator.h:1276
	bool mbMMapTopDown;

	// EAGeneralAllocator.h:1277
	EA::Allocator::GeneralAllocator::Chunk mHeadMMapChunk;

	// EAGeneralAllocator.h:1285
	bool (*)(EA::Allocator::GeneralAllocator *, size_t, size_t, void *) mpMallocFailureFunction;

	// EAGeneralAllocator.h:1286
	void * mpMallocFailureFunctionContext;

	// EAGeneralAllocator.h:1287
	unsigned int mnMaxMallocFailureCount;

	// EAGeneralAllocator.h:1289
	void (*)(const char *, void *) mpAssertionFailureFunction;

	// EAGeneralAllocator.h:1290
	void * mpAssertionFailureFunctionContext;

	// EAGeneralAllocator.h:1292
	void (*)(const char *, void *) mpTraceFunction;

	// EAGeneralAllocator.h:1293
	void * mpTraceFunctionContext;

	// EAGeneralAllocator.h:1296
	unsigned int mnTrimThreshold;

	// EAGeneralAllocator.h:1297
	uint32_t mnTopPad;

	// EAGeneralAllocator.h:1298
	char * mpInitialTopChunk;

	// EAGeneralAllocator.h:1299
	size_t mnPageSize;

	// EAGeneralAllocator.h:1300
	size_t mnNewCoreSize;

	// EAGeneralAllocator.h:1301
	size_t mnCoreIncrementSize;

	// EAGeneralAllocator.h:1302
	bool mbTraceInternalMemory;

	// EAGeneralAllocator.h:1306
	void * mpMutex;

	// EAGeneralAllocator.h:1310
	uint32_t[8] mpMutexData;

	// EAGeneralAllocator.h:1318
	unsigned char mnFillFree;

	// EAGeneralAllocator.h:1319
	unsigned char mnFillDelayedFree;

	// EAGeneralAllocator.h:1320
	unsigned char mnFillNew;

	// EAGeneralAllocator.h:1321
	unsigned char mnFillGuard;

	// EAGeneralAllocator.h:1322
	unsigned char mnFillUnusedCore;

	// EAGeneralAllocator.h:1325
	const char * mpName;

	// EAGeneralAllocator.h:1333
	int8_t mNotifyInitState;

	// EAGeneralAllocator.h:1335
	extern EA::Allocator::GeneralAllocator::InitCallbackNode volatile* mpInitCallbackNode;

public:
	// EAGeneralAllocator.h:405
	void GeneralAllocator(void *, size_t, bool, bool, size_t (*)(EA::Allocator::GeneralAllocator *, void *, size_t, void *), void *);

	// EAGeneralAllocator.h:410
	void ~GeneralAllocator();

	// EAGeneralAllocator.h:420
	bool Init(void *, size_t, bool, bool, size_t (*)(EA::Allocator::GeneralAllocator *, void *, size_t, void *), void *);

	// EAGeneralAllocator.h:425
	bool Shutdown();

	// EAGeneralAllocator.h:437
	void * AsInterface(int);

	// EAGeneralAllocator.h:455
	void * Malloc(size_t, int);

	// EAGeneralAllocator.h:462
	void * Calloc(size_t, size_t, int);

	// EAGeneralAllocator.h:486
	void * Realloc(void *, size_t, int);

	// EAGeneralAllocator.h:494
	void Free(void *);

	// EAGeneralAllocator.h:511
	void * MallocAligned(size_t, size_t, size_t, int);

	// EAGeneralAllocator.h:521
	void ** MallocMultiple(size_t, size_t, void **, int);

	// EAGeneralAllocator.h:526
	void ** MallocMultiple(size_t, const size_t *, void **, int);

	// EAGeneralAllocator.h:546
	bool AddCore(void *, size_t, bool, bool, size_t (*)(EA::Allocator::GeneralAllocator *, void *, size_t, void *), void *);

	// EAGeneralAllocator.h:552
	size_t TrimCore(size_t);

	// EAGeneralAllocator.h:563
	void ClearCache();

	// EAGeneralAllocator.h:577
	void SetMallocFailureFunction(bool (*)(EA::Allocator::GeneralAllocator *, size_t, size_t, void *), void *);

	// EAGeneralAllocator.h:583
	void SetAssertionFailureFunction(void (*)(const char *, void *), void *);

	// EAGeneralAllocator.h:590
	void AssertionFailure(const char *) const;

	// EAGeneralAllocator.h:646
	void SetHookFunction(void (*)(const EA::Allocator::GeneralAllocator::HookInfo *, void *), void *);

	// EAGeneralAllocator.h:655
	void Lock(bool);

	// EAGeneralAllocator.h:663
	const char * GetName() const;

	// EAGeneralAllocator.h:673
	void SetName(const char *);

	// EAGeneralAllocator.h:700
	void SetOption(int, int);

	// EAGeneralAllocator.h:749
	void SetInitCallback(EA::Allocator::GeneralAllocator::InitCallbackNode *, bool);

	// EAGeneralAllocator.h:757
	size_t GetUsableSize(const void *) const;

	// EAGeneralAllocator.h:770
	size_t GetBlockSize(const void *, bool) const;

	// EAGeneralAllocator.h:777
	size_t GetLargestFreeBlock(bool);

	// EAGeneralAllocator.h:785
	void SetTraceFunction(void (*)(const char *, void *), void *);

	// EAGeneralAllocator.h:794
	void SetTraceFieldDelimiters(unsigned char, unsigned char);

	// EAGeneralAllocator.h:819
	bool ValidateHeap(EA::Allocator::GeneralAllocator::HeapValidationLevel);

	// EAGeneralAllocator.h:836
	void SetAutoHeapValidation(EA::Allocator::GeneralAllocator::HeapValidationLevel, size_t);

	// EAGeneralAllocator.h:853
	void TraceAllocatedMemory(void (*)(const char *, void *), void *, void *, size_t);

	// EAGeneralAllocator.h:859
	size_t DescribeData(const void *, char *, size_t);

	// EAGeneralAllocator.h:894
	const void * ValidateAddress(const void *, int) const;

	// EAGeneralAllocator.h:903
	bool IsAddressHigh(const void *);

	// EAGeneralAllocator.h:958
	void * TakeSnapshot(int, bool, void *, size_t);

	// EAGeneralAllocator.h:959
	void FreeSnapshot(void *);

	// EAGeneralAllocator.h:977
	bool ReportHeap(bool (*)(const EA::Allocator::GeneralAllocator::BlockInfo *, void *), void *, int, bool, void *, size_t);

	// EAGeneralAllocator.h:993
	const void * ReportBegin(void *, int, bool, void *, size_t);

	// EAGeneralAllocator.h:994
	const EA::Allocator::GeneralAllocator::BlockInfo * ReportNext(const void *, int);

	// EAGeneralAllocator.h:995
	void ReportEnd(const void *);

protected:
	// EAGeneralAllocator.h:1126
	void * MallocInternal(size_t, int);

	// EAGeneralAllocator.h:1127
	void * CallocInternal(size_t, size_t, int);

	// EAGeneralAllocator.h:1128
	void * ReallocInternal(void *, size_t, int);

	// EAGeneralAllocator.h:1129
	void FreeInternal(void *);

	// EAGeneralAllocator.h:1130
	void * MallocAlignedInternal(size_t, size_t, size_t, int);

	// EAGeneralAllocator.h:1132
	void ** MallocMultipleInternal(size_t, size_t, const size_t *, void **, int);

	// EAGeneralAllocator.h:1134
	EA::Allocator::GeneralAllocator::Chunk * ExtendCoreInternal(size_t);

	// EAGeneralAllocator.h:1135
	EA::Allocator::GeneralAllocator::Chunk * AddCoreInternal(size_t);

	// EAGeneralAllocator.h:1136
	bool FreeCore(EA::Allocator::GeneralAllocator::CoreBlock *, bool);

	// EAGeneralAllocator.h:1143
	void ClearFastBins();

	// EAGeneralAllocator.h:1146
	bool GetIsPowerOf2(size_t);

	// EAGeneralAllocator.h:1147
	bool GetIsMinAligned(void *);

	// EAGeneralAllocator.h:1148
	bool GetIsAligned(void *, size_t);

	// EAGeneralAllocator.h:1149
	size_t AlignUp(size_t, size_t);

	// EAGeneralAllocator.h:1150
	char * AlignUp(void *, size_t);

	// EAGeneralAllocator.h:1151
	unsigned int GetPageSize();

	// EAGeneralAllocator.h:1152
	bool RequestIsWithinRange(size_t);

	// EAGeneralAllocator.h:1153
	bool GetCoreIsContiguous() const;

	// EAGeneralAllocator.h:1154
	void AdjustHighFence();

	// EAGeneralAllocator.h:1155
	void SetNewTopChunk(EA::Allocator::GeneralAllocator::Chunk *, bool);

	// EAGeneralAllocator.h:1156
	void AdjustTopChunk(EA::Allocator::GeneralAllocator::Chunk *, uint32_t);

	// EAGeneralAllocator.h:1157
	bool ChunkMatchesLowHigh(int, const EA::Allocator::GeneralAllocator::Chunk *, uint32_t) const;

	// EAGeneralAllocator.h:1158
	int ChunkMatchesBlockType(const EA::Allocator::GeneralAllocator::Chunk *, int);

	// EAGeneralAllocator.h:1159
	void SetFencepostAfterChunk(const EA::Allocator::GeneralAllocator::Chunk *, uint32_t);

	// EAGeneralAllocator.h:1161
	void AddDoubleFencepost(EA::Allocator::GeneralAllocator::Chunk *, int);

	// EAGeneralAllocator.h:1162
	EA::Allocator::GeneralAllocator::Chunk * MakeChunkFromCore(void *, size_t, int);

	// EAGeneralAllocator.h:1163
	void GetBlockInfoForCoreBlock(const EA::Allocator::GeneralAllocator::CoreBlock *, EA::Allocator::GeneralAllocator::BlockInfo *) const;

	// EAGeneralAllocator.h:1164
	void GetBlockInfoForChunk(const EA::Allocator::GeneralAllocator::Chunk *, EA::Allocator::GeneralAllocator::BlockInfo *, const void *) const;

	// EAGeneralAllocator.h:1167
	void * GetPostHeaderPtrFromChunkPtr(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1168
	void * GetDataPtrFromChunkPtr(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1169
	EA::Allocator::GeneralAllocator::Chunk * GetChunkPtrFromDataPtr(const void *);

	// EAGeneralAllocator.h:1170
	uint32_t GetChunkSizeFromDataSize(uint32_t);

	// EAGeneralAllocator.h:1171
	uint32_t GetChunkSizeFromDataSizeChecked(uint32_t);

	// EAGeneralAllocator.h:1172
	uint32_t GetMMapChunkSizeFromDataSize(uint32_t);

	// EAGeneralAllocator.h:1173
	EA::Allocator::GeneralAllocator::Chunk * GetMMapChunkFromMMapListChunk(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1174
	int GetChunkIsInternal(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1175
	void SetChunkIsInternal(EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1176
	void ClearChunkIsInternal(EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1177
	int GetChunkIsFastBin(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1178
	void SetChunkIsFastBin(EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1179
	void ClearChunkIsFastBin(EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1180
	int GetChunkIsMMapped(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1181
	int GetPrevChunkIsInUse(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1182
	uint32_t GetChunkSize(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1183
	uint32_t GetUsableChunkSize(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1184
	EA::Allocator::GeneralAllocator::Chunk * GetNextChunk(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1185
	EA::Allocator::GeneralAllocator::Chunk * GetPrevChunk(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1186
	EA::Allocator::GeneralAllocator::Chunk * GetChunkAtOffset(const EA::Allocator::GeneralAllocator::Chunk *, int);

	// EAGeneralAllocator.h:1187
	int GetChunkIsInUse(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1188
	void SetChunkIsInUse(EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1189
	void ClearChunkInUse(EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1190
	int GetChunkInUseOffset(const EA::Allocator::GeneralAllocator::Chunk *, int);

	// EAGeneralAllocator.h:1191
	void SetChunkInUseOffset(EA::Allocator::GeneralAllocator::Chunk *, int);

	// EAGeneralAllocator.h:1192
	void ClearChunkInUseOffset(EA::Allocator::GeneralAllocator::Chunk *, int);

	// EAGeneralAllocator.h:1193
	void SetChunkSize(EA::Allocator::GeneralAllocator::Chunk *, uint32_t);

	// EAGeneralAllocator.h:1194
	void SetChunkSizePreserveFlags(EA::Allocator::GeneralAllocator::Chunk *, uint32_t);

	// EAGeneralAllocator.h:1195
	uint32_t GetNextChunkPrevSize(const EA::Allocator::GeneralAllocator::Chunk *, uint32_t);

	// EAGeneralAllocator.h:1196
	void SetNextChunkPrevSize(EA::Allocator::GeneralAllocator::Chunk *, uint32_t);

	// EAGeneralAllocator.h:1197
	void LinkChunk(EA::Allocator::GeneralAllocator::Chunk *, EA::Allocator::GeneralAllocator::Chunk *, EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1198
	void UnlinkChunk(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1199
	EA::Allocator::GeneralAllocator::Chunk * FindPriorChunk(const EA::Allocator::GeneralAllocator::Chunk *) const;

	// EAGeneralAllocator.h:1200
	EA::Allocator::GeneralAllocator::Chunk * GetInitialTopChunk() const;

	// EAGeneralAllocator.h:1201
	EA::Allocator::GeneralAllocator::Chunk * FindAndSetNewTopChunk();

	// EAGeneralAllocator.h:1202
	bool GetChunkIsListHead(const EA::Allocator::GeneralAllocator::Chunk *) const;

	// EAGeneralAllocator.h:1203
	bool GetChunkIsFenceChunk(const EA::Allocator::GeneralAllocator::Chunk *) const;

	// EAGeneralAllocator.h:1204
	EA::Allocator::GeneralAllocator::Chunk * GetFenceChunk(const EA::Allocator::GeneralAllocator::CoreBlock *);

	// EAGeneralAllocator.h:1205
	EA::Allocator::GeneralAllocator::BinType FindChunkBin(const EA::Allocator::GeneralAllocator::Chunk *) const;

	// EAGeneralAllocator.h:1208
	EA::Allocator::GeneralAllocator::Chunk * GetBin(int) const;

	// EAGeneralAllocator.h:1209
	EA::Allocator::GeneralAllocator::Chunk * GetUnsortedBin() const;

	// EAGeneralAllocator.h:1210
	EA::Allocator::GeneralAllocator::Chunk * GetFirstChunkInBin(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1211
	EA::Allocator::GeneralAllocator::Chunk * GetLastChunkInBin(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1212
	EA::Allocator::GeneralAllocator::Chunk * GetNextBin(EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1213
	bool SizeIsWithinSmallBinRange(uint32_t);

	// EAGeneralAllocator.h:1214
	int GetSmallBinIndexFromChunkSize(uint32_t);

	// EAGeneralAllocator.h:1215
	int GetLargeBinIndexFromChunkSize(uint32_t);

	// EAGeneralAllocator.h:1216
	int GetBinIndexFromChunkSize(uint32_t);

	// EAGeneralAllocator.h:1217
	int GetBinBitmapWordFromBinIndex(int);

	// EAGeneralAllocator.h:1218
	int GetBinBitmapBitFromBinIndex(int);

	// EAGeneralAllocator.h:1219
	void MarkBinBitmapBit(int);

	// EAGeneralAllocator.h:1220
	void UnmarkBinBitmapBit(int);

	// EAGeneralAllocator.h:1221
	int GetBinBitmapBit(int) const;

	// EAGeneralAllocator.h:1224
	unsigned int GetFastBinIndexFromChunkSize(uint32_t);

	// EAGeneralAllocator.h:1225
	int GetFastBinChunksExist() const;

	// EAGeneralAllocator.h:1226
	void SetFastBinChunksExist(bool);

	// EAGeneralAllocator.h:1227
	unsigned int GetMaxFastBinChunkSize() const;

	// EAGeneralAllocator.h:1228
	void SetMaxFastBinDataSize(uint32_t);

	// EAGeneralAllocator.h:1231
	void LinkCoreBlock(EA::Allocator::GeneralAllocator::CoreBlock *, EA::Allocator::GeneralAllocator::CoreBlock *);

	// EAGeneralAllocator.h:1232
	void UnlinkCoreBlock(EA::Allocator::GeneralAllocator::CoreBlock *);

	// EAGeneralAllocator.h:1233
	EA::Allocator::GeneralAllocator::CoreBlock * FindCoreBlockForAddress(const void *) const;

	// EAGeneralAllocator.h:1236
	int CheckChunk(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1237
	int CheckFreeChunk(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1238
	int CheckUsedChunk(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1239
	int CheckRemallocedChunk(const EA::Allocator::GeneralAllocator::Chunk *, uint32_t);

	// EAGeneralAllocator.h:1240
	int CheckMallocedChunk(const EA::Allocator::GeneralAllocator::Chunk *, uint32_t, bool, bool);

	// EAGeneralAllocator.h:1241
	int CheckMMappedChunk(const EA::Allocator::GeneralAllocator::Chunk *);

	// EAGeneralAllocator.h:1242
	int CheckState(EA::Allocator::GeneralAllocator::HeapValidationLevel);

	// EAGeneralAllocator.h:1243
	size_t DescribeChunk(const EA::Allocator::GeneralAllocator::Chunk *, char *, size_t, bool) const;

	// EAGeneralAllocator.h:1244
	EA::Allocator::GeneralAllocator::DataType GetDataPreview(const void *, size_t, char *, wchar_t *, size_t) const;

	// EAGeneralAllocator.h:1245
	void TraceFunctionDefault(const char *, void *);

	// EAGeneralAllocator.h:1246
	void AssertionFailureFunctionDefault(const char *, void *);

}

