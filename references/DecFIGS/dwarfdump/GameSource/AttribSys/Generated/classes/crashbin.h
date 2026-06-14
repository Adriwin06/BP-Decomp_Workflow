// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// crashbin.h:293
		namespace crashbin {
			// crashbin.h:295
			const Attribute::Key DistanceFactor_Max = 573365220;

			// crashbin.h:296
			const Attribute::Key DistanceFactor_Min = [0, 0, 0, 0, 45, 231, 254, 104];

			// crashbin.h:297
			const Attribute::Key IntensityThreshold = 2372249678;

			// crashbin.h:298
			const Attribute::Key mAction = 1098968938;

			// crashbin.h:299
			const Attribute::Key mCameras = 2502742858;

			// crashbin.h:300
			const Attribute::Key mCollisionsLarge = [0, 0, 0, 0, 134, 66, 183, 145];

			// crashbin.h:301
			const Attribute::Key mCollisionsMedium = 2939608957;

			// crashbin.h:302
			const Attribute::Key mCollisionsSmall = [0, 0, 0, 0, 10, 9, 75, 146];

			// crashbin.h:303
			const Attribute::Key mFatalityFlag = 2673103939;

			// crashbin.h:304
			const Attribute::Key mGameModes = [0, 0, 0, 0, 31, 117, 242, 5];

			// crashbin.h:305
			const Attribute::Key mImpactTime = [0, 0, 0, 0, 52, 48, 213, 184];

			// crashbin.h:306
			const Attribute::Key MixerSlider = [0, 0, 0, 0, 47, 91, 216, 24];

			// crashbin.h:307
			const Attribute::Key mMaterialA = [0, 0, 0, 0, 179, 39, 153, 10];

			// crashbin.h:308
			const Attribute::Key mMaterialB = [0, 0, 0, 0, 196, 124, 233, 196];

			// crashbin.h:309
			const Attribute::Key mNumCollisionsLarge = 1350764677;

			// crashbin.h:310
			const Attribute::Key mNumCollisionsMedium = 1793002098;

			// crashbin.h:311
			const Attribute::Key mNumCollisionsSmall = 2283809110;

			// crashbin.h:312
			const Attribute::Key mOrientation = 3658864366;

			// crashbin.h:313
			const Attribute::Key mSpliceBankAsset = 2854439700;

			// crashbin.h:314
			const Attribute::Key PhysicsImpulseNormalization_MAX = 2814634013;

			// crashbin.h:315
			const Attribute::Key PhysicsImpulseNormalization_MIN = 3171980911;

			// crashbin.h:316
			const Attribute::Key Pitch = [0, 0, 0, 0, 240, 72, 241, 123];

			// crashbin.h:317
			const Attribute::Key Priority = 4256042063;

			// crashbin.h:318
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// crashbin.h:289
		const Attribute::Key crashbin = 4267432407;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct crashbin {
			// crashbin.h:248
			struct _LayoutStruct {
				// crashbin.h:249
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 Volumes;

				// crashbin.h:250
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 Pitch;

				// crashbin.h:251
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 IntensityThreshold;

				// crashbin.h:252
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Text mSpliceBankAsset;

				// attribsys.h:874
				typedef uint64_t UInt64;

				// crashbin.h:253
				Attrib::Gen::crashbin::_LayoutStruct::UInt64 mMaterialB;

				// crashbin.h:254
				Attrib::Gen::crashbin::_LayoutStruct::UInt64 mMaterialA;

				// crashbin.h:255
				Private _Array_mCollisionsSmall;

				// crashbin.h:256
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsSmall;

				// crashbin.h:257
				Private _Array_mCollisionsMedium;

				// crashbin.h:258
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsMedium;

				// crashbin.h:259
				Private _Array_mCollisionsLarge;

				// crashbin.h:260
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsLarge;

				// crashbin.h:261
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float Priority;

				// crashbin.h:262
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float PhysicsImpulseNormalization_MIN;

				// crashbin.h:263
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float PhysicsImpulseNormalization_MAX;

				// crashbin.h:264
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mOrientation;

				// crashbin.h:265
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsSmall;

				// crashbin.h:266
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsMedium;

				// crashbin.h:267
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsLarge;

				// crashbin.h:268
				AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders MixerSlider;

				// crashbin.h:269
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mImpactTime;

				// crashbin.h:270
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mGameModes;

				// crashbin.h:271
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mFatalityFlag;

				// crashbin.h:272
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mCameras;

				// crashbin.h:273
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mAction;

				// crashbin.h:274
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float DistanceFactor_Min;

				// crashbin.h:275
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float DistanceFactor_Max;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// crashbin.h:293
		namespace crashbin {
			// crashbin.h:295
			const Attribute::Key DistanceFactor_Max = 573365220;

			// crashbin.h:296
			const Attribute::Key DistanceFactor_Min = [0, 0, 0, 0, 45, 231, 254, 104];

			// crashbin.h:297
			const Attribute::Key IntensityThreshold = 2372249678;

			// crashbin.h:298
			const Attribute::Key mAction = 1098968938;

			// crashbin.h:299
			const Attribute::Key mCameras = 2502742858;

			// crashbin.h:300
			const Attribute::Key mCollisionsLarge = [0, 0, 0, 0, 134, 66, 183, 145];

			// crashbin.h:301
			const Attribute::Key mCollisionsMedium = 2939608957;

			// crashbin.h:302
			const Attribute::Key mCollisionsSmall = [0, 0, 0, 0, 10, 9, 75, 146];

			// crashbin.h:303
			const Attribute::Key mFatalityFlag = 2673103939;

			// crashbin.h:304
			const Attribute::Key mGameModes = [0, 0, 0, 0, 31, 117, 242, 5];

			// crashbin.h:305
			const Attribute::Key mImpactTime = [0, 0, 0, 0, 52, 48, 213, 184];

			// crashbin.h:306
			const Attribute::Key MixerSlider = [0, 0, 0, 0, 47, 91, 216, 24];

			// crashbin.h:307
			const Attribute::Key mMaterialA = [0, 0, 0, 0, 179, 39, 153, 10];

			// crashbin.h:308
			const Attribute::Key mMaterialB = [0, 0, 0, 0, 196, 124, 233, 196];

			// crashbin.h:309
			const Attribute::Key mNumCollisionsLarge = 1350764677;

			// crashbin.h:310
			const Attribute::Key mNumCollisionsMedium = 1793002098;

			// crashbin.h:311
			const Attribute::Key mNumCollisionsSmall = 2283809110;

			// crashbin.h:312
			const Attribute::Key mOrientation = 3658864366;

			// crashbin.h:313
			const Attribute::Key mSpliceBankAsset = 2854439700;

			// crashbin.h:314
			const Attribute::Key PhysicsImpulseNormalization_MAX = 2814634013;

			// crashbin.h:315
			const Attribute::Key PhysicsImpulseNormalization_MIN = 3171980911;

			// crashbin.h:316
			const Attribute::Key Pitch = [0, 0, 0, 0, 240, 72, 241, 123];

			// crashbin.h:317
			const Attribute::Key Priority = 4256042063;

			// crashbin.h:318
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// crashbin.h:289
		const Attribute::Key crashbin = 4267432407;

	}

}

// crashbin.h:14
struct Attrib::Gen::crashbin : Instance {
public:
	// crashbin.h:16
	Attribute::Key ClassKey();

	// crashbin.h:18
	void * operator new(size_t);

	// crashbin.h:18
	void operator delete(void *, size_t);

	// crashbin.h:18
	void * operator new(size_t, void *);

	// crashbin.h:18
	void operator delete(void *, void *);

	// crashbin.h:19
	void crashbin(const Attrib::Collection *, uint32_t);

	// crashbin.h:20
	void crashbin(const crashbin &);

	// crashbin.h:21
	void crashbin(const Attrib::Instance &);

	// crashbin.h:22
	void crashbin(const Attrib::RefSpec &, uint32_t);

	// crashbin.h:23
	void crashbin(Attribute::Key, uint32_t);

	// crashbin.h:24
	void ~crashbin();

	// crashbin.h:26
	Attribute::Key GetClass() const;

	// crashbin.h:28
	Instance & GetBase();

	// crashbin.h:29
	const Attrib::Instance & GetBase() const;

	// crashbin.h:31
	void Modify(Attribute::Key, unsigned int);

	// crashbin.h:32
	Attribute::Key GenerateUniqueKey(const char *) const;

	// crashbin.h:33
	void Change(const Attrib::Collection *);

	// crashbin.h:34
	void Change(const Attrib::RefSpec &);

	// crashbin.h:35
	void Change(Attribute::Key);

	// crashbin.h:36
	void ChangeWithDefault(const Attrib::RefSpec &);

	// crashbin.h:37
	void ChangeWithDefault(Attribute::Key);

	// crashbin.h:39
	const crashbin & operator=(const crashbin &);

	// crashbin.h:40
	const crashbin & operator=(const Attrib::Instance &);

	// crashbin.h:41
	bool operator==(const crashbin &) const;

	// crashbin.h:42
	bool operator==(const Attrib::Instance &) const;

	// crashbin.h:43
	bool operator!=(const crashbin &) const;

	// crashbin.h:44
	bool operator!=(const Attrib::Instance &) const;

	// crashbin.h:74
	bool DistanceFactor_Max(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// crashbin.h:75
	bool DistanceFactor_Max(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// crashbin.h:76
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & DistanceFactor_Max() const;

	// crashbin.h:77
	bool Set_DistanceFactor_Max(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// crashbin.h:81
	bool DistanceFactor_Min(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// crashbin.h:82
	bool DistanceFactor_Min(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// crashbin.h:83
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & DistanceFactor_Min() const;

	// crashbin.h:84
	bool Set_DistanceFactor_Min(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// crashbin.h:88
	bool IntensityThreshold(Attrib::TAttrib<rw::math::vpu::Vector3> &) const;

	// crashbin.h:89
	bool IntensityThreshold(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &) const;

	// crashbin.h:90
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 & IntensityThreshold() const;

	// crashbin.h:91
	bool Set_IntensityThreshold(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &);

	// crashbin.h:95
	bool mAction(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// crashbin.h:96
	bool mAction(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// crashbin.h:97
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mAction() const;

	// crashbin.h:98
	bool Set_mAction(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// crashbin.h:102
	bool mCameras(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// crashbin.h:103
	bool mCameras(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// crashbin.h:104
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mCameras() const;

	// crashbin.h:105
	bool Set_mCameras(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// crashbin.h:109
	bool mCollisionsLarge(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// crashbin.h:110
	bool mCollisionsLarge(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int) const;

	// crashbin.h:111
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mCollisionsLarge(unsigned int) const;

	// crashbin.h:112
	unsigned int Num_mCollisionsLarge() const;

	// crashbin.h:113
	bool Set_mCollisionsLarge(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int);

	// crashbin.h:117
	bool mCollisionsMedium(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// crashbin.h:118
	bool mCollisionsMedium(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int) const;

	// crashbin.h:119
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mCollisionsMedium(unsigned int) const;

	// crashbin.h:120
	unsigned int Num_mCollisionsMedium() const;

	// crashbin.h:121
	bool Set_mCollisionsMedium(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int);

	// crashbin.h:125
	bool mCollisionsSmall(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// crashbin.h:126
	bool mCollisionsSmall(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int) const;

	// crashbin.h:127
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mCollisionsSmall(unsigned int) const;

	// crashbin.h:128
	unsigned int Num_mCollisionsSmall() const;

	// crashbin.h:129
	bool Set_mCollisionsSmall(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int);

	// crashbin.h:133
	bool mFatalityFlag(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// crashbin.h:134
	bool mFatalityFlag(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// crashbin.h:135
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mFatalityFlag() const;

	// crashbin.h:136
	bool Set_mFatalityFlag(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// crashbin.h:140
	bool mGameModes(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// crashbin.h:141
	bool mGameModes(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// crashbin.h:142
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mGameModes() const;

	// crashbin.h:143
	bool Set_mGameModes(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// crashbin.h:147
	bool mImpactTime(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// crashbin.h:148
	bool mImpactTime(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// crashbin.h:149
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mImpactTime() const;

	// crashbin.h:150
	bool Set_mImpactTime(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// crashbin.h:154
	bool MixerSlider(Attrib::TAttrib<AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders> &) const;

	// crashbin.h:155
	bool MixerSlider(AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders &) const;

	// crashbin.h:156
	const AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders & MixerSlider() const;

	// crashbin.h:157
	bool Set_MixerSlider(const AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders &);

	// crashbin.h:161
	bool mMaterialA(Attrib::TAttrib<EA::Reflection::UInt64> &) const;

	// crashbin.h:162
	bool mMaterialA(Attrib::Gen::crashbin::_LayoutStruct::UInt64 &) const;

	// crashbin.h:163
	const Attrib::Gen::crashbin::_LayoutStruct::UInt64 & mMaterialA() const;

	// crashbin.h:164
	bool Set_mMaterialA(const Attrib::Gen::crashbin::_LayoutStruct::UInt64 &);

	// crashbin.h:168
	bool mMaterialB(Attrib::TAttrib<EA::Reflection::UInt64> &) const;

	// crashbin.h:169
	bool mMaterialB(Attrib::Gen::crashbin::_LayoutStruct::UInt64 &) const;

	// crashbin.h:170
	const Attrib::Gen::crashbin::_LayoutStruct::UInt64 & mMaterialB() const;

	// crashbin.h:171
	bool Set_mMaterialB(const Attrib::Gen::crashbin::_LayoutStruct::UInt64 &);

	// crashbin.h:175
	bool mNumCollisionsLarge(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// crashbin.h:176
	bool mNumCollisionsLarge(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// crashbin.h:177
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumCollisionsLarge() const;

	// crashbin.h:178
	bool Set_mNumCollisionsLarge(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// crashbin.h:182
	bool mNumCollisionsMedium(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// crashbin.h:183
	bool mNumCollisionsMedium(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// crashbin.h:184
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumCollisionsMedium() const;

	// crashbin.h:185
	bool Set_mNumCollisionsMedium(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// crashbin.h:189
	bool mNumCollisionsSmall(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// crashbin.h:190
	bool mNumCollisionsSmall(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// crashbin.h:191
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumCollisionsSmall() const;

	// crashbin.h:192
	bool Set_mNumCollisionsSmall(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// crashbin.h:196
	bool mOrientation(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// crashbin.h:197
	bool mOrientation(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// crashbin.h:198
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & mOrientation() const;

	// crashbin.h:199
	bool Set_mOrientation(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// crashbin.h:203
	bool mSpliceBankAsset(Attrib::TAttrib<const char*> &) const;

	// crashbin.h:204
	bool mSpliceBankAsset(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// crashbin.h:205
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & mSpliceBankAsset() const;

	// crashbin.h:206
	bool Set_mSpliceBankAsset(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// crashbin.h:210
	bool PhysicsImpulseNormalization_MAX(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// crashbin.h:211
	bool PhysicsImpulseNormalization_MAX(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// crashbin.h:212
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PhysicsImpulseNormalization_MAX() const;

	// crashbin.h:213
	bool Set_PhysicsImpulseNormalization_MAX(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// crashbin.h:217
	bool PhysicsImpulseNormalization_MIN(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// crashbin.h:218
	bool PhysicsImpulseNormalization_MIN(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// crashbin.h:219
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PhysicsImpulseNormalization_MIN() const;

	// crashbin.h:220
	bool Set_PhysicsImpulseNormalization_MIN(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// crashbin.h:224
	bool Pitch(Attrib::TAttrib<rw::math::vpu::Vector3> &) const;

	// crashbin.h:225
	bool Pitch(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &) const;

	// crashbin.h:226
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 & Pitch() const;

	// crashbin.h:227
	bool Set_Pitch(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &);

	// crashbin.h:231
	bool Priority(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// crashbin.h:232
	bool Priority(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// crashbin.h:233
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Priority() const;

	// crashbin.h:234
	bool Set_Priority(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// crashbin.h:238
	bool Volumes(Attrib::TAttrib<rw::math::vpu::Vector3> &) const;

	// crashbin.h:239
	bool Volumes(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &) const;

	// crashbin.h:240
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 & Volumes() const;

	// crashbin.h:241
	bool Set_Volumes(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &);

private:
	// crashbin.h:278
	unsigned int GetLayoutSize();

	// crashbin.h:281
	crashbin & ConvertFromInstance(Instance &);

	// crashbin.h:282
	const crashbin & ConvertFromInstance(const Attrib::Instance &);

}

