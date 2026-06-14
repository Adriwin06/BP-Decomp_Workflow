// CgsGuiShared.h:29
namespace BrnFlapt {
	// Declaration
	struct FScriptCommand {
		// BrnFlaptFile.h:303
		enum TriggerTypes {
			E_TRIGGER_SOUND = 0,
			E_TRIGGER_TRANSITIONCOMPLETE = 1,
			E_TRIGGERTYPE_COUNT = 2,
		}

	}

	// BrnFlaptFile.h:45
	const uint32_t KU_MAX_MOVIECLIPS_PER_LAYER = 32;

	// BrnFlaptFile.h:46
	const uint32_t KU_MAX_MESHES_PER_LAYER = 32;

	// BrnFlaptFile.h:47
	const uint32_t KU_MAX_TEXTFIELDS_PER_LAYER = 32;

	// BrnFlaptFile.h:49
	const uint32_t KU_MAX_MOVIECLIP_NESTING = 32;

	// BrnFlaptFile.h:52
	const uint32_t KU_SIZE_PLACED_CHILDREN_BITFIELD = 3;

	// BrnFlaptFile.h:53
	const uint32_t KU_MAX_CHILDREN_PER_MOVIECLIP = 96;

	// BrnFlaptFile.h:55
	const uint32_t KU_MAX_TRIGGER_PARAMETERS = 4;

}

// BrnFlaptFile.h:70
struct BrnFlapt::HashedString {
	// BrnFlaptFile.h:72
	uint32_t muHash;

	// BrnFlaptFile.h:73
	const char * mpacDEBUGString;

public:
	// BrnFlaptFile.h:78
	void Construct();

	// BrnFlaptFile.h:83
	void FixDown(const void *);

	// BrnFlaptFile.h:88
	void FixUp(const void *);

}

// BrnFlaptFile.h:95
struct BrnFlapt::Transform {
	// BrnFlaptFile.h:97
	Vector4 mRightUp;

	// BrnFlaptFile.h:98
	Vector4 mOriginXYZ;

public:
	// BrnFlaptFile.h:103
	void EndianSwap();

}

// BrnFlaptFile.h:110
struct BrnFlapt::ColourTransform {
	// BrnFlaptFile.h:112
	Vector4 mScale;

	// BrnFlaptFile.h:113
	Vector4 mTranslate;

public:
	// BrnFlaptFile.h:118
	void EndianSwap();

}

// BrnFlaptFile.h:165
struct BrnFlapt::TextField {
	// BrnFlaptFile.h:185
	HashedString mName;

	// BrnFlaptFile.h:187
	uint16_t muInitialStringId;

	// BrnFlaptFile.h:188
	uint8_t muFontStyleIndex;

	// BrnFlaptFile.h:190
	uint8_t mxFlags;

	// BrnFlaptFile.h:191
	uint8_t muAlignment;

	// BrnFlaptFile.h:195
	SmoothStep::Vector2 mTopLeft;

	// BrnFlaptFile.h:196
	SmoothStep::Vector2 mBottomRight;

public:
	// BrnFlaptFile.h:201
	void Construct();

	// BrnFlaptFile.h:206
	void FixDown(const void *);

	// BrnFlaptFile.h:211
	void FixUp(const void *);

}

// BrnFlaptFile.h:218
struct BrnFlapt::Mesh {
	// BrnFlaptFile.h:221
	int8_t miTextureId;

	// BrnFlaptFile.h:226
	uint8_t muNumVerts;

	// BrnFlaptFile.h:229
	uint16_t muVertOffset;

public:
	// BrnFlaptFile.h:234
	void EndianSwap();

}

// BrnFlaptFile.h:241
struct BrnFlapt::RenderLayer {
	// BrnFlaptFile.h:249
	uint8_t mxFlags;

	// BrnFlaptFile.h:252
	uint8_t muMovieClipOffset;

	// BrnFlaptFile.h:253
	uint8_t muMovieClipCount;

	// BrnFlaptFile.h:255
	uint8_t muMeshOffset;

	// BrnFlaptFile.h:256
	uint8_t muMeshCount;

	// BrnFlaptFile.h:258
	uint8_t muTextFieldOffset;

	// BrnFlaptFile.h:259
	uint8_t muTextFieldCount;

public:
	// BrnFlaptFile.h:263
	bool IsMask() const;

	// BrnFlaptFile.h:264
	bool ShouldPopMaskAfter() const;

}

// BrnFlaptFile.h:271
struct BrnFlapt::RenderLayerKeyFrame {
	// BrnFlaptFile.h:274
	uint32_t mxEnabledMovieClips;

	// BrnFlaptFile.h:275
	uint32_t mxEnabledMeshes;

	// BrnFlaptFile.h:276
	uint32_t mxEnabledTextFields;

public:
	// BrnFlaptFile.h:281
	void EndianSwap();

}

// BrnFlaptFile.h:288
struct BrnFlapt::FScriptCommand {
	// BrnFlaptFile.h:312
	uint8_t muCommand;

	// BrnFlaptFile.h:314
	uint8_t muParam8;

	// BrnFlaptFile.h:315
	uint16_t muParam16;

public:
	// BrnFlaptFile.h:320
	void EndianSwap();

}

// BrnFlaptFile.h:327
struct BrnFlapt::KeyFrameAnims {
	// BrnFlaptFile.h:331
	uint32_t[3] maxPlacedChildren;

	// BrnFlaptFile.h:333
	uint8_t muCommandOffset;

	// BrnFlaptFile.h:334
	uint8_t muCommandCount;

	// BrnFlaptFile.h:336
	uint8_t muNumTransforms;

	// BrnFlaptFile.h:337
	uint8_t muNumColourTransforms;

	// BrnFlaptFile.h:339
	uint8_t * mpauTransformObjects;

	// BrnFlaptFile.h:340
	Transform * mpaTransforms;

	// BrnFlaptFile.h:342
	uint8_t * mpauColourTransformObjects;

	// BrnFlaptFile.h:343
	ColourTransform * mpaColourTransforms;

public:
	// BrnFlaptFile.h:347
	void Construct();

	// BrnFlaptFile.h:352
	void FixDown(const void *);

	// BrnFlaptFile.h:357
	void FixUp(const void *);

}

// BrnFlaptFile.h:367
struct BrnFlapt::MovieClip {
	// BrnFlaptFile.h:374
	uint8_t mxFlags;

	// BrnFlaptFile.h:376
	uint8_t muNumChildren;

	// BrnFlaptFile.h:377
	uint8_t muNumMeshes;

	// BrnFlaptFile.h:378
	uint8_t muNumTextFields;

	// BrnFlaptFile.h:380
	uint8_t muNumRenderLayers;

	// BrnFlaptFile.h:381
	uint8_t muNumLabelledFrames;

	// BrnFlaptFile.h:382
	uint8_t muNumFScriptCommands;

	// BrnFlaptFile.h:384
	uint16_t muNumFramesInTimeline;

	// BrnFlaptFile.h:385
	uint16_t muNumKeyFrames;

	// BrnFlaptFile.h:387
	BrnFlapt::FlaptFile * mpFile;

	// BrnFlaptFile.h:389
	uint16_t * mpauFrameToKeyFrameMap;

	// BrnFlaptFile.h:391
	RenderLayer * mpaRenderLayers;

	// BrnFlaptFile.h:392
	RenderLayerKeyFrame * mpaKeyFrames;

	// BrnFlaptFile.h:393
	KeyFrameAnims * mpaKeyFrameAnims;

	// BrnFlaptFile.h:395
	FScriptCommand * mpaFScriptStream;

	// BrnFlaptFile.h:398
	uint16_t * mpauChildMovieClips;

	// BrnFlaptFile.h:400
	HashedString * mpaChildNames;

	// BrnFlaptFile.h:402
	Mesh * mpaMeshes;

	// BrnFlaptFile.h:404
	TextField * mpaTextFields;

	// BrnFlaptFile.h:407
	HashedString * mpaTextFieldNames;

	// BrnFlaptFile.h:410
	HashedString * mpaFrameLabels;

	// BrnFlaptFile.h:412
	uint16_t * mpauLabelledFrameIds;

	// BrnFlaptFile.h:414
	char * mpcComponentName;

public:
	// BrnFlaptFile.h:422
	uint32_t GetNumObjects() const;

	// BrnFlaptFile.h:424
	bool IsComponent() const;

	// BrnFlaptFile.h:429
	uint32_t GetKeyframeForFrame(uint32_t) const;

	// BrnFlaptFile.h:435
	uint32_t FindLabelledFrameIndex(uint32_t, const char *) const;

	// BrnFlaptFile.h:440
	void Construct();

	// BrnFlaptFile.h:445
	void FixDown(const void *);

	// BrnFlaptFile.h:450
	void FixUp(const void *);

}

// BrnFlaptFile.h:457
struct BrnFlapt::TriggerParameters {
	// BrnFlaptFile.h:460
	const char *[4] mapcParameters;

public:
	// BrnFlaptFile.h:464
	void Construct();

	// BrnFlaptFile.h:469
	void FixDown(const void *);

	// BrnFlaptFile.h:474
	void FixUp(const void *);

}

// BrnFlaptFile.h:481
struct BrnFlapt::FileDebugData {
	// BrnFlaptFile.h:484
	uint32_t muNumStrings;

	// BrnFlaptFile.h:485
	char ** mpapStrings;

public:
	// BrnFlaptFile.h:490
	void Construct();

	// BrnFlaptFile.h:495
	void FixDown(const void *);

	// BrnFlaptFile.h:500
	void FixUp(const void *);

}

// BrnFlaptFile.h:506
struct BrnFlapt::FontStyle {
	// BrnFlaptFile.h:509
	char * mpacFontName;

	// BrnFlaptFile.h:510
	uint32_t muColour;

	// BrnFlaptFile.h:511
	float32_t mfFontHeight;

public:
	// BrnFlaptFile.h:516
	void Construct();

	// BrnFlaptFile.h:521
	void FixDown(const void *);

	// BrnFlaptFile.h:526
	void FixUp(const void *);

}

// BrnFlaptFile.h:533
struct BrnFlapt::IndexPath {
	// BrnFlaptFile.h:536
	uint8_t muDepth;

	// BrnFlaptFile.h:537
	uint8_t[32] mauIndices;

}

// BrnFlaptFile.h:546
struct BrnFlapt::FlaptFile {
	// BrnFlaptFile.h:549
	extern BrnFlapt::FlaptFile * mpFlaptFile;

	// BrnFlaptFile.h:552
	extern const uint32_t KU_VERSION = 12;

	// BrnFlaptFile.h:554
	uint8_t muVersion;

	// BrnFlaptFile.h:556
	uint32_t muSizeInBytes;

	// BrnFlaptFile.h:558
	float32_t mfTimePerFrame;

	// BrnFlaptFile.h:560
	uint32_t muNumMovieClips;

	// BrnFlaptFile.h:561
	MovieClip * mpaMovieClips;

	// BrnFlaptFile.h:563
	uint32_t muNumTextures;

	// BrnFlaptFile.h:61
	typedef Texture GuiTexture;

	// BrnFlaptFile.h:564
	FlaptFile::GuiTexture ** mpapTextures;

	// BrnFlaptFile.h:566
	uint32_t muNumVerts;

	// BrnFlaptFile.h:62
	typedef ImCommandBatchTransformTextureBlendRender::Im2dVertex GuiVertex;

	// BrnFlaptFile.h:567
	FlaptFile::GuiVertex * mpaVerts;

	// BrnFlaptFile.h:569
	uint32_t muNumFontStyles;

	// BrnFlaptFile.h:570
	FontStyle * mpaFontStyles;

	// BrnFlaptFile.h:572
	uint32_t muNumComponents;

	// BrnFlaptFile.h:573
	HashedString * mpaComponentNames;

	// BrnFlaptFile.h:574
	IndexPath * mpaComponentPaths;

	// BrnFlaptFile.h:576
	uint32_t muNumTriggerParameters;

	// BrnFlaptFile.h:577
	TriggerParameters * mpaTriggerParameters;

	// BrnFlaptFile.h:579
	uint32_t muNumStrings;

	// BrnFlaptFile.h:580
	UnicodeBuffer::CgsUtf8 ** mpapStrings;

	// BrnFlaptFile.h:582
	uint32_t muNumSpecialTextures;

	// BrnFlaptFile.h:583
	UnicodeBuffer::CgsUtf8 ** mpapSpecialTextureNames;

	// BrnFlaptFile.h:585
	FileDebugData mDEBUGData;

public:
	// BrnFlaptFile.h:548
	void SetSpecialTexture(renderengine::Texture *, const char *);

	// BrnFlaptFile.h:590
	void Construct();

	// BrnFlaptFile.h:595
	void FixDown(const void *);

	// BrnFlaptFile.h:600
	void FixUp(const void *);

}

// BrnFlaptFile.h:165
struct BrnFlapt::TextField {
	// BrnFlaptFile.h:185
	HashedString mName;

	// BrnFlaptFile.h:187
	uint16_t muInitialStringId;

	// BrnFlaptFile.h:188
	uint8_t muFontStyleIndex;

	// BrnFlaptFile.h:190
	uint8_t mxFlags;

	// BrnFlaptFile.h:191
	uint8_t muAlignment;

	// BrnFlaptFile.h:195
	AISection::Vector2 mTopLeft;

	// BrnFlaptFile.h:196
	AISection::Vector2 mBottomRight;

public:
	// BrnFlaptFile.h:201
	void Construct();

	// BrnFlaptFile.h:206
	void FixDown(const void *);

	// BrnFlaptFile.h:211
	void FixUp(const void *);

}

// BrnFlaptFile.h:546
struct BrnFlapt::FlaptFile {
	// BrnFlaptFile.h:549
	extern BrnFlapt::FlaptFile * mpFlaptFile;

	// BrnFlaptFile.h:552
	extern const uint32_t KU_VERSION = 12;

	// BrnFlaptFile.h:554
	uint8_t muVersion;

	// BrnFlaptFile.h:556
	uint32_t muSizeInBytes;

	// BrnFlaptFile.h:558
	float32_t mfTimePerFrame;

	// BrnFlaptFile.h:560
	uint32_t muNumMovieClips;

	// BrnFlaptFile.h:561
	MovieClip * mpaMovieClips;

	// BrnFlaptFile.h:563
	uint32_t muNumTextures;

	// BrnFlaptFile.h:61
	typedef Texture GuiTexture;

	// BrnFlaptFile.h:564
	FlaptFile::GuiTexture ** mpapTextures;

	// BrnFlaptFile.h:566
	uint32_t muNumVerts;

	// BrnFlaptFile.h:62
	typedef GuiGeometryMesh::Im2dVertex GuiVertex;

	// BrnFlaptFile.h:567
	FlaptFile::GuiVertex * mpaVerts;

	// BrnFlaptFile.h:569
	uint32_t muNumFontStyles;

	// BrnFlaptFile.h:570
	FontStyle * mpaFontStyles;

	// BrnFlaptFile.h:572
	uint32_t muNumComponents;

	// BrnFlaptFile.h:573
	HashedString * mpaComponentNames;

	// BrnFlaptFile.h:574
	IndexPath * mpaComponentPaths;

	// BrnFlaptFile.h:576
	uint32_t muNumTriggerParameters;

	// BrnFlaptFile.h:577
	TriggerParameters * mpaTriggerParameters;

	// BrnFlaptFile.h:579
	uint32_t muNumStrings;

	// BrnFlaptFile.h:580
	UnicodeBuffer::CgsUtf8 ** mpapStrings;

	// BrnFlaptFile.h:582
	uint32_t muNumSpecialTextures;

	// BrnFlaptFile.h:583
	UnicodeBuffer::CgsUtf8 ** mpapSpecialTextureNames;

	// BrnFlaptFile.h:585
	FileDebugData mDEBUGData;

public:
	// BrnFlaptFile.h:548
	void SetSpecialTexture(renderengine::Texture *, const char *);

	// BrnFlaptFile.h:590
	void Construct();

	// BrnFlaptFile.h:595
	void FixDown(const void *);

	// BrnFlaptFile.h:600
	void FixUp(const void *);

}

// BrnFlaptFile.h:165
struct BrnFlapt::TextField {
	// BrnFlaptFile.h:185
	HashedString mName;

	// BrnFlaptFile.h:187
	uint16_t muInitialStringId;

	// BrnFlaptFile.h:188
	uint8_t muFontStyleIndex;

	// BrnFlaptFile.h:190
	uint8_t mxFlags;

	// BrnFlaptFile.h:191
	uint8_t muAlignment;

	// BrnFlaptFile.h:195
	Basic2dColouredVertex::Vector2 mTopLeft;

	// BrnFlaptFile.h:196
	Basic2dColouredVertex::Vector2 mBottomRight;

public:
	// BrnFlaptFile.h:201
	void Construct();

	// BrnFlaptFile.h:206
	void FixDown(const void *);

	// BrnFlaptFile.h:211
	void FixUp(const void *);

}

// BrnFlaptTextFieldRef.h:31
namespace BrnFlapt {
	// Declaration
	struct FScriptCommand {
		// BrnFlaptFile.h:303
		enum TriggerTypes {
			E_TRIGGER_SOUND = 0,
			E_TRIGGER_TRANSITIONCOMPLETE = 1,
			E_TRIGGERTYPE_COUNT = 2,
		}

	}

	// BrnFlaptFile.h:45
	const uint32_t KU_MAX_MOVIECLIPS_PER_LAYER = 32;

	// BrnFlaptFile.h:46
	const uint32_t KU_MAX_MESHES_PER_LAYER = 32;

	// BrnFlaptFile.h:47
	const uint32_t KU_MAX_TEXTFIELDS_PER_LAYER = 32;

	// BrnFlaptFile.h:49
	const uint32_t KU_MAX_MOVIECLIP_NESTING = 32;

	// BrnFlaptFile.h:52
	const uint32_t KU_SIZE_PLACED_CHILDREN_BITFIELD = 3;

	// BrnFlaptFile.h:53
	const uint32_t KU_MAX_CHILDREN_PER_MOVIECLIP = 96;

	// BrnFlaptFile.h:55
	const uint32_t KU_MAX_TRIGGER_PARAMETERS = 4;

}

// BrnFlaptFile.h:552
extern const uint32_t KU_VERSION = 12;

// CgsGuiShared.h:29
namespace BrnFlapt {
	// BrnFlaptFile.h:45
	const uint32_t KU_MAX_MOVIECLIPS_PER_LAYER = 32;

	// BrnFlaptFile.h:46
	const uint32_t KU_MAX_MESHES_PER_LAYER = 32;

	// BrnFlaptFile.h:47
	const uint32_t KU_MAX_TEXTFIELDS_PER_LAYER = 32;

	// BrnFlaptFile.h:49
	const uint32_t KU_MAX_MOVIECLIP_NESTING = 32;

	// BrnFlaptFile.h:52
	const uint32_t KU_SIZE_PLACED_CHILDREN_BITFIELD = 3;

	// BrnFlaptFile.h:53
	const uint32_t KU_MAX_CHILDREN_PER_MOVIECLIP = 96;

	// BrnFlaptFile.h:55
	const uint32_t KU_MAX_TRIGGER_PARAMETERS = 4;

}

