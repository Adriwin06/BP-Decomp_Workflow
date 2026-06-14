// CgsCamera.h:44
namespace CgsGraphics {
	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsModel.h:125
extern const uint8_t K_INDEX_UNUSED = 255;

// CgsModel.h:129
extern const uint32_t KU_OBJECTS_PER_JOB_BLOCK = 128;

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct Model {
		// CgsModel.h:78
		enum State {
			E_STATE_LOD_0 = 0,
			E_STATE_LOD_1 = 1,
			E_STATE_LOD_2 = 2,
			E_STATE_LOD_3 = 3,
			E_STATE_LOD_4 = 4,
			E_STATE_LOD_5 = 5,
			E_STATE_LOD_6 = 6,
			E_STATE_LOD_7 = 7,
			E_STATE_LOD_8 = 8,
			E_STATE_LOD_9 = 9,
			E_STATE_LOD_10 = 10,
			E_STATE_LOD_11 = 11,
			E_STATE_LOD_12 = 12,
			E_STATE_LOD_13 = 13,
			E_STATE_LOD_14 = 14,
			E_STATE_LOD_15 = 15,
			E_STATE_GAME_SPECIFIC_0 = 16,
			E_STATE_GAME_SPECIFIC_1 = 17,
			E_STATE_GAME_SPECIFIC_2 = 18,
			E_STATE_GAME_SPECIFIC_3 = 19,
			E_STATE_GAME_SPECIFIC_4 = 20,
			E_STATE_GAME_SPECIFIC_5 = 21,
			E_STATE_GAME_SPECIFIC_6 = 22,
			E_STATE_GAME_SPECIFIC_7 = 23,
			E_STATE_GAME_SPECIFIC_8 = 24,
			E_STATE_GAME_SPECIFIC_9 = 25,
			E_STATE_GAME_SPECIFIC_10 = 26,
			E_STATE_GAME_SPECIFIC_11 = 27,
			E_STATE_GAME_SPECIFIC_12 = 28,
			E_STATE_GAME_SPECIFIC_13 = 29,
			E_STATE_GAME_SPECIFIC_14 = 30,
			E_STATE_GAME_SPECIFIC_15 = 31,
			E_STATE_COUNT = 32,
			E_STATE_INVALID = 32,
		}

	}

	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsModel.h:68
struct CgsGraphics::Model {
	// CgsModel.h:125
	extern const uint8_t K_INDEX_UNUSED = 255;

	// CgsModel.h:126
	extern const uint32_t KU_LODCOUNT = 16;

	// CgsModel.h:127
	extern const uint32_t KU_MAX_INSTANCES_PER_GROUP = 5;

	// CgsModel.h:129
	extern const uint32_t KU_OBJECTS_PER_JOB_BLOCK = 128;

protected:
	// CgsModel.h:268
	Renderable ** mppRenderables;

	// CgsModel.h:269
	uint8_t * mpu8StateRenderableIndices;

	// CgsModel.h:270
	float32_t * mpfLodDistances;

	// CgsModel.h:271
	int32_t miGameExplorerIndex;

	// CgsModel.h:272
	uint8_t mu8NumRenderables;

	// CgsModel.h:273
	uint8_t mu8Flags;

	// CgsModel.h:274
	uint8_t mu8NumStates;

	// CgsModel.h:275
	uint8_t mu8VersionNumber;

public:
	// CgsModel.h:158
	void RenderModelOnly(CgsGraphics::Model::State, CgsGraphics::DispatchFrame *, Matrix44Affine, int32_t, int32_t, int32_t, bool, int32_t, bool, bool, uint8_t, uint8_t, int32_t, const rw::math::vpu::Matrix44Affine **, const rw::math::vpu::Vector4 *, uint8_t) const;

	// CgsModel.h:169
	void RenderZOnly(CgsGraphics::Model::State, CgsGraphics::DispatchFrame *, Matrix44Affine, int32_t, int32_t, int32_t, bool, uint8_t) const;

	// CgsModel.h:175
	const char * GetRenderableName(CgsGraphics::Model::State) const;

	// CgsModel.h:179
	const Renderable * GetRenderable(CgsGraphics::Model::State) const;

	// CgsModel.h:182
	uint32_t GetNumRenderables() const;

	// CgsModel.h:186
	bool DoesStateExist(CgsGraphics::Model::State) const;

	// CgsModel.h:189
	uint32_t GetVersionNumber() const;

	// CgsModel.h:193
	void SetVersionNumber(uint32_t);

	// CgsModel.h:196
	bool GetFlag(uint16_t) const;

	// CgsModel.h:199
	void SetFlag(uint16_t, bool);

	// CgsModel.h:206
	void SetupShaderConstantsForInstancing(int32_t, const rw::math::vpu::Matrix44Affine **, const rw::math::vpu::Vector4 *);

	// CgsModel.h:210
	float32_t GetLodDistance(uint32_t) const;

	// CgsModel.h:213
	uint32_t GetNumLods() const;

	// CgsModel.h:216
	CgsGraphics::Model::State GetLodStateByDistance(float32_t) const;

	// CgsModel.h:223
	void DebugRenderMeshBoundingBoxes(CgsGraphics::Model::State, Matrix44Affine, RGBA, int32_t) const;

	// CgsModel.h:245
	bool UsesTexture(const Texture *) const;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Model {
		// CgsModel.h:78
		enum State {
			E_STATE_LOD_0 = 0,
			E_STATE_LOD_1 = 1,
			E_STATE_LOD_2 = 2,
			E_STATE_LOD_3 = 3,
			E_STATE_LOD_4 = 4,
			E_STATE_LOD_5 = 5,
			E_STATE_LOD_6 = 6,
			E_STATE_LOD_7 = 7,
			E_STATE_LOD_8 = 8,
			E_STATE_LOD_9 = 9,
			E_STATE_LOD_10 = 10,
			E_STATE_LOD_11 = 11,
			E_STATE_LOD_12 = 12,
			E_STATE_LOD_13 = 13,
			E_STATE_LOD_14 = 14,
			E_STATE_LOD_15 = 15,
			E_STATE_GAME_SPECIFIC_0 = 16,
			E_STATE_GAME_SPECIFIC_1 = 17,
			E_STATE_GAME_SPECIFIC_2 = 18,
			E_STATE_GAME_SPECIFIC_3 = 19,
			E_STATE_GAME_SPECIFIC_4 = 20,
			E_STATE_GAME_SPECIFIC_5 = 21,
			E_STATE_GAME_SPECIFIC_6 = 22,
			E_STATE_GAME_SPECIFIC_7 = 23,
			E_STATE_GAME_SPECIFIC_8 = 24,
			E_STATE_GAME_SPECIFIC_9 = 25,
			E_STATE_GAME_SPECIFIC_10 = 26,
			E_STATE_GAME_SPECIFIC_11 = 27,
			E_STATE_GAME_SPECIFIC_12 = 28,
			E_STATE_GAME_SPECIFIC_13 = 29,
			E_STATE_GAME_SPECIFIC_14 = 30,
			E_STATE_GAME_SPECIFIC_15 = 31,
			E_STATE_COUNT = 32,
			E_STATE_INVALID = 32,
		}

	}

	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct Model {
		// CgsModel.h:78
		enum State {
			E_STATE_LOD_0 = 0,
			E_STATE_LOD_1 = 1,
			E_STATE_LOD_2 = 2,
			E_STATE_LOD_3 = 3,
			E_STATE_LOD_4 = 4,
			E_STATE_LOD_5 = 5,
			E_STATE_LOD_6 = 6,
			E_STATE_LOD_7 = 7,
			E_STATE_LOD_8 = 8,
			E_STATE_LOD_9 = 9,
			E_STATE_LOD_10 = 10,
			E_STATE_LOD_11 = 11,
			E_STATE_LOD_12 = 12,
			E_STATE_LOD_13 = 13,
			E_STATE_LOD_14 = 14,
			E_STATE_LOD_15 = 15,
			E_STATE_GAME_SPECIFIC_0 = 16,
			E_STATE_GAME_SPECIFIC_1 = 17,
			E_STATE_GAME_SPECIFIC_2 = 18,
			E_STATE_GAME_SPECIFIC_3 = 19,
			E_STATE_GAME_SPECIFIC_4 = 20,
			E_STATE_GAME_SPECIFIC_5 = 21,
			E_STATE_GAME_SPECIFIC_6 = 22,
			E_STATE_GAME_SPECIFIC_7 = 23,
			E_STATE_GAME_SPECIFIC_8 = 24,
			E_STATE_GAME_SPECIFIC_9 = 25,
			E_STATE_GAME_SPECIFIC_10 = 26,
			E_STATE_GAME_SPECIFIC_11 = 27,
			E_STATE_GAME_SPECIFIC_12 = 28,
			E_STATE_GAME_SPECIFIC_13 = 29,
			E_STATE_GAME_SPECIFIC_14 = 30,
			E_STATE_GAME_SPECIFIC_15 = 31,
			E_STATE_COUNT = 32,
			E_STATE_INVALID = 32,
		}

	}

	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct Model {
		// CgsModel.h:78
		enum State {
			E_STATE_LOD_0 = 0,
			E_STATE_LOD_1 = 1,
			E_STATE_LOD_2 = 2,
			E_STATE_LOD_3 = 3,
			E_STATE_LOD_4 = 4,
			E_STATE_LOD_5 = 5,
			E_STATE_LOD_6 = 6,
			E_STATE_LOD_7 = 7,
			E_STATE_LOD_8 = 8,
			E_STATE_LOD_9 = 9,
			E_STATE_LOD_10 = 10,
			E_STATE_LOD_11 = 11,
			E_STATE_LOD_12 = 12,
			E_STATE_LOD_13 = 13,
			E_STATE_LOD_14 = 14,
			E_STATE_LOD_15 = 15,
			E_STATE_GAME_SPECIFIC_0 = 16,
			E_STATE_GAME_SPECIFIC_1 = 17,
			E_STATE_GAME_SPECIFIC_2 = 18,
			E_STATE_GAME_SPECIFIC_3 = 19,
			E_STATE_GAME_SPECIFIC_4 = 20,
			E_STATE_GAME_SPECIFIC_5 = 21,
			E_STATE_GAME_SPECIFIC_6 = 22,
			E_STATE_GAME_SPECIFIC_7 = 23,
			E_STATE_GAME_SPECIFIC_8 = 24,
			E_STATE_GAME_SPECIFIC_9 = 25,
			E_STATE_GAME_SPECIFIC_10 = 26,
			E_STATE_GAME_SPECIFIC_11 = 27,
			E_STATE_GAME_SPECIFIC_12 = 28,
			E_STATE_GAME_SPECIFIC_13 = 29,
			E_STATE_GAME_SPECIFIC_14 = 30,
			E_STATE_GAME_SPECIFIC_15 = 31,
			E_STATE_COUNT = 32,
			E_STATE_INVALID = 32,
		}

	}

	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct Model {
		// CgsModel.h:78
		enum State {
			E_STATE_LOD_0 = 0,
			E_STATE_LOD_1 = 1,
			E_STATE_LOD_2 = 2,
			E_STATE_LOD_3 = 3,
			E_STATE_LOD_4 = 4,
			E_STATE_LOD_5 = 5,
			E_STATE_LOD_6 = 6,
			E_STATE_LOD_7 = 7,
			E_STATE_LOD_8 = 8,
			E_STATE_LOD_9 = 9,
			E_STATE_LOD_10 = 10,
			E_STATE_LOD_11 = 11,
			E_STATE_LOD_12 = 12,
			E_STATE_LOD_13 = 13,
			E_STATE_LOD_14 = 14,
			E_STATE_LOD_15 = 15,
			E_STATE_GAME_SPECIFIC_0 = 16,
			E_STATE_GAME_SPECIFIC_1 = 17,
			E_STATE_GAME_SPECIFIC_2 = 18,
			E_STATE_GAME_SPECIFIC_3 = 19,
			E_STATE_GAME_SPECIFIC_4 = 20,
			E_STATE_GAME_SPECIFIC_5 = 21,
			E_STATE_GAME_SPECIFIC_6 = 22,
			E_STATE_GAME_SPECIFIC_7 = 23,
			E_STATE_GAME_SPECIFIC_8 = 24,
			E_STATE_GAME_SPECIFIC_9 = 25,
			E_STATE_GAME_SPECIFIC_10 = 26,
			E_STATE_GAME_SPECIFIC_11 = 27,
			E_STATE_GAME_SPECIFIC_12 = 28,
			E_STATE_GAME_SPECIFIC_13 = 29,
			E_STATE_GAME_SPECIFIC_14 = 30,
			E_STATE_GAME_SPECIFIC_15 = 31,
			E_STATE_COUNT = 32,
			E_STATE_INVALID = 32,
		}

	}

	// CgsModel.h:279
	namespace ModelInstanceCollector {
		struct ModelInstanceInfo;

	}

	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsModel.h:68
struct CgsGraphics::Model {
	// CgsModel.h:125
	extern const uint8_t K_INDEX_UNUSED = 255;

	// CgsModel.h:126
	extern const uint32_t KU_LODCOUNT = 16;

	// CgsModel.h:127
	extern const uint32_t KU_MAX_INSTANCES_PER_GROUP = 5;

	// CgsModel.h:129
	extern const uint32_t KU_OBJECTS_PER_JOB_BLOCK = 128;

protected:
	// CgsModel.h:268
	Renderable ** mppRenderables;

	// CgsModel.h:269
	uint8_t * mpu8StateRenderableIndices;

	// CgsModel.h:270
	float32_t * mpfLodDistances;

	// CgsModel.h:271
	int32_t miGameExplorerIndex;

	// CgsModel.h:272
	uint8_t mu8NumRenderables;

	// CgsModel.h:273
	uint8_t mu8Flags;

	// CgsModel.h:274
	uint8_t mu8NumStates;

	// CgsModel.h:275
	uint8_t mu8VersionNumber;

public:
	// CgsModel.h:158
	void RenderModelOnly(CgsGraphics::Model::State, CgsGraphics::DispatchFrame *, Matrix44Affine, int32_t, int32_t, int32_t, bool, int32_t, bool, bool, uint8_t, uint8_t, int32_t, const rw::math::vpu::Matrix44Affine **, const rw::math::vpu::Vector4 *, uint8_t) const;

	// CgsModel.h:169
	void RenderZOnly(CgsGraphics::Model::State, CgsGraphics::DispatchFrame *, Matrix44Affine, int32_t, int32_t, int32_t, bool, uint8_t) const;

	// CgsModel.h:175
	const char * GetRenderableName(CgsGraphics::Model::State) const;

	// CgsModel.h:179
	const Renderable * GetRenderable(CgsGraphics::Model::State) const;

	// CgsModel.h:182
	uint32_t GetNumRenderables() const;

	// CgsModel.h:186
	bool DoesStateExist(CgsGraphics::Model::State) const;

	// CgsModel.h:189
	uint32_t GetVersionNumber() const;

	// CgsModel.h:193
	void SetVersionNumber(uint32_t);

	// CgsModel.h:196
	bool GetFlag(uint16_t) const;

	// CgsModel.h:199
	void SetFlag(uint16_t, bool);

	// CgsModel.h:206
	// Declaration
	void SetupShaderConstantsForInstancing(int32_t, const rw::math::vpu::Matrix44Affine **, const rw::math::vpu::Vector4 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsModel.cpp:556
		using namespace CgsGraphics;

	}

	// CgsModel.h:210
	float32_t GetLodDistance(uint32_t) const;

	// CgsModel.h:213
	uint32_t GetNumLods() const;

	// CgsModel.h:216
	CgsGraphics::Model::State GetLodStateByDistance(float32_t) const;

	// CgsModel.h:223
	void DebugRenderMeshBoundingBoxes(CgsGraphics::Model::State, Matrix44Affine, RGBA, int32_t) const;

	// CgsModel.h:245
	bool UsesTexture(const Texture *) const;

}

// CgsModel.h:127
extern const uint32_t KU_MAX_INSTANCES_PER_GROUP = 5;

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct Model {
		// CgsModel.h:78
		enum State {
			E_STATE_LOD_0 = 0,
			E_STATE_LOD_1 = 1,
			E_STATE_LOD_2 = 2,
			E_STATE_LOD_3 = 3,
			E_STATE_LOD_4 = 4,
			E_STATE_LOD_5 = 5,
			E_STATE_LOD_6 = 6,
			E_STATE_LOD_7 = 7,
			E_STATE_LOD_8 = 8,
			E_STATE_LOD_9 = 9,
			E_STATE_LOD_10 = 10,
			E_STATE_LOD_11 = 11,
			E_STATE_LOD_12 = 12,
			E_STATE_LOD_13 = 13,
			E_STATE_LOD_14 = 14,
			E_STATE_LOD_15 = 15,
			E_STATE_GAME_SPECIFIC_0 = 16,
			E_STATE_GAME_SPECIFIC_1 = 17,
			E_STATE_GAME_SPECIFIC_2 = 18,
			E_STATE_GAME_SPECIFIC_3 = 19,
			E_STATE_GAME_SPECIFIC_4 = 20,
			E_STATE_GAME_SPECIFIC_5 = 21,
			E_STATE_GAME_SPECIFIC_6 = 22,
			E_STATE_GAME_SPECIFIC_7 = 23,
			E_STATE_GAME_SPECIFIC_8 = 24,
			E_STATE_GAME_SPECIFIC_9 = 25,
			E_STATE_GAME_SPECIFIC_10 = 26,
			E_STATE_GAME_SPECIFIC_11 = 27,
			E_STATE_GAME_SPECIFIC_12 = 28,
			E_STATE_GAME_SPECIFIC_13 = 29,
			E_STATE_GAME_SPECIFIC_14 = 30,
			E_STATE_GAME_SPECIFIC_15 = 31,
			E_STATE_COUNT = 32,
			E_STATE_INVALID = 32,
		}

	}

	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// Declaration
	struct Model {
		// CgsModel.h:78
		enum State {
			E_STATE_LOD_0 = 0,
			E_STATE_LOD_1 = 1,
			E_STATE_LOD_2 = 2,
			E_STATE_LOD_3 = 3,
			E_STATE_LOD_4 = 4,
			E_STATE_LOD_5 = 5,
			E_STATE_LOD_6 = 6,
			E_STATE_LOD_7 = 7,
			E_STATE_LOD_8 = 8,
			E_STATE_LOD_9 = 9,
			E_STATE_LOD_10 = 10,
			E_STATE_LOD_11 = 11,
			E_STATE_LOD_12 = 12,
			E_STATE_LOD_13 = 13,
			E_STATE_LOD_14 = 14,
			E_STATE_LOD_15 = 15,
			E_STATE_GAME_SPECIFIC_0 = 16,
			E_STATE_GAME_SPECIFIC_1 = 17,
			E_STATE_GAME_SPECIFIC_2 = 18,
			E_STATE_GAME_SPECIFIC_3 = 19,
			E_STATE_GAME_SPECIFIC_4 = 20,
			E_STATE_GAME_SPECIFIC_5 = 21,
			E_STATE_GAME_SPECIFIC_6 = 22,
			E_STATE_GAME_SPECIFIC_7 = 23,
			E_STATE_GAME_SPECIFIC_8 = 24,
			E_STATE_GAME_SPECIFIC_9 = 25,
			E_STATE_GAME_SPECIFIC_10 = 26,
			E_STATE_GAME_SPECIFIC_11 = 27,
			E_STATE_GAME_SPECIFIC_12 = 28,
			E_STATE_GAME_SPECIFIC_13 = 29,
			E_STATE_GAME_SPECIFIC_14 = 30,
			E_STATE_GAME_SPECIFIC_15 = 31,
			E_STATE_COUNT = 32,
			E_STATE_INVALID = 32,
		}

	}

	// CgsModel.h:61
	const uint32_t KU32_MAX_NUM_UNIQUE_KEYS = 2048;

}

