// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugRenderCommon.h:11
	const float32_t PI;

}

// CgsDebugRenderCommon.h:69
struct CgsDev::Internal::DebugStreamInputEntry {
	// CgsDebugRenderCommon.h:71
	void * mpEventData;

	// CgsDebugRenderCommon.h:72
	int32_t miEventSize;

	// CgsDebugRenderCommon.h:73
	int32_t miEventId;

	// CgsDebugRenderCommon.h:74
	bool mbIs2D;

}

// CgsDebugRenderCommon.h:80
struct CgsDev::Internal::DebugStreamInput {
	// CgsDebugRenderCommon.h:82
	extern const int32_t KI_ENTRIES_PER_INPUT = 15;

	// CgsDebugRenderCommon.h:83
	DebugStreamInputEntry[15] mEntries;

	// CgsDebugRenderCommon.h:84
	int32_t miNumEntries;

}

// CgsDebugRenderCommon.h:82
extern const int32_t KI_ENTRIES_PER_INPUT = 15;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugRenderCommon.h:14
	namespace Internal {
		struct DebugStreamInputEntry;

		struct DebugStreamInput;

		struct DebugInternal;

		struct DebugLinkedList<CgsDev::DebugComponent>;

		struct DebugStaticArray<CgsDev::DebugUI::Menu>;

		struct DebugStaticPool<CgsDev::DebugUI::Menu>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticArray<CgsDev::DebugUI::Variable>;

		struct DebugStaticPool<CgsDev::DebugUI::Variable>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticArray<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticPool<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticArray<CgsDev::DebugUI::Function>;

		struct DebugStaticPool<CgsDev::DebugUI::Function>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugLinkedList<CgsDev::DebugUI::Window>;

	}

	// CgsDebugRenderCommon.h:11
	const float32_t PI;

}

// CgsDebugRenderCommon.h:88
struct CgsDev::Internal::CInEventDrawText2D : public Event {
	// CgsDebugRenderCommon.h:91
	float32_t mfX;

	// CgsDebugRenderCommon.h:92
	float32_t mfY;

	// CgsDebugRenderCommon.h:93
	float32_t mfSize;

	// CgsDebugRenderCommon.h:94
	RGBA mColour;

}

// CgsDebugRenderCommon.h:98
struct CgsDev::Internal::CInEventDrawLine2D : public Event {
	// CgsDebugRenderCommon.h:101
	float32_t mfX1;

	// CgsDebugRenderCommon.h:102
	float32_t mfY1;

	// CgsDebugRenderCommon.h:103
	float32_t mfX2;

	// CgsDebugRenderCommon.h:104
	float32_t mfY2;

	// CgsDebugRenderCommon.h:105
	RGBA mColour;

}

// CgsDebugRenderCommon.h:109
struct CgsDev::Internal::CInEventDrawBox2D : public Event {
	// CgsDebugRenderCommon.h:112
	float32_t mfX;

	// CgsDebugRenderCommon.h:113
	float32_t mfY;

	// CgsDebugRenderCommon.h:114
	float32_t mfWidth;

	// CgsDebugRenderCommon.h:115
	float32_t mfHeight;

	// CgsDebugRenderCommon.h:116
	RGBA mColour;

}

// CgsDebugRenderCommon.h:120
struct CgsDev::Internal::CInEventDrawFrame2D : public Event {
	// CgsDebugRenderCommon.h:123
	float32_t mfX;

	// CgsDebugRenderCommon.h:124
	float32_t mfY;

	// CgsDebugRenderCommon.h:125
	float32_t mfWidth;

	// CgsDebugRenderCommon.h:126
	float32_t mfHeight;

	// CgsDebugRenderCommon.h:127
	RGBA mColour;

}

// CgsDebugRenderCommon.h:131
struct CgsDev::Internal::CInEventDrawText : public Event {
	// CgsDebugRenderCommon.h:134
	float32_t mfX;

	// CgsDebugRenderCommon.h:135
	float32_t mfY;

	// CgsDebugRenderCommon.h:136
	float32_t mfZ;

	// CgsDebugRenderCommon.h:137
	float32_t mfSize;

	// CgsDebugRenderCommon.h:138
	RGBA mColour;

}

// CgsDebugRenderCommon.h:142
struct CgsDev::Internal::CInEventDrawLine : public Event {
	// CgsDebugRenderCommon.h:145
	float32_t mfX1;

	// CgsDebugRenderCommon.h:146
	float32_t mfY1;

	// CgsDebugRenderCommon.h:147
	float32_t mfZ1;

	// CgsDebugRenderCommon.h:148
	float32_t mfX2;

	// CgsDebugRenderCommon.h:149
	float32_t mfY2;

	// CgsDebugRenderCommon.h:150
	float32_t mfZ2;

	// CgsDebugRenderCommon.h:151
	RGBA mColour;

}

// CgsDebugRenderCommon.h:155
struct CgsDev::Internal::CInEventDrawPoint : public Event {
	// CgsDebugRenderCommon.h:158
	float32_t mfX;

	// CgsDebugRenderCommon.h:159
	float32_t mfY;

	// CgsDebugRenderCommon.h:160
	float32_t mfZ;

	// CgsDebugRenderCommon.h:161
	RGBA mColour;

}

// CgsDebugRenderCommon.h:165
struct CgsDev::Internal::CInEventDrawQuad : public Event {
	// CgsDebugRenderCommon.h:168
	float32_t mfX1;

	// CgsDebugRenderCommon.h:169
	float32_t mfY1;

	// CgsDebugRenderCommon.h:170
	float32_t mfZ1;

	// CgsDebugRenderCommon.h:171
	float32_t mfX2;

	// CgsDebugRenderCommon.h:172
	float32_t mfY2;

	// CgsDebugRenderCommon.h:173
	float32_t mfZ2;

	// CgsDebugRenderCommon.h:174
	float32_t mfX3;

	// CgsDebugRenderCommon.h:175
	float32_t mfY3;

	// CgsDebugRenderCommon.h:176
	float32_t mfZ3;

	// CgsDebugRenderCommon.h:177
	float32_t mfX4;

	// CgsDebugRenderCommon.h:178
	float32_t mfY4;

	// CgsDebugRenderCommon.h:179
	float32_t mfZ4;

	// CgsDebugRenderCommon.h:180
	RGBA mColour;

}

// CgsDebugRenderCommon.h:184
struct CgsDev::Internal::CInEventDrawAngle : public Event {
	// CgsDebugRenderCommon.h:187
	float32_t mfX;

	// CgsDebugRenderCommon.h:188
	float32_t mfY;

	// CgsDebugRenderCommon.h:189
	float32_t mfZ;

	// CgsDebugRenderCommon.h:190
	float32_t mfAngle;

	// CgsDebugRenderCommon.h:191
	RGBA mColour;

}

// CgsDebugRenderCommon.h:195
struct CgsDev::Internal::CInEventDrawAxis : public Event {
	// CgsDebugRenderCommon.h:198
	float32_t mfAtX;

	// CgsDebugRenderCommon.h:199
	float32_t mfAtY;

	// CgsDebugRenderCommon.h:200
	float32_t mfAtZ;

	// CgsDebugRenderCommon.h:201
	float32_t mfUpX;

	// CgsDebugRenderCommon.h:202
	float32_t mfUpY;

	// CgsDebugRenderCommon.h:203
	float32_t mfUpZ;

	// CgsDebugRenderCommon.h:204
	float32_t mfRtX;

	// CgsDebugRenderCommon.h:205
	float32_t mfRtY;

	// CgsDebugRenderCommon.h:206
	float32_t mfRtZ;

	// CgsDebugRenderCommon.h:207
	float32_t mfPosX;

	// CgsDebugRenderCommon.h:208
	float32_t mfPosY;

	// CgsDebugRenderCommon.h:209
	float32_t mfPosZ;

}

// CgsDebugRenderCommon.h:213
struct CgsDev::Internal::CInEventDrawSphere : public Event {
	// CgsDebugRenderCommon.h:216
	float32_t mfX;

	// CgsDebugRenderCommon.h:217
	float32_t mfY;

	// CgsDebugRenderCommon.h:218
	float32_t mfZ;

	// CgsDebugRenderCommon.h:219
	float32_t mfRadius;

	// CgsDebugRenderCommon.h:220
	RGBA mColour;

}

// CgsDebugRenderCommon.h:224
struct CgsDev::Internal::CInEventDrawSolidSphere : public Event {
	// CgsDebugRenderCommon.h:227
	float32_t mfX;

	// CgsDebugRenderCommon.h:228
	float32_t mfY;

	// CgsDebugRenderCommon.h:229
	float32_t mfZ;

	// CgsDebugRenderCommon.h:230
	float32_t mfRadius;

	// CgsDebugRenderCommon.h:231
	RGBA mColour;

}

// CgsDebugRenderCommon.h:235
struct CgsDev::Internal::CInEventDrawHollowSphere : public Event {
	// CgsDebugRenderCommon.h:238
	float32_t mfX;

	// CgsDebugRenderCommon.h:239
	float32_t mfY;

	// CgsDebugRenderCommon.h:240
	float32_t mfZ;

	// CgsDebugRenderCommon.h:241
	float32_t mfRadius;

	// CgsDebugRenderCommon.h:242
	RGBA mColour;

}

// CgsDebugRenderCommon.h:246
struct CgsDev::Internal::CInEventDrawCircle : public Event {
	// CgsDebugRenderCommon.h:249
	float32_t mfPosX;

	// CgsDebugRenderCommon.h:250
	float32_t mfPosY;

	// CgsDebugRenderCommon.h:251
	float32_t mfPosZ;

	// CgsDebugRenderCommon.h:252
	float32_t mfDirX;

	// CgsDebugRenderCommon.h:253
	float32_t mfDirY;

	// CgsDebugRenderCommon.h:254
	float32_t mfDirZ;

	// CgsDebugRenderCommon.h:256
	float32_t mfRadius;

	// CgsDebugRenderCommon.h:257
	RGBA mColour;

}

// CgsDebugRenderCommon.h:261
struct CgsDev::Internal::CInEventDrawBox : public Event {
	// CgsDebugRenderCommon.h:264
	float32_t mfPosX;

	// CgsDebugRenderCommon.h:265
	float32_t mfPosY;

	// CgsDebugRenderCommon.h:266
	float32_t mfPosZ;

	// CgsDebugRenderCommon.h:267
	float32_t mfAtX;

	// CgsDebugRenderCommon.h:268
	float32_t mfAtY;

	// CgsDebugRenderCommon.h:269
	float32_t mfAtZ;

	// CgsDebugRenderCommon.h:270
	float32_t mfUpX;

	// CgsDebugRenderCommon.h:271
	float32_t mfUpY;

	// CgsDebugRenderCommon.h:272
	float32_t mfUpZ;

	// CgsDebugRenderCommon.h:273
	float32_t mfRtX;

	// CgsDebugRenderCommon.h:274
	float32_t mfRtY;

	// CgsDebugRenderCommon.h:275
	float32_t mfRtZ;

	// CgsDebugRenderCommon.h:277
	float32_t mfInfX;

	// CgsDebugRenderCommon.h:278
	float32_t mfInfY;

	// CgsDebugRenderCommon.h:279
	float32_t mfInfZ;

	// CgsDebugRenderCommon.h:280
	float32_t mfSupX;

	// CgsDebugRenderCommon.h:281
	float32_t mfSupY;

	// CgsDebugRenderCommon.h:282
	float32_t mfSupZ;

	// CgsDebugRenderCommon.h:283
	RGBA mColour;

}

// CgsDebugRenderCommon.h:288
struct CgsDev::Internal::CInEventDrawBoxAA : public Event {
	// CgsDebugRenderCommon.h:291
	float32_t mfInfX;

	// CgsDebugRenderCommon.h:292
	float32_t mfInfY;

	// CgsDebugRenderCommon.h:293
	float32_t mfInfZ;

	// CgsDebugRenderCommon.h:294
	float32_t mfSupX;

	// CgsDebugRenderCommon.h:295
	float32_t mfSupY;

	// CgsDebugRenderCommon.h:296
	float32_t mfSupZ;

	// CgsDebugRenderCommon.h:297
	RGBA mColour;

}

// CgsDebugRenderCommon.h:302
struct CgsDev::Internal::CInEventDrawSolidBox : public Event {
	// CgsDebugRenderCommon.h:305
	float32_t mfPosX;

	// CgsDebugRenderCommon.h:306
	float32_t mfPosY;

	// CgsDebugRenderCommon.h:307
	float32_t mfPosZ;

	// CgsDebugRenderCommon.h:308
	float32_t mfAtX;

	// CgsDebugRenderCommon.h:309
	float32_t mfAtY;

	// CgsDebugRenderCommon.h:310
	float32_t mfAtZ;

	// CgsDebugRenderCommon.h:311
	float32_t mfUpX;

	// CgsDebugRenderCommon.h:312
	float32_t mfUpY;

	// CgsDebugRenderCommon.h:313
	float32_t mfUpZ;

	// CgsDebugRenderCommon.h:314
	float32_t mfRtX;

	// CgsDebugRenderCommon.h:315
	float32_t mfRtY;

	// CgsDebugRenderCommon.h:316
	float32_t mfRtZ;

	// CgsDebugRenderCommon.h:318
	float32_t mfInfX;

	// CgsDebugRenderCommon.h:319
	float32_t mfInfY;

	// CgsDebugRenderCommon.h:320
	float32_t mfInfZ;

	// CgsDebugRenderCommon.h:321
	float32_t mfSupX;

	// CgsDebugRenderCommon.h:322
	float32_t mfSupY;

	// CgsDebugRenderCommon.h:323
	float32_t mfSupZ;

	// CgsDebugRenderCommon.h:324
	RGBA mColour;

}

// CgsDebugRenderCommon.h:329
struct CgsDev::Internal::CInEventDrawSolidBoxAA : public Event {
	// CgsDebugRenderCommon.h:332
	float32_t mfInfX;

	// CgsDebugRenderCommon.h:333
	float32_t mfInfY;

	// CgsDebugRenderCommon.h:334
	float32_t mfInfZ;

	// CgsDebugRenderCommon.h:335
	float32_t mfSupX;

	// CgsDebugRenderCommon.h:336
	float32_t mfSupY;

	// CgsDebugRenderCommon.h:337
	float32_t mfSupZ;

	// CgsDebugRenderCommon.h:338
	RGBA mColour;

}

// CgsDebugRenderCommon.h:342
struct CgsDev::Internal::CInEventDrawArrow : public Event {
	// CgsDebugRenderCommon.h:345
	float32_t mfX1;

	// CgsDebugRenderCommon.h:346
	float32_t mfY1;

	// CgsDebugRenderCommon.h:347
	float32_t mfZ1;

	// CgsDebugRenderCommon.h:348
	float32_t mfX2;

	// CgsDebugRenderCommon.h:349
	float32_t mfY2;

	// CgsDebugRenderCommon.h:350
	float32_t mfZ2;

	// CgsDebugRenderCommon.h:351
	RGBA mColour;

}

// CgsDebugRenderCommon.h:355
struct CgsDev::Internal::CInEventDrawSolidArrow : public Event {
	// CgsDebugRenderCommon.h:358
	float32_t mfX1;

	// CgsDebugRenderCommon.h:359
	float32_t mfY1;

	// CgsDebugRenderCommon.h:360
	float32_t mfZ1;

	// CgsDebugRenderCommon.h:361
	float32_t mfX2;

	// CgsDebugRenderCommon.h:362
	float32_t mfY2;

	// CgsDebugRenderCommon.h:363
	float32_t mfZ2;

	// CgsDebugRenderCommon.h:364
	RGBA mColour;

}

// CgsDebugRenderCommon.h:368
struct CgsDev::Internal::CInEventDrawCylinder : public Event {
	// CgsDebugRenderCommon.h:371
	float32_t mfX1;

	// CgsDebugRenderCommon.h:372
	float32_t mfY1;

	// CgsDebugRenderCommon.h:373
	float32_t mfZ1;

	// CgsDebugRenderCommon.h:374
	float32_t mfX2;

	// CgsDebugRenderCommon.h:375
	float32_t mfY2;

	// CgsDebugRenderCommon.h:376
	float32_t mfZ2;

	// CgsDebugRenderCommon.h:377
	float32_t mfRadius;

	// CgsDebugRenderCommon.h:378
	RGBA mColour;

}

// CgsDebugRenderCommon.h:382
struct CgsDev::Internal::CInEventDrawCapsule : public Event {
	// CgsDebugRenderCommon.h:385
	float32_t mfX1;

	// CgsDebugRenderCommon.h:386
	float32_t mfY1;

	// CgsDebugRenderCommon.h:387
	float32_t mfZ1;

	// CgsDebugRenderCommon.h:388
	float32_t mfX2;

	// CgsDebugRenderCommon.h:389
	float32_t mfY2;

	// CgsDebugRenderCommon.h:390
	float32_t mfZ2;

	// CgsDebugRenderCommon.h:391
	float32_t mfRadius;

	// CgsDebugRenderCommon.h:392
	RGBA mColour;

}

// CgsDebugRenderCommon.h:396
struct CgsDev::Internal::CInEventDrawTriangle : public Event {
	// CgsDebugRenderCommon.h:399
	float32_t mfX1;

	// CgsDebugRenderCommon.h:400
	float32_t mfY1;

	// CgsDebugRenderCommon.h:401
	float32_t mfZ1;

	// CgsDebugRenderCommon.h:402
	float32_t mfX2;

	// CgsDebugRenderCommon.h:403
	float32_t mfY2;

	// CgsDebugRenderCommon.h:404
	float32_t mfZ2;

	// CgsDebugRenderCommon.h:405
	float32_t mfX3;

	// CgsDebugRenderCommon.h:406
	float32_t mfY3;

	// CgsDebugRenderCommon.h:407
	float32_t mfZ3;

	// CgsDebugRenderCommon.h:408
	RGBA mColour;

}

