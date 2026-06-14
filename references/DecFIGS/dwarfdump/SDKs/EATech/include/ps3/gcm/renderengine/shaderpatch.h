// CgsCore.h:144
namespace renderengine {
	// shaderpatch.h:31
	namespace shaderpatch {
		struct ParameterOffsetTable;

		struct PatchMetrics;

		// Declaration
		struct ParameterStream {
			// shaderpatch.h:492
			struct Command {
				// shaderpatch.h:493
				uint32_t m_parameterIndex;

				// shaderpatch.h:494
				uint32_t m_numRegisters;

				// shaderpatch.h:495
				uint32_t m_size;

				// shaderpatch.h:496
				uint8_t[4] m_pad;

			}

			// shaderpatch.h:505
			struct Builder {
			protected:
				// shaderpatch.h:513
				void * m_buffer;

				// shaderpatch.h:514
				uint32_t m_bufferSize;

				// shaderpatch.h:515
				renderengine::shaderpatch::ParameterStream * m_commandStream;

				// shaderpatch.h:516
				renderengine::shaderpatch::ParameterStream::Command * m_commands;

			public:
				// shaderpatch.h:507
				void Begin(void *, uint32_t);

				// shaderpatch.h:508
				void AddCommand(uint32_t, uint32_t, const float *);

				// shaderpatch.h:509
				void * AddCommandSpace(uint32_t, uint32_t);

				// shaderpatch.h:510
				renderengine::shaderpatch::ParameterStream * End();

			}

		}

		struct PatchTask<renderengine::shaderpatch::ParameterStream>;

	}

}

// shaderpatch.h:149
struct renderengine::shaderpatch::ParameterOffsetTable {
protected:
	// shaderpatch.h:175
	uint32_t m_numParameters;

	// shaderpatch.h:176
	uint32_t m_size;

public:
	// shaderpatch.h:151
	uint32_t GetNumParameters() const;

	// shaderpatch.h:152
	uint32_t GetNumOffsets(uint32_t) const;

	// shaderpatch.h:153
	uint32_t GetOffset(uint32_t, uint32_t) const;

	// shaderpatch.h:154
	const uint32_t * GetOffsets(uint32_t) const;

	// shaderpatch.h:155
	uint32_t GetNumSubParameters(uint32_t) const;

	// shaderpatch.h:156
	uint32_t GetSubParameterIndex(uint32_t, uint32_t) const;

	// shaderpatch.h:157
	uint32_t GetSize() const;

	// shaderpatch.h:158
	void EndianSwapUnfix();

	// shaderpatch.h:159
	void EndianSwapFixup();

	// shaderpatch.h:163
	ResourceDescriptor GetResourceDescriptor(CGprogram);

	// shaderpatch.h:164
	ParameterOffsetTable * Initialize(Resource &, CGprogram);

}

// shaderpatch.h:312
struct renderengine::shaderpatch::PatchMetrics {
	// shaderpatch.h:313
	uint32_t numDMAGets;

	// shaderpatch.h:314
	uint32_t numDMAPuts;

	// shaderpatch.h:315
	uint32_t numDMAWaits;

	// shaderpatch.h:316
	uint32_t sizeDMAGets;

	// shaderpatch.h:317
	uint32_t sizeDMAPuts;

	// shaderpatch.h:318
	uint32_t numAlignedDMAGets;

	// shaderpatch.h:319
	uint32_t numAlignedDMAPuts;

}

// shaderpatch.h:484
struct renderengine::shaderpatch::ParameterStream {
protected:
	// shaderpatch.h:520
	uint32_t m_numCommands;

	// shaderpatch.h:521
	uint32_t m_size;

	// shaderpatch.h:522
	uint8_t[8] m_pad;

public:
	// shaderpatch.h:486
	void Execute(void *, ParameterOffsetTable &) const;

	// shaderpatch.h:487
	void Execute(void *, ParameterOffsetTable &, PatchMetrics &) const;

	// shaderpatch.h:488
	uint32_t GetSize() const;

}

// shaderpatch.h:963
struct renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream> {
protected:
	// shaderpatch.h:1019
	uint32_t m_synchronisationValue;

	// shaderpatch.h:1020
	uint32_t * m_synchronisationAddress;

	// shaderpatch.h:1021
	uint8_t * m_data;

	// shaderpatch.h:1022
	uint32_t m_numEntries;

	// shaderpatch.h:1023
	uint32_t m_dataSize;

	// shaderpatch.h:1024
	uint8_t[12] m_pad;

	// Unknown accessibility
	struct Entry;

	// Unknown accessibility
	struct Builder;

public:
	// shaderpatch.h:1097
	void Execute(void *, unsigned int) const;

	// shaderpatch.h:1201
	void Execute(void *, unsigned int, PatchMetrics &) const;

	// shaderpatch.h:1068
	void SyncEnd() const;

	// shaderpatch.h:1037
	void SetSynchronisationLabelAddress(uint32_t *);

	// shaderpatch.h:1050
	void SetSynchronisationLabelValue(unsigned int);

	// shaderpatch.h:1061
	uint32_t GetSize() const;

}

// shaderpatch.h:993
struct renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder {
protected:
	// shaderpatch.h:1009
	uint8_t * m_buffer;

	// shaderpatch.h:1010
	uint32_t m_bufferSize;

	// shaderpatch.h:1011
	uint32_t m_size;

	// shaderpatch.h:1012
	PatchTask<renderengine::shaderpatch::ParameterStream> * m_patchTask;

	// shaderpatch.h:1013
	PatchTask<renderengine::shaderpatch::ParameterStream>::Entry * m_entry;

	// shaderpatch.h:1014
	PatchTask<renderengine::shaderpatch::ParameterStream>::Entry * m_previousEntry;

	// shaderpatch.h:1015
	renderengine::shaderpatch::ParameterStream::Builder m_streamBuilder;

public:
	// shaderpatch.h:1299
	void Begin(void *, unsigned int);

	// shaderpatch.h:1328
	void SetMicrocode(const void *, unsigned int, const ParameterOffsetTable *);

	// shaderpatch.h:1350
	void CommitMicrocode(void *);

	// shaderpatch.h:1379
	void AddCommand(unsigned int, unsigned int, const float *);

	// shaderpatch.h:1406
	void * AddCommandSpace(unsigned int, unsigned int);

	// shaderpatch.h:1438
	PatchTask<renderengine::shaderpatch::ParameterStream> * End();

protected:
	// shaderpatch.h:1458
	void BeginEntry(const void *, unsigned int, const ParameterOffsetTable *);

	// shaderpatch.h:1489
	void ResetEntry(const void *, unsigned int, const ParameterOffsetTable *);

	// shaderpatch.h:1512
	void DeleteEntry();

	// shaderpatch.h:1527
	void EndEntry();

}

// shaderpatch.h:976
struct renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Entry {
	// shaderpatch.h:977
	uint32_t m_size;

	// shaderpatch.h:978
	uint32_t m_nextSize;

	// shaderpatch.h:979
	uint32_t m_microcodeSize;

	// shaderpatch.h:980
	uint32_t m_offsetTableSize;

	// shaderpatch.h:981
	const void * m_srcMicrocode;

	// shaderpatch.h:982
	void * m_dstMicrocode;

	// shaderpatch.h:983
	const ParameterOffsetTable * m_offsetTable;

	// shaderpatch.h:984
	uint8_t[4] m_pad;

}

// CgsCore.h:144
namespace renderengine {
	// shaderpatch.h:31
	namespace shaderpatch {
		struct ParameterOffsetTable;

	}

}

