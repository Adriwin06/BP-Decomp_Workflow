// CgsShaderConstants.h:100
namespace ShaderConstantShadowing {
}

// CgsShaderConstants.h:134
struct ShaderConstantTableElement {
	// CgsShaderConstants.h:195
	struct ShaderState {
		// CgsShaderConstants.h:199
		const rw::math::vpu::Vector4 * mpLatestCopyInPushBuffer;

	public:
		// CgsShaderConstants.h:206
		void Reset();

	}

	// CgsShaderConstants.h:184
	uint16_t mu16SizeOfArrayInQw;

	// CgsShaderConstants.h:185
	uint8_t mu8SizeInBytes;

	// CgsShaderConstants.h:186
	uint8_t mu8NumEntries;

	// CgsShaderConstants.h:219
	ShaderConstantTableElement::ShaderState[2] maShaderState;

public:
	// CgsShaderConstants.h:137
	void Construct();

	// CgsShaderConstants.h:141
	void SetSize(uint8_t);

	// CgsShaderConstants.h:153
	const uint32_t GetSizeInBytes() const;

	// CgsShaderConstants.h:159
	const uint32_t GetNumEntries() const;

	// CgsShaderConstants.h:165
	const uint16_t GetSizeOfArrayInQw() const;

	// CgsShaderConstants.h:171
	void SetNumEntries(uint8_t);

}

// CgsShaderConstants.h:223
struct ShaderConstantTable {
	// CgsShaderConstants.h:641
	extern const uint32_t KU_MAX_SHADER_CONSTANTS = 50;

	// CgsShaderConstants.h:642
	extern const uint32_t KU_MAX_SHADER_CONSTANTS_INTERNAL = 50;

	// CgsShaderConstants.h:645
	ShaderConstantTableElement[50] maConstants;

	// CgsShaderConstants.h:646
	const rw::math::vpu::Vector4 *[50] mapLatestCopyInDispatchBin;

	// CgsShaderConstants.h:647
	char *[50] mapConstantNames;

	// CgsShaderConstants.h:649
	ShaderConstantTableElement::ShaderState[50][2] maConstantsForInternalVariables;

	// CgsShaderConstants.h:653
	uint8_t mu8NumUsedConstants;

	// CgsShaderConstants.h:655
	extern ShaderConstantTable sShaderConstantTable;

	// CgsShaderConstants.h:663
	CgsGraphics::DispatchBin * mpDispatchBin;

	// CgsShaderConstants.h:699
	uint8_t mu8NumDirtyConstants;

	// CgsShaderConstants.h:701
	extern const uint32_t KU_MAX_SHADER_CONSTANTS_DIRTY_LIST = 255;

	// CgsShaderConstants.h:702
	uint8_t[255] mau8DirtyConstants;

private:
	// CgsShaderConstants.h:229
	void FastNonOverlappedVectorMemcpy(Vector4 *, const rw::math::vpu::Vector4 *, uint32_t);

	// CgsShaderConstants.h:256
	// Declaration
	void SetMatrixFromAffine(Matrix44 &, const rw::math::vpu::Matrix44Affine &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsShaderConstants.h:258
		using namespace rw;

		// CgsShaderConstants.h:259
		using namespace rw::math;

		// CgsShaderConstants.h:260
		using namespace rw::math::vpu;

	}

public:
	// CgsShaderConstants.h:276
	void Construct();

	// CgsShaderConstants.h:283
	void AddShaderConstant(uint32_t, const char *, uint8_t);

	// CgsShaderConstants.h:304
	void AddShaderConstantArray(uint32_t, const char *, uint8_t, uint8_t);

	// CgsShaderConstants.h:325
	void SetShaderConstantData(uint32_t, const float &);

	// CgsShaderConstants.h:338
	void SetShaderConstantData(uint32_t, VecFloat);

	// CgsShaderConstants.h:352
	void SetShaderConstantData(uint32_t, Vector2);

	// CgsShaderConstants.h:366
	void SetShaderConstantData(uint32_t, Vector3);

	// CgsShaderConstants.h:380
	void SetShaderConstantData(uint32_t, Vector3Plus);

	// CgsShaderConstants.h:394
	void SetShaderConstantData(uint32_t, Vector4);

	// CgsShaderConstants.h:408
	void SetShaderConstantData(uint32_t, Matrix33);

	// CgsShaderConstants.h:424
	void SetShaderConstantData(uint32_t, Matrix44);

	// CgsShaderConstants.h:441
	void SetShaderConstantData(uint32_t, Matrix44Affine);

	// CgsShaderConstants.h:454
	void SetShaderConstantArrayData(uint32_t, const rw::math::vpu::Vector3 *);

	// CgsShaderConstants.h:472
	void SetShaderConstantArrayData(uint32_t, const rw::math::vpu::Vector3Plus *);

	// CgsShaderConstants.h:490
	void SetShaderConstantArrayData(uint32_t, const rw::math::vpu::Vector4 *);

	// CgsShaderConstants.h:506
	void SetShaderConstantArrayData(uint32_t, const rw::math::vpu::Matrix44Affine *);

	// CgsShaderConstants.h:524
	void SetShaderConstantArrayData(uint32_t, const rw::math::vpu::Matrix44 *);

	// CgsShaderConstants.h:542
	void SetShaderConstantDataInverseOrthonormal(uint32_t, Matrix44Affine);

	// CgsShaderConstants.h:559
	uint32_t GetShaderConstantSizeInBytes(uint32_t);

	// CgsShaderConstants.h:569
	uint32_t GetShaderConstantSizeInBytes_SupportArrays(uint32_t);

	// CgsShaderConstants.h:578
	const char * GetShaderConstantName(uint32_t);

	// CgsShaderConstants.h:601
	ShaderConstantTable();

	// CgsShaderConstants.h:605
	void BeginFrame(CgsGraphics::DispatchBin *);

	// CgsShaderConstants.h:608
	void EndFrame();

	// CgsShaderConstants.h:611
	void ResetShadowing();

	// CgsShaderConstants.h:614
	void ResetShadowingForDispatch();

	// CgsShaderConstants.h:618
	uint8_t GetNumDirtyConstants();

	// CgsShaderConstants.h:621
	uint16_t GetNumQWForDirtyHeaders();

	// CgsShaderConstants.h:625
	void AddDirtyConstantsToDispatchBin(Vector4 *);

	// CgsShaderConstants.h:629
	void ReceiveDirtyConstantsFromDispatchBin(Vector4 *);

	// CgsShaderConstants.h:632
	void ClearDispatchThreadPointers();

	// CgsShaderConstants.h:635
	void ClearDirtyConstants();

	// CgsShaderConstants.h:638
	void SetAllConstantsDirty();

	// CgsShaderConstants.h:667
	Vector4 * UpdateShaderChangeTableAndGetConstantDestination(uint32_t);

}

// _built-in_
namespace :: {
	// CgsShaderConstants.h:97
	const uint32_t KU_INSTANCING_MATRIX_ARRAY_MAX = 5;

}

// CgsShaderConstants.h:641
extern const uint32_t KU_MAX_SHADER_CONSTANTS = 50;

// CgsShaderConstants.h:642
extern const uint32_t KU_MAX_SHADER_CONSTANTS_INTERNAL = 50;

// CgsShaderConstants.h:655
extern ShaderConstantTable sShaderConstantTable;

// CgsShaderConstants.h:701
extern const uint32_t KU_MAX_SHADER_CONSTANTS_DIRTY_LIST = 255;

// CgsShaderConstants.h:861
struct ShaderConstantsInternal {
	// CgsShaderConstants.h:904
	uint32_t muNumConstantsInstances;

	// CgsShaderConstants.h:905
	uint32_t * mpauConstantsInstanceSize;

	// CgsShaderConstants.h:906
	uint32_t ** mppaConstantsInstanceData;

	// CgsShaderConstants.h:907
	uint32_t * mpauNamesHash;

	// CgsShaderConstants.h:912
	ProgramVariableHandle * mpaProgramStateHandles;

public:
	// CgsShaderConstants.h:867
	uint32_t FixUp(const ProgramBuffer *, const CgsGraphics::ShaderConstantHashTable *);

	// CgsShaderConstants.h:871
	uint32_t FixUp(uint8_t *);

	// CgsShaderConstants.h:875
	uint32_t FixDown(uint8_t *);

	// CgsShaderConstants.h:882
	void DispatchPixelShaderConstants(int8_t, const ShaderConstantHandle *, bool, const ProgramBuffer *) const;

	// CgsShaderConstants.h:889
	void DispatchVertexShaderConstants(int8_t, const ShaderConstantHandle *, bool, const ProgramBuffer *) const;

	// CgsShaderConstants.h:894
	bool GetValue(const uint32_t &, Vector4 &) const;

	// CgsShaderConstants.h:900
	bool GetConstant(const uint32_t &, ProgramVariableHandle *&, uint32_t &) const;

}

// CgsShaderConstants.h:1000
struct ShaderConstantsCPU {
	// CgsShaderConstants.h:1047
	ICPUShader * mpCPUShader;

	// CgsShaderConstants.h:1048
	uint32_t muNumConstantsInstances;

	// CgsShaderConstants.h:1049
	uint32_t ** mppaConstantsInstanceData;

	// CgsShaderConstants.h:1050
	const char ** mppacNames;

public:
	// CgsShaderConstants.h:1002
	ShaderConstantsCPU();

	// CgsShaderConstants.h:1006
	uint32_t FixUp(uint8_t *);

	// CgsShaderConstants.h:1010
	uint32_t FixDown(uint8_t *);

	// CgsShaderConstants.h:1014
	void Dispatch(Vector4 **) const;

	// CgsShaderConstants.h:1020
	void Dispatch(float32_t, const CgsGraphics::MaterialAssembly *, MaterialTechnique *) const;

	// CgsShaderConstants.h:1023
	uint32_t GetNumConstantInstances() const;

	// CgsShaderConstants.h:1028
	bool GetValue(const char *, Vector4 &) const;

	// CgsShaderConstants.h:1033
	void SetCPUShader(ICPUShader *, const CgsGraphics::MaterialAssembly *);

	// CgsShaderConstants.h:1038
	uint32_t GetSizeOf(uint32_t) const;

	// CgsShaderConstants.h:1043
	bool ShouldSerialise() const;

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct DispatchMeshContext {
		// CgsShaderConstants.h:768
		struct ShaderState {
			// CgsShaderConstants.h:769
			const rw::math::vpu::Vector4 * lpPushBufferAddress;

			// CgsShaderConstants.h:770
			uint32_t luPushBufferTimeStamp;

		}

	}

}

// CgsShaderConstants.h:734
struct CgsGraphics::DispatchObjectContext {
	// CgsShaderConstants.h:741
	Vector4 *[50] mpShaderConstant_LatestCopyInDispatchBin;

	// CgsShaderConstants.h:747
	uint32_t muDispatchListRelativeOffset;

	// CgsShaderConstants.h:749
	CgsGraphics::DispatchObjectContext_JobState * mpJobState;

	// CgsShaderConstants.h:751
	bool mbPreZEnabled;

	// CgsShaderConstants.h:752
	bool mbPreZAlpha;

	// CgsShaderConstants.h:753
	bool mbSortByDistance;

	// CgsShaderConstants.h:754
	bool mbPreZSortByDistance;

	// CgsShaderConstants.h:755
	VecFloat mvfPreZNearThreshold;

public:
	// CgsShaderConstants.h:737
	void ResetShadowing();

}

// CgsShaderConstants.h:765
struct CgsGraphics::DispatchMeshContext {
	// CgsShaderConstants.h:773
	CgsGraphics::DispatchMeshContext::ShaderState[50][2] maExternalConstantState;

	// CgsShaderConstants.h:775
	CgsGraphics::DispatchMeshContext::ShaderState[50][2] maInternalConstantState;

	// CgsShaderConstants.h:782
	void * mpMaterialShadowingAddress;

	// CgsShaderConstants.h:790
	const ProgramBuffer *[2] mpActiveShader;

	// CgsShaderConstants.h:793
	uint32_t[2] muActiveShaderTimeStamp;

}

// CgsShaderConstants.h:100
namespace ShaderConstantShadowing {
	// CgsShaderConstants.h:118
	extern uint32_t DivideExact(uint32_t, uint32_t);

	// CgsShaderConstants.h:112
	extern uint32_t DivideRoundUp(uint32_t, uint32_t);

}

// CgsShaderConstants.h:805
struct ShaderConstantsExternal {
	// CgsShaderConstants.h:849
	uint32_t muNumConstantsInstances;

	// CgsShaderConstants.h:850
	uint32_t * mppaConstantsInstanceData;

	// CgsShaderConstants.h:851
	const char ** mppacNames;

	// CgsShaderConstants.h:856
	ProgramVariableHandle * mpaProgramStateHandles;

public:
	// CgsShaderConstants.h:810
	uint32_t FixUp(const renderengine::ProgramBuffer *);

	// CgsShaderConstants.h:814
	uint32_t FixUp(uint8_t *);

	// CgsShaderConstants.h:818
	uint32_t FixDown(uint8_t *);

	// CgsShaderConstants.h:825
	Vector4 * AddToDispatchBinFromStatePointers(CgsGraphics::DispatchObjectContext *, Vector4 *, Vector4 **&) const;

	// CgsShaderConstants.h:831
	void DispatchPixelShaderConstants(Vector4 **, bool, const renderengine::ProgramBuffer *) const;

	// CgsShaderConstants.h:837
	void DispatchVertexShaderConstants(Vector4 **, bool, const renderengine::ProgramBuffer *) const;

	// CgsShaderConstants.h:840
	uint32_t GetNumConstantInstances() const;

	// CgsShaderConstants.h:843
	bool GetValue(const char *, Vector4 &) const;

	// CgsShaderConstants.h:844
	bool GetConstant(const char *, ProgramVariableHandle *&, uint32_t &) const;

	// CgsShaderConstants.h:845
	bool HasShaderConstant(const char *) const;

}

// CgsShaderConstants.h:861
struct ShaderConstantsInternal {
	// CgsShaderConstants.h:904
	uint32_t muNumConstantsInstances;

	// CgsShaderConstants.h:905
	uint32_t * mpauConstantsInstanceSize;

	// CgsShaderConstants.h:906
	uint32_t ** mppaConstantsInstanceData;

	// CgsShaderConstants.h:907
	uint32_t * mpauNamesHash;

	// CgsShaderConstants.h:912
	ProgramVariableHandle * mpaProgramStateHandles;

public:
	// CgsShaderConstants.h:867
	uint32_t FixUp(const renderengine::ProgramBuffer *, const CgsGraphics::ShaderConstantHashTable *);

	// CgsShaderConstants.h:871
	uint32_t FixUp(uint8_t *);

	// CgsShaderConstants.h:875
	uint32_t FixDown(uint8_t *);

	// CgsShaderConstants.h:882
	void DispatchPixelShaderConstants(int8_t, const ShaderConstantHandle *, bool, const renderengine::ProgramBuffer *) const;

	// CgsShaderConstants.h:889
	void DispatchVertexShaderConstants(int8_t, const ShaderConstantHandle *, bool, const renderengine::ProgramBuffer *) const;

	// CgsShaderConstants.h:894
	bool GetValue(const uint32_t &, Vector4 &) const;

	// CgsShaderConstants.h:900
	bool GetConstant(const uint32_t &, ProgramVariableHandle *&, uint32_t &) const;

}

// CgsShaderConstants.h:967
struct ICPUShader {
	int (*)(...) * _vptr.ICPUShader;

public:
	ICPUShader();

	ICPUShader(const ICPUShader &);

	// CgsShaderConstants.h:971
	void Attach(const CgsGraphics::MaterialAssembly *);

	// CgsShaderConstants.h:977
	virtual uint32_t GetNumConstantInstances() const;

	// CgsShaderConstants.h:984
	virtual void Execute(float32_t, const CgsGraphics::MaterialAssembly *, MaterialTechnique *) const;

protected:
	// CgsShaderConstants.h:989
	virtual void OnAttach(const CgsGraphics::MaterialAssembly *);

	// CgsMaterialAnimation.cpp:60
	void SetShaderConstant(const CgsGraphics::MaterialAssembly *, MaterialTechnique *, const uint32_t &, const rw::math::vpu::Vector4 &) const;

}

// CgsShaderConstants.h:967
void ICPUShader::ICPUShader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsShaderConstants.h:805
struct ShaderConstantsExternal {
	// CgsShaderConstants.h:849
	uint32_t muNumConstantsInstances;

	// CgsShaderConstants.h:850
	uint32_t * mppaConstantsInstanceData;

	// CgsShaderConstants.h:851
	const char ** mppacNames;

	// CgsShaderConstants.h:856
	ProgramVariableHandle * mpaProgramStateHandles;

public:
	// CgsShaderConstants.h:810
	uint32_t FixUp(const ProgramBuffer *);

	// CgsShaderConstants.h:814
	uint32_t FixUp(uint8_t *);

	// CgsShaderConstants.h:818
	uint32_t FixDown(uint8_t *);

	// CgsShaderConstants.h:825
	Vector4 * AddToDispatchBinFromStatePointers(CgsGraphics::DispatchObjectContext *, Vector4 *, Vector4 **&) const;

	// CgsShaderConstants.h:831
	void DispatchPixelShaderConstants(Vector4 **, bool, const ProgramBuffer *) const;

	// CgsShaderConstants.h:837
	void DispatchVertexShaderConstants(Vector4 **, bool, const ProgramBuffer *) const;

	// CgsShaderConstants.h:840
	uint32_t GetNumConstantInstances() const;

	// CgsShaderConstants.h:843
	bool GetValue(const char *, Vector4 &) const;

	// CgsShaderConstants.h:844
	bool GetConstant(const char *, ProgramVariableHandle *&, uint32_t &) const;

	// CgsShaderConstants.h:845
	bool HasShaderConstant(const char *) const;

}

// CgsShaderConstants.h:967
struct ICPUShader {
	int (*)(...) * _vptr.ICPUShader;

public:
	ICPUShader();

	ICPUShader(const ICPUShader &);

	// CgsShaderConstants.h:971
	void Attach(const CgsGraphics::MaterialAssembly *);

	// CgsShaderConstants.h:977
	virtual uint32_t GetNumConstantInstances() const;

	// CgsShaderConstants.h:984
	virtual void Execute(float32_t, const CgsGraphics::MaterialAssembly *, MaterialTechnique *) const;

protected:
	// CgsShaderConstants.h:989
	virtual void OnAttach(const CgsGraphics::MaterialAssembly *);

	// CgsShaderConstants.h:996
	void SetShaderConstant(const CgsGraphics::MaterialAssembly *, MaterialTechnique *, const uint32_t &, const rw::math::vpu::Vector4 &) const;

}

