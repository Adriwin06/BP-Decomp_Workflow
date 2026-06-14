// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionStateManager.h:40
		namespace Collision {
			// Declaration
			struct HingeStateCache {
				// BrnCollisionStateManager.h:169
				struct CacheNode {
					// BrnSoundLogicSharedIO.h:68
					typedef JointedPartStateEvent JointedPartStateEvent;

					// BrnCollisionStateManager.h:172
					BrnSound::Logic::Collision::HingeStateCache::CacheNode::JointedPartStateEvent mEvent;

					// BrnCollisionStateManager.h:173
					bool mbValid;

					// BrnCollisionStateManager.h:174
					float32_t mfTimeLastSeen;

					// BrnCollisionStateManager.h:175
					bool mbHingeOpen;

					// BrnCollisionStateManager.h:176
					bool mbHingeClose;

				public:
					// BrnCollisionStateManager.h:170
					CacheNode();

				}

			}

		}

		// BrnTrafficStateManager.h:23
		namespace Traffic {
			// Declaration
			struct TrafficStateManager {
				// BrnTrafficStateManager.h:102
				struct SortResult {
					// BrnTrafficStateManager.h:110
					VecFloat mfDistance;

					// BrnTrafficStateManager.h:111
					uint16_t muIndex;

				public:
					// BrnTrafficStateManager.h:105
					bool LessThanDistance(const BrnSound::Logic::Traffic::TrafficStateManager::SortResult &, const BrnSound::Logic::Traffic::TrafficStateManager::SortResult &);

				}

				// BrnTrafficStateManager.h:115
				struct Slot {
					// BrnSoundLogicSharedIO.h:63
					typedef TrafficSoundEntity TrafficSoundEntity;

					// BrnTrafficStateManager.h:117
					BrnSound::Logic::Traffic::TrafficStateManager::Slot::TrafficSoundEntity mEntity;

					// BrnTrafficStateManager.h:118
					bool mbActive;

					// BrnTrafficStateManager.h:119
					CgsSound::Logic::State * mpAttachedState;

				public:
					// BrnTrafficStateManager.h:116
					Slot();

				}

			}

		}

	}

}

