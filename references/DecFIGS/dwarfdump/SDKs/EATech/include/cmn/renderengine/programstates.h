// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct ProgramVariableBuffer {
		// programstates.h:71
		struct Parameters {
			// programstates.h:110
			renderengine::ProgramBuffer::Type programType;

			// programstates.h:111
			uint32_t dataType;

			// programstates.h:112
			uint32_t numConstants;

		public:
			// programstates.h:74
			Parameters();

			// programstates.h:83
			void SetProgramType(renderengine::ProgramBuffer::Type);

			// programstates.h:88
			renderengine::ProgramBuffer::Type GetProgramType() const;

			// programstates.h:93
			void SetDataType(uint32_t);

			// programstates.h:98
			uint32_t GetDataType() const;

			// programstates.h:103
			void SetNumConstants(uint32_t);

			// programstates.h:108
			uint32_t GetNumConstants() const;

		}

	}

	// Declaration
	struct ProgramVariableState {
		// programstates.h:187
		struct Parameters {
			// programstates.h:189
			extern const uint32_t MaxVariableHandles = 256;

		protected:
			// programstates.h:221
			const ProgramVariableBuffer * programVariableBuffer;

			// programstates.h:224
			uint32_t registerRangeStart;

			// programstates.h:225
			uint32_t registerRangeNumRegisters;

			// programstates.h:226
			const ProgramBuffer * programBuffer;

			// programstates.h:229
			uint32_t numUsedHandles;

			// programstates.h:230
			ProgramVariableHandle[256] handles;

		public:
			// programstates.h:191
			Parameters();

			// programstates.h:202
			void SetProgramVariableBuffer(const ProgramVariableBuffer *);

			// programstates.h:207
			void AddProgramVariableHandle(const ProgramVariableHandle &);

			// programstates.h:216
			void SetRegisterRange(const ProgramBuffer *, uint32_t, uint32_t);

		}

	}

}

// programstates.h:61
struct renderengine::ProgramVariableBuffer {
	// programstates.h:64
	extern const uint32_t LOCK_READ = 1;

	// programstates.h:65
	extern const uint32_t LOCK_WRITE = 2;

protected:
	// programstates.h:147
	uint32_t m_dataType;

	// programstates.h:148
	uint32_t m_numConstants;

	// programstates.h:149
	renderengine::ProgramBuffer::Type m_programType;

	// programstates.h:150
	uint32_t m_bufferOffset;

	// programstates.h:151
	void * m_buffer;

public:
	// programstates.h:117
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// programstates.h:117
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// programstates.h:117
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// programstates.h:117
	void RegisterArenaReadCallbacks();

	// programstates.h:117
	void RegisterArenaWriteCallbacks();

	// programstates.h:117
	void EndianSwapUnfix();

	// programstates.h:117
	void EndianSwapFixup();

	// programstates.h:118
	int32_t AddRef();

	// programstates.h:118
	int32_t RemoveRef();

	// programstates.h:119
	void EndianSwapData();

	// programstates.h:121
	ResourceDescriptor GetResourceDescriptor(const renderengine::ProgramVariableBuffer::Parameters &);

	// programstates.h:122
	ProgramVariableBuffer * Initialize(Resource &, const renderengine::ProgramVariableBuffer::Parameters &);

	// programstates.h:124
	void Release();

	// programstates.h:125
	void Destruct(ProgramVariableBuffer *);

	// programstates.h:140
	uint32_t GetDataType() const;

	// programstates.h:141
	renderengine::ProgramBuffer::Type GetProgramType() const;

	// programstates.h:142
	uint32_t GetNumConstants() const;

protected:
	// programstates.h:156
	void ProgramVariableBuffer();

	// programstates.h:157
	void ProgramVariableBuffer(const ProgramVariableBuffer &);

	// programstates.h:158
	void ~ProgramVariableBuffer();

}

// programstates.h:180
struct renderengine::ProgramVariableState {
protected:
	// programstates.h:251
	const ProgramBuffer * m_programBuffer;

	// programstates.h:252
	const ProgramVariableBuffer * m_programVariableBuffer;

	// programstates.h:253
	renderengine::ProgramBuffer::Type m_programType;

	// programstates.h:254
	uint16_t m_index;

	// programstates.h:255
	uint16_t m_numConstants;

public:
	// programstates.h:236
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// programstates.h:236
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// programstates.h:236
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// programstates.h:236
	void RegisterArenaReadCallbacks();

	// programstates.h:236
	void RegisterArenaWriteCallbacks();

	// programstates.h:236
	void EndianSwapUnfix();

	// programstates.h:236
	void EndianSwapFixup();

	// programstates.h:237
	int32_t AddRef();

	// programstates.h:237
	int32_t RemoveRef();

	// programstates.h:239
	ResourceDescriptor GetResourceDescriptor(const renderengine::ProgramVariableState::Parameters &);

	// programstates.h:240
	ProgramVariableState * Initialize(Resource &, const renderengine::ProgramVariableState::Parameters &);

	// programstates.h:242
	void Release();

	// programstates.h:243
	void Destruct(ProgramVariableState *);

	// programstates.h:245
	void GetParameters(renderengine::ProgramVariableState::Parameters &) const;

protected:
	// programstates.h:248
	void CheckHandles(const renderengine::ProgramVariableState::Parameters &);

	// programstates.h:258
	void ProgramVariableState();

	// programstates.h:259
	void ProgramVariableState(const ProgramVariableState &);

	// programstates.h:260
	void ~ProgramVariableState();

}

// programstates.h:189
extern const uint32_t MaxVariableHandles = 256;

// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct ProgramVariableBuffer {
		// programstates.h:71
		struct Parameters {
			// programstates.h:110
			renderengine::ProgramBuffer::Type programType;

			// programstates.h:111
			uint32_t dataType;

			// programstates.h:112
			uint32_t numConstants;

		public:
			// programstates.h:74
			Parameters();

			// programstates.h:83
			void SetProgramType(renderengine::ProgramBuffer::Type);

			// programstates.h:88
			renderengine::ProgramBuffer::Type GetProgramType() const;

			// programstates.h:93
			void SetDataType(uint32_t);

			// programstates.h:98
			uint32_t GetDataType() const;

			// programstates.h:103
			void SetNumConstants(uint32_t);

			// programstates.h:108
			uint32_t GetNumConstants() const;

		}

	}

	// Declaration
	struct ProgramVariableState {
		// programstates.h:187
		struct Parameters {
			// programstates.h:189
			extern const uint32_t MaxVariableHandles = 256;

		protected:
			// programstates.h:221
			const ProgramVariableBuffer * programVariableBuffer;

			// programstates.h:224
			uint32_t registerRangeStart;

			// programstates.h:225
			uint32_t registerRangeNumRegisters;

			// programstates.h:226
			const renderengine::ProgramBuffer * programBuffer;

			// programstates.h:229
			uint32_t numUsedHandles;

			// programstates.h:230
			ProgramVariableHandle[256] handles;

		public:
			// programstates.h:191
			Parameters();

			// programstates.h:202
			void SetProgramVariableBuffer(const ProgramVariableBuffer *);

			// programstates.h:207
			void AddProgramVariableHandle(const ProgramVariableHandle &);

			// programstates.h:216
			void SetRegisterRange(const renderengine::ProgramBuffer *, uint32_t, uint32_t);

		}

	}

}

// programstates.h:180
struct renderengine::ProgramVariableState {
protected:
	// programstates.h:251
	const renderengine::ProgramBuffer * m_programBuffer;

	// programstates.h:252
	const ProgramVariableBuffer * m_programVariableBuffer;

	// programstates.h:253
	renderengine::ProgramBuffer::Type m_programType;

	// programstates.h:254
	uint16_t m_index;

	// programstates.h:255
	uint16_t m_numConstants;

public:
	// programstates.h:236
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// programstates.h:236
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// programstates.h:236
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// programstates.h:236
	void RegisterArenaReadCallbacks();

	// programstates.h:236
	void RegisterArenaWriteCallbacks();

	// programstates.h:236
	void EndianSwapUnfix();

	// programstates.h:236
	void EndianSwapFixup();

	// programstates.h:237
	int32_t AddRef();

	// programstates.h:237
	int32_t RemoveRef();

	// programstates.h:239
	ResourceDescriptor GetResourceDescriptor(const renderengine::ProgramVariableState::Parameters &);

	// programstates.h:240
	ProgramVariableState * Initialize(Resource &, const renderengine::ProgramVariableState::Parameters &);

	// programstates.h:242
	void Release();

	// programstates.h:243
	void Destruct(ProgramVariableState *);

	// programstates.h:245
	void GetParameters(renderengine::ProgramVariableState::Parameters &) const;

protected:
	// programstates.h:248
	void CheckHandles(const renderengine::ProgramVariableState::Parameters &);

	// programstates.h:258
	void ProgramVariableState();

	// programstates.h:259
	void ProgramVariableState(const ProgramVariableState &);

	// programstates.h:260
	void ~ProgramVariableState();

}

