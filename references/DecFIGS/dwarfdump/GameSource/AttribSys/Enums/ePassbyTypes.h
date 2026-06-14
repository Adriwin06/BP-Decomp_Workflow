// ParticleBlend.h:7
namespace AttribSys {
	// ParticleBlend.h:9
	namespace Enums {
		// ePassbyTypes.h:11
		namespace ePassbyTypes {
			// ePassbyTypes.h:35
			const int KI_NUM_ENUMS = 20;

			// ePassbyTypes.h:36
			const int KI_MAX_VALUE = 19;

		}

	}

}

// NativeParticleType.h:7
namespace AttribSys {
	// NativeParticleType.h:9
	namespace Enums {
		// ePassbyTypes.h:11
		namespace ePassbyTypes {
			// ePassbyTypes.h:35
			const int KI_NUM_ENUMS = 20;

			// ePassbyTypes.h:36
			const int KI_MAX_VALUE = 19;

		}

	}

}

// PresentationAction.h:7
namespace AttribSys {
	// PresentationAction.h:9
	namespace Enums {
		// ePassbyTypes.h:11
		namespace ePassbyTypes {
			// ePassbyTypes.h:35
			const int KI_NUM_ENUMS = 20;

			// ePassbyTypes.h:36
			const int KI_MAX_VALUE = 19;

		}

	}

}

// PresentationAction.h:7
namespace AttribSys {
	// PresentationAction.h:9
	namespace Enums {
		// ePassbyTypes.h:11
		namespace ePassbyTypes {
			// ePassbyTypes.h:12
			enum ePassbyTypes {
				PassbyAzimuth = 0,
				PassbyPitch = 1,
				PassbyCutoff = 2,
				TrafficSmall = 3,
				TrafficMedium = 4,
				TrafficLarge = 5,
				LampPost = 6,
				Tree = 7,
				Bridge = 8,
				Tunnel = 9,
				Camera = 10,
				Misc = 11,
				Collision = 12,
				Overpass = 13,
				Warehouse = 14,
				Alley = 15,
				StaticMetal = 16,
				LargeOverheadObject = 17,
				PassbyBoostOffset = 18,
				MaxPassbyTypes = 19,
			}

			// ePassbyTypes.h:35
			const int KI_NUM_ENUMS = 20;

			// ePassbyTypes.h:36
			const int KI_MAX_VALUE = 19;

		}

	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnPassbyStateManager.h:28
		namespace Passby {
			// Declaration
			struct PassbyStateManager {
				// BrnPassbyStateManager.h:79
				struct Passby {
					// BrnPassbyStateManager.h:111
					Vector3 mStaticPos;

					// BrnPassbyStateManager.h:112
					const CgsSound::Logic::Cgs3dEffectControl * mp3dControl;

					// BrnPassbyStateManager.h:113
					float32_t mfRelativeVelocityMagnitude;

					// ePassbyTypes.h:39
					typedef AttribSys::Enums::ePassbyTypes::ePassbyTypes EePassbyTypes;

					// BrnPassbyStateManager.h:114
					BrnSound::Logic::Passby::PassbyStateManager::Passby::EePassbyTypes meType;

					// BrnPassbyStateManager.h:115
					float32_t mfVolumeModifier;

					// BrnPassbyStateManager.h:116
					bool mbSuppressBoostBys;

				public:
					// BrnPassbyStateManager.h:85
					Passby(const CgsSound::Logic::Cgs3dEffectControl *, float32_t, BrnSound::Logic::Passby::PassbyStateManager::Passby::EePassbyTypes, bool, float32_t);

					// BrnPassbyStateManager.h:102
					Passby(Vector3, float32_t, BrnSound::Logic::Passby::PassbyStateManager::Passby::EePassbyTypes, bool, float32_t);

				}

				// BrnPassbyStateManager.h:133
				struct DynamicPropByCache {
					// BrnPassbyStateManager.h:137
					struct Item {
						// BrnPassbyStateManager.h:138
						bool mbActive;

						// BrnPassbyStateManager.h:139
						float32_t mfTimeStamp;

						// BrnPassbyStateManager.h:140
						EntityId mId;

					public:
						// BrnPassbyStateManager.h:141
						Item();

					}

					// BrnPassbyStateManager.h:134
					extern const uint32_t KU_SIZE = 32;

					// BrnPassbyStateManager.h:142
					BrnSound::Logic::Passby::PassbyStateManager::DynamicPropByCache::Item[32] maItems;

				public:
					// BrnPassbyStateManager.h:146
					void Update(float32_t);

					// BrnPassbyStateManager.h:160
					BrnSound::Logic::Passby::PassbyStateManager::DynamicPropByCache::Item * Insert(float32_t, const EntityId &);

					// BrnPassbyStateManager.h:180
					BrnSound::Logic::Passby::PassbyStateManager::DynamicPropByCache::Item * Find(const EntityId &);

				}

			}

		}

	}

}

// NativeParticleType.h:7
namespace AttribSys {
	// NativeParticleType.h:9
	namespace Enums {
		// ePassbyTypes.h:11
		namespace ePassbyTypes {
			// ePassbyTypes.h:12
			enum ePassbyTypes {
				PassbyAzimuth = 0,
				PassbyPitch = 1,
				PassbyCutoff = 2,
				TrafficSmall = 3,
				TrafficMedium = 4,
				TrafficLarge = 5,
				LampPost = 6,
				Tree = 7,
				Bridge = 8,
				Tunnel = 9,
				Camera = 10,
				Misc = 11,
				Collision = 12,
				Overpass = 13,
				Warehouse = 14,
				Alley = 15,
				StaticMetal = 16,
				LargeOverheadObject = 17,
				PassbyBoostOffset = 18,
				MaxPassbyTypes = 19,
			}

			// ePassbyTypes.h:35
			const int KI_NUM_ENUMS = 20;

			// ePassbyTypes.h:36
			const int KI_MAX_VALUE = 19;

		}

	}

}

