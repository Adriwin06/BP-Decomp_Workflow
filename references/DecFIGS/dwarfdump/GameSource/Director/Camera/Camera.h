// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct Camera {
			// Camera.h:185
			struct ShotSelectionInfo {
				// Camera.h:189
				int32_t miType;

				// Camera.h:190
				int32_t miId;

			public:
				// Camera.h:187
				void Clear();

			}

		}

		// Camera.h:538
		extern void StopCurrentEffect(Camera &, const EffectInterface &);

		// Camera.h:562
		extern void EnsureEffectIsPlaying(Camera &, const EffectInterface &, const char *, float32_t);

		// Camera.h:253
		extern bool IsLookingAtTarget(const Camera &, Matrix44Affine, const AABBox &);

		// Camera.h:584
		extern void EnsureEffectIsStopped(Camera &, const EffectInterface &, const char *);

	}

}

// Camera.h:61
struct BrnDirector::Camera::Camera {
	// Camera.h:200
	extern float32_t KF_SMALL_NEAR_CLIP_DISTANCE;

	// Camera.h:201
	extern float32_t KF_DEFAULT_NEAR_CLIP_DISTANCE;

	// Camera.h:202
	extern float32_t KF_DEFAULT_FAR_CLIP_DISTANCE;

private:
	// Camera.h:208
	Matrix44Affine mTransform;

	// Camera.h:209
	Vector3 mSubject;

	// Camera.h:210
	const BrnDirector::Camera::Behaviour * mpDebugInfoBehaviour;

	// Unknown accessibility
	// Camera.h:43
	typedef const Attrib::RefSpec ShotReference;

	// Camera.h:211
	Camera::ShotReference * mpSourceShot;

	// Camera.h:212
	float32_t mfFOV;

	// Camera.h:213
	float32_t mfAspectRatio;

	// Camera.h:214
	float32_t mfRunningTime;

	// Camera.h:219
	const BrnDirector::CrashAnalysis * mpCrashAnalysis;

	// Camera.h:221
	CameraEffects mEffects;

	// Camera.h:222
	DepthOfField mDepthOfField;

	// Camera.h:223
	CameraState mState;

	// Camera.h:225
	float32_t mfCustomNearClipDistance;

	// Camera.h:227
	BrnDirector::Camera::Camera::ShotSelectionInfo mShotSelectionInfo;

	// Camera.h:229
	bool mbHasSubject;

	// Camera.h:230
	bool mbHasCustomNearClipDistance;

public:
	// Camera.h:69
	void Construct();

	// Camera.h:72
	void Clear();

	// Camera.h:75
	void ValidateTransformWithDebugInfo() const;

	// Camera.h:78
	float32_t GetZoomFactor() const;

	// Camera.h:81
	float32_t GetLodZoomFactor() const;

	// Camera.h:84
	float32_t GetFOV() const;

	// Camera.h:88
	void SetFOV(float32_t);

	// Camera.h:91
	float32_t GetAspectRatio() const;

	// Camera.h:95
	void SetAspectRatio(float32_t);

	// Camera.h:98
	Matrix44Affine & GetTransform();

	// Camera.h:101
	const rw::math::vpu::Matrix44Affine & GetTransform() const;

	// Camera.h:105
	void SetTransform(Matrix44Affine);

	// Camera.h:108
	bool HasSubject() const;

	// Camera.h:111
	const rw::math::vpu::Vector3 & GetSubject() const;

	// Camera.h:115
	void SetSubject(Vector3);

	// Camera.h:119
	void CopyToCgsCamera(Camera *) const;

	// Camera.h:123
	void SetDebugInfoBehaviour(const BrnDirector::Camera::Behaviour *);

	// Camera.h:126
	const BrnDirector::Camera::Behaviour * GetDebugInfoBehaviour() const;

	// Camera.h:129
	DepthOfField & GetDepthOfField();

	// Camera.h:132
	const DepthOfField & GetDepthOfField() const;

	// Camera.h:135
	CameraEffects & GetEffects();

	// Camera.h:138
	const CameraEffects & GetEffects() const;

	// Camera.h:141
	CameraState & GetState();

	// Camera.h:144
	const CameraState & GetState() const;

	// Camera.h:147
	bool IsValid() const;

	// Camera.h:153
	float32_t GetRunningTime() const;

	// Camera.h:159
	void SetRunningTime(float32_t);

	// Camera.h:165
	const BrnDirector::CrashAnalysis * GetAnalysis() const;

	// Camera.h:170
	void SetAnalysis(const BrnDirector::CrashAnalysis *);

	// Camera.h:174
	float32_t GetNearClipDistance() const;

	// Camera.h:178
	void SetCustomNearClipDistance(float32_t);

	// Camera.h:194
	const BrnDirector::Camera::Camera::ShotSelectionInfo & GetShotSelectionInfo() const;

	// Camera.h:198
	void SetShotSelectionInfo(const BrnDirector::Camera::Camera::ShotSelectionInfo &);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct Camera {
			// Camera.h:185
			struct ShotSelectionInfo {
				// Camera.h:189
				int32_t miType;

				// Camera.h:190
				int32_t miId;

			public:
				// Camera.h:187
				void Clear();

			}

		}

	}

}

// Camera.h:200
extern float32_t KF_SMALL_NEAR_CLIP_DISTANCE;

// Camera.h:201
extern float32_t KF_DEFAULT_NEAR_CLIP_DISTANCE;

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct Camera {
			// Camera.h:185
			struct ShotSelectionInfo {
				// Camera.h:189
				int32_t miType;

				// Camera.h:190
				int32_t miId;

			public:
				// Camera.h:187
				void Clear();

			}

		}

	}

}

