// CgsGuiGeometryObjects.h:46
struct CgsResource::GuiGeometryMeshHeader {
	// CgsGuiGeometryObjects.h:68
	int32_t miMeshType;

	// CgsGuiGeometryObjects.h:69
	int32_t miTextureMode;

	// CgsGuiGeometryObjects.h:70
	int32_t miTextureId;

	// CgsGuiGeometryObjects.h:34
	typedef Texture GuiTexture;

	// CgsGuiGeometryObjects.h:71
	GuiGeometryMeshHeader::GuiTexture * mpTexture;

public:
	// CgsGuiGeometryObjects.h:66
	void FixDown();

}

// CgsGuiGeometryObjects.h:84
struct CgsResource::GuiGeometryMesh {
	// CgsGuiGeometryObjects.h:93
	GuiGeometryMeshHeader mMeshHeader;

	// CgsGuiGeometryObjects.h:94
	uint32_t muNumberOfVerticies;

	// CgsGuiGeometryObjects.h:35
	typedef ImCommandBatchTransformTextureBlendRender::Im2dVertex GuiVertex;

	// CgsGuiGeometryObjects.h:95
	GuiGeometryMesh::GuiVertex ** mppVerticies;

public:
	// CgsGuiGeometryObjects.h:88
	void FixDown(uint32_t, bool);

	// CgsGuiGeometryObjects.h:91
	void FixUp(uint32_t);

}

// CgsGuiGeometryObjects.h:108
struct CgsResource::GuiGeometryFile {
	// CgsGuiGeometryObjects.h:117
	uint32_t muID;

	// CgsGuiGeometryObjects.h:118
	uint32_t muNumberOfMeshes;

	// CgsGuiGeometryObjects.h:119
	GuiGeometryMesh ** mppGeometryMeshes;

public:
	// CgsGuiGeometryObjects.h:112
	void FixDown(uint32_t, bool);

	// CgsGuiGeometryObjects.h:115
	void FixUp(uint32_t);

}

// CgsGuiGeometryObjects.h:131
struct CgsResource::GuiGeometryObject {
	// CgsGuiGeometryObjects.h:140
	uint32_t muNumberOfFiles;

	// CgsGuiGeometryObjects.h:141
	uint32_t muNumberOfTexturePages;

	// CgsGuiGeometryObjects.h:142
	GuiGeometryFile ** mppGeometryFiles;

public:
	// CgsGuiGeometryObjects.h:135
	void FixDown(uint32_t, bool);

	// CgsGuiGeometryObjects.h:138
	void FixUp(uint32_t);

}

// CgsGuiGeometryObjects.h:84
struct CgsResource::GuiGeometryMesh {
	// CgsGuiGeometryObjects.h:93
	GuiGeometryMeshHeader mMeshHeader;

	// CgsGuiGeometryObjects.h:94
	uint32_t muNumberOfVerticies;

	// CgsGuiGeometryObjects.h:35
	typedef GuiGeometryMesh::Im2dVertex GuiVertex;

	// CgsIm2d.h:44
	typedef Basic2dColouredTexturedVertex Im2dVertex;

	// CgsGuiGeometryObjects.h:95
	GuiGeometryMesh::GuiVertex ** mppVerticies;

public:
	// CgsGuiGeometryObjects.h:88
	void FixDown(uint32_t, bool);

	// CgsGuiGeometryObjects.h:91
	void FixUp(uint32_t);

}

