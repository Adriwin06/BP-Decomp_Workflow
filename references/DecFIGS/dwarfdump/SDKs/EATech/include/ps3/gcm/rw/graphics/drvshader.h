// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// Declaration
		struct Shader {
			// drvshader.h:112
			enum DataType {
				DATATYPE_NA = 0,
				DATATYPE_BOOL = 0,
				DATATYPE_FLOAT = 1,
				DATATYPE_FLOATARRAY = 2,
				DATATYPE_FLOATMATRIX = 3,
				DATATYPE_FLOATMATRIXARRAY = 4,
				DATATYPE_INT = 5,
				DATATYPE_INTARRAY = 6,
				DATATYPE_INTMATRIX = 7,
				DATATYPE_INTMATRIXARRAY = 8,
				DATATYPE_CUSTOM = 9,
				DATATYPE_MAX = 10,
				DATATYPE_FORCEENUMSIZEINT = 2147483647,
			}

			// drvshader.h:335
			struct ShaderDataInformation {
				// drvshader.h:336
				uint16_t id;

				// drvshader.h:337
				rw::graphics::Shader::DataType type;

				// drvshader.h:338
				uint8_t rows;

				// drvshader.h:339
				uint8_t columns;

				// drvshader.h:340
				const void * externalReference;

				// drvshader.h:35
				typedef void (*)(void *, Arena::SizeAndAlignment *) ShaderDataUnfixCallback;

				// drvshader.h:341
				rw::graphics::Shader::ShaderDataInformation::ShaderDataUnfixCallback unfixCallback;

				// drvshader.h:45
				typedef void (*)(void *, rw::core::arena::ArenaIterator *) ShaderDataRefixCallback;

				// drvshader.h:342
				rw::graphics::Shader::ShaderDataInformation::ShaderDataRefixCallback refixCallback;

				// drvshader.h:53
				typedef void (*)(void *, rw::core::arena::ArenaIterator *) ShaderDataFixUpCallback;

				// drvshader.h:343
				rw::graphics::Shader::ShaderDataInformation::ShaderDataFixUpCallback fixupCallback;

				// drvshader.h:62
				typedef void (*)(void *, const void *, uint32_t) ShaderDataUploadCallback;

				// drvshader.h:344
				rw::graphics::Shader::ShaderDataInformation::ShaderDataUploadCallback uploadCallback;

			}

		}

		// drvshader.h:88
		const uint32_t RWGSHADERMANAGERDATATYPE_MAX = 2048;

	}

}

// drvshader.h:107
struct rw::graphics::Shader {
private:
	// drvshader.h:405
	extern rw::graphics::Shader::ShaderDataInformation[2048] m_shaderDataInformationList;

	// drvshader.h:407
	extern uint32_t[2048] m_dataCoreStateDependencies;

	// drvshader.h:409
	void (*)() m_dispatchCB;

	// drvshader.h:410
	uint32_t m_id;

	// drvshader.h:411
	uint32_t m_refCount;

	// drvshader.h:412
	Shader * m_next;

	// drvshader.h:424
	extern void (*)(CGparameter, const float32_t *)[4] m_cgSetParamVector;

	// drvshader.h:425
	extern void (*)(CGparameter, long int, long int, const float32_t *)[4] m_cgSetParamVectorArray;

public:
	// drvshader.h:233
	void PSGLUploadMatrix(void *, const void *, uint32_t, uint32_t);

	// drvshader.h:234
	void PSGLUploadMatrixArray(void *, const void *, uint32_t);

	// drvshader.h:235
	void PSGLUploadMatrixArrayR(void *, const void *, uint32_t);

	// drvshader.h:236
	void PSGLUploadStateMatrix(void *, const void *, uint32_t, uint32_t);

	// drvshader.h:237
	void PSGLUploadVector(void *, const void *, uint32_t);

	// drvshader.h:238
	void PSGLUploadVectorArray(void *, const void *, uint32_t, uint32_t);

	// drvshader.h:241
	void PSGLModelViewProjMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:242
	void PSGLModelViewProjTransposeMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:243
	void PSGLModelViewMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:244
	void PSGLModelViewTransposeMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:245
	void PSGLModelMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:246
	void PSGLModelTransposeMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:247
	void PSGLModelInverseMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:248
	void PSGLModelInverseTransposeMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:249
	void PSGLViewMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:250
	void PSGLViewInverseMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:251
	void PSGLViewTransposeMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:252
	void PSGLViewInverseTransposeMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:253
	void PSGLViewProjectionMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:254
	void PSGLViewProjectionTransposeMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:255
	void PSGLProjectionMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:256
	void PSGLProjectionTransposeMatrixUpload(void *, const void *, uint32_t);

	// drvshader.h:258
	void PSGLEyePosObjectSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:259
	void PSGLEyePosWorldSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:260
	void PSGLEyeDirObjectSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:261
	void PSGLEyeDirWorldSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:262
	void PSGLLightPosObjectSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:263
	void PSGLLightDirObjectSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:264
	void PSGLLightColorUpload(void *, const void *, uint32_t);

	// drvshader.h:265
	void PSGLLightPosWorldSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:266
	void PSGLLightPosViewSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:267
	void PSGLLightDirWorldSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:268
	void PSGLLightDirViewSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:269
	void PSGLLightRangeObjectSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:270
	void PSGLLightRangeWorldSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:271
	void PSGLLightRangeViewSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:273
	void PSGLPulseUpload(void *, const void *, uint32_t);

	// drvshader.h:274
	void PSGLTimeUpload(void *, const void *, uint32_t);

	// drvshader.h:277
	void UploadMatrix(void *, const void *, uint32_t, uint32_t);

	// drvshader.h:278
	void UploadMatrixArray(void *, const void *, uint32_t);

	// drvshader.h:279
	void UploadMatrixArrayR(void *, const void *, uint32_t);

	// drvshader.h:280
	void UploadStateMatrix(void *, const void *, uint32_t);

	// drvshader.h:281
	void UploadVector(void *, const void *, uint32_t);

	// drvshader.h:282
	void UploadVectorArray(void *, const void *, uint32_t, uint32_t);

	// drvshader.h:283
	void ModelViewProjUpload(void *, const void *, uint32_t);

	// drvshader.h:284
	void ModelViewUpload(void *, const void *, uint32_t);

	// drvshader.h:285
	void ModelInverseTransposeUpload(void *, const void *, uint32_t);

	// drvshader.h:286
	void EyePosObjectSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:287
	void LightPosObjectSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:288
	void LightDirObjectSpaceUpload(void *, const void *, uint32_t);

	// drvshader.h:289
	void LightColorUpload(void *, const void *, uint32_t);

	// drvshader.h:290
	void PulseUpload(void *, const void *, uint32_t);

	// drvshader.h:348
	void Destruct(void *);

	// drvshader.h:348
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// drvshader.h:348
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// drvshader.h:348
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// drvshader.h:348
	void RegisterArenaReadCallbacks();

	// drvshader.h:348
	void RegisterArenaWriteCallbacks();

	// drvshader.h:349
	uint32_t GetID() const;

	// drvshader.h:349
	void AddRef();

	// drvshader.h:349
	int32_t QueryRef() const;

	// drvshader.h:349
	void Release();

	// drvshader.h:350
	Shader * GetNext() const;

	// drvshader.h:350
	void SetNext(Shader *);

	// drvshader.h:353
	Shader * PSGLInitialize(Shader *, uint32_t, void (*)());

	// drvshader.h:356
	void PSGLSetDispatchCallback(void (*)());

	// drvshader.h:357
	void () *const PSGLGetDispatchCallback() const;

	// drvshader.h:359
	void () *const GetMinimalDispatchCallback();

	// drvshader.h:361
	const rw::graphics::Shader::ShaderDataInformation::ShaderDataUnfixCallback GetDataUnfixCallback(uint16_t);

	// drvshader.h:362
	const rw::graphics::Shader::ShaderDataInformation::ShaderDataRefixCallback GetDataRefixCallback(uint16_t);

	// drvshader.h:363
	const rw::graphics::Shader::ShaderDataInformation::ShaderDataFixUpCallback GetDataFixUpCallback(uint16_t);

	// drvshader.h:364
	const rw::graphics::Shader::ShaderDataInformation::ShaderDataUploadCallback GetDataUploadCallback(uint16_t);

	// drvshader.h:365
	const void * GetDataExternalReference(uint16_t);

	// drvshader.h:366
	rw::graphics::Shader::DataType GetDataType(uint16_t);

	// drvshader.h:367
	uint32_t PSGLGetDataCoreState(uint16_t);

	// drvshader.h:368
	uint32_t GetDataCoreState(uint16_t);

	// drvshader.h:370
	void SetDataUnfixCallback(uint16_t, rw::graphics::Shader::ShaderDataInformation::ShaderDataUnfixCallback);

	// drvshader.h:371
	void SetDataRefixCallback(uint16_t, rw::graphics::Shader::ShaderDataInformation::ShaderDataRefixCallback);

	// drvshader.h:372
	void SetDataFixUpCallback(uint16_t, rw::graphics::Shader::ShaderDataInformation::ShaderDataFixUpCallback);

	// drvshader.h:373
	void SetDataUploadCallback(uint16_t, rw::graphics::Shader::ShaderDataInformation::ShaderDataUploadCallback, rw::graphics::Shader::DataType, uint8_t, uint8_t);

	// drvshader.h:374
	void SetDataExternalReference(uint16_t, const void *, rw::graphics::Shader::DataType, uint8_t, uint8_t);

	// drvshader.h:375
	void PSGLSetDataCoreState(uint16_t, uint32_t);

	// drvshader.h:376
	void SetDataCoreState(uint16_t, uint32_t);

	// drvshader.h:378
	void RegisterExternalReference(uint16_t, const void *, rw::graphics::Shader::DataType, uint8_t, uint8_t);

	// drvshader.h:379
	void RegisterExternalReference(const RwChar *, const void *, rw::graphics::Shader::DataType, uint8_t, uint8_t);

	// drvshader.h:380
	// Declaration
	void RegisterCustomUploadCallback(const RwChar *, ShaderConstantUploadCallback, rw::graphics::Shader::DataType, uint8_t, uint8_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// drvshader.h:79
		typedef void (*)(const rw::graphics::ShaderDataWriter &) ShaderConstantUploadCallback;

	}

	// drvshader.h:382
	rw::core::atom::StaticAtomTable::Members::AtomID GetAtomIDFromStateID(uint16_t);

	// drvshader.h:383
	uint16_t GetStateIDFromAtomID(rw::core::atom::StaticAtomTable::Members::AtomID);

	// drvshader.h:384
	uint16_t GetStateIDFromAtomTable(const RwChar *);

	// drvshader.h:385
	uint16_t UnfixStateID(uint16_t, Arena::SizeAndAlignment *);

	// drvshader.h:386
	uint16_t RefixStateID(uint16_t, rw::core::arena::ArenaIterator *);

	// drvshader.h:387
	uint16_t FixupStateID(uint16_t, rw::core::arena::ArenaIterator *);

	// drvshader.h:388
	bool StateIDIsAtomID(uint16_t);

	// drvshader.h:389
	bool StateIDIsInternalType(uint16_t);

	// drvshader.h:396
	void PSGLRegisterData(uint32_t, rw::graphics::Shader::ShaderDataInformation::ShaderDataUnfixCallback, rw::graphics::Shader::ShaderDataInformation::ShaderDataRefixCallback, rw::graphics::Shader::ShaderDataInformation::ShaderDataFixUpCallback, rw::graphics::Shader::ShaderDataInformation::ShaderDataUploadCallback, uint32_t);

	// drvshader.h:398
	RwBool PSGLStart();

	// drvshader.h:399
	void PSGLStop();

}

// drvshader.h:1038
struct rw::graphics::ShaderDataWriter {
private:
	// drvshader.h:1067
	void * m_cgParam;

	// drvshader.h:1068
	uint8_t m_rows;

	// drvshader.h:1069
	uint8_t m_columns;

	// drvshader.h:1070
	rw::graphics::Shader::DataType m_type;

public:
	// drvshader.h:1040
	void ShaderDataWriter(void *, uint8_t, uint8_t, rw::graphics::Shader::DataType);

	// drvshader.h:1048
	void Write(const VecFloat &) const;

	// drvshader.h:1049
	void Write(const rw::math::vpu::Vector2 &) const;

	// drvshader.h:1050
	void Write(const rw::math::vpu::Vector3 &) const;

	// drvshader.h:1051
	void Write(const rw::math::vpu::Vector4 &) const;

	// drvshader.h:1052
	void Write(const rw::math::vpu::Matrix44 &) const;

	// drvshader.h:1053
	void Write(const rw::math::vpu::Matrix44Affine &) const;

	// drvshader.h:1054
	void Write(const float32_t *, int32_t) const;

	// drvshader.h:1055
	void Write(const RwRGBReal &) const;

	// drvshader.h:1056
	void Write(const RwRGBAReal &) const;

	// drvshader.h:1059
	void Write(int32_t) const;

	// drvshader.h:1060
	void Write(const int32_t *, int32_t) const;

	// drvshader.h:1063
	void Write(RwBool) const;

	// drvshader.h:1064
	void Write(const RwBool *, int32_t) const;

}

// drvshader.h:405
extern rw::graphics::Shader::ShaderDataInformation[2048] m_shaderDataInformationList;

// drvshader.h:407
extern uint32_t[2048] m_dataCoreStateDependencies;

// drvshader.h:424
extern void (*)(CGparameter, const float32_t *)[4] m_cgSetParamVector;

// drvshader.h:425
extern void (*)(CGparameter, long int, long int, const float32_t *)[4] m_cgSetParamVectorArray;

