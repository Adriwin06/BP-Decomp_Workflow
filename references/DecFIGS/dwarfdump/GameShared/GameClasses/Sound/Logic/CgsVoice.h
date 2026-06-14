// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct VoiceWrapper {
			// CgsVoice.h:321
			enum E_UPDATE_STAGE {
				E_UPDATE_STAGE_IDLE = 0,
				E_UPDATE_STAGE_CREATE = 1,
				E_UPDATE_STAGE_CREATE_WAIT = 2,
				E_UPDATE_STAGE_CONNECT = 3,
				E_UPDATE_STAGE_WAIT = 4,
				E_UPDATE_STAGE_START = 5,
				E_UPDATE_STAGE_PLAYING = 6,
				E_UPDATE_STAGE_FINISHED = 7,
			}

			// CgsVoice.h:343
			struct CreateParams {
				// CgsVoice.h:371
				CgsSound::Logic::Module * mpLogicModule;

				// CgsVoice.h:372
				CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer * mpOnPostInit;

				// CgsVoice.h:374
				Command::QueueElement mFactoryName;

				// CgsVoice.h:376
				Command::QueueElement mVoiceSpecName;

				// CgsVoice.h:385
				const CgsSound::Logic::Content * mpContent;

				// CgsVoice.h:386
				Command::QueueElement mContentSpecName;

				// CgsVoice.h:389
				Command::QueueElement mSlotName;

				// CgsVoice.h:390
				Command::QueueElement mSendName;

				// CgsVoice.h:391
				Command::QueueElement mSubMixVoiceID;

				// CgsVoice.h:394
				Command::QueueElement mReverbSendName;

				// CgsVoice.h:395
				Command::QueueElement mReverbSubMixVoiceID;

				// CgsVoice.h:397
				int32_t miSendIndex;

			public:
				// CgsVoice.h:344
				CreateParams();

				// CgsVoice.h:349
				void Construct();

				// CgsVoice.h:354
				void Clear();

			}

			struct AbstractFunctionPointer;

		}

	}

}

// CgsVoice.h:264
struct CgsSound::Logic::VoiceWrapper : public CgsSound::MemBase {
private:
	// CgsVoice.h:507
	CgsSound::Logic::VoiceWrapper::CreateParams mCreateParams;

	// CgsVoice.h:508
	CgsSound::Logic::Voice mVoiceObject;

	// Unknown accessibility
	// CgsContent.h:60
	typedef Handle<CgsSound::Playback::Content> ContentHandle;

	// CgsVoice.h:509
	VoiceWrapper::ContentHandle mContent;

	// CgsVoice.h:511
	uint32_t mu32OptionalPlayParam;

	// CgsVoice.h:512
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE meUpdateStage;

	// CgsVoice.h:513
	bool mbPlay;

public:
	void VoiceWrapper(const VoiceWrapper &);

	// CgsVoice.h:724
	void VoiceWrapper();

	// CgsVoice.h:762
	virtual void ~VoiceWrapper();

	// CgsVoice.h:741
	bool Prepare();

	// CgsVoice.h:426
	void Create(const CgsSound::Logic::VoiceWrapper::CreateParams &);

	// CgsVoice.h:434
	void Play(uint32_t);

	// CgsVoice.h:440
	void Stop();

	// CgsVoice.h:833
	bool IsPlaying() const;

	// CgsVoice.h:816
	bool IsAlive() const;

	// CgsVoice.h:859
	// Declaration
	void SetGain() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundUtils.h:39
		typedef Name Name;

	}

	// CgsVoice.h:459
	float32_t GetGain(Name);

	// CgsVoice.h:871
	void SetParameter(int32_t, float32_t, Name);

	// CgsVoice.h:475
	void Update();

	// CgsVoice.h:482
	void Release();

	// CgsVoice.h:707
	CgsSound::Logic::Voice * GetVoice();

	// CgsVoice.h:779
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE GetUpdateStage() const;

	// CgsVoice.h:850
	const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams();

	// CgsVoice.h:500
	uint32_t GetOptionalParam() const;

}

// CgsVoice.h:70
struct CgsSound::Logic::Voice {
	int (*)(...) * _vptr.Voice;

	// CgsContent.h:59
	typedef Handle<CgsSound::Playback::Voice> VoiceHandle;

protected:
	// CgsVoice.h:248
	Voice::VoiceHandle mVoiceHandle;

	// CgsVoice.h:249
	CgsSound::Logic::Module * mpModule;

public:
	// CgsVoice.h:537
	void Voice();

	// CgsVoice.h:554
	virtual void ~Voice();

	// CgsVoice.h:574
	void Construct(CgsSound::Logic::Module *, Command::QueueElement, Command::QueueElement);

	// CgsVoice.h:110
	void Construct(CgsSound::Logic::Module *, Command::QueueElement, Command::QueueElement, Command::QueueElement);

	// CgsVoice.h:117
	void Destruct();

	// CgsVoice.h:126
	void Connect(Command::QueueElement, Command::QueueElement);

	// CgsVoice.h:134
	void Disconnect(Command::QueueElement);

	// CgsVoice.h:143
	void Attach(Command::QueueElement, const CgsSound::Logic::Content &);

	// CgsVoice.h:151
	void Detach(Command::QueueElement);

	// CgsVoice.h:159
	void Play(uint32_t);

	// CgsVoice.h:166
	void Stop();

	// CgsVoice.h:591
	float32_t GetGain(Name);

	// CgsVoice.h:176
	void SetGain(uint32_t, float32_t, Name);

	// CgsVoice.h:609
	void SetParameter(int32_t, float32_t, Name);

	// CgsVoice.h:627
	Command::QueueElement GetIdent() const;

	// CgsVoice.h:645
	bool IsCreated() const;

	// CgsVoice.h:663
	bool IsReady() const;

	// CgsVoice.h:685
	bool IsPlaying() const;

private:
	// CgsVoice.h:233
	void Attach(Command::QueueElement, VoiceWrapper::ContentHandle);

	// CgsVoice.h:237
	void Voice(const Voice &);

	// CgsVoice.h:242
	Voice & operator=(const Voice &);

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsMemBase.h:38
	namespace Logic {
		// Declaration
		struct VoiceWrapper {
			// CgsVoice.h:321
			enum E_UPDATE_STAGE {
				E_UPDATE_STAGE_IDLE = 0,
				E_UPDATE_STAGE_CREATE = 1,
				E_UPDATE_STAGE_CREATE_WAIT = 2,
				E_UPDATE_STAGE_CONNECT = 3,
				E_UPDATE_STAGE_WAIT = 4,
				E_UPDATE_STAGE_START = 5,
				E_UPDATE_STAGE_PLAYING = 6,
				E_UPDATE_STAGE_FINISHED = 7,
			}

			// CgsVoice.h:343
			struct CreateParams {
				// CgsVoice.h:371
				CgsSound::Logic::Module * mpLogicModule;

				// CgsVoice.h:372
				CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer * mpOnPostInit;

				// CgsVoice.h:374
				Command::QueueElement mFactoryName;

				// CgsVoice.h:376
				Command::QueueElement mVoiceSpecName;

				// CgsVoice.h:385
				const CgsSound::Logic::Content * mpContent;

				// CgsVoice.h:386
				Command::QueueElement mContentSpecName;

				// CgsVoice.h:389
				Command::QueueElement mSlotName;

				// CgsVoice.h:390
				Command::QueueElement mSendName;

				// CgsVoice.h:391
				Command::QueueElement mSubMixVoiceID;

				// CgsVoice.h:394
				Command::QueueElement mReverbSendName;

				// CgsVoice.h:395
				Command::QueueElement mReverbSubMixVoiceID;

				// CgsVoice.h:397
				int32_t miSendIndex;

			public:
				// CgsVoice.h:344
				CreateParams();

				// CgsVoice.h:349
				void Construct();

				// CgsVoice.h:354
				void Clear();

			}

			struct AbstractFunctionPointer;

		}

	}

}

// CgsVoice.h:264
struct CgsSound::Logic::VoiceWrapper : public CgsSound::MemBase {
private:
	// CgsVoice.h:507
	CgsSound::Logic::VoiceWrapper::CreateParams mCreateParams;

	// CgsVoice.h:508
	CgsSound::Logic::Voice mVoiceObject;

	// Unknown accessibility
	// CgsContent.h:60
	typedef Handle<CgsSound::Playback::Content> ContentHandle;

	// CgsVoice.h:509
	VoiceWrapper::ContentHandle mContent;

	// CgsVoice.h:511
	uint32_t mu32OptionalPlayParam;

	// CgsVoice.h:512
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE meUpdateStage;

	// CgsVoice.h:513
	bool mbPlay;

public:
	void VoiceWrapper(const VoiceWrapper &);

	// CgsVoice.h:724
	void VoiceWrapper();

	// CgsVoice.h:762
	virtual void ~VoiceWrapper();

	// CgsVoice.h:741
	bool Prepare();

	// CgsVoice.h:426
	void Create(const CgsSound::Logic::VoiceWrapper::CreateParams &);

	// CgsVoice.h:434
	void Play(uint32_t);

	// CgsVoice.h:440
	void Stop();

	// CgsVoice.h:833
	bool IsPlaying() const;

	// CgsVoice.h:816
	bool IsAlive() const;

	// CgsVoice.h:859
	void SetGain(uint32_t, float32_t, Partial::Name);

	// CgsVoice.h:459
	float32_t GetGain(Name);

	// CgsVoice.h:871
	void SetParameter(int32_t, float32_t, Partial::Name);

	// CgsVoice.h:475
	void Update();

	// CgsVoice.h:482
	void Release();

	// CgsVoice.h:707
	CgsSound::Logic::Voice * GetVoice();

	// CgsVoice.h:779
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE GetUpdateStage() const;

	// CgsVoice.h:850
	const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams();

	// CgsVoice.h:500
	uint32_t GetOptionalParam() const;

}

// CgsVoice.h:70
struct CgsSound::Logic::Voice {
	int (*)(...) * _vptr.Voice;

	// CgsContent.h:59
	typedef Handle<CgsSound::Playback::Voice> VoiceHandle;

protected:
	// CgsVoice.h:248
	Voice::VoiceHandle mVoiceHandle;

	// CgsVoice.h:249
	CgsSound::Logic::Module * mpModule;

public:
	// CgsVoice.h:537
	void Voice();

	// CgsVoice.h:554
	virtual void ~Voice();

	// CgsVoice.h:574
	void Construct(CgsSound::Logic::Module *, Command::QueueElement, Command::QueueElement);

	// CgsVoice.h:110
	void Construct(CgsSound::Logic::Module *, Command::QueueElement, Command::QueueElement, Command::QueueElement);

	// CgsVoice.h:117
	void Destruct();

	// CgsVoice.h:126
	void Connect(Command::QueueElement, Command::QueueElement);

	// CgsVoice.h:134
	void Disconnect(Command::QueueElement);

	// CgsVoice.h:143
	void Attach(Command::QueueElement, const CgsSound::Logic::Content &);

	// CgsVoice.h:151
	void Detach(Command::QueueElement);

	// CgsVoice.h:159
	void Play(uint32_t);

	// CgsVoice.h:166
	void Stop();

	// CgsVoice.h:591
	float32_t GetGain(Name);

	// CgsVoice.h:176
	void SetGain(uint32_t, float32_t, Partial::Name);

	// CgsVoice.h:609
	void SetParameter(int32_t, float32_t, Partial::Name);

	// CgsVoice.h:627
	Command::QueueElement GetIdent() const;

	// CgsVoice.h:645
	bool IsCreated() const;

	// CgsVoice.h:663
	bool IsReady() const;

	// CgsVoice.h:685
	bool IsPlaying() const;

private:
	// CgsVoice.h:233
	void Attach(Command::QueueElement, VoiceWrapper::ContentHandle);

	// CgsVoice.h:237
	void Voice(const Voice &);

	// CgsVoice.h:242
	Voice & operator=(const Voice &);

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct VoiceWrapper {
			// CgsVoice.h:321
			enum E_UPDATE_STAGE {
				E_UPDATE_STAGE_IDLE = 0,
				E_UPDATE_STAGE_CREATE = 1,
				E_UPDATE_STAGE_CREATE_WAIT = 2,
				E_UPDATE_STAGE_CONNECT = 3,
				E_UPDATE_STAGE_WAIT = 4,
				E_UPDATE_STAGE_START = 5,
				E_UPDATE_STAGE_PLAYING = 6,
				E_UPDATE_STAGE_FINISHED = 7,
			}

			// CgsVoice.h:343
			struct CreateParams {
				// CgsVoice.h:371
				CgsSound::Logic::Module * mpLogicModule;

				// CgsVoice.h:372
				CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer * mpOnPostInit;

				// CgsVoice.h:374
				Command::QueueElement mFactoryName;

				// CgsVoice.h:376
				Command::QueueElement mVoiceSpecName;

				// CgsVoice.h:385
				const CgsSound::Logic::Content * mpContent;

				// CgsVoice.h:386
				Command::QueueElement mContentSpecName;

				// CgsVoice.h:389
				Command::QueueElement mSlotName;

				// CgsVoice.h:390
				Command::QueueElement mSendName;

				// CgsVoice.h:391
				Command::QueueElement mSubMixVoiceID;

				// CgsVoice.h:394
				Command::QueueElement mReverbSendName;

				// CgsVoice.h:395
				Command::QueueElement mReverbSubMixVoiceID;

				// CgsVoice.h:397
				int32_t miSendIndex;

			public:
				// CgsVoice.h:344
				CreateParams();

				// CgsVoice.h:349
				void Construct();

				// CgsVoice.h:354
				void Clear();

			}

			struct AbstractFunctionPointer;

			// CgsVoice.h:296
			struct FunctorPointer<BrnSound::Vehicles::Wheels::InAirEffect> : public CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer {
			private:
				// CgsVoice.h:298
				// CgsVoice.h:298
				struct {
				}

 mpFunctionPointer;

				// CgsVoice.h:299
				BrnSound::Vehicles::Wheels::InAirEffect * mpObject;

			public:
				void FunctorPointer();

				void FunctorPointer(const CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Wheels::InAirEffect> &);

				// CgsVoice.h:798
				void Construct(BrnSound::Vehicles::Wheels::InAirEffect *, void (*)(CgsSound::Logic::VoiceWrapper &));

				// CgsVoice.h:314
				virtual void Call(CgsSound::Logic::VoiceWrapper &);

			}

			// CgsVoice.h:296
			struct FunctorPointer<BrnSound::Vehicles::Wheels::SkidEffect> : public CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer {
			private:
				// CgsVoice.h:298
				// CgsVoice.h:298
				struct {
				}

 mpFunctionPointer;

				// CgsVoice.h:299
				BrnSound::Vehicles::Wheels::SkidEffect * mpObject;

			public:
				void FunctorPointer();

				void FunctorPointer(const CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Wheels::SkidEffect> &);

				// CgsVoice.h:798
				void Construct(BrnSound::Vehicles::Wheels::SkidEffect *, void (*)(CgsSound::Logic::VoiceWrapper &));

				// CgsVoice.h:314
				virtual void Call(CgsSound::Logic::VoiceWrapper &);

			}

			// CgsVoice.h:296
			struct FunctorPointer<BrnSound::Vehicles::Engines::BoostEffect> : public CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer {
			private:
				// CgsVoice.h:298
				// CgsVoice.h:298
				struct {
				}

 mpFunctionPointer;

				// CgsVoice.h:299
				BrnSound::Vehicles::Engines::BoostEffect * mpObject;

			public:
				void FunctorPointer();

				void FunctorPointer(const CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Engines::BoostEffect> &);

				// CgsVoice.h:798
				void Construct(BrnSound::Vehicles::Engines::BoostEffect *, void (*)(CgsSound::Logic::VoiceWrapper &));

				// CgsVoice.h:314
				virtual void Call(CgsSound::Logic::VoiceWrapper &);

			}

			// CgsVoice.h:296
			struct FunctorPointer<BrnSound::Logic::Traffic::TrafficSkid> : public CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer {
			private:
				// CgsVoice.h:298
				// CgsVoice.h:298
				struct {
				}

 mpFunctionPointer;

				// CgsVoice.h:299
				BrnSound::Logic::Traffic::TrafficSkid * mpObject;

			public:
				void FunctorPointer(const CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Logic::Traffic::TrafficSkid> &);

				void FunctorPointer();

				// CgsVoice.h:798
				void Construct(BrnSound::Logic::Traffic::TrafficSkid *, void (*)(CgsSound::Logic::VoiceWrapper &));

				// CgsVoice.h:314
				virtual void Call(CgsSound::Logic::VoiceWrapper &);

			}

			// CgsVoice.h:296
			struct FunctorPointer<BrnSound::Logic::Traffic::TrafficHorn> : public CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer {
			private:
				// CgsVoice.h:298
				// CgsVoice.h:298
				struct {
				}

 mpFunctionPointer;

				// CgsVoice.h:299
				BrnSound::Logic::Traffic::TrafficHorn * mpObject;

			public:
				void FunctorPointer(const CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Logic::Traffic::TrafficHorn> &);

				void FunctorPointer();

				// CgsVoice.h:798
				void Construct(BrnSound::Logic::Traffic::TrafficHorn *, void (*)(CgsSound::Logic::VoiceWrapper &));

				// CgsVoice.h:314
				virtual void Call(CgsSound::Logic::VoiceWrapper &);

			}

		}

	}

}

// CgsVoice.h:264
struct CgsSound::Logic::VoiceWrapper : public CgsSound::MemBase {
private:
	// CgsVoice.h:507
	CgsSound::Logic::VoiceWrapper::CreateParams mCreateParams;

	// CgsVoice.h:508
	CgsSound::Logic::Voice mVoiceObject;

	// CgsVoice.h:509
	Content::ContentHandle mContent;

	// CgsVoice.h:511
	uint32_t mu32OptionalPlayParam;

	// CgsVoice.h:512
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE meUpdateStage;

	// CgsVoice.h:513
	bool mbPlay;

public:
	void VoiceWrapper(const VoiceWrapper &);

	// CgsVoice.h:724
	void VoiceWrapper();

	// CgsVoice.h:762
	virtual void ~VoiceWrapper();

	// CgsVoice.h:741
	bool Prepare();

	// CgsVoice.cpp:239
	void Create(const CgsSound::Logic::VoiceWrapper::CreateParams &);

	// CgsVoice.cpp:279
	void Play(uint32_t);

	// CgsVoice.cpp:305
	void Stop();

	// CgsVoice.h:833
	bool IsPlaying() const;

	// CgsVoice.h:816
	bool IsAlive() const;

	// CgsVoice.h:859
	void SetGain(uint32_t, float32_t, Partial::Name);

	// CgsVoice.cpp:334
	float32_t GetGain(Name);

	// CgsVoice.h:871
	void SetParameter(int32_t, float32_t, Partial::Name);

	// CgsVoice.cpp:353
	void Update();

	// CgsVoice.cpp:461
	void Release();

	// CgsVoice.h:707
	CgsSound::Logic::Voice * GetVoice();

	// CgsVoice.h:779
	CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE GetUpdateStage() const;

	// CgsVoice.h:850
	const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams();

	// CgsVoice.h:500
	uint32_t GetOptionalParam() const;

}

// CgsVoice.h:70
struct CgsSound::Logic::Voice {
	int (*)(...) * _vptr.Voice;

	// CgsContent.h:59
	typedef Handle<CgsSound::Playback::Voice> VoiceHandle;

protected:
	// CgsVoice.h:248
	Voice::VoiceHandle mVoiceHandle;

	// CgsVoice.h:249
	CgsSound::Logic::Module * mpModule;

public:
	// CgsVoice.h:537
	void Voice();

	// CgsVoice.h:554
	virtual void ~Voice();

	// CgsVoice.h:574
	void Construct(CgsSound::Logic::Module *, Command::QueueElement, Command::QueueElement);

	// CgsVoice.cpp:59
	void Construct(CgsSound::Logic::Module *, Command::QueueElement, Command::QueueElement, Command::QueueElement);

	// CgsVoice.cpp:81
	void Destruct();

	// CgsVoice.cpp:102
	void Connect(Command::QueueElement, Command::QueueElement);

	// CgsVoice.cpp:121
	void Disconnect(Command::QueueElement);

	// CgsVoice.cpp:141
	void Attach(Command::QueueElement, const CgsSound::Logic::Content &);

	// CgsVoice.cpp:179
	void Detach(Command::QueueElement);

	// CgsVoice.cpp:198
	void Play(uint32_t);

	// CgsVoice.cpp:218
	void Stop();

	// CgsVoice.h:591
	float32_t GetGain(Name);

	// CgsVoice.h:176
	void SetGain(uint32_t, float32_t, Partial::Name);

	// CgsVoice.h:609
	void SetParameter(int32_t, float32_t, Partial::Name);

	// CgsVoice.h:627
	Command::QueueElement GetIdent() const;

	// CgsVoice.h:645
	bool IsCreated() const;

	// CgsVoice.h:663
	bool IsReady() const;

	// CgsVoice.h:685
	bool IsPlaying() const;

private:
	// CgsVoice.cpp:160
	void Attach(Command::QueueElement, Content::ContentHandle);

	// CgsVoice.h:237
	void Voice(const CgsSound::Logic::Voice &);

	// CgsVoice.h:242
	CgsSound::Logic::Voice & operator=(const CgsSound::Logic::Voice &);

}

// CgsVoice.h:275
struct CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer {
	int (*)(...) * _vptr.AbstractFunctionPointer;

public:
	void AbstractFunctionPointer();

	void AbstractFunctionPointer(const AbstractFunctionPointer &);

	// CgsVoice.h:280
	virtual void Call(CgsSound::Logic::VoiceWrapper &);

}

// CgsVoice.h:296
void CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Logic::Traffic::TrafficHorn>::FunctorPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoice.h:275
void CgsSound::Logic::VoiceWrapper::AbstractFunctionPointer::AbstractFunctionPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoice.h:296
void CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Logic::Traffic::TrafficSkid>::FunctorPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoice.h:296
void CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Engines::BoostEffect>::FunctorPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoice.h:296
void CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Wheels::SkidEffect>::FunctorPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoice.h:296
void CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Wheels::InAirEffect>::FunctorPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

