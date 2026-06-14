// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsFineIntersectionTestModuleIO.h:40
	namespace FineIntersectionTestIO {
	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsFineIntersectionTestModuleIO.h:40
	namespace FineIntersectionTestIO {
	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsFineIntersectionTestModuleIO.h:40
	namespace FineIntersectionTestIO {
		struct InEventLineTestFine;

		struct InEventLineTestNearest;

		struct InEventVolumeTestDeepest;

		struct InEventVolumeTestFine;

		struct OutEventLineTestFineResult;

		struct OutEventLineTestNearestResult;

		struct OutEventVolumeTestDeepestResult;

		struct OutEventVolumeTestFineResult;

		struct OutputBuffer;

	}

}

// CgsFineIntersectionTestModuleIO.h:66
struct CgsSceneManager::FineIntersectionTestIO::InEventLineTestFine : public Event {
	// CgsFineIntersectionTestModuleIO.h:69
	Vector3 mLineStart;

	// CgsFineIntersectionTestModuleIO.h:70
	Vector3 mLineEnd;

	// CgsFineIntersectionTestModuleIO.h:71
	SceneQueryId mQueryId;

	// CgsFineIntersectionTestModuleIO.h:72
	const uint16_t * mpau16EntityIndices;

	// CgsFineIntersectionTestModuleIO.h:73
	uint16_t mu16NumEntities;

	// CgsFineIntersectionTestModuleIO.h:74
	uint16_t mu16ExcludeEntityIndex;

	// CgsFineIntersectionTestModuleIO.h:75
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

	// CgsFineIntersectionTestModuleIO.h:76
	bool mbExcludeParts;

}

// CgsFineIntersectionTestModuleIO.h:80
struct CgsSceneManager::FineIntersectionTestIO::InEventLineTestNearest : public Event {
	// CgsFineIntersectionTestModuleIO.h:83
	Vector3 mLineStart;

	// CgsFineIntersectionTestModuleIO.h:84
	Vector3 mLineEnd;

	// CgsFineIntersectionTestModuleIO.h:85
	SceneQueryId mQueryId;

	// CgsFineIntersectionTestModuleIO.h:86
	const uint16_t * mpau16EntityIndices;

	// CgsFineIntersectionTestModuleIO.h:87
	uint16_t mu16NumEntities;

	// CgsFineIntersectionTestModuleIO.h:88
	uint16_t mu16ExcludeEntityIndex;

	// CgsFineIntersectionTestModuleIO.h:89
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

	// CgsFineIntersectionTestModuleIO.h:90
	bool mbExcludeParts;

}

// CgsFineIntersectionTestModuleIO.h:94
struct CgsSceneManager::FineIntersectionTestIO::InEventVolumeTestDeepest : public Event {
	// CgsFineIntersectionTestModuleIO.h:96
	Matrix44Affine mTransform;

	// CgsFineIntersectionTestModuleIO.h:97
	VolumeSlot mVolumeBuffer;

	// CgsFineIntersectionTestModuleIO.h:98
	SceneQueryId mQueryId;

	// CgsFineIntersectionTestModuleIO.h:99
	const uint16_t * mpau16EntityIndices;

	// CgsFineIntersectionTestModuleIO.h:100
	uint16_t mu16NumEntities;

	// CgsFineIntersectionTestModuleIO.h:101
	uint16_t mu16ExcludeEntityIndex;

	// CgsFineIntersectionTestModuleIO.h:102
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

	// CgsFineIntersectionTestModuleIO.h:103
	bool mbExcludeParts;

}

// CgsFineIntersectionTestModuleIO.h:107
struct CgsSceneManager::FineIntersectionTestIO::InEventVolumeTestFine : public Event {
	// CgsFineIntersectionTestModuleIO.h:109
	Matrix44Affine mTransform;

	// CgsFineIntersectionTestModuleIO.h:110
	VolumeSlot mVolumeBuffer;

	// CgsFineIntersectionTestModuleIO.h:111
	SceneQueryId mQueryId;

	// CgsFineIntersectionTestModuleIO.h:112
	const uint16_t * mpau16EntityIndices;

	// CgsFineIntersectionTestModuleIO.h:113
	uint16_t mu16NumEntities;

	// CgsFineIntersectionTestModuleIO.h:114
	uint16_t mu16ExcludeEntityIndex;

	// CgsFineIntersectionTestModuleIO.h:115
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

	// CgsFineIntersectionTestModuleIO.h:116
	bool mbExcludeParts;

}

// CgsFineIntersectionTestModuleIO.h:127
struct CgsSceneManager::FineIntersectionTestIO::OutEventLineTestFineResult : public Event {
	// CgsFineIntersectionTestModuleIO.h:129
	SceneQueryId mQueryId;

	// CgsFineIntersectionTestModuleIO.h:130
	int32_t miNumResults;

	// CgsFineIntersectionTestModuleIO.h:131
	const LineTestIntersection * mpaResults;

}

// CgsFineIntersectionTestModuleIO.h:135
struct CgsSceneManager::FineIntersectionTestIO::OutEventLineTestNearestResult : public Event {
	// CgsFineIntersectionTestModuleIO.h:137
	SceneQueryId mQueryId;

	// CgsFineIntersectionTestModuleIO.h:138
	uint32_t muVolumeInstanceIndex;

	// CgsFineIntersectionTestModuleIO.h:139
	Vector3 mPosition;

	// CgsFineIntersectionTestModuleIO.h:140
	Vector3 mNormal;

	// CgsFineIntersectionTestModuleIO.h:141
	float32_t mfLineParam;

	// CgsFineIntersectionTestModuleIO.h:142
	uint16_t mu16EntityIndex;

	// CgsFineIntersectionTestModuleIO.h:143
	uint16_t mu16MaterialTag;

	// CgsFineIntersectionTestModuleIO.h:144
	uint16_t mu16GroupTag;

	// CgsFineIntersectionTestModuleIO.h:145
	bool mbIntersection;

}

// CgsFineIntersectionTestModuleIO.h:149
struct CgsSceneManager::FineIntersectionTestIO::OutEventVolumeTestDeepestResult : public Event {
	// CgsFineIntersectionTestModuleIO.h:151
	SceneQueryId mQueryId;

	// CgsFineIntersectionTestModuleIO.h:152
	float32_t mfDepth;

	// CgsFineIntersectionTestModuleIO.h:153
	bool mbIntersection;

}

// CgsFineIntersectionTestModuleIO.h:157
struct CgsSceneManager::FineIntersectionTestIO::OutEventVolumeTestFineResult : public Event {
	// CgsFineIntersectionTestModuleIO.h:159
	SceneQueryId mQueryId;

	// CgsFineIntersectionTestModuleIO.h:160
	int32_t miNumEntities;

	// CgsFineIntersectionTestModuleIO.h:161
	const uint16_t * mpuResults;

}

// CgsFineIntersectionTestModuleIO.h:176
struct CgsSceneManager::FineIntersectionTestIO::OutputBuffer : public IOBuffer {
	// CgsFineIntersectionTestModuleIO.h:164
	typedef Array<CgsSceneManager::LineTestIntersection,256u> LineTestIntersectionArray;

private:
	// CgsFineIntersectionTestModuleIO.h:196
	OutputBuffer::LineTestIntersectionArray mLineTestIntersectionArray;

	// Unknown accessibility
	// CgsFineIntersectionTestModuleIO.h:165
	typedef Array<std::uint16_t,16384u> EntityBuffer;

	// CgsFineIntersectionTestModuleIO.h:197
	OutputBuffer::EntityBuffer mEntityBuffer;

public:
	// CgsFineIntersectionTestModuleIO.h:181
	void Construct();

	// CgsFineIntersectionTestModuleIO.h:185
	void Destruct();

	// CgsFineIntersectionTestModuleIO.h:188
	const OutputBuffer::LineTestIntersectionArray * GetLineTestIntersectionArray() const;

	// CgsFineIntersectionTestModuleIO.h:189
	const OutputBuffer::EntityBuffer * GetEntityBuffer() const;

	// CgsFineIntersectionTestModuleIO.h:191
	OutputBuffer::LineTestIntersectionArray * GetLineTestIntersectionArray();

	// CgsFineIntersectionTestModuleIO.h:192
	OutputBuffer::EntityBuffer * GetEntityBuffer();

}

