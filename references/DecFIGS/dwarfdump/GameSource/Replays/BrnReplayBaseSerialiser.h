// BrnReplayBaseSerialiser.h:67
extern const int32_t KI_MAX_NAME_LENGTH = 32;

// BrnReplayShared.h:96
namespace BrnReplays {
	// Declaration
	struct BaseSerialiser {
		// BrnReplayBaseSerialiser.h:54
		enum EMode {
			E_MODE_IDLE = 0,
			E_MODE_RECORDING_PREPARING = 1,
			E_MODE_RECORDING = 2,
			E_MODE_RECORDING_STALLED = 3,
			E_MODE_PLAYING_PREPARING = 4,
			E_MODE_PLAYING = 5,
			E_MODE_PLAYING_STALLED = 6,
			E_MODE_RESTORING = 7,
			E_MODE_COUNT = 8,
		}

	}

}

// BrnReplayBaseSerialiser.h:51
struct BrnReplays::BaseSerialiser {
	// BrnReplayBaseSerialiser.h:67
	extern const int32_t KI_MAX_NAME_LENGTH = 32;

private:
	// BrnReplayBaseSerialiser.h:254
	BrnReplays::BaseSerialiser::EMode meMode;

	// BrnReplayBaseSerialiser.h:255
	bool mbLocked;

	// BrnReplayBaseSerialiser.h:256
	void * mpBuffer;

	// BrnReplayBaseSerialiser.h:257
	int32_t miBufferSize;

	// BrnReplayBaseSerialiser.h:258
	int32_t miBufferUsed;

	// BrnReplayBaseSerialiser.h:259
	int32_t miBufferRead;

	// BrnReplayBaseSerialiser.h:260
	void * mpStaticBuffer;

	// BrnReplayBaseSerialiser.h:261
	int32_t miStaticBufferSize;

	// BrnReplayBaseSerialiser.h:262
	BrnReplays::ESerialiserId meId;

	// BrnReplayBaseSerialiser.h:263
	BrnReplays::ESerialiserContext meContext;

	// BrnReplayBaseSerialiser.h:264
	char[32] macName;

	// BrnReplayBaseSerialiser.h:265
	bool mbIsKeyFrame;

	// BrnReplayBaseSerialiser.h:266
	float32_t mfTime;

	// BrnReplayBaseSerialiser.h:267
	bool mbDataReady;

	// BrnReplayBaseSerialiser.h:268
	bool mbDataRestored;

	// BrnReplayBaseSerialiser.h:269
	bool mbAllowStreaming;

public:
	// BrnReplayBaseSerialiser.h:72
	int32_t Write(const void *, int32_t);

	// BrnReplayBaseSerialiser.h:77
	int32_t Read(void *, int32_t);

	// BrnReplayBaseSerialiser.h:81
	int32_t Write(uint8_t &);

	// BrnReplayBaseSerialiser.h:85
	int32_t Read(uint8_t &);

	// BrnReplayBaseSerialiser.h:89
	int32_t Write(float32_t &);

	// BrnReplayBaseSerialiser.h:93
	int32_t Read(float32_t &);

	// BrnReplayBaseSerialiser.h:98
	int32_t Serialise(void *, int32_t);

	// BrnReplayBaseSerialiser.h:112
	int32_t Write(bool &);

	// BrnReplayBaseSerialiser.h:116
	int32_t Read(bool &);

	// BrnReplayBaseSerialiser.h:120
	int32_t Write(int8_t &);

	// BrnReplayBaseSerialiser.h:124
	int32_t Read(int8_t &);

	// BrnReplayBaseSerialiser.h:128
	int32_t Write(SmoothStep::Vector3 &);

	// BrnReplayBaseSerialiser.h:132
	int32_t Read(SmoothStep::Vector3 &);

	// BrnReplayBaseSerialiser.h:136
	int32_t Write(Vector4 &);

	// BrnReplayBaseSerialiser.h:140
	int32_t Read(Vector4 &);

	// BrnReplayBaseSerialiser.h:144
	// Declaration
	int32_t Write(Quaternion &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// quaternion.h:133
		typedef QuaternionTemplate<float> Quaternion;

	}

	// BrnReplayBaseSerialiser.h:148
	int32_t Read(Quaternion &);

	// BrnReplayBaseSerialiser.h:152
	// Declaration
	int32_t Write(QuatPos &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// quatpos.h:121
		typedef QuatPosTemplate<float> QuatPos;

	}

	// BrnReplayBaseSerialiser.h:156
	int32_t Read(QuatPos &);

	// BrnReplayBaseSerialiser.h:164
	bool Lock();

	// BrnReplayBaseSerialiser.h:167
	bool Unlock();

	// BrnReplayBaseSerialiser.h:170
	BrnReplays::BaseSerialiser::EMode GetMode() const;

	// BrnReplayBaseSerialiser.h:173
	BrnReplays::ESerialiserId GetId() const;

	// BrnReplayBaseSerialiser.h:176
	BrnReplays::ESerialiserContext GetContext() const;

	// BrnReplayBaseSerialiser.h:179
	int32_t GetBufferUsed() const;

	// BrnReplayBaseSerialiser.h:182
	float32_t GetTime() const;

	// BrnReplayBaseSerialiser.h:185
	bool IsPlaying() const;

	// BrnReplayBaseSerialiser.h:188
	bool IsRecording() const;

	// BrnReplayBaseSerialiser.h:191
	bool IsRestoring() const;

	// BrnReplayBaseSerialiser.h:194
	bool IsActive() const;

	// BrnReplayBaseSerialiser.h:197
	bool IsStalled() const;

	// BrnReplayBaseSerialiser.h:200
	bool IsPreparing() const;

	// BrnReplayBaseSerialiser.h:203
	void * GetStaticBuffer() const;

	// BrnReplayBaseSerialiser.h:206
	int32_t GetStaticBufferSize() const;

	// BrnReplayBaseSerialiser.h:209
	bool IsKeyFrame() const;

	// BrnReplayBaseSerialiser.h:212
	bool AllowStreaming() const;

	// BrnReplayBaseSerialiser.h:215
	void WriteScaleMatrix(Matrix44Affine);

	// BrnReplayBaseSerialiser.h:218
	void ReadScaleMatrix(Matrix44Affine &);

	// BrnReplayBaseSerialiser.h:229
	void SetDataReady(bool);

	// BrnReplayBaseSerialiser.h:232
	void SetDataRestored(bool);

protected:
	// BrnReplayBaseSerialiser.h:247
	void Construct(BrnReplays::ESerialiserId, BrnReplays::ESerialiserContext, int32_t, int32_t, const char *);

	// BrnReplayBaseSerialiser.h:250
	void Destruct();

private:
	// BrnReplayBaseSerialiser.h:272
	void SetMode(BrnReplays::BaseSerialiser::EMode);

	// BrnReplayBaseSerialiser.h:275
	void ClearBuffer();

}

// BrnReplayBaseSerialiser.h:51
struct BrnReplays::BaseSerialiser {
	// BrnReplayBaseSerialiser.h:67
	extern const int32_t KI_MAX_NAME_LENGTH = 32;

private:
	// BrnReplayBaseSerialiser.h:254
	BrnReplays::BaseSerialiser::EMode meMode;

	// BrnReplayBaseSerialiser.h:255
	bool mbLocked;

	// BrnReplayBaseSerialiser.h:256
	void * mpBuffer;

	// BrnReplayBaseSerialiser.h:257
	int32_t miBufferSize;

	// BrnReplayBaseSerialiser.h:258
	int32_t miBufferUsed;

	// BrnReplayBaseSerialiser.h:259
	int32_t miBufferRead;

	// BrnReplayBaseSerialiser.h:260
	void * mpStaticBuffer;

	// BrnReplayBaseSerialiser.h:261
	int32_t miStaticBufferSize;

	// BrnReplayBaseSerialiser.h:262
	BrnReplays::ESerialiserId meId;

	// BrnReplayBaseSerialiser.h:263
	BrnReplays::ESerialiserContext meContext;

	// BrnReplayBaseSerialiser.h:264
	char[32] macName;

	// BrnReplayBaseSerialiser.h:265
	bool mbIsKeyFrame;

	// BrnReplayBaseSerialiser.h:266
	float32_t mfTime;

	// BrnReplayBaseSerialiser.h:267
	bool mbDataReady;

	// BrnReplayBaseSerialiser.h:268
	bool mbDataRestored;

	// BrnReplayBaseSerialiser.h:269
	bool mbAllowStreaming;

public:
	// BrnReplayBaseSerialiser.h:72
	int32_t Write(const void *, int32_t);

	// BrnReplayBaseSerialiser.h:77
	int32_t Read(void *, int32_t);

	// BrnReplayBaseSerialiser.h:81
	int32_t Write(uint8_t &);

	// BrnReplayBaseSerialiser.h:85
	int32_t Read(uint8_t &);

	// BrnReplayBaseSerialiser.h:89
	int32_t Write(float32_t &);

	// BrnReplayBaseSerialiser.h:93
	int32_t Read(float32_t &);

	// BrnReplayBaseSerialiser.h:98
	int32_t Serialise(void *, int32_t);

	// BrnReplayBaseSerialiser.h:112
	int32_t Write(bool &);

	// BrnReplayBaseSerialiser.h:116
	int32_t Read(bool &);

	// BrnReplayBaseSerialiser.h:120
	int32_t Write(int8_t &);

	// BrnReplayBaseSerialiser.h:124
	int32_t Read(int8_t &);

	// BrnReplayBaseSerialiser.h:128
	int32_t Write(Road::Vector3 &);

	// BrnReplayBaseSerialiser.h:132
	int32_t Read(Road::Vector3 &);

	// BrnReplayBaseSerialiser.h:136
	int32_t Write(Vector4 &);

	// BrnReplayBaseSerialiser.h:140
	int32_t Read(Vector4 &);

	// BrnReplayBaseSerialiser.h:144
	// Declaration
	int32_t Write(Quaternion &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// quaternion.h:133
		typedef QuaternionTemplate<float> Quaternion;

	}

	// BrnReplayBaseSerialiser.h:148
	int32_t Read(Quaternion &);

	// BrnReplayBaseSerialiser.h:152
	// Declaration
	int32_t Write(QuatPos &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// quatpos.h:121
		typedef QuatPosTemplate<float> QuatPos;

	}

	// BrnReplayBaseSerialiser.h:156
	int32_t Read(QuatPos &);

	// BrnReplayBaseSerialiser.h:164
	bool Lock();

	// BrnReplayBaseSerialiser.h:167
	bool Unlock();

	// BrnReplayBaseSerialiser.h:170
	BrnReplays::BaseSerialiser::EMode GetMode() const;

	// BrnReplayBaseSerialiser.h:173
	BrnReplays::ESerialiserId GetId() const;

	// BrnReplayBaseSerialiser.h:176
	BrnReplays::ESerialiserContext GetContext() const;

	// BrnReplayBaseSerialiser.h:179
	int32_t GetBufferUsed() const;

	// BrnReplayBaseSerialiser.h:182
	float32_t GetTime() const;

	// BrnReplayBaseSerialiser.h:185
	bool IsPlaying() const;

	// BrnReplayBaseSerialiser.h:188
	bool IsRecording() const;

	// BrnReplayBaseSerialiser.h:191
	bool IsRestoring() const;

	// BrnReplayBaseSerialiser.h:194
	bool IsActive() const;

	// BrnReplayBaseSerialiser.h:197
	bool IsStalled() const;

	// BrnReplayBaseSerialiser.h:200
	bool IsPreparing() const;

	// BrnReplayBaseSerialiser.h:203
	void * GetStaticBuffer() const;

	// BrnReplayBaseSerialiser.h:206
	int32_t GetStaticBufferSize() const;

	// BrnReplayBaseSerialiser.h:209
	bool IsKeyFrame() const;

	// BrnReplayBaseSerialiser.h:212
	bool AllowStreaming() const;

	// BrnReplayBaseSerialiser.h:215
	void WriteScaleMatrix(Matrix44Affine);

	// BrnReplayBaseSerialiser.h:218
	void ReadScaleMatrix(Matrix44Affine &);

	// BrnReplayBaseSerialiser.h:229
	void SetDataReady(bool);

	// BrnReplayBaseSerialiser.h:232
	void SetDataRestored(bool);

protected:
	// BrnReplayBaseSerialiser.h:247
	void Construct(BrnReplays::ESerialiserId, BrnReplays::ESerialiserContext, int32_t, int32_t, const char *);

	// BrnReplayBaseSerialiser.h:250
	void Destruct();

private:
	// BrnReplayBaseSerialiser.h:272
	void SetMode(BrnReplays::BaseSerialiser::EMode);

	// BrnReplayBaseSerialiser.h:275
	void ClearBuffer();

}

// BrnReplayBaseSerialiser.h:436
extern int32_t Serialise<int8_t>(const int8_t &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:436
extern int32_t Serialise<bool>(const bool &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:436
extern int32_t Serialise<BrnDirector::Camera::VehicleInfo>(const VehicleInfo &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:436
extern int32_t Serialise<rw::math::vpu::Matrix44Affine>(const Matrix44Affine &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:436
extern int32_t Serialise<float32_t>(const float32_t &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:436
extern int32_t Serialise<BrnDirector::Camera::PlayerCrashInfo>(const PlayerCrashInfo &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:436
extern int32_t Serialise<BrnGameState::GameStateModuleIO::CarScoreData>(const CarScoreData &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:51
struct BrnReplays::BaseSerialiser {
	// BrnReplayBaseSerialiser.h:67
	extern const int32_t KI_MAX_NAME_LENGTH = 32;

private:
	// BrnReplayBaseSerialiser.h:254
	BrnReplays::BaseSerialiser::EMode meMode;

	// BrnReplayBaseSerialiser.h:255
	bool mbLocked;

	// BrnReplayBaseSerialiser.h:256
	void * mpBuffer;

	// BrnReplayBaseSerialiser.h:257
	int32_t miBufferSize;

	// BrnReplayBaseSerialiser.h:258
	int32_t miBufferUsed;

	// BrnReplayBaseSerialiser.h:259
	int32_t miBufferRead;

	// BrnReplayBaseSerialiser.h:260
	void * mpStaticBuffer;

	// BrnReplayBaseSerialiser.h:261
	int32_t miStaticBufferSize;

	// BrnReplayBaseSerialiser.h:262
	BrnReplays::ESerialiserId meId;

	// BrnReplayBaseSerialiser.h:263
	BrnReplays::ESerialiserContext meContext;

	// BrnReplayBaseSerialiser.h:264
	char[32] macName;

	// BrnReplayBaseSerialiser.h:265
	bool mbIsKeyFrame;

	// BrnReplayBaseSerialiser.h:266
	float32_t mfTime;

	// BrnReplayBaseSerialiser.h:267
	bool mbDataReady;

	// BrnReplayBaseSerialiser.h:268
	bool mbDataRestored;

	// BrnReplayBaseSerialiser.h:269
	bool mbAllowStreaming;

public:
	// BrnReplayBaseSerialiser.h:72
	int32_t Write(const void *, int32_t);

	// BrnReplayBaseSerialiser.h:77
	int32_t Read(void *, int32_t);

	// BrnReplayBaseSerialiser.h:81
	int32_t Write(uint8_t &);

	// BrnReplayBaseSerialiser.h:85
	int32_t Read(uint8_t &);

	// BrnReplayBaseSerialiser.h:89
	int32_t Write(float32_t &);

	// BrnReplayBaseSerialiser.h:93
	int32_t Read(float32_t &);

	// BrnReplayBaseSerialiser.h:98
	int32_t Serialise(void *, int32_t);

	// BrnReplayBaseSerialiser.h:112
	int32_t Write(bool &);

	// BrnReplayBaseSerialiser.h:116
	int32_t Read(bool &);

	// BrnReplayBaseSerialiser.h:120
	int32_t Write(int8_t &);

	// BrnReplayBaseSerialiser.h:124
	int32_t Read(int8_t &);

	// BrnReplayBaseSerialiser.h:128
	int32_t Write(Road::Vector3 &);

	// BrnReplayBaseSerialiser.h:132
	int32_t Read(Road::Vector3 &);

	// BrnReplayBaseSerialiser.h:136
	int32_t Write(Vector4 &);

	// BrnReplayBaseSerialiser.h:140
	int32_t Read(Vector4 &);

	// BrnReplayBaseSerialiser.h:144
	// Declaration
	int32_t Write() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// quaternion.h:133
		typedef QuaternionTemplate<float> Quaternion;

	}

	// BrnReplayBaseSerialiser.h:148
	int32_t Read(Quaternion &);

	// BrnReplayBaseSerialiser.h:152
	// Declaration
	int32_t Write(QuatPos &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// quatpos.h:121
		typedef QuatPosTemplate<float> QuatPos;

	}

	// BrnReplayBaseSerialiser.h:156
	int32_t Read(QuatPos &);

	// BrnReplayBaseSerialiser.h:164
	bool Lock();

	// BrnReplayBaseSerialiser.h:167
	bool Unlock();

	// BrnReplayBaseSerialiser.h:170
	BrnReplays::BaseSerialiser::EMode GetMode() const;

	// BrnReplayBaseSerialiser.h:173
	BrnReplays::ESerialiserId GetId() const;

	// BrnReplayBaseSerialiser.h:176
	BrnReplays::ESerialiserContext GetContext() const;

	// BrnReplayBaseSerialiser.h:179
	int32_t GetBufferUsed() const;

	// BrnReplayBaseSerialiser.h:182
	float32_t GetTime() const;

	// BrnReplayBaseSerialiser.h:185
	bool IsPlaying() const;

	// BrnReplayBaseSerialiser.h:188
	bool IsRecording() const;

	// BrnReplayBaseSerialiser.h:191
	bool IsRestoring() const;

	// BrnReplayBaseSerialiser.h:194
	bool IsActive() const;

	// BrnReplayBaseSerialiser.h:197
	bool IsStalled() const;

	// BrnReplayBaseSerialiser.h:200
	bool IsPreparing() const;

	// BrnReplayBaseSerialiser.h:203
	void * GetStaticBuffer() const;

	// BrnReplayBaseSerialiser.h:206
	int32_t GetStaticBufferSize() const;

	// BrnReplayBaseSerialiser.h:209
	bool IsKeyFrame() const;

	// BrnReplayBaseSerialiser.h:212
	bool AllowStreaming() const;

	// BrnReplayBaseSerialiser.h:215
	void WriteScaleMatrix(Matrix44Affine);

	// BrnReplayBaseSerialiser.h:218
	void ReadScaleMatrix(Matrix44Affine &);

	// BrnReplayBaseSerialiser.h:229
	void SetDataReady(bool);

	// BrnReplayBaseSerialiser.h:232
	void SetDataRestored(bool);

protected:
	// BrnReplayBaseSerialiser.h:247
	void Construct(BrnReplays::ESerialiserId, BrnReplays::ESerialiserContext, int32_t, int32_t, const char *);

	// BrnReplayBaseSerialiser.h:250
	void Destruct();

private:
	// BrnReplayBaseSerialiser.h:272
	void SetMode(BrnReplays::BaseSerialiser::EMode);

	// BrnReplayBaseSerialiser.h:275
	void ClearBuffer();

}

// BrnReplayBaseSerialiser.h:420
extern int32_t Write<int32_t>(const int32_t &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:420
extern int32_t Write<BrnWorld::RaceCarEntityModuleIO::BoostOutputInfo>(const BoostOutputInfo &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:420
extern int32_t Write<BrnPhysics::Vehicle::RaceCarState>(const RaceCarState &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:428
extern int32_t Read<CgsID>(const CgsID &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:591
extern void WriteVariableQueue<13312, 16>(const VariableEventQueue<13312,16> *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayBaseSerialiser.h:593
		int32_t liLength;

		// BrnReplayBaseSerialiser.h:594
		const CgsModule::Event * lpEvent;

		// BrnReplayBaseSerialiser.h:595
		int32_t liEventId;

		// BrnReplayBaseSerialiser.h:596
		int32_t liEventSize;

	}
}

// BrnReplayBaseSerialiser.h:613
extern void ReadVariableQueue<13312, 16>(VariableEventQueue<13312,16> *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:420
extern int32_t Write<CgsContainers::BitArray<96u> >(const BitArray<96u> &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:420
extern int32_t Write<rw::math::vpu::Vector4>(const Vector4 &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:420
extern int32_t Write<float32_t [4]>(const float32_t &[4]  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayBaseSerialiser.h:420
extern int32_t Write<CgsID>(const CgsID &  lObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

