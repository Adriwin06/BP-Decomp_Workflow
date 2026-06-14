// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct StateBuffer {
		// statebuffer.h:67
		enum CommandToken {
			COMMANDTOKEN_DONE = 0,
			COMMANDTOKEN_INDEXBUFFER = 1,
			COMMANDTOKEN_VERTEXBUFFER = 2,
			COMMANDTOKEN_RENDERTARGETSTATE = 3,
			COMMANDTOKEN_BLENDSTATE = 4,
			COMMANDTOKEN_DEPTHSTENCILSTATE = 5,
			COMMANDTOKEN_RASTERIZERSTATE = 6,
			COMMANDTOKEN_VERTEXPROGRAMSTATE = 7,
			COMMANDTOKEN_PIXELPROGRAM = 8,
			COMMANDTOKEN_VIEWPORTPARAMETERS = 9,
			COMMANDTOKEN_SCISSORRECTPARAMETERS = 10,
			COMMANDTOKEN_DRAWPARAMETERS = 11,
			COMMANDTOKEN_DRAWINDEXEDPARAMETERS = 12,
			COMMANDTOKEN_CLEARCOLORPARAMETERS = 13,
			COMMANDTOKEN_CLEARDEPTHSTENCILPARAMETERS = 14,
			COMMANDTOKEN_PROGRAMVARIABLEHANDLE = 15,
			COMMANDTOKEN_PROGRAMSTATES = 16,
			COMMANDTOKEN_TEXTURE = 17,
			COMMANDTOKEN_SAMPLERSTATE = 18,
			COMMANDTOKEN_DRAWINSTANCEDPARAMETERS = 19,
			COMMANDTOKEN_DRAWINDEXEDINSTANCEDPARAMETERS = 20,
			COMMANDTOKEN_MAX = 21,
			COMMANDTOKEN_FORCEENUMSIZEINT = 2147483647,
		}

		// statebuffer.h:155
		struct ObjectDescriptor {
			// statebuffer.h:156
			renderengine::StateBuffer::CommandToken commandToken;

			// statebuffer.h:157
			uint32_t size;

		public:
			// statebuffer.h:159
			void EndianSwap();

		}

	}

}

// statebuffer.h:51
struct renderengine::StateBuffer : public Buffer {
protected:
	// statebuffer.h:179
	void * m_buffer;

	// statebuffer.h:180
	uint32_t m_bufferSize;

	// statebuffer.h:181
	int32_t m_refCount;

public:
	// statebuffer.h:56
	uint32_t GetBufferSize() const;

	// statebuffer.h:61
	void Release();

	// statebuffer.h:62
	void Destruct(StateBuffer *);

	// statebuffer.h:64
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// statebuffer.h:64
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// statebuffer.h:64
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// statebuffer.h:64
	void RegisterArenaReadCallbacks();

	// statebuffer.h:64
	void RegisterArenaWriteCallbacks();

	// statebuffer.h:64
	void EndianSwapUnfix();

	// statebuffer.h:64
	void EndianSwapFixup();

	// statebuffer.h:65
	int32_t AddRef();

	// statebuffer.h:65
	int32_t RemoveRef();

	// statebuffer.h:147
	void * GetLowAddress() const;

	// statebuffer.h:148
	void * GetHighAddress() const;

protected:
	// statebuffer.h:163
	const BaseResources<6u>::BaseResource GetStreamBegin() const;

	// statebuffer.h:164
	BaseResources<6u>::BaseResource GetStreamBegin();

	// statebuffer.h:165
	renderengine::StateBuffer::ObjectDescriptor * GetNextObjectDescriptor(BaseResources<6u>::BaseResource &);

	// statebuffer.h:166
	void * GetNextObject(BaseResources<6u>::BaseResource &, uint32_t, uint32_t);

	// statebuffer.h:172
	void Unfix(Arena::SizeAndAlignment *);

	// statebuffer.h:173
	void Refix(rw::core::arena::ArenaIterator *);

	// statebuffer.h:174
	void Fixup(rw::core::arena::ArenaIterator *);

	// statebuffer.h:184
	void StateBuffer();

	// statebuffer.h:185
	void StateBuffer(const renderengine::StateBuffer &);

	// statebuffer.h:186
	void ~StateBuffer();

}

