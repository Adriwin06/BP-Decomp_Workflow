// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct MicrophoneSystem {
			// CgsMicrophone.h:45
			enum EMicPositions {
				E_MIC_CAMERA = 0,
				E_MIC_PLAYER = 1,
				E_MIC_MAX_NUM_POSITIONS = 2,
			}

			// CgsMicrophone.h:52
			enum EPlayer {
				E_PLAYER_1 = 0,
				E_PLAYER_2 = 1,
				E_MAX_NUM_PLAYERS = 2,
			}

			// CgsMicrophone.h:62
			struct Microphone {
			private:
				// CgsMicrophone.h:162
				DataPoint<rw::math::vpu::Matrix44Affine> mMicrophoneMatrix;

				// CgsMicrophone.h:165
				Vector3 mDirection;

				// CgsMicrophone.h:166
				Vector3 mVelocity;

			public:
				// CgsMicrophone.h:63
				Microphone();

				// CgsMicrophone.h:69
				void Reset();

				// CgsMicrophone.h:79
				void Update(float32_t);

				// CgsMicrophone.h:83
				VecFloat GetDistanceSqrdFromPoint(Vector3);

				// CgsMicrophone.h:87
				VecFloat GetDistanceSqrdFromPoint(Vector2);

				// CgsMicrophone.h:94
				Vector3 GetCurPosition() const;

				// CgsMicrophone.h:101
				Vector3 GetPreviousPosition() const;

				// CgsMicrophone.h:108
				Vector3 GetDirection() const;

				// CgsMicrophone.h:115
				Vector3 GetVelocity() const;

				// CgsMicrophone.h:126
				Vector2 Get2dCurPosition() const;

				// CgsMicrophone.h:131
				Vector2 Get2dPrevPosition() const;

				// CgsMicrophone.h:135
				const rw::math::vpu::Vector2 Get2dDirection() const;

				// CgsMicrophone.h:139
				const rw::math::vpu::Vector2 Get2dVelocity() const;

				// CgsMicrophone.h:144
				void SetMicrophoneMatrix(Matrix44Affine);

				// CgsMicrophone.h:153
				const DataPoint<rw::math::vpu::Matrix44Affine> & GetMicrophoneMatrix() const;

			private:
				// CgsMicrophone.h:170
				Vector2 Flatten(Vector3) const;

			}

		}

	}

}

// CgsMicrophone.h:39
struct CgsSound::Logic::MicrophoneSystem {
private:
	// CgsMicrophone.h:212
	int32_t miNumPlayers;

	// CgsMicrophone.h:213
	CgsSound::Logic::MicrophoneSystem::Microphone[2][2] mMicrophones;

public:
	// CgsMicrophone.h:41
	void MicrophoneSystem();

	// CgsMicrophone.h:180
	void SetMicrophoneMatrix(Matrix44Affine, CgsSound::Logic::MicrophoneSystem::EMicPositions, CgsSound::Logic::MicrophoneSystem::EPlayer);

	// CgsMicrophone.h:185
	void UpdateMicrophones(float32_t);

	// CgsMicrophone.h:191
	CgsSound::Logic::MicrophoneSystem::Microphone & GetMicrophone(CgsSound::Logic::MicrophoneSystem::EMicPositions, int32_t);

	// CgsMicrophone.h:197
	const CgsSound::Logic::MicrophoneSystem::Microphone & GetMicrophone(CgsSound::Logic::MicrophoneSystem::EMicPositions, int32_t) const;

	// CgsMicrophone.h:202
	void SetNumberOfPlayers(int32_t);

	// CgsMicrophone.h:206
	int32_t GetNumberOfPlayers() const;

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsMemBase.h:38
	namespace Logic {
		// Declaration
		struct MicrophoneSystem {
			// CgsMicrophone.h:45
			enum EMicPositions {
				E_MIC_CAMERA = 0,
				E_MIC_PLAYER = 1,
				E_MIC_MAX_NUM_POSITIONS = 2,
			}

			// CgsMicrophone.h:52
			enum EPlayer {
				E_PLAYER_1 = 0,
				E_PLAYER_2 = 1,
				E_MAX_NUM_PLAYERS = 2,
			}

			// CgsMicrophone.h:62
			struct Microphone {
			private:
				// CgsMicrophone.h:162
				DataPoint<rw::math::vpu::Matrix44Affine> mMicrophoneMatrix;

				// CgsMicrophone.h:165
				Vector3 mDirection;

				// CgsMicrophone.h:166
				Vector3 mVelocity;

			public:
				// CgsMicrophone.h:63
				Microphone();

				// CgsMicrophone.h:69
				void Reset();

				// CgsMicrophone.h:79
				void Update(float32_t);

				// CgsMicrophone.h:83
				VecFloat GetDistanceSqrdFromPoint(Vector3);

				// CgsMicrophone.h:87
				VecFloat GetDistanceSqrdFromPoint(Vector2);

				// CgsMicrophone.h:94
				Vector3 GetCurPosition() const;

				// CgsMicrophone.h:101
				Vector3 GetPreviousPosition() const;

				// CgsMicrophone.h:108
				Vector3 GetDirection() const;

				// CgsMicrophone.h:115
				Vector3 GetVelocity() const;

				// CgsMicrophone.h:126
				Vector2 Get2dCurPosition() const;

				// CgsMicrophone.h:131
				Vector2 Get2dPrevPosition() const;

				// CgsMicrophone.h:135
				const rw::math::vpu::Vector2 Get2dDirection() const;

				// CgsMicrophone.h:139
				const rw::math::vpu::Vector2 Get2dVelocity() const;

				// CgsMicrophone.h:144
				void SetMicrophoneMatrix(Matrix44Affine);

				// CgsMicrophone.h:153
				const DataPoint<rw::math::vpu::Matrix44Affine> & GetMicrophoneMatrix() const;

			private:
				// CgsMicrophone.h:170
				Vector2 Flatten(Vector3) const;

			}

		}

	}

}

