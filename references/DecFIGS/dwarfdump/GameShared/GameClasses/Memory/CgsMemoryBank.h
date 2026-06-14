// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct MemoryBank {
		// CgsMemoryBank.h:108
		struct Params {
			// CgsMemoryBank.h:110
			char[32] macName;

			// CgsMemoryBank.h:111
			int32_t mnParentBankId;

			// CgsMemoryBank.h:112
			int32_t mnBankId;

			// CgsMemoryBank.h:113
			uint32_t[6] mauBankSize;

			// CgsMemoryBank.h:114
			uint32_t[6] mauBankBlocks;

			// CgsMemoryBank.h:115
			bool mbIsLeaf;

			// CgsMemoryBank.h:116
			bool mbAllowFragmentation;

		}

	}

}

// CgsMemoryBank.h:69
struct CgsMemory::MemoryBankResourceSet {
	// CgsMemoryBank.h:71
	uint16_t mu16BlockSize;

	// CgsMemoryBank.h:72
	uint16_t mu16NumBlocks;

	// CgsMemoryBank.h:73
	uint32_t muFirstBlock;

	// CgsMemoryBank.h:74
	uint32_t muLastBlock;

	// CgsMemoryBank.h:75
	void * mpData;

}

// CgsMemoryBank.h:89
struct CgsMemory::MemoryBank {
	// CgsMemoryBank.h:92
	extern const int32_t KI_NAME_SIZE = 32;

	// CgsMemoryBank.h:93
	extern const int32_t KI_NUM_TYPES = 6;

	// CgsMemoryBank.h:94
	extern const uint8_t KU_INVALID_BANK = 255;

	// CgsMemoryBank.h:95
	extern const uint32_t KU_INVALID_BLOCK = 4294967295;

	// CgsMemoryBank.h:96
	extern const uint8_t KU_FLAG_ALLOW_FRAGMENTATION = 1;

	// CgsMemoryBank.h:97
	extern const uint8_t KU_FLAG_IS_LEAF = 2;

private:
	// CgsMemoryBank.h:205
	MemoryBankResourceSet[6] maResourceSets;

	// CgsMemoryBank.h:206
	int16_t mId;

	// CgsMemoryBank.h:207
	uint8_t mu8Parent;

	// CgsMemoryBank.h:208
	uint8_t mu8Flags;

public:
	// CgsMemoryBank.h:122
	void Clear();

	// CgsMemoryBank.h:126
	bool IsUsed();

	// CgsMemoryBank.h:130
	int16_t GetID() const;

	// CgsMemoryBank.h:134
	uint8_t GetParent() const;

	// CgsMemoryBank.h:138
	bool GetAllowFragmentation() const;

	// CgsMemoryBank.h:142
	bool GetIsLeaf() const;

	// CgsMemoryBank.h:146
	uint16_t GetBlockSize(int32_t) const;

	// CgsMemoryBank.h:150
	uint16_t GetNumBlocks(int32_t) const;

	// CgsMemoryBank.h:154
	uint32_t GetFirstBlock(int32_t) const;

	// CgsMemoryBank.h:158
	uint32_t GetLastBlock(int32_t) const;

	// CgsMemoryBank.h:162
	void * GetData(int32_t);

	// CgsMemoryBank.h:166
	uint32_t GetSize(int32_t);

	// CgsMemoryBank.h:170
	void SetID(int16_t);

	// CgsMemoryBank.h:174
	void SetParent(uint8_t);

	// CgsMemoryBank.h:178
	void SetAllowFragmentation(bool);

	// CgsMemoryBank.h:182
	void SetIsLeaf(bool);

	// CgsMemoryBank.h:186
	void SetBlockSize(int32_t, uint16_t);

	// CgsMemoryBank.h:190
	void SetNumBlocks(int32_t, uint16_t);

	// CgsMemoryBank.h:194
	void SetFirstBlock(int32_t, uint32_t);

	// CgsMemoryBank.h:198
	void SetLastBlock(int32_t, uint32_t);

	// CgsMemoryBank.h:202
	void SetData(int32_t, void *);

}

// CgsMemoryBank.h:92
extern const int32_t KI_NAME_SIZE = 32;

// CgsMemoryBank.h:93
extern const int32_t KI_NUM_TYPES = 6;

// CgsMemoryBank.h:96
extern const uint8_t KU_FLAG_ALLOW_FRAGMENTATION = 1;

// CgsMemoryBank.h:97
extern const uint8_t KU_FLAG_IS_LEAF = 2;

// CgsMemoryBank.h:94
extern const uint8_t KU_INVALID_BANK = 255;

// CgsLuaState.h:32
namespace CgsMemory {
	// Declaration
	struct MemoryBank {
		// CgsMemoryBank.h:108
		struct Params {
			// CgsMemoryBank.h:110
			char[32] macName;

			// CgsMemoryBank.h:111
			int32_t mnParentBankId;

			// CgsMemoryBank.h:112
			int32_t mnBankId;

			// CgsMemoryBank.h:113
			uint32_t[6] mauBankSize;

			// CgsMemoryBank.h:114
			uint32_t[6] mauBankBlocks;

			// CgsMemoryBank.h:115
			bool mbIsLeaf;

			// CgsMemoryBank.h:116
			bool mbAllowFragmentation;

		}

	}

}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	// Declaration
	struct MemoryBank {
		// CgsMemoryBank.h:108
		struct Params {
			// CgsMemoryBank.h:110
			char[32] macName;

			// CgsMemoryBank.h:111
			int32_t mnParentBankId;

			// CgsMemoryBank.h:112
			int32_t mnBankId;

			// CgsMemoryBank.h:113
			uint32_t[6] mauBankSize;

			// CgsMemoryBank.h:114
			uint32_t[6] mauBankBlocks;

			// CgsMemoryBank.h:115
			bool mbIsLeaf;

			// CgsMemoryBank.h:116
			bool mbAllowFragmentation;

		}

	}

}

// CgsMemoryBank.h:44
struct CgsMemory::MemoryBlock {
	// CgsMemoryBank.h:52
	uint32_t muNextBlock;

	// CgsMemoryBank.h:53
	uint32_t muPrevBlock;

	// CgsMemoryBank.h:54
	uint8_t mu8ParentBank;

	// CgsMemoryBank.h:55
	uint8_t mu8ChildBank;

	// CgsMemoryBank.h:56
	uint8_t mu8Type;

	// CgsFlagSet.h:307
	typedef FlagSet<std::int8_t> FlagSet8;

	// CgsMemoryBank.h:57
	MemoryBlock::FlagSet8 mxStatus;

}

// CgsMemoryBank.h:95
extern const uint32_t KU_INVALID_BLOCK = 4294967295;

