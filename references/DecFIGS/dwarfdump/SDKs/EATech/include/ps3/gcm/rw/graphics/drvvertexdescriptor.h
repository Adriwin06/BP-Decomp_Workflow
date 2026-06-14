// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// Declaration
		struct VertexDescriptor {
			// drvvertexdescriptor.h:78
			enum ElementType {
				ELEMENTTYPE_NA = -1,
				ELEMENTTYPE_PSGLATTRIBUTE0 = 0,
				ELEMENTTYPE_PSGLATTRIBUTE1 = 1,
				ELEMENTTYPE_PSGLATTRIBUTE2 = 2,
				ELEMENTTYPE_PSGLATTRIBUTE3 = 3,
				ELEMENTTYPE_PSGLATTRIBUTE4 = 4,
				ELEMENTTYPE_PSGLATTRIBUTE5 = 5,
				ELEMENTTYPE_PSGLATTRIBUTE6 = 6,
				ELEMENTTYPE_PSGLATTRIBUTE7 = 7,
				ELEMENTTYPE_PSGLATTRIBUTE8 = 8,
				ELEMENTTYPE_PSGLATTRIBUTE9 = 9,
				ELEMENTTYPE_PSGLATTRIBUTE10 = 10,
				ELEMENTTYPE_PSGLATTRIBUTE11 = 11,
				ELEMENTTYPE_PSGLATTRIBUTE12 = 12,
				ELEMENTTYPE_PSGLATTRIBUTE13 = 13,
				ELEMENTTYPE_PSGLATTRIBUTE14 = 14,
				ELEMENTTYPE_PSGLATTRIBUTE15 = 15,
				ELEMENTTYPE_PSGL_NUM = 16,
				ELEMENTTYPE_PSGL_XYZ = 0,
				ELEMENTTYPE_PSGL_VERTEXCOLOR = 3,
				ELEMENTTYPE_PSGL_SPECULAR = 4,
				ELEMENTTYPE_PSGL_NORMAL = 2,
				ELEMENTTYPE_PSGL_TEXCOORD0 = 8,
				ELEMENTTYPE_PSGL_TEXCOORD1 = 9,
				ELEMENTTYPE_PSGL_TEXCOORD2 = 10,
				ELEMENTTYPE_PSGL_TEXCOORD3 = 11,
				ELEMENTTYPE_PSGL_TEXCOORD4 = 12,
				ELEMENTTYPE_PSGL_TEXCOORD5 = 13,
				ELEMENTTYPE_PSGL_TEXCOORD6 = 14,
				ELEMENTTYPE_PSGL_TEXCOORD7 = 15,
				ELEMENTTYPE_PSGL_WEIGHTS = 1,
				ELEMENTTYPE_PSGL_INDICES = 7,
				ELEMENTTYPE_PSGL_TANGENT = 14,
				ELEMENTTYPE_PSGL_BINORMAL = 15,
				ELEMENTTYPE_XYZ = 0,
				ELEMENTTYPE_UV = 8,
				ELEMENTTYPE_RGB = -1,
				ELEMENTTYPE_RGBA = 3,
				ELEMENTTYPE_NORMAL = 2,
				ELEMENTTYPE_TANGENT = 14,
				ELEMENTTYPE_BINORMAL = 15,
				ELEMENTTYPE_IND8 = -1,
				ELEMENTTYPE_IND16 = -1,
				ELEMENTTYPE_IND32 = -1,
				ELEMENTTYPE_FORCEENUMSIZEINT = 2147483647,
			}

			// drvvertexdescriptor.h:141
			enum ElementData {
				ELEMENTDATA_NA = 0,
				ELEMENTDATA_FLOAT = 5126,
				ELEMENTDATA_HALFFLOAT = 5131,
				ELEMENTDATA_USHORT = 5123,
				ELEMENTDATA_SHORT = 5122,
				ELEMENTDATA_UBYTE = 5121,
				ELEMENTDATA_BYTE = 5120,
				ELEMENTDATA_FORCEENUMSIZEINT = 2147483647,
			}

			// drvvertexdescriptor.h:160
			struct Element {
				// drvvertexdescriptor.h:161
				rw::graphics::VertexDescriptor::ElementType type;

				// drvvertexdescriptor.h:162
				rw::graphics::VertexDescriptor::ElementData dataType;

				// drvvertexdescriptor.h:163
				uint32_t offset;

				// drvvertexdescriptor.h:164
				uint8_t stream;

				// drvvertexdescriptor.h:165
				uint8_t numComponents;

				// drvvertexdescriptor.h:166
				uint8_t stride;

				// drvvertexdescriptor.h:167
				uint8_t pad;

			}

			// drvvertexdescriptor.h:171
			enum VertexElementUsage {
				ELEMENTUSAGE_POSITION = 0,
				ELEMENTUSAGE_UV = 1,
				ELEMENTUSAGE_COLOR = 2,
				ELEMENTUSAGE_NORMAL = 3,
				ELEMENTUSAGE_TANGENT = 4,
				ELEMENTUSAGE_BINORMAL = 5,
				ELEMENTUSAGE_INDICES = 6,
				ELEMENTUSAGE_WEIGHTS = 7,
				ELEMENTUSAGE_ATTR = 8,
				ELEMENTUSAGE_NA = 9,
			}

			// drvvertexdescriptor.h:171
			enum VertexElementFormat {
				ELEMENTFORMAT_FLOAT1 = 0,
				ELEMENTFORMAT_FLOAT2 = 1,
				ELEMENTFORMAT_FLOAT3 = 2,
				ELEMENTFORMAT_FLOAT4 = 3,
				ELEMENTFORMAT_SHORT1 = 4,
				ELEMENTFORMAT_SHORT2 = 5,
				ELEMENTFORMAT_SHORT3 = 6,
				ELEMENTFORMAT_SHORT4 = 7,
				ELEMENTFORMAT_SHORT1N = 8,
				ELEMENTFORMAT_SHORT2N = 9,
				ELEMENTFORMAT_SHORT3N = 10,
				ELEMENTFORMAT_SHORT4N = 11,
				ELEMENTFORMAT_USHORT1 = 12,
				ELEMENTFORMAT_USHORT2 = 13,
				ELEMENTFORMAT_USHORT3 = 14,
				ELEMENTFORMAT_USHORT4 = 15,
				ELEMENTFORMAT_USHORT1N = 16,
				ELEMENTFORMAT_USHORT2N = 17,
				ELEMENTFORMAT_USHORT3N = 18,
				ELEMENTFORMAT_USHORT4N = 19,
				ELEMENTFORMAT_UBYTE1 = 20,
				ELEMENTFORMAT_UBYTE2 = 21,
				ELEMENTFORMAT_UBYTE3 = 22,
				ELEMENTFORMAT_UBYTE4 = 23,
				ELEMENTFORMAT_BYTE1N = 24,
				ELEMENTFORMAT_BYTE2N = 25,
				ELEMENTFORMAT_BYTE3N = 26,
				ELEMENTFORMAT_BYTE4N = 27,
				ELEMENTFORMAT_UBYTE1N = 28,
				ELEMENTFORMAT_UBYTE2N = 29,
				ELEMENTFORMAT_UBYTE3N = 30,
				ELEMENTFORMAT_UBYTE4N = 31,
				ELEMENTFORMAT_BYTE4 = 32,
				ELEMENTFORMAT_UDEC3N = 33,
				ELEMENTFORMAT_UDEC3 = 34,
				ELEMENTFORMAT_DEC3N = 35,
				ELEMENTFORMAT_DEC3 = 36,
				ELEMENTFORMAT_HALF1 = 37,
				ELEMENTFORMAT_HALF2 = 38,
				ELEMENTFORMAT_HALF3 = 39,
				ELEMENTFORMAT_HALF4 = 40,
				ELEMENTFORMAT_COLOR = 41,
				ELEMENTFORMAT_COLOR_RGB = 42,
				ELEMENTFORMAT_PACKED3N = 43,
				ELEMENTFORMAT_FLOATXYWN = 44,
				ELEMENTFORMAT_NA = 45,
			}

			// drvvertexdescriptor.h:171
			struct BuildElement {
				// drvvertexdescriptor.h:171
				rw::graphics::VertexDescriptor::VertexElementUsage usage;

				// drvvertexdescriptor.h:171
				rw::graphics::VertexDescriptor::VertexElementFormat format;

				// drvvertexdescriptor.h:171
				uint16_t stream;

				// drvvertexdescriptor.h:171
				uint16_t usageIndex;

			public:
				// drvvertexdescriptor.h:171
				BuildElement();

				// drvvertexdescriptor.h:171
				void SetUsage(rw::graphics::VertexDescriptor::VertexElementUsage);

				// drvvertexdescriptor.h:171
				void SetFormat(rw::graphics::VertexDescriptor::VertexElementFormat);

				// drvvertexdescriptor.h:171
				void SetStream(uint16_t);

				// drvvertexdescriptor.h:171
				void SetUsageIndex(uint16_t);

				// drvvertexdescriptor.h:171
				rw::graphics::VertexDescriptor::VertexElementUsage GetUsage();

				// drvvertexdescriptor.h:171
				rw::graphics::VertexDescriptor::VertexElementFormat GetFormat();

				// drvvertexdescriptor.h:171
				uint16_t GetStream();

				// drvvertexdescriptor.h:171
				uint16_t GetUsageIndex();

			}

			// drvvertexdescriptor.h:184
			struct VertexUsagePIDetails {
				// drvvertexdescriptor.h:185
				rw::graphics::VertexDescriptor::VertexElementUsage usage;

				// drvvertexdescriptor.h:186
				uint16_t usageIndex;

			}

			// drvvertexdescriptor.h:194
			struct ElementTypeConversionEntry {
				// drvvertexdescriptor.h:195
				rw::graphics::VertexDescriptor::VertexUsagePIDetails platformIndependentUsage;

				// drvvertexdescriptor.h:196
				rw::graphics::VertexDescriptor::ElementType platformSpecificType;

			}

			// drvvertexdescriptor.h:200
			struct VertexFormatPSDetails {
				// drvvertexdescriptor.h:201
				rw::graphics::VertexDescriptor::ElementData dataType;

				// drvvertexdescriptor.h:202
				uint8_t numComponents;

			}

			// drvvertexdescriptor.h:206
			struct ElementFormatConversionEntry {
				// drvvertexdescriptor.h:207
				rw::graphics::VertexDescriptor::VertexElementFormat platformIndependentFormat;

				// drvvertexdescriptor.h:208
				rw::graphics::VertexDescriptor::VertexFormatPSDetails platformSpecificFormat;

			}

		}

	}

}

// drvvertexdescriptor.h:71
struct rw::graphics::VertexDescriptor {
private:
	// drvvertexdescriptor.h:211
	extern rw::graphics::VertexDescriptor::ElementTypeConversionEntry[] elementTypeConversionTable;

	// drvvertexdescriptor.h:212
	extern rw::graphics::VertexDescriptor::ElementFormatConversionEntry[] elementFormatConversionTable;

	// drvvertexdescriptor.h:224
	uint8_t m_numElements;

	// drvvertexdescriptor.h:225
	uint8_t m_stride;

	// drvvertexdescriptor.h:226
	uint8_t m_lockFlags;

	// drvvertexdescriptor.h:227
	uint8_t m_interleavedData;

	// drvvertexdescriptor.h:228
	uint32_t m_instanceSize;

	// drvvertexdescriptor.h:229
	uint32_t m_elementFlags;

	// drvvertexdescriptor.h:230
	rw::graphics::VertexDescriptor::Element[1] m_element;

public:
	// drvvertexdescriptor.h:171
	ResourceDescriptor GetResourceDescriptor(uint32_t);

	// drvvertexdescriptor.h:171
	uint32_t GetAlignment(uint32_t);

	// drvvertexdescriptor.h:171
	uint32_t GetSize(uint32_t);

	// drvvertexdescriptor.h:171
	VertexDescriptor * Initialize(void *, uint32_t, uint32_t);

	// drvvertexdescriptor.h:171
	VertexDescriptor * Initialize(const Resource &, uint32_t, const rw::graphics::VertexDescriptor::BuildElement *);

	// drvvertexdescriptor.h:171
	void Release();

	// drvvertexdescriptor.h:171
	VertexDescriptor * Copy(VertexDescriptor *) const;

	// drvvertexdescriptor.h:171
	VertexDescriptor * Lock(uint32_t);

	// drvvertexdescriptor.h:171
	VertexDescriptor * Unlock();

	// drvvertexdescriptor.h:171
	const uint32_t GetNumElements() const;

	// drvvertexdescriptor.h:171
	rw::graphics::VertexDescriptor::Element * GetElement(uint32_t);

	// drvvertexdescriptor.h:171
	const rw::graphics::VertexDescriptor::Element * GetElement(uint32_t) const;

	// drvvertexdescriptor.h:171
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// drvvertexdescriptor.h:171
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// drvvertexdescriptor.h:171
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// drvvertexdescriptor.h:171
	void Destruct(void *);

	// drvvertexdescriptor.h:171
	void RegisterArenaReadCallbacks();

	// drvvertexdescriptor.h:171
	void RegisterArenaWriteCallbacks();

	// drvvertexdescriptor.h:171
	RwBool AreEqual(const VertexDescriptor *, const VertexDescriptor *);

	// drvvertexdescriptor.h:171
	void SetElement(uint32_t, const rw::graphics::VertexDescriptor::BuildElement *);

	// drvvertexdescriptor.h:171
	void GetBuildElement(uint32_t, rw::graphics::VertexDescriptor::BuildElement *) const;

	// drvvertexdescriptor.h:171
	RwBool IsBuildElementValid(const rw::graphics::VertexDescriptor::BuildElement *);

	// drvvertexdescriptor.h:174
	uint32_t PSGLGetStride() const;

	// drvvertexdescriptor.h:175
	void PSGLSetInterleavedData(RwBool);

	// drvvertexdescriptor.h:176
	RwBool PSGLIsInterleavedData() const;

	// drvvertexdescriptor.h:177
	void PSGLSetVertexData(uint32_t, uint32_t &, uint8_t *, uint32_t, uint32_t) const;

	// drvvertexdescriptor.h:178
	uint32_t PSGLGetInstanceSize() const;

	// drvvertexdescriptor.h:179
	uint32_t PSGLGetElementFlags() const;

	// drvvertexdescriptor.h:180
	uint32_t PSGLGetLinearVertexDataSize(uint32_t) const;

private:
	// drvvertexdescriptor.h:215
	rw::graphics::VertexDescriptor::ElementType LookUpPSElementType(rw::graphics::VertexDescriptor::VertexElementUsage, uint16_t);

	// drvvertexdescriptor.h:217
	rw::graphics::VertexDescriptor::VertexUsagePIDetails LookUpPIElementUsage(rw::graphics::VertexDescriptor::ElementType);

	// drvvertexdescriptor.h:220
	rw::graphics::VertexDescriptor::VertexFormatPSDetails LookUpPSElementFormat(rw::graphics::VertexDescriptor::VertexElementFormat);

	// drvvertexdescriptor.h:222
	rw::graphics::VertexDescriptor::VertexElementFormat LookUpPIElementFormat(rw::graphics::VertexDescriptor::VertexFormatPSDetails);

	// drvvertexdescriptor.h:234
	void VertexDescriptor();

	// drvvertexdescriptor.h:235
	void VertexDescriptor(const VertexDescriptor &);

	// drvvertexdescriptor.h:236
	void ~VertexDescriptor();

}

