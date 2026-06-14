// CgsDispatcherCommands.h:63
struct CgsGraphics::DispatchCommand {
	// CgsDispatcherCommands.h:71
	extern const uint32_t kSizeBits = 24;

	// CgsDispatcherCommands.h:72
	extern const uint32_t kCommandBits = 7;

protected:
	// CgsDispatcherCommands.h:88
	uint32_t[4] mData;

public:
	// CgsDispatcherCommands.h:75
	uint32_t GetCommandID() const;

	// CgsDispatcherCommands.h:78
	uint32_t GetPacketLength() const;

	// CgsDispatcherCommands.h:82
	uint32_t * GetCustomSection();

	// CgsDispatcherCommands.h:85
	const uint32_t * GetCustomSection() const;

protected:
	// CgsDispatcherCommands.h:93
	void SetupCommandWord(uint32_t, uint32_t);

}

// CgsDispatcherCommands.h:363
struct CgsGraphics::DispatchPacketInterpreter {
private:
	// CgsDispatcherCommands.h:412
	void (*)(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) *const m_paInterpreters;

	// CgsDispatcherCommands.h:413
	uint32_t m_uNumInterpreters;

	// CgsDispatcherCommands.h:416
	float32_t mfTime;

	// CgsDispatcherCommands.h:417
	CgsGraphics::DispatchFrame * mpSingleBufferedDispatchFrame;

public:
	// CgsDispatcherCommands.h:365
	void DispatchPacketInterpreter(void (*)(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) *const, uint32_t);

	// CgsDispatcherCommands.h:370
	// Declaration
	void Interpret() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.h:360
		typedef DispatchCommand DispatchPacket;

	}

	// CgsDispatcherCommands.h:374
	void InterpretObjectToMesh(DispatchPacket *, CgsGraphics::DispatchFrame *, void *) const;

	// CgsDispatcherCommands.h:378
	void PrefetchObjectToMesh(DispatchPacket *, DispatchPacket *) const;

	// CgsDispatcherCommands.h:382
	void PrefetchMesh(DispatchPacket *, DispatchPacket *) const;

	// CgsDispatcherCommands.h:386
	void InterpretMesh(DispatchPacket *, void *) const;

	// CgsDispatcherCommands.h:390
	void InterpretMeshZOnly(DispatchPacket *, void *) const;

	// CgsDispatcherCommands.h:394
	void InterpretMeshOcclusionQuery(DispatchPacket *) const;

	// CgsDispatcherCommands.h:399
	void SetTime(float32_t);

	// CgsDispatcherCommands.h:402
	float32_t GetTime() const;

	// CgsDispatcherCommands.h:406
	void SetMeshOnlyDispatchFrame(CgsGraphics::DispatchFrame *);

	// CgsDispatcherCommands.h:409
	CgsGraphics::DispatchFrame * GetMeshOnlyDispatchFrame() const;

}

// CgsDispatcherCommands.h:71
extern const uint32_t kSizeBits = 24;

// CgsDispatcherCommands.h:72
extern const uint32_t kCommandBits = 7;

// CgsDispatcherCommands.h:249
extern bool sbPreZEnabled;

// CgsDispatcherCommands.h:250
extern bool sbPreZAlpha;

// CgsDispatcherCommands.h:251
extern bool sbSortByDistance;

// CgsDispatcherCommands.h:252
extern bool sbPreZSortByDistance;

// CgsDispatcherCommands.h:253
extern VecFloat sPreZNearThreshold;

// CgsDispatcherCommands.h:259
extern uint32_t su32MaterialShadowingAddress;

// CgsDispatcherCommands.h:260
extern CgsGraphics::OcclusionCullManager * spOcclusionCullManager;

// CgsDispatcherCommands.h:261
extern uint32_t suOcclusionCullIndexCountThreshold;

// CgsDispatcherCommands.h:321
extern uint32_t su32MaterialShadowingAddress;

// CgsDispatcherCommands.h:187
struct CgsGraphics::DrawRenderable : public DispatchCommand {
private:
	// CgsDispatcherCommands.h:249
	extern bool sbPreZEnabled;

	// CgsDispatcherCommands.h:250
	extern bool sbPreZAlpha;

	// CgsDispatcherCommands.h:251
	extern bool sbSortByDistance;

	// CgsDispatcherCommands.h:252
	extern bool sbPreZSortByDistance;

	// CgsDispatcherCommands.h:253
	extern VecFloat sPreZNearThreshold;

public:
	// CgsDispatcherCommands.h:204
	bool AddToBin(const Renderable *, CgsGraphics::DispatchFrame *, bool, int8_t, int8_t, bool, uint8_t, bool, uint8_t, uint8_t, int32_t, uint8_t);

	// CgsDispatcherCommands.h:211
	void Interpret(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t);

	// CgsDispatcherCommands.h:216
	void Prefetch(DispatchCommand *, DispatchCommand *);

	// CgsDispatcherCommands.h:219
	void SetPreZMode(bool);

	// CgsDispatcherCommands.h:225
	void SetPreZSortByDistance(bool);

	// CgsDispatcherCommands.h:231
	void SetSortByDistance(bool);

	// CgsDispatcherCommands.h:237
	void SetPreZAlpha(bool);

	// CgsDispatcherCommands.h:243
	void SetPreZNearThreshold(float32_t);

}

// CgsDispatcherCommands.h:257
struct CgsGraphics::DrawRenderableMesh : public DispatchCommand {
private:
	// CgsDispatcherCommands.h:259
	extern uint32_t su32MaterialShadowingAddress;

	// CgsDispatcherCommands.h:260
	extern CgsGraphics::OcclusionCullManager * spOcclusionCullManager;

	// CgsDispatcherCommands.h:261
	extern uint32_t suOcclusionCullIndexCountThreshold;

public:
	// CgsDispatcherCommands.h:272
	bool AddToBin(const RenderableMesh *, CgsGraphics::DispatchBin *, CgsGraphics::DispatchObjectContext *, uint8_t, uint8_t, const CgsGraphics::DrawRenderableDispatchThreadInfo *);

	// CgsDispatcherCommands.h:279
	void Interpret(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t);

	// CgsDispatcherCommands.h:284
	void Prefetch(DispatchCommand *, DispatchCommand *);

	// CgsDispatcherCommands.h:289
	void InterpretOcclusionQuery(DispatchCommand *, float32_t);

	// CgsDispatcherCommands.h:294
	void InterpretOcclusionQuery_Bulk(DispatchCommand *, float32_t);

	// CgsDispatcherCommands.h:298
	void SetMaterialShadowingAddress(uint32_t);

	// CgsDispatcherCommands.h:305
	void SetOcclusionManager(CgsGraphics::OcclusionCullManager *);

	// CgsDispatcherCommands.h:311
	void SetOcclusionCullIndexCountThreshold(uint32_t);

}

// CgsDispatcherCommands.h:165
struct CgsGraphics::CallbackFn : public DispatchCommand {
public:
	// CgsDispatcherCommands.h:174
	bool AddToBin(CgsGraphics::DispatchBin *, void (*)(void *, uint32_t), const void *, uint32_t);

	// CgsDispatcherCommands.h:181
	void Interpret(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t);

}

// CgsDispatcherCommands.h:187
struct CgsGraphics::DrawRenderable : public DispatchCommand {
private:
	// CgsDispatcherCommands.h:249
	extern bool sbPreZEnabled;

	// CgsDispatcherCommands.h:250
	extern bool sbPreZAlpha;

	// CgsDispatcherCommands.h:251
	extern bool sbSortByDistance;

	// CgsDispatcherCommands.h:252
	extern bool sbPreZSortByDistance;

	// CgsDispatcherCommands.h:253
	extern VecFloat sPreZNearThreshold;

public:
	// CgsDispatcherCommands.h:204
	bool AddToBin(const Renderable *, CgsGraphics::DispatchFrame *, bool, int8_t, int8_t, bool, uint8_t, bool, uint8_t, uint8_t, int32_t, uint8_t);

	// CgsDispatcherCommands.h:211
	// Declaration
	void Interpret(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.cpp:1293
		using namespace rw::graphics::core;

	}

	// CgsDispatcherCommands.h:216
	// Declaration
	void Prefetch(DispatchCommand *, DispatchCommand *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.cpp:969
		using namespace rw::graphics::core;

	}

	// CgsDispatcherCommands.h:219
	void SetPreZMode(bool);

	// CgsDispatcherCommands.h:225
	void SetPreZSortByDistance(bool);

	// CgsDispatcherCommands.h:231
	void SetSortByDistance(bool);

	// CgsDispatcherCommands.h:237
	void SetPreZAlpha(bool);

	// CgsDispatcherCommands.h:243
	void SetPreZNearThreshold(float32_t);

}

// CgsDispatcherCommands.h:257
struct CgsGraphics::DrawRenderableMesh : public DispatchCommand {
private:
	// CgsDispatcherCommands.h:259
	extern uint32_t su32MaterialShadowingAddress;

	// CgsDispatcherCommands.h:260
	extern CgsGraphics::OcclusionCullManager * spOcclusionCullManager;

	// CgsDispatcherCommands.h:261
	extern uint32_t suOcclusionCullIndexCountThreshold;

public:
	// CgsDispatcherCommands.h:272
	bool AddToBin(const RenderableMesh *, CgsGraphics::DispatchBin *, CgsGraphics::DispatchObjectContext *, uint8_t, uint8_t, const CgsGraphics::DrawRenderableDispatchThreadInfo *);

	// CgsDispatcherCommands.h:279
	void Interpret(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t);

	// CgsDispatcherCommands.h:284
	// Declaration
	void Prefetch(DispatchCommand *, DispatchCommand *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.cpp:2123
		using namespace rw::graphics::core;

	}

	// CgsDispatcherCommands.h:289
	void InterpretOcclusionQuery(DispatchCommand *, float32_t);

	// CgsDispatcherCommands.h:294
	void InterpretOcclusionQuery_Bulk(DispatchCommand *, float32_t);

	// CgsDispatcherCommands.h:298
	void SetMaterialShadowingAddress(uint32_t);

	// CgsDispatcherCommands.h:305
	void SetOcclusionManager(CgsGraphics::OcclusionCullManager *);

	// CgsDispatcherCommands.h:311
	void SetOcclusionCullIndexCountThreshold(uint32_t);

}

// CgsDispatcherCommands.h:320
struct CgsGraphics::DrawRenderableMeshZOnly : public DispatchCommand {
private:
	// CgsDispatcherCommands.h:321
	extern uint32_t su32MaterialShadowingAddress;

public:
	// CgsDispatcherCommands.h:331
	bool AddToBin(const RenderableMesh *, CgsGraphics::DispatchBin *, CgsGraphics::DispatchObjectContext *, uint8_t, uint8_t, const CgsGraphics::DrawRenderableDispatchThreadInfo *);

	// CgsDispatcherCommands.h:338
	// Declaration
	void Interpret(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.cpp:2529
		using namespace rw::graphics::core;

	}

	// CgsDispatcherCommands.h:342
	void SetMaterialShadowingAddress(uint32_t);

}

// CgsDispatcherCommands.h:363
struct CgsGraphics::DispatchPacketInterpreter {
private:
	// CgsDispatcherCommands.h:412
	void (*)(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) *const m_paInterpreters;

	// CgsDispatcherCommands.h:413
	uint32_t m_uNumInterpreters;

	// CgsDispatcherCommands.h:416
	float32_t mfTime;

	// CgsDispatcherCommands.h:417
	CgsGraphics::DispatchFrame * mpSingleBufferedDispatchFrame;

public:
	// CgsDispatcherCommands.h:365
	void DispatchPacketInterpreter(void (*)(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) *const, uint32_t);

	// CgsDispatcherCommands.h:370
	// Declaration
	void Interpret(DispatchPacket *, void *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.h:360
		typedef DispatchCommand DispatchPacket;

	}

	// CgsDispatcherCommands.h:374
	void InterpretObjectToMesh(DispatchPacket *, CgsGraphics::DispatchFrame *, void *) const;

	// CgsDispatcherCommands.h:378
	void PrefetchObjectToMesh(DispatchPacket *, DispatchPacket *) const;

	// CgsDispatcherCommands.h:382
	void PrefetchMesh(DispatchPacket *, DispatchPacket *) const;

	// CgsDispatcherCommands.h:386
	void InterpretMesh(DispatchPacket *, void *) const;

	// CgsDispatcherCommands.h:390
	void InterpretMeshZOnly(DispatchPacket *, void *) const;

	// CgsDispatcherCommands.h:394
	void InterpretMeshOcclusionQuery(DispatchPacket *) const;

	// CgsDispatcherCommands.h:399
	void SetTime(float32_t);

	// CgsDispatcherCommands.h:402
	float32_t GetTime() const;

	// CgsDispatcherCommands.h:406
	void SetMeshOnlyDispatchFrame(CgsGraphics::DispatchFrame *);

	// CgsDispatcherCommands.h:409
	CgsGraphics::DispatchFrame * GetMeshOnlyDispatchFrame() const;

}

