// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// propscrashbin.h:293
		namespace propscrashbin {
			// propscrashbin.h:295
			const Attribute::Key DistanceFactor_Max = 573365220;

			// propscrashbin.h:296
			const Attribute::Key DistanceFactor_Min = [0, 0, 0, 0, 45, 231, 254, 104];

			// propscrashbin.h:297
			const Attribute::Key IntensityThreshold = 2372249678;

			// propscrashbin.h:298
			const Attribute::Key mAction = 1098968938;

			// propscrashbin.h:299
			const Attribute::Key mCameras = 2502742858;

			// propscrashbin.h:300
			const Attribute::Key mCollisionsLarge = [0, 0, 0, 0, 134, 66, 183, 145];

			// propscrashbin.h:301
			const Attribute::Key mCollisionsMedium = 2939608957;

			// propscrashbin.h:302
			const Attribute::Key mCollisionsSmall = [0, 0, 0, 0, 10, 9, 75, 146];

			// propscrashbin.h:303
			const Attribute::Key mFatalityFlag = 2673103939;

			// propscrashbin.h:304
			const Attribute::Key mGameModes = [0, 0, 0, 0, 31, 117, 242, 5];

			// propscrashbin.h:305
			const Attribute::Key mImpactTime = [0, 0, 0, 0, 52, 48, 213, 184];

			// propscrashbin.h:306
			const Attribute::Key MixerSlider = [0, 0, 0, 0, 47, 91, 216, 24];

			// propscrashbin.h:307
			const Attribute::Key mMaterialA = [0, 0, 0, 0, 179, 39, 153, 10];

			// propscrashbin.h:308
			const Attribute::Key mMaterialB = [0, 0, 0, 0, 196, 124, 233, 196];

			// propscrashbin.h:309
			const Attribute::Key mNumCollisionsLarge = 1350764677;

			// propscrashbin.h:310
			const Attribute::Key mNumCollisionsMedium = 1793002098;

			// propscrashbin.h:311
			const Attribute::Key mNumCollisionsSmall = 2283809110;

			// propscrashbin.h:312
			const Attribute::Key mOrientation = 3658864366;

			// propscrashbin.h:313
			const Attribute::Key mSpliceBankAsset = 2854439700;

			// propscrashbin.h:314
			const Attribute::Key PhysicsImpulseNormalization_MAX = 2814634013;

			// propscrashbin.h:315
			const Attribute::Key PhysicsImpulseNormalization_MIN = 3171980911;

			// propscrashbin.h:316
			const Attribute::Key Pitch = [0, 0, 0, 0, 240, 72, 241, 123];

			// propscrashbin.h:317
			const Attribute::Key Priority = 4256042063;

			// propscrashbin.h:318
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// propscrashbin.h:289
		const Attribute::Key propscrashbin = 3925815916;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct propscrashbin {
			// propscrashbin.h:248
			struct _LayoutStruct {
				// propscrashbin.h:249
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 Volumes;

				// propscrashbin.h:250
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 Pitch;

				// propscrashbin.h:251
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 IntensityThreshold;

				// propscrashbin.h:252
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Text mSpliceBankAsset;

				// propscrashbin.h:253
				Attrib::Gen::crashbin::_LayoutStruct::UInt64 mMaterialB;

				// propscrashbin.h:254
				Attrib::Gen::crashbin::_LayoutStruct::UInt64 mMaterialA;

				// propscrashbin.h:255
				Private _Array_mCollisionsSmall;

				// propscrashbin.h:256
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsSmall;

				// propscrashbin.h:257
				Private _Array_mCollisionsMedium;

				// propscrashbin.h:258
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsMedium;

				// propscrashbin.h:259
				Private _Array_mCollisionsLarge;

				// propscrashbin.h:260
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsLarge;

				// propscrashbin.h:261
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float Priority;

				// propscrashbin.h:262
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float PhysicsImpulseNormalization_MIN;

				// propscrashbin.h:263
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float PhysicsImpulseNormalization_MAX;

				// propscrashbin.h:264
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mOrientation;

				// propscrashbin.h:265
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsSmall;

				// propscrashbin.h:266
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsMedium;

				// propscrashbin.h:267
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsLarge;

				// propscrashbin.h:268
				AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders MixerSlider;

				// propscrashbin.h:269
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mImpactTime;

				// propscrashbin.h:270
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mGameModes;

				// propscrashbin.h:271
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mFatalityFlag;

				// propscrashbin.h:272
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mCameras;

				// propscrashbin.h:273
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mAction;

				// propscrashbin.h:274
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float DistanceFactor_Min;

				// propscrashbin.h:275
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float DistanceFactor_Max;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// propscrashbin.h:293
		namespace propscrashbin {
			// propscrashbin.h:295
			const Attribute::Key DistanceFactor_Max = 573365220;

			// propscrashbin.h:296
			const Attribute::Key DistanceFactor_Min = [0, 0, 0, 0, 45, 231, 254, 104];

			// propscrashbin.h:297
			const Attribute::Key IntensityThreshold = 2372249678;

			// propscrashbin.h:298
			const Attribute::Key mAction = 1098968938;

			// propscrashbin.h:299
			const Attribute::Key mCameras = 2502742858;

			// propscrashbin.h:300
			const Attribute::Key mCollisionsLarge = [0, 0, 0, 0, 134, 66, 183, 145];

			// propscrashbin.h:301
			const Attribute::Key mCollisionsMedium = 2939608957;

			// propscrashbin.h:302
			const Attribute::Key mCollisionsSmall = [0, 0, 0, 0, 10, 9, 75, 146];

			// propscrashbin.h:303
			const Attribute::Key mFatalityFlag = 2673103939;

			// propscrashbin.h:304
			const Attribute::Key mGameModes = [0, 0, 0, 0, 31, 117, 242, 5];

			// propscrashbin.h:305
			const Attribute::Key mImpactTime = [0, 0, 0, 0, 52, 48, 213, 184];

			// propscrashbin.h:306
			const Attribute::Key MixerSlider = [0, 0, 0, 0, 47, 91, 216, 24];

			// propscrashbin.h:307
			const Attribute::Key mMaterialA = [0, 0, 0, 0, 179, 39, 153, 10];

			// propscrashbin.h:308
			const Attribute::Key mMaterialB = [0, 0, 0, 0, 196, 124, 233, 196];

			// propscrashbin.h:309
			const Attribute::Key mNumCollisionsLarge = 1350764677;

			// propscrashbin.h:310
			const Attribute::Key mNumCollisionsMedium = 1793002098;

			// propscrashbin.h:311
			const Attribute::Key mNumCollisionsSmall = 2283809110;

			// propscrashbin.h:312
			const Attribute::Key mOrientation = 3658864366;

			// propscrashbin.h:313
			const Attribute::Key mSpliceBankAsset = 2854439700;

			// propscrashbin.h:314
			const Attribute::Key PhysicsImpulseNormalization_MAX = 2814634013;

			// propscrashbin.h:315
			const Attribute::Key PhysicsImpulseNormalization_MIN = 3171980911;

			// propscrashbin.h:316
			const Attribute::Key Pitch = [0, 0, 0, 0, 240, 72, 241, 123];

			// propscrashbin.h:317
			const Attribute::Key Priority = 4256042063;

			// propscrashbin.h:318
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// propscrashbin.h:289
		const Attribute::Key propscrashbin = 3925815916;

	}

}

// propscrashbin.h:14
struct Attrib::Gen::propscrashbin : Instance {
public:
	// propscrashbin.h:16
	Attribute::Key ClassKey();

	// propscrashbin.h:18
	void * operator new(size_t);

	// propscrashbin.h:18
	void operator delete(void *, size_t);

	// propscrashbin.h:18
	void * operator new(size_t, void *);

	// propscrashbin.h:18
	void operator delete(void *, void *);

	// propscrashbin.h:19
	void propscrashbin(const Attrib::Collection *, uint32_t);

	// propscrashbin.h:20
	void propscrashbin(const propscrashbin &);

	// propscrashbin.h:21
	void propscrashbin(const Attrib::Instance &);

	// propscrashbin.h:22
	void propscrashbin(const Attrib::RefSpec &, uint32_t);

	// propscrashbin.h:23
	void propscrashbin(Attribute::Key, uint32_t);

	// propscrashbin.h:24
	void ~propscrashbin();

	// propscrashbin.h:26
	Attribute::Key GetClass() const;

	// propscrashbin.h:28
	Instance & GetBase();

	// propscrashbin.h:29
	const Attrib::Instance & GetBase() const;

	// propscrashbin.h:31
	void Modify(Attribute::Key, unsigned int);

	// propscrashbin.h:32
	Attribute::Key GenerateUniqueKey(const char *) const;

	// propscrashbin.h:33
	void Change(const Attrib::Collection *);

	// propscrashbin.h:34
	void Change(const Attrib::RefSpec &);

	// propscrashbin.h:35
	void Change(Attribute::Key);

	// propscrashbin.h:36
	void ChangeWithDefault(const Attrib::RefSpec &);

	// propscrashbin.h:37
	void ChangeWithDefault(Attribute::Key);

	// propscrashbin.h:39
	const propscrashbin & operator=(const propscrashbin &);

	// propscrashbin.h:40
	const propscrashbin & operator=(const Attrib::Instance &);

	// propscrashbin.h:41
	bool operator==(const propscrashbin &) const;

	// propscrashbin.h:42
	bool operator==(const Attrib::Instance &) const;

	// propscrashbin.h:43
	bool operator!=(const propscrashbin &) const;

	// propscrashbin.h:44
	bool operator!=(const Attrib::Instance &) const;

	// propscrashbin.h:74
	bool DistanceFactor_Max(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// propscrashbin.h:75
	bool DistanceFactor_Max(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// propscrashbin.h:76
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & DistanceFactor_Max() const;

	// propscrashbin.h:77
	bool Set_DistanceFactor_Max(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// propscrashbin.h:81
	bool DistanceFactor_Min(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// propscrashbin.h:82
	bool DistanceFactor_Min(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// propscrashbin.h:83
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & DistanceFactor_Min() const;

	// propscrashbin.h:84
	bool Set_DistanceFactor_Min(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// propscrashbin.h:88
	bool IntensityThreshold(Attrib::TAttrib<rw::math::vpu::Vector3> &) const;

	// propscrashbin.h:89
	bool IntensityThreshold(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &) const;

	// propscrashbin.h:90
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 & IntensityThreshold() const;

	// propscrashbin.h:91
	bool Set_IntensityThreshold(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &);

	// propscrashbin.h:95
	bool mAction(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// propscrashbin.h:96
	bool mAction(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// propscrashbin.h:97
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mAction() const;

	// propscrashbin.h:98
	bool Set_mAction(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// propscrashbin.h:102
	bool mCameras(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// propscrashbin.h:103
	bool mCameras(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// propscrashbin.h:104
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mCameras() const;

	// propscrashbin.h:105
	bool Set_mCameras(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// propscrashbin.h:109
	bool mCollisionsLarge(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// propscrashbin.h:110
	bool mCollisionsLarge(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int) const;

	// propscrashbin.h:111
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mCollisionsLarge(unsigned int) const;

	// propscrashbin.h:112
	unsigned int Num_mCollisionsLarge() const;

	// propscrashbin.h:113
	bool Set_mCollisionsLarge(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int);

	// propscrashbin.h:117
	bool mCollisionsMedium(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// propscrashbin.h:118
	bool mCollisionsMedium(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int) const;

	// propscrashbin.h:119
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mCollisionsMedium(unsigned int) const;

	// propscrashbin.h:120
	unsigned int Num_mCollisionsMedium() const;

	// propscrashbin.h:121
	bool Set_mCollisionsMedium(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int);

	// propscrashbin.h:125
	bool mCollisionsSmall(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// propscrashbin.h:126
	bool mCollisionsSmall(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int) const;

	// propscrashbin.h:127
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mCollisionsSmall(unsigned int) const;

	// propscrashbin.h:128
	unsigned int Num_mCollisionsSmall() const;

	// propscrashbin.h:129
	bool Set_mCollisionsSmall(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int);

	// propscrashbin.h:133
	bool mFatalityFlag(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// propscrashbin.h:134
	bool mFatalityFlag(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// propscrashbin.h:135
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mFatalityFlag() const;

	// propscrashbin.h:136
	bool Set_mFatalityFlag(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// propscrashbin.h:140
	bool mGameModes(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// propscrashbin.h:141
	bool mGameModes(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// propscrashbin.h:142
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mGameModes() const;

	// propscrashbin.h:143
	bool Set_mGameModes(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// propscrashbin.h:147
	bool mImpactTime(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// propscrashbin.h:148
	bool mImpactTime(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// propscrashbin.h:149
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mImpactTime() const;

	// propscrashbin.h:150
	bool Set_mImpactTime(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// propscrashbin.h:154
	bool MixerSlider(Attrib::TAttrib<AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders> &) const;

	// propscrashbin.h:155
	bool MixerSlider(AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders &) const;

	// propscrashbin.h:156
	const AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders & MixerSlider() const;

	// propscrashbin.h:157
	bool Set_MixerSlider(const AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders &);

	// propscrashbin.h:161
	bool mMaterialA(Attrib::TAttrib<EA::Reflection::UInt64> &) const;

	// propscrashbin.h:162
	bool mMaterialA(Attrib::Gen::crashbin::_LayoutStruct::UInt64 &) const;

	// propscrashbin.h:163
	const Attrib::Gen::crashbin::_LayoutStruct::UInt64 & mMaterialA() const;

	// propscrashbin.h:164
	bool Set_mMaterialA(const Attrib::Gen::crashbin::_LayoutStruct::UInt64 &);

	// propscrashbin.h:168
	bool mMaterialB(Attrib::TAttrib<EA::Reflection::UInt64> &) const;

	// propscrashbin.h:169
	bool mMaterialB(Attrib::Gen::crashbin::_LayoutStruct::UInt64 &) const;

	// propscrashbin.h:170
	const Attrib::Gen::crashbin::_LayoutStruct::UInt64 & mMaterialB() const;

	// propscrashbin.h:171
	bool Set_mMaterialB(const Attrib::Gen::crashbin::_LayoutStruct::UInt64 &);

	// propscrashbin.h:175
	bool mNumCollisionsLarge(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// propscrashbin.h:176
	bool mNumCollisionsLarge(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// propscrashbin.h:177
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumCollisionsLarge() const;

	// propscrashbin.h:178
	bool Set_mNumCollisionsLarge(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// propscrashbin.h:182
	bool mNumCollisionsMedium(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// propscrashbin.h:183
	bool mNumCollisionsMedium(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// propscrashbin.h:184
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumCollisionsMedium() const;

	// propscrashbin.h:185
	bool Set_mNumCollisionsMedium(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// propscrashbin.h:189
	bool mNumCollisionsSmall(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// propscrashbin.h:190
	bool mNumCollisionsSmall(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// propscrashbin.h:191
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumCollisionsSmall() const;

	// propscrashbin.h:192
	bool Set_mNumCollisionsSmall(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// propscrashbin.h:196
	bool mOrientation(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// propscrashbin.h:197
	bool mOrientation(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// propscrashbin.h:198
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mOrientation() const;

	// propscrashbin.h:199
	bool Set_mOrientation(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// propscrashbin.h:203
	bool mSpliceBankAsset(Attrib::TAttrib<const char*> &) const;

	// propscrashbin.h:204
	bool mSpliceBankAsset(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// propscrashbin.h:205
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & mSpliceBankAsset() const;

	// propscrashbin.h:206
	bool Set_mSpliceBankAsset(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// propscrashbin.h:210
	bool PhysicsImpulseNormalization_MAX(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// propscrashbin.h:211
	bool PhysicsImpulseNormalization_MAX(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// propscrashbin.h:212
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PhysicsImpulseNormalization_MAX() const;

	// propscrashbin.h:213
	bool Set_PhysicsImpulseNormalization_MAX(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// propscrashbin.h:217
	bool PhysicsImpulseNormalization_MIN(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// propscrashbin.h:218
	bool PhysicsImpulseNormalization_MIN(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// propscrashbin.h:219
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PhysicsImpulseNormalization_MIN() const;

	// propscrashbin.h:220
	bool Set_PhysicsImpulseNormalization_MIN(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// propscrashbin.h:224
	bool Pitch(Attrib::TAttrib<rw::math::vpu::Vector3> &) const;

	// propscrashbin.h:225
	bool Pitch(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &) const;

	// propscrashbin.h:226
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 & Pitch() const;

	// propscrashbin.h:227
	bool Set_Pitch(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &);

	// propscrashbin.h:231
	bool Priority(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// propscrashbin.h:232
	bool Priority(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// propscrashbin.h:233
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Priority() const;

	// propscrashbin.h:234
	bool Set_Priority(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// propscrashbin.h:238
	bool Volumes(Attrib::TAttrib<rw::math::vpu::Vector3> &) const;

	// propscrashbin.h:239
	bool Volumes(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &) const;

	// propscrashbin.h:240
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 & Volumes() const;

	// propscrashbin.h:241
	bool Set_Volumes(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &);

private:
	// propscrashbin.h:278
	unsigned int GetLayoutSize();

	// propscrashbin.h:281
	propscrashbin & ConvertFromInstance(Instance &);

	// propscrashbin.h:282
	const propscrashbin & ConvertFromInstance(const Attrib::Instance &);

}

