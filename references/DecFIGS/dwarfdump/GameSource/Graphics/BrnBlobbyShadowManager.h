// _built-in_
namespace :: {
	// BrnBlobbyShadowManager.h:25
	const float32_t KF_BLOBBY_SHADOW_ALPHA;

}

// BrnBlobbyShadowManager.h:49
extern const int32_t KI_MAX_SHADOWS = 64;

// BrnBlobbyShadowManager.h:32
struct BrnBlobbyShadowManager {
	// BrnBlobbyShadowManager.h:36
	struct BrnBlobbyShadowBuffer {
		// BrnBlobbyShadowManager.h:52
		struct ShadowStruct {
			// BrnBlobbyShadowManager.h:54
			Vector3 mvPos;

			// BrnBlobbyShadowManager.h:55
			Vector3 mvAt;

			// BrnBlobbyShadowManager.h:56
			Vector3Plus mvScaledRight_HeightOffGround;

			// BrnBlobbyShadowManager.h:57
			Vector4 mvFront_Rear_BackAxle_FrontAxle;

		}

	protected:
		// BrnBlobbyShadowManager.h:49
		extern const int32_t KI_MAX_SHADOWS = 64;

		// BrnBlobbyShadowManager.h:64
		int32_t miNumShadows;

		// BrnBlobbyShadowManager.h:65
		BrnBlobbyShadowManager::BrnBlobbyShadowBuffer::ShadowStruct[64] maShadowPos;

	public:
		// BrnBlobbyShadowManager.h:45
		bool AddShadow(Matrix44Affine, Vector4, VecFloat, VecFloat);

	protected:
		// BrnBlobbyShadowManager.h:61
		void Construct();

	}

}

// BrnBlobbyShadowManager.h:32
struct BrnBlobbyShadowManager {
	// BrnBlobbyShadowManager.h:36
	struct BrnBlobbyShadowBuffer {
		// BrnBlobbyShadowManager.h:52
		struct ShadowStruct {
			// BrnBlobbyShadowManager.h:54
			Vector3 mvPos;

			// BrnBlobbyShadowManager.h:55
			Vector3 mvAt;

			// BrnBlobbyShadowManager.h:56
			Vector3Plus mvScaledRight_HeightOffGround;

			// BrnBlobbyShadowManager.h:57
			Vector4 mvFront_Rear_BackAxle_FrontAxle;

		}

	protected:
		// BrnBlobbyShadowManager.h:49
		extern const int32_t KI_MAX_SHADOWS = 64;

		// BrnBlobbyShadowManager.h:64
		int32_t miNumShadows;

		// BrnBlobbyShadowManager.h:65
		BrnBlobbyShadowManager::BrnBlobbyShadowBuffer::ShadowStruct[64] maShadowPos;

	public:
		// BrnBlobbyShadowManager.h:45
		bool AddShadow(Matrix44Affine, Vector4, VecFloat, VecFloat);

	protected:
		// BrnBlobbyShadowManager.h:61
		void Construct();

	}

protected:
	// BrnBlobbyShadowManager.h:97
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer[2] maBuffers;

	// BrnBlobbyShadowManager.h:98
	uint8_t mu8Internal;

	// BrnBlobbyShadowManager.h:99
	uint8_t mu8External;

public:
	// BrnBlobbyShadowManager.h:70
	void Construct();

	// BrnBlobbyShadowManager.h:73
	void Destruct();

	// BrnBlobbyShadowManager.h:76
	bool Prepare();

	// BrnBlobbyShadowManager.h:79
	bool Release();

	// BrnBlobbyShadowManager.h:82
	void Swap();

	// BrnBlobbyShadowManager.h:90
	void Render(Matrix44, CgsGraphics::Im3d *, renderengine::Texture *, float32_t, float32_t);

	// BrnBlobbyShadowManager.h:94
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * GetExternalBuffer();

}

