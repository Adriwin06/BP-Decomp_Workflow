// BrnSoundLoopModelData.h:40
namespace BrnSound {
	// BrnStaticSoundMap.h:29
	namespace World {
		// Declaration
		struct StaticSoundEntity {
			// BrnStaticSoundMap.h:136
			union UFloatHelper {
				// BrnStaticSoundMap.h:137
				float32_t mfPlusComponent;

				// BrnStaticSoundMap.h:138
				uint32_t mu32Bits;

			}
		}

		struct SubRegionDescriptor;

		// Declaration
		struct StaticSoundMap {
			// BrnStaticSoundMap.h:217
			enum eRootType {
				E_ROOT_TYPE_PASSBY = 0,
				E_ROOT_TYPE_EMITTER = 1,
				E_ROOT_TYPE_COUNT = 2,
			}

		}

		struct StaticSoundMapResourceType;

	}

}

// BrnStaticSoundMap.h:59
struct BrnSound::World::StaticSoundEntity {
protected:
	// BrnStaticSoundMap.h:152
	Vector3Plus mPosPlus;

public:
	// BrnStaticSoundMap.h:74
	void Construct(Vector3, float32_t, uint16_t);

	// BrnStaticSoundMap.h:82
	StaticSoundEntity & operator=(const StaticSoundEntity &);

	// BrnStaticSoundMap.h:89
	Vector3 GetPos() const;

	// BrnStaticSoundMap.h:96
	Road::Vector3 GetPosFpu() const;

	// BrnStaticSoundMap.h:103
	float32_t GetRadius() const;

	// BrnStaticSoundMap.h:110
	uint16_t GetType() const;

	// BrnStaticSoundMap.h:117
	void FixUp();

}

// BrnStaticSoundMap.h:166
struct BrnSound::World::SubRegionDescriptor {
	// BrnStaticSoundMap.h:190
	int16_t mi16First;

	// BrnStaticSoundMap.h:191
	int16_t mi16Count;

public:
	// BrnStaticSoundMap.h:175
	void FixUp();

}

// BrnStaticSoundMap.h:207
struct BrnSound::World::StaticSoundMap {
private:
	// BrnStaticSoundMap.h:365
	Vector2 mMin;

	// BrnStaticSoundMap.h:366
	Vector2 mMax;

	// BrnStaticSoundMap.h:368
	float32_t mfSubRegionSize;

	// BrnStaticSoundMap.h:373
	const SubRegionDescriptor * mpSubRegions;

	// BrnStaticSoundMap.h:374
	int32_t miNumSubRegionsX;

	// BrnStaticSoundMap.h:375
	int32_t miNumSubRegionsZ;

	// BrnStaticSoundMap.h:377
	const StaticSoundEntity * mpEntities;

	// BrnStaticSoundMap.h:378
	int32_t miNumEntities;

	// BrnStaticSoundMap.h:380
	BrnSound::World::StaticSoundMap::eRootType meRootType;

public:
	// BrnStaticSoundMap.h:244
	void Construct(Vector2, Vector2, const StaticSoundEntity *, int32_t, BrnSound::World::StaticSoundMap::eRootType);

	// BrnStaticSoundMap.h:251
	BrnSound::World::StaticSoundMap::eRootType GetRootType() const;

	// BrnStaticSoundMap.h:258
	int32_t GetNumEntities() const;

	// BrnStaticSoundMap.h:267
	void GetNumSubRegions(int32_t &, int32_t &) const;

	// BrnStaticSoundMap.h:274
	float32_t GetSubRegionSize() const;

	// BrnStaticSoundMap.h:282
	const StaticSoundEntity & GetEntity(int32_t) const;

	// BrnStaticSoundMap.h:294
	const SubRegionDescriptor * GetSubRegionDescriptor(const Vector3Template<float> &) const;

	// BrnStaticSoundMap.h:302
	const rw::math::vpu::Vector2 & GetMin() const;

	// BrnStaticSoundMap.h:310
	const rw::math::vpu::Vector2 & GetMax() const;

	// BrnStaticSoundMap.h:326
	void SetSubRegionDescriptors(SubRegionDescriptor *, int32_t, int32_t, float32_t);

	// BrnStaticSoundMap.h:338
	bool IsInRange(const Vector3Template<float> &, float32_t, const Vector4Template<float> &);

private:
	// BrnStaticSoundMap.h:351
	void SetMinAndMax(Vector2, Vector2);

	// BrnStaticSoundMap.h:359
	void SetSubRegionSize(float32_t);

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundWorldScene.h:32
	namespace World {
		// Declaration
		struct StaticSoundEntity {
			// BrnStaticSoundMap.h:136
			union UFloatHelper {
				// BrnStaticSoundMap.h:137
				float32_t mfPlusComponent;

				// BrnStaticSoundMap.h:138
				uint32_t mu32Bits;

			}
		}

		// Declaration
		struct StaticSoundMap {
			// BrnStaticSoundMap.h:217
			enum eRootType {
				E_ROOT_TYPE_PASSBY = 0,
				E_ROOT_TYPE_EMITTER = 1,
				E_ROOT_TYPE_COUNT = 2,
			}

		}

	}

}

