// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionStateManager.h:40
		namespace Collision {
			// Declaration
			struct CollisionState {
				// BrnCollisionState.h:40
				enum ELifetime {
					E_NONE = 0,
					E_COLLISION = 1,
					E_SCRAPE = 2,
				}

			}

		}

	}

}

// BrnCollisionState.h:33
struct BrnSound::Logic::Collision::CollisionState : public BrnSound::Logic::BrnState {
protected:
	// BrnCollisionState.cpp:24
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

private:
	// BrnCollisionState.h:88
	DataPoint<BrnSound::Logic::Collision::CollisionState::ELifetime> meLifetime;

	// BrnCollisionState.h:89
	OutputCollision mOutputCollision;

	// BrnCollisionState.h:90
	float32_t mfTimeWeAttached;

public:
	void CollisionState(const CollisionState &);

	// BrnCollisionState.cpp:24
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnCollisionState.cpp:24
	virtual const char * GetTypeName() const;

	// BrnCollisionState.h:35
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnCollisionState.cpp:24
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnCollisionState.cpp:33
	void CollisionState();

	// BrnCollisionState.cpp:38
	virtual void ~CollisionState();

	// BrnCollisionState.cpp:47
	virtual void Attach(void *);

	// BrnCollisionState.cpp:70
	virtual bool Detach();

	// BrnCollisionState.cpp:63
	virtual void UpdateParams(float32_t);

	// BrnCollisionState.h:121
	const OutputCollision & GetOutputCollision() const;

	// BrnCollisionState.h:107
	DataPoint<BrnSound::Logic::Collision::CollisionState::ELifetime> GetLifetime() const;

	// BrnCollisionState.h:114
	void SetLifetime(BrnSound::Logic::Collision::CollisionState::ELifetime);

	// BrnCollisionState.h:128
	BrnSound::Logic::Collision::CollisionStateManager * GetCollisionStateManager();

	// BrnCollisionState.cpp:77
	void UpdateScrape(const InputCollision &);

	// BrnCollisionState.h:97
	float32_t GetTimeWeAttached() const;

}

