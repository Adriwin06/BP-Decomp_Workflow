// LionParticleParser.cpp:836
void cLionParticleParser::GetpDescriptorTokenTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleParser.cpp:824
void cLionParticleParser::GetpBehaviourTokenTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleParser.cpp:848
void cLionParticleParser::GetpMaterialTokenTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleParser.cpp:860
void cLionParticleParser::GetpWaveFormTokenTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleParser.cpp:463
void cLionParticleParser::AppInit(EA::Allocator::ITaggedAllocator *  apAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleParser.cpp:478
void cLionParticleParser::AppDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleParser.cpp:804
void cLionParticleParser::WaveFormWrite(cParticleWaveForm *  apWave, const char *  apName, iLionTokeniserWriter *  apWriter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleParser.cpp:751
void cLionParticleParser::DescriptorWrite(cParticleDescriptor *  apDes, iLionTokeniserWriter *  apWriter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleParser.cpp:753
		cParticleBehaviour * lpBeh;

	}
	cParticleDescriptor::GetBehaviours(/* parameters */);
}

// LionParticleParser.cpp:724
void cLionParticleParser::TextSave(const cLionParticleEffect *  apEff, iLionTokeniserWriter *  apWriter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleParser.cpp:726
		cParticleDescriptor * lpDes;

	}
}

// LionParticleParser.cpp:565
void cLionParticleParser::DescriptorRemoveDisabled(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleParser.cpp:567
		cParticleDescriptor * lpDes;

		// LionParticleParser.cpp:568
		cParticleDescriptor * lpNxt;

	}
	cParticleDescriptor::GetChild(/* parameters */);
}

// LionParticleParser.cpp:594
void cLionParticleParser::DescriptorTextLoad(cParticleDescriptor *  apDes, const char *  apText, const U32  aSize, const U32 &  aOffset, const U32  aLayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleParser.cpp:596
		const cLionParticleEffectManager & lParticleEffectManager;

		// LionParticleParser.cpp:598
		U32 lExitFlag;

		// LionParticleParser.cpp:599
		U32 lMode;

		// LionParticleParser.cpp:600
		cParticleBehaviour * lpBeh;

		// LionParticleParser.cpp:601
		cParticleWaveForm * lpWave;

		// LionParticleParser.cpp:602
		cParticleMaterial * lpMat;

		// LionParticleParser.cpp:603
		cLionArgsParser lArgs;

	}
}

// LionParticleParser.cpp:490
void cLionParticleParser::TextLoad(const char *  apText, const U32  aSize, const U32 &  aOffset, const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleParser.cpp:492
		U32 lExitFlag;

		// LionParticleParser.cpp:493
		U32 lBraceCount;

		// LionParticleParser.cpp:494
		U32 lLayer;

		// LionParticleParser.cpp:495
		cLionArgsParser lArgs;

		// LionParticleParser.cpp:496
		cLionParticleEffect * lpEff;

	}
	{
		// LionParticleParser.cpp:540
		cParticleDescriptor * lpDes;

		// LionParticleParser.cpp:541
		cParticleDescriptor * lpNxt;

	}
}

// _built-in_
namespace :: {
	// LionParticleParser.cpp:446
	extern cLionTokenTable gLionParticleParserDesTokenTable;

	// LionParticleParser.cpp:447
	extern cLionTokenTable gLionParticleParserBehTokenTable;

	// LionParticleParser.cpp:448
	extern cLionTokenTable gLionParticleParserMatTokenTable;

	// LionParticleParser.cpp:449
	extern cLionTokenTable gLionParticleParserWaveTokenTable;

	// LionParticleParser.cpp:29
	sKeyString[3] gLionParticleParserRGBVarStrings;

	// LionParticleParser.cpp:36
	sKeyString[5] gLionParticleParserModeString;

	// LionParticleParser.cpp:45
	sKeyString[5] gLionParticleParserBehWaveStrings;

	// LionParticleParser.cpp:54
	sKeyString[10] gLionParticleShapeStrings;

	// LionParticleParser.cpp:72
	sKeyString[3] gLionParticleCollisionTypeStrings;

	// LionParticleParser.cpp:81
	sKeyString[8] gLionParticleAlphaTestModeStrings;

	// LionParticleParser.cpp:93
	sKeyString[26] gLionParticleBlendModeStrings;

	// LionParticleParser.cpp:123
	sKeyString[6] gLionParticleZTestModeStrings;

	// LionParticleParser.cpp:135
	sKeyString[4] gLionParticleTexAnimOptions;

	// LionParticleParser.cpp:144
	sKeyString[3] gLionParticleShaderStrings;

	// LionParticleParser.cpp:151
	sKeyString[4] gLionParticleNormalOptionStrings;

	// LionParticleParser.cpp:161
	sKeyString[3] gLionParticleUVOptionStrings;

	// LionParticleParser.cpp:168
	sKeyString[8] gLionParticleWaveTypeStrings;

	// LionParticleParser.cpp:181
	cKeyStringTable gLionParticleParserTokenTable;

	// LionParticleParser.cpp:182
	cKeyStringTable gLionParticleShapeTokenTable;

	// LionParticleParser.cpp:183
	cKeyStringTable gLionParticleAlphaTestModeTokenTable;

	// LionParticleParser.cpp:184
	cKeyStringTable gLionParticleBlendModeTokenTable;

	// LionParticleParser.cpp:185
	cKeyStringTable gLionParticleZTestModeTokenTable;

	// LionParticleParser.cpp:186
	cKeyStringTable gLionParticleWaveTypeTokenTable;

	// LionParticleParser.cpp:187
	cKeyStringTable gLionParticleBehWaveTokenTable;

	// LionParticleParser.cpp:188
	cKeyStringTable gLionParticleBehRgbaVarTokenTable;

	// LionParticleParser.cpp:189
	cKeyStringTable gLionParticleUVOptionTokenTable;

	// LionParticleParser.cpp:193
	cKeyStringTable gLionParticleCollisionTypeTokenTable;

	// LionParticleParser.cpp:194
	cKeyStringTable gLionParticleTexAnimOptionsTokenTable;

	// LionParticleParser.cpp:195
	cKeyStringTable gLionParticleShaderTokenTable;

	// LionParticleParser.cpp:196
	cKeyStringTable gLionParticleNormalOptionTokenTable;

	// LionParticleParser.cpp:200
	sLionMemberToken[23] gLionParticleParserDesTokens;

	// LionParticleParser.cpp:237
	sLionMemberToken[89] gLionParticleParserBehTokens;

	// LionParticleParser.cpp:352
	sLionMemberToken[47] gLionParticleParserMatTokens;

	// LionParticleParser.cpp:426
	sLionMemberToken[14] gLionParticleParserWaveTokens;

}

// LionParticleParser.cpp:26
