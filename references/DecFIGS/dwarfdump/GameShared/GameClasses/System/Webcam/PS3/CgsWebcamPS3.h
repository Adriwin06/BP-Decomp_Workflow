// CgsTimeUtils.h:32
namespace CgsSystem {
	// Declaration
	struct WebcamPS3 {
		// CgsWebcamPS3.h:60
		struct CameraPicture {
			// CgsWebcamPS3.h:62
			enum EFormat {
				E_FORMAT_ARGB = 0,
				E_FORMAT_YUV422 = 1,
				E_FORMAT_NUM = 2,
			}

			// CgsWebcamPS3.h:70
			int32_t miWidth;

			// CgsWebcamPS3.h:71
			int32_t miHeight;

			// CgsWebcamPS3.h:72
			int32_t miStride;

			// CgsWebcamPS3.h:73
			int32_t miFrameNumber;

			// CgsWebcamPS3.h:74
			CgsSystem::WebcamPS3::CameraPicture::EFormat meFormat;

			// CgsWebcamPS3.h:76
			const char * mpcPixelData;

		}

		// CgsWebcamPS3.h:79
		enum ECameraStatus {
			E_CAMERA_STATUS_DETACHED = 0,
			E_CAMERA_STATUS_ATTACHED = 1,
			E_CAMERA_STATUS_COUNT = 2,
		}

	}

}

// CgsWebcamPS3.h:48
struct CgsSystem::WebcamPS3 {
private:
	// CgsWebcamPS3.h:129
	extern const int32_t KI_INVALID_FRAME_NUM = 4294967295;

	// CgsWebcamPS3.h:130
	extern const int32_t KI_NUM_TEXTURE_BUFFERS = 2;

	// CgsWebcamPS3.h:131
	extern const int32_t KI_BYTES_PER_PIXEL;

	// CgsWebcamPS3.h:133
	bool mbRunningSPUJpgDecode;

	// CgsWebcamPS3.h:134
	Job mJpgDecodeJob;

	// CgsWebcamPS3.h:135
	JpgDecodeData mJobData;

	// CgsWebcamPS3.h:137
	CellCameraInfoEx mCameraInfo;

	// CgsWebcamPS3.h:138
	CellCameraType mCameraType;

	// CgsWebcamPS3.h:139
	Thread mBackgroundWorkerThread;

	// CgsWebcamPS3.h:140
	EAThreadDynamicData::AtomicInt32 miCloseThread;

	// CgsWebcamPS3.h:142
	HeapMalloc * mpHeapMalloc;

	// CgsWebcamPS3.h:144
	sys_memory_container_t mMemoryContainer;

	// CgsWebcamPS3.h:146
	char *[2] mapSourceBuffers;

	// CgsWebcamPS3.h:147
	char *[2] mapDecodedBuffers;

	// CgsWebcamPS3.h:149
	int32_t miWriteToTexture;

	// CgsWebcamPS3.h:150
	int32_t miDecodeFromTexture;

	// CgsWebcamPS3.h:151
	int32_t miDecodeToTexture;

	// CgsWebcamPS3.h:152
	int32_t miReadFromTexture;

	// CgsWebcamPS3.h:154
	int32_t miDeviceNumber;

	// CgsWebcamPS3.h:155
	CgsSystem::WebcamPS3::ECameraStatus meCameraStatus;

	// CgsWebcamPS3.h:157
	int32_t miFrameNumber;

	// CgsWebcamPS3.h:159
	bool mbNewPictureRead;

	// CgsWebcamPS3.h:160
	bool mbUnsupportedCamera;

	// CgsWebcamPS3.h:161
	bool mbConvertYUVToARGB;

	// CgsWebcamPS3.h:162
	bool mbDoFullUpdate;

	// CgsWebcamPS3.h:163
	bool mbCameraSuspended;

public:
	// CgsWebcamPS3.h:89
	void Construct();

	// CgsWebcamPS3.h:95
	bool Prepare(HeapMalloc *, sys_memory_container_t);

	// CgsWebcamPS3.h:99
	bool Release();

	// CgsWebcamPS3.h:103
	void Destruct();

	// CgsWebcamPS3.h:108
	void Update(bool);

	// CgsWebcamPS3.h:111
	CgsSystem::WebcamPS3::ECameraStatus GetCameraStatus() const;

	// CgsWebcamPS3.h:116
	bool GetCameraPicture(CgsSystem::WebcamPS3::CameraPicture *) const;

	// CgsWebcamPS3.h:121
	renderengine::PixelFormat GetCameraPictureFormat() const;

	// CgsWebcamPS3.h:125
	void SetConvertYUVToARGB(bool);

private:
	// CgsWebcamPS3.h:166
	bool StartStreaming();

	// CgsWebcamPS3.h:169
	void OpenCamera();

	// CgsWebcamPS3.h:172
	void CloseCamera();

	// CgsWebcamPS3.h:175
	void UpdateSPUJob();

	// CgsWebcamPS3.h:184
	void ConvertRaw8ToARGB(unsigned char *, unsigned char *, int32_t, int32_t, uint8_t);

	// CgsWebcamPS3.h:193
	void ConvertYUV422ToARGB(unsigned char *, unsigned char *, int32_t, int32_t, uint8_t);

	// CgsWebcamPS3.h:197
	void HandleCameraReadCellOK();

	// CgsWebcamPS3.h:200
	void HandleCameraReadCellDeviceNotFound();

	// CgsWebcamPS3.h:203
	void HandleCameraReadDeviceNotFound();

	// CgsWebcamPS3.h:206
	void HandleCameraReadDeviceNotStarted();

	// CgsWebcamPS3.h:210
	void UpdateDetachedCameraState();

	// CgsWebcamPS3.h:213
	void UpdateCameraAttachedFullUpdate();

	// CgsWebcamPS3.h:216
	void UpdateCameraAttachedLightUpdate();

	// CgsWebcamPS3.h:221
	intptr_t CameraBackgroundWorkerThread(void *);

}

// CgsWebcamPS3.h:130
extern const int32_t KI_NUM_TEXTURE_BUFFERS = 2;

// CgsWebcamPS3.h:131
extern const int32_t KI_BYTES_PER_PIXEL;

// CgsTime.h:24
namespace CgsSystem {
	// Declaration
	struct WebcamPS3 {
		// CgsWebcamPS3.h:60
		struct CameraPicture {
			// CgsWebcamPS3.h:62
			enum EFormat {
				E_FORMAT_ARGB = 0,
				E_FORMAT_YUV422 = 1,
				E_FORMAT_NUM = 2,
			}

			// CgsWebcamPS3.h:70
			int32_t miWidth;

			// CgsWebcamPS3.h:71
			int32_t miHeight;

			// CgsWebcamPS3.h:72
			int32_t miStride;

			// CgsWebcamPS3.h:73
			int32_t miFrameNumber;

			// CgsWebcamPS3.h:74
			CgsSystem::WebcamPS3::CameraPicture::EFormat meFormat;

			// CgsWebcamPS3.h:76
			const char * mpcPixelData;

		}

		// CgsWebcamPS3.h:79
		enum ECameraStatus {
			E_CAMERA_STATUS_DETACHED = 0,
			E_CAMERA_STATUS_ATTACHED = 1,
			E_CAMERA_STATUS_COUNT = 2,
		}

	}

}

// CgsWebcamPS3.h:48
struct CgsSystem::WebcamPS3 {
private:
	// CgsWebcamPS3.h:129
	extern const int32_t KI_INVALID_FRAME_NUM = 4294967295;

	// CgsWebcamPS3.h:130
	extern const int32_t KI_NUM_TEXTURE_BUFFERS = 2;

	// CgsWebcamPS3.h:131
	extern const int32_t KI_BYTES_PER_PIXEL;

	// CgsWebcamPS3.h:133
	bool mbRunningSPUJpgDecode;

	// CgsWebcamPS3.h:134
	Job mJpgDecodeJob;

	// CgsWebcamPS3.h:135
	JpgDecodeData mJobData;

	// CgsWebcamPS3.h:137
	CellCameraInfoEx mCameraInfo;

	// CgsWebcamPS3.h:138
	CellCameraType mCameraType;

	// CgsWebcamPS3.h:139
	Thread mBackgroundWorkerThread;

	// CgsWebcamPS3.h:140
	EAThreadDynamicData::AtomicInt32 miCloseThread;

	// CgsWebcamPS3.h:142
	CgsMemory::HeapMalloc * mpHeapMalloc;

	// CgsWebcamPS3.h:144
	sys_memory_container_t mMemoryContainer;

	// CgsWebcamPS3.h:146
	char *[2] mapSourceBuffers;

	// CgsWebcamPS3.h:147
	char *[2] mapDecodedBuffers;

	// CgsWebcamPS3.h:149
	int32_t miWriteToTexture;

	// CgsWebcamPS3.h:150
	int32_t miDecodeFromTexture;

	// CgsWebcamPS3.h:151
	int32_t miDecodeToTexture;

	// CgsWebcamPS3.h:152
	int32_t miReadFromTexture;

	// CgsWebcamPS3.h:154
	int32_t miDeviceNumber;

	// CgsWebcamPS3.h:155
	CgsSystem::WebcamPS3::ECameraStatus meCameraStatus;

	// CgsWebcamPS3.h:157
	int32_t miFrameNumber;

	// CgsWebcamPS3.h:159
	bool mbNewPictureRead;

	// CgsWebcamPS3.h:160
	bool mbUnsupportedCamera;

	// CgsWebcamPS3.h:161
	bool mbConvertYUVToARGB;

	// CgsWebcamPS3.h:162
	bool mbDoFullUpdate;

	// CgsWebcamPS3.h:163
	bool mbCameraSuspended;

public:
	// CgsWebcamPS3.h:89
	void Construct();

	// CgsWebcamPS3.h:95
	bool Prepare(CgsMemory::HeapMalloc *, sys_memory_container_t);

	// CgsWebcamPS3.h:99
	bool Release();

	// CgsWebcamPS3.h:103
	void Destruct();

	// CgsWebcamPS3.h:108
	void Update(bool);

	// CgsWebcamPS3.h:111
	CgsSystem::WebcamPS3::ECameraStatus GetCameraStatus() const;

	// CgsWebcamPS3.h:116
	bool GetCameraPicture(CgsSystem::WebcamPS3::CameraPicture *) const;

	// CgsWebcamPS3.h:121
	renderengine::PixelFormat GetCameraPictureFormat() const;

	// CgsWebcamPS3.h:125
	void SetConvertYUVToARGB(bool);

private:
	// CgsWebcamPS3.h:166
	bool StartStreaming();

	// CgsWebcamPS3.h:169
	void OpenCamera();

	// CgsWebcamPS3.h:172
	void CloseCamera();

	// CgsWebcamPS3.h:175
	void UpdateSPUJob();

	// CgsWebcamPS3.h:184
	void ConvertRaw8ToARGB(unsigned char *, unsigned char *, int32_t, int32_t, uint8_t);

	// CgsWebcamPS3.h:193
	void ConvertYUV422ToARGB(unsigned char *, unsigned char *, int32_t, int32_t, uint8_t);

	// CgsWebcamPS3.h:197
	void HandleCameraReadCellOK();

	// CgsWebcamPS3.h:200
	void HandleCameraReadCellDeviceNotFound();

	// CgsWebcamPS3.h:203
	void HandleCameraReadDeviceNotFound();

	// CgsWebcamPS3.h:206
	void HandleCameraReadDeviceNotStarted();

	// CgsWebcamPS3.h:210
	void UpdateDetachedCameraState();

	// CgsWebcamPS3.h:213
	void UpdateCameraAttachedFullUpdate();

	// CgsWebcamPS3.h:216
	void UpdateCameraAttachedLightUpdate();

	// CgsWebcamPS3.h:221
	intptr_t CameraBackgroundWorkerThread(void *);

}

// CgsAssertManager.h:30
namespace CgsSystem {
	// Declaration
	struct WebcamPS3 {
		// CgsWebcamPS3.h:60
		struct CameraPicture {
			// CgsWebcamPS3.h:62
			enum EFormat {
				E_FORMAT_ARGB = 0,
				E_FORMAT_YUV422 = 1,
				E_FORMAT_NUM = 2,
			}

			// CgsWebcamPS3.h:70
			int32_t miWidth;

			// CgsWebcamPS3.h:71
			int32_t miHeight;

			// CgsWebcamPS3.h:72
			int32_t miStride;

			// CgsWebcamPS3.h:73
			int32_t miFrameNumber;

			// CgsWebcamPS3.h:74
			CgsSystem::WebcamPS3::CameraPicture::EFormat meFormat;

			// CgsWebcamPS3.h:76
			const char * mpcPixelData;

		}

		// CgsWebcamPS3.h:79
		enum ECameraStatus {
			E_CAMERA_STATUS_DETACHED = 0,
			E_CAMERA_STATUS_ATTACHED = 1,
			E_CAMERA_STATUS_COUNT = 2,
		}

	}

}

// CgsHardwareInit.h:34
namespace CgsSystem {
	// Declaration
	struct WebcamPS3 {
		// CgsWebcamPS3.h:60
		struct CameraPicture {
			// CgsWebcamPS3.h:62
			enum EFormat {
				E_FORMAT_ARGB = 0,
				E_FORMAT_YUV422 = 1,
				E_FORMAT_NUM = 2,
			}

			// CgsWebcamPS3.h:70
			int32_t miWidth;

			// CgsWebcamPS3.h:71
			int32_t miHeight;

			// CgsWebcamPS3.h:72
			int32_t miStride;

			// CgsWebcamPS3.h:73
			int32_t miFrameNumber;

			// CgsWebcamPS3.h:74
			CgsSystem::WebcamPS3::CameraPicture::EFormat meFormat;

			// CgsWebcamPS3.h:76
			const char * mpcPixelData;

		}

		// CgsWebcamPS3.h:79
		enum ECameraStatus {
			E_CAMERA_STATUS_DETACHED = 0,
			E_CAMERA_STATUS_ATTACHED = 1,
			E_CAMERA_STATUS_COUNT = 2,
		}

	}

}

// CgsWebcamPS3.h:48
struct CgsSystem::WebcamPS3 {
private:
	// CgsWebcamPS3.h:129
	extern const int32_t KI_INVALID_FRAME_NUM = 4294967295;

	// CgsWebcamPS3.h:130
	extern const int32_t KI_NUM_TEXTURE_BUFFERS = 2;

	// CgsWebcamPS3.h:131
	extern const int32_t KI_BYTES_PER_PIXEL;

	// CgsWebcamPS3.h:133
	bool mbRunningSPUJpgDecode;

	// CgsWebcamPS3.h:134
	Job mJpgDecodeJob;

	// CgsWebcamPS3.h:135
	JpgDecodeData mJobData;

	// CgsWebcamPS3.h:137
	CellCameraInfoEx mCameraInfo;

	// CgsWebcamPS3.h:138
	CellCameraType mCameraType;

	// CgsWebcamPS3.h:139
	Thread mBackgroundWorkerThread;

	// CgsWebcamPS3.h:140
	EAThreadDynamicData::AtomicInt32 miCloseThread;

	// CgsWebcamPS3.h:142
	HeapMalloc * mpHeapMalloc;

	// CgsWebcamPS3.h:144
	sys_memory_container_t mMemoryContainer;

	// CgsWebcamPS3.h:146
	char *[2] mapSourceBuffers;

	// CgsWebcamPS3.h:147
	char *[2] mapDecodedBuffers;

	// CgsWebcamPS3.h:149
	int32_t miWriteToTexture;

	// CgsWebcamPS3.h:150
	int32_t miDecodeFromTexture;

	// CgsWebcamPS3.h:151
	int32_t miDecodeToTexture;

	// CgsWebcamPS3.h:152
	int32_t miReadFromTexture;

	// CgsWebcamPS3.h:154
	int32_t miDeviceNumber;

	// CgsWebcamPS3.h:155
	CgsSystem::WebcamPS3::ECameraStatus meCameraStatus;

	// CgsWebcamPS3.h:157
	int32_t miFrameNumber;

	// CgsWebcamPS3.h:159
	bool mbNewPictureRead;

	// CgsWebcamPS3.h:160
	bool mbUnsupportedCamera;

	// CgsWebcamPS3.h:161
	bool mbConvertYUVToARGB;

	// CgsWebcamPS3.h:162
	bool mbDoFullUpdate;

	// CgsWebcamPS3.h:163
	bool mbCameraSuspended;

public:
	// CgsWebcamPS3.h:89
	void Construct();

	// CgsWebcamPS3.h:95
	bool Prepare(HeapMalloc *, sys_memory_container_t);

	// CgsWebcamPS3.h:99
	bool Release();

	// CgsWebcamPS3.h:103
	void Destruct();

	// CgsWebcamPS3.h:108
	void Update(bool);

	// CgsWebcamPS3.h:111
	CgsSystem::WebcamPS3::ECameraStatus GetCameraStatus() const;

	// CgsWebcamPS3.h:116
	bool GetCameraPicture(CgsSystem::WebcamPS3::CameraPicture *) const;

	// CgsWebcamPS3.h:121
	renderengine::PixelFormat GetCameraPictureFormat() const;

	// CgsWebcamPS3.h:125
	void SetConvertYUVToARGB(bool);

private:
	// CgsWebcamPS3.h:166
	// Declaration
	bool StartStreaming() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsWebcamPS3.cpp:521
		using namespace CgsDev::Message;

	}

	// CgsWebcamPS3.h:169
	// Declaration
	void OpenCamera() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsWebcamPS3.cpp:593
		using namespace CgsDev::Message;

		// CgsWebcamPS3.cpp:604
		using namespace CgsDev::Message;

		// CgsWebcamPS3.cpp:614
		using namespace CgsDev::Message;

		// CgsWebcamPS3.cpp:627
		using namespace CgsDev::Message;

	}

	// CgsWebcamPS3.h:172
	void CloseCamera();

	// CgsWebcamPS3.h:175
	void UpdateSPUJob();

	// CgsWebcamPS3.h:184
	void ConvertRaw8ToARGB(unsigned char *, unsigned char *, int32_t, int32_t, uint8_t);

	// CgsWebcamPS3.h:193
	void ConvertYUV422ToARGB(unsigned char *, unsigned char *, int32_t, int32_t, uint8_t);

	// CgsWebcamPS3.h:197
	void HandleCameraReadCellOK();

	// CgsWebcamPS3.h:200
	void HandleCameraReadCellDeviceNotFound();

	// CgsWebcamPS3.h:203
	void HandleCameraReadDeviceNotFound();

	// CgsWebcamPS3.h:206
	void HandleCameraReadDeviceNotStarted();

	// CgsWebcamPS3.h:210
	void UpdateDetachedCameraState();

	// CgsWebcamPS3.h:213
	// Declaration
	void UpdateCameraAttachedFullUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsWebcamPS3.cpp:396
		using namespace CgsDev::Message;

	}

	// CgsWebcamPS3.h:216
	// Declaration
	void UpdateCameraAttachedLightUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsWebcamPS3.cpp:466
		using namespace CgsDev::Message;

	}

	// CgsWebcamPS3.h:221
	intptr_t CameraBackgroundWorkerThread(void *);

}

// CgsWebcamPS3.h:129
extern const int32_t KI_INVALID_FRAME_NUM = 4294967295;

