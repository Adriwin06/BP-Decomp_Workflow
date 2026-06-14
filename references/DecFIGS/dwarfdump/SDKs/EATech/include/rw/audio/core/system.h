// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// system.h:119
			enum TimerStage {
				TIMERSTAGE_BEFORECOMMANDS = 0,
				TIMERSTAGE_BEFOREMIXER = 1,
				TIMERSTAGE_MAX = 2,
				TIMERSTAGE_NONE = 3,
			}

			// system.h:183
			enum TimerVisibility {
				TIMERVISIBILITY_SHOWN = 0,
				TIMERVISIBILITY_HIDDEN = 1,
			}

			// Declaration
			struct System {
				// system.h:499
				enum DEBUGFEATURE {
					DEBUGFEATURE_ASSERTONMEMORYALLOCATION = 0,
					DEBUGFEATURE_ASSERTONFEEDBACKLOOP = 1,
					DEBUGFEATURE_ASSERTONINVALIDSAMPLEDATA = 2,
					DEBUGFEATURE_ASSERTONINVALIDPARAMETERS = 3,
					DEBUGFEATURE_PRINTWARNINGS = 4,
					DEBUGFEATURE_ASSERTONINVALIDAEMSPLAYERINPUTS = 5,
					DEBUGFEATURE_MAX = 6,
				}

			}

		}

	}

}

// system.h:70
struct rw::audio::core::VoiceListNode {
private:
	// system.h:81
	rw::audio::core::Voice * pVoice;

	// system.h:84
	unsigned int size;

	// system.h:89
	char[8] pad;

}

// system.h:96
struct rw::audio::core::Command {
	// system.h:99
	int (*)(Command *) handler;

	// system.h:101
	void * pObject;

}

// system.h:255
struct rw::audio::core::TimerHandle {
private:
	// system.h:316
	rw::audio::core::Collection::ItemHandle mItemHandle;

	// Unknown accessibility
	// system.h:235
	typedef void (*)(void *, float) TimerCallback;

	// system.h:320
	TimerHandle::TimerCallback mpCallback;

	// system.h:321
	void * mpContext;

	// system.h:322
	const char * mpName;

	// system.h:325
	unsigned int mCpuTicks;

	// system.h:327
	unsigned char mStage;

	// system.h:328
	unsigned char mTimerVisibility;

public:
	// system.h:257
	void TimerHandle();

	// system.h:258
	void ~TimerHandle();

	// system.h:274
	const char * GetName() const;

	// system.h:296
	unsigned int GetCpuTicks() const;

private:
	// system.h:306
	void TimerHandle(const TimerHandle &);

	// system.h:307
	TimerHandle & operator=(const TimerHandle &);

	// system.h:310
	bool IsHidden() const;

}

// system.h:418
struct rw::audio::core::TimerManager {
private:
	// system.h:436
	Collection[2] mTimerCollection;

	// system.h:437
	float mTimerPeriod;

	// system.h:441
	TimerHandle * mpTimerIterator;

	// system.h:442
	rw::audio::core::TimerStage mDeferredRemovalStage;

	// system.h:443
	rw::audio::core::Collection::ItemNode * mpDeferredRemovalNode;

public:
	// system.h:420
	void TimerManager();

	// system.h:422
	void SetTimerPeriod(float);

	// system.h:423
	float GetTimerPeriod();

	// system.h:425
	void ExecuteTimers(rw::audio::core::TimerStage);

	// system.h:428
	bool AddTimer(TimerHandle *, TimerHandle::TimerCallback, void *, const char *, rw::audio::core::TimerStage, rw::audio::core::TimerVisibility);

	// system.h:429
	void RemoveTimer(TimerHandle *);

	// system.h:430
	void Defragment();

	// system.h:431
	void Release();

}

// system.h:476
struct rw::audio::core::System {
	// system.h:667
	extern const unsigned char COMMAND_ALIGNMENT = 4;

private:
	// system.h:3068
	rw::audio::core::StackAllocator * mpStackAllocator;

	// system.h:3071
	void (*)(const rw::audio::core::System *, const char *, const char *, const char *, int) mpAssertImplementation;

	// system.h:3106
	double mSystemTime;

	// system.h:3109
	ListDStack mExpelledVoiceList;

	// system.h:3112
	extern System * spInstance;

	// system.h:3115
	EA::Allocator::ICoreAllocator * mpAllocator;

	// system.h:3116
	void *(*)(unsigned int, unsigned int, unsigned int, const char *) mpPhysicalAlloc;

	// system.h:3117
	void (*)(void *) mpPhysicalFree;

	// system.h:3120
	char * mpCommandBuffer;

	// system.h:3123
	rw::audio::core::PlugIn * mpMasteringSubMix;

	// system.h:3126
	rw::audio::core::PlugInRegistry * mpPlugInRegistry;

	// system.h:3129
	rw::audio::core::DecoderRegistry * mpDecoderRegistry;

	// system.h:3132
	rw::audio::core::EncoderRegistry * mpEncoderRegistry;

	// system.h:3135
	rw::audio::core::Profiler * mpProfiler;

	// system.h:3138
	JobScheduler * mpJobScheduler;

	// system.h:3141
	bool (*)() mMutexIsLockedFn;

	// system.h:3142
	void (*)() mMutexLockFn;

	// system.h:3143
	void (*)() mMutexUnlockFn;

	// system.h:3150
	Mutex * mpExecuteCommandsMutex;

	// system.h:3151
	Mutex * mpMutex;

	// system.h:3152
	void * mpLockThreadId;

	// system.h:3153
	void * mpRwAudioCoreThreadId;

	// system.h:3155
	VoiceListNode * mpVoiceListNodes;

	// system.h:3156
	ListDStack mTimerList;

	// system.h:3157
	TimerManager mTimerManager;

	// system.h:3159
	rw::audio::core::Voice *[1024] mapVoiceExpulsionCandidates;

	// system.h:3160
	unsigned int muVoiceExpulsionCandidateCount;

	// system.h:3166
	bool (*)(const char *) mpAssertHandler;

	// system.h:3168
	unsigned char (*)() mGetCsisLibraryType;

	// system.h:3171
	unsigned int mCommandBufferSize;

	// system.h:3172
	unsigned int mCommandIndex;

	// system.h:3173
	unsigned int mCommandBufferHighWater;

	// system.h:3175
	float mSystemTimerPeriod;

	// system.h:3176
	float mSampleRate;

	// system.h:3182
	float mCpuFrequency;

	// system.h:3185
	float mCpuLoadLimit;

	// system.h:3189
	unsigned int mMixerCpuTicks;

	// system.h:3190
	unsigned int mCommandExecutionCpuTicks;

	// system.h:3191
	unsigned int mTimerExecutionCpuTicks;

	// system.h:3192
	unsigned int mLoadBalancerCpuTicks;

	// system.h:3193
	unsigned int mExpelVoicesCpuTicks;

	// system.h:3196
	unsigned int mCommandTimeStamp;

	// system.h:3199
	int volatile mRefCount;

	// system.h:3202
	int mThreadPriority;

	// system.h:3205
	unsigned int mThreadStackSize;

	// system.h:3208
	short unsigned int mNumActiveVoices;

	// system.h:3211
	short unsigned int mMaxActiveVoices;

	// system.h:3215
	unsigned char mCommandsExecuting;

	// system.h:3216
	unsigned char mMutexLockAttempted;

	// system.h:3219
	unsigned char mProcessor;

	// system.h:3221
	unsigned char[6] mDebugFeatures;

public:
	// system.h:591
	bool IsDebugFeatureEnabled(rw::audio::core::System::DEBUGFEATURE) const;

	// system.h:612
	void EnableDebugFeature(rw::audio::core::System::DEBUGFEATURE);

	// system.h:630
	void DisableDebugFeature(rw::audio::core::System::DEBUGFEATURE);

	// system.h:649
	void EnableAllDebugFeatures();

	// system.h:664
	void DisableAllDebugFeatures();

	// system.h:754
	System * CreateInstance(EA::Allocator::ICoreAllocator *, int);

	// system.h:793
	int GetCommandBufferHighWater() const;

	// system.h:835
	void SetJobScheduler(JobScheduler *);

	// system.h:856
	JobScheduler * GetJobScheduler() const;

	// system.h:885
	void SetThreadProcessor(int);

	// system.h:902
	int GetThreadProcessor() const;

	// system.h:965
	void SetThreadPriority(int);

	// system.h:987
	int GetThreadPriority() const;

	// system.h:1031
	void SetThreadStackSize(unsigned int);

	// system.h:1056
	unsigned int GetThreadStackSize() const;

	// system.h:1081
	void SetRwAudioCoreThreadId(void *);

	// system.h:1095
	void * GetRwAudioCoreThreadId() const;

	// system.h:1164
	void SetCpuLoadLimit(float);

	// system.h:1206
	void SetAssertHandler(bool (*)(const char *));

	// system.h:1240
	void Assert(const char *, const char *, const char *, int) const;

	// system.h:1288
	System * GetInstance();

	// system.h:1317
	void Release();

	// system.h:1361
	void RegisterStandardRunTime();

	// system.h:1467
	void SetMasteringSubMix(rw::audio::core::PlugIn *);

	// system.h:1493
	rw::audio::core::PlugIn * GetMasteringSubMix() const;

	// system.h:1518
	rw::audio::core::PlugInRegistry * GetPlugInRegistry();

	// system.h:1539
	rw::audio::core::DecoderRegistry * GetDecoderRegistry();

	// system.h:1560
	rw::audio::core::EncoderRegistry * GetEncoderRegistry();

	// system.h:1573
	rw::audio::core::Profiler * GetProfiler();

	// system.h:1637
	void Lock();

	// system.h:1650
	void Unlock();

	// system.h:1678
	bool IsLocked() const;

	// system.h:1854
	rw::audio::core::Error AddTimer(TimerHandle *, TimerHandle::TimerCallback, void *, const char *, rw::audio::core::TimerStage, rw::audio::core::TimerVisibility);

	// system.h:1897
	void RemoveTimer(TimerHandle *);

	// system.h:1966
	double GetTime() const;

	// system.h:2002
	unsigned int GetCommandTimeStamp() const;

	// system.h:2129
	bool IsCommandComplete(unsigned int) const;

	// system.h:2182
	float GetCpuTickMultiplier() const;

	// system.h:2236
	unsigned int GetOverheadCpuTicks() const;

	// system.h:2309
	unsigned int GetMixerCpuTicks() const;

	// system.h:2317
	void SetMixerCpuTicks(unsigned int);

	// system.h:2362
	unsigned int GetCommandExecutionCpuTicks() const;

	// system.h:2401
	unsigned int GetTimerExecutionCpuTicks() const;

	// system.h:2435
	unsigned int GetLoadBalancerCpuTicks() const;

	// system.h:2477
	void VectorToCsisMutex();

	// system.h:2480
	bool IsMutexVectoredToCsis() const;

	// system.h:2489
	void AdvanceTime();

	// system.h:2499
	void SetSampleRate(float);

	// system.h:2534
	float GetSampleRate() const;

	// system.h:2567
	Command * GetCommandSlot(int);

	// system.h:2596
	void ExecuteCommandsLock();

	// system.h:2597
	void ExecuteCommandsUnlock();

	// system.h:2600
	void AddRef();

	// system.h:2601
	void DecRef();

	// system.h:2602
	void ExecuteCommands();

	// system.h:2606
	void SetHandler(int (*)(Command *), void *);

	// system.h:2678
	void * Alloc(unsigned int, const char *, unsigned int, EA::Allocator::ICoreAllocator *);

	// system.h:2700
	void Free(void *, EA::Allocator::ICoreAllocator *);

	// system.h:2903
	void SetPhysicalAllocators(void *(*)(unsigned int, unsigned int, unsigned int, const char *), void (*)(void *));

	// system.h:2907
	rw::audio::core::StackAllocator * GetStackAllocator() const;

	// system.h:2929
	VoiceListNode * GetVoiceListNodes() const;

	// system.h:2937
	int GetNumActiveVoices() const;

	// system.h:2962
	void AddTimer(rw::audio::core::ITask *);

	// system.h:2977
	void RemoveTimer(rw::audio::core::ITask *);

	// system.h:2994
	float GetMixerCpu() const;

	// system.h:3002
	void SetMutexLockFn(void (*)());

	// system.h:3009
	void SetMutexUnlockFn(void (*)());

	// system.h:3016
	void SetMutexIsLockedFn(bool (*)());

private:
	// system.h:3034
	void * PhysicalAlloc(unsigned int, unsigned int, unsigned int, const char *);

	// system.h:3035
	void PhysicalFree(void *);

	// system.h:3036
	void * DefaultPhysicalAlloc(unsigned int, unsigned int, unsigned int, const char *);

	// system.h:3037
	void DefaultPhysicalFree(void *);

	// system.h:3039
	void InitStackAllocator();

	// system.h:3042
	void AssertImplementation(const rw::audio::core::System *, const char *, const char *, const char *, int);

	// system.h:3046
	void SetCpuFrequency(float);

	// system.h:3053
	float GetCpuFrequency() const;

	// system.h:3078
	void System(const rw::audio::core::System &);

	// system.h:3079
	System & operator=(const rw::audio::core::System &);

	// system.h:3080
	void System();

	// system.h:3081
	void ~System();

	// system.h:3084
	int ReleaseHandler(Command *);

	// system.h:3086
	int GetProcessorsCount() const;

	// system.h:3088
	int GetRefCount() const;

	// system.h:3093
	bool CommandBufferEmpty() const;

	// system.h:3101
	void UpdateExpellingVoices();

	// system.h:3102
	void RemoveVoiceFromExpulsionCandidateList(unsigned int);

	// system.h:3103
	void RemoveVoiceFromExpulsionCandidateList(rw::audio::core::Voice *);

}

// system.h:3238
struct rw::audio::core::ITask {
	int (*)(...) * _vptr.ITask;

private:
	// system.h:3259
	ListDNode listDNode;

public:
	// system.h:3240
	virtual void ~ITask();

	// system.h:3255
	virtual void RwAudioCoreTimer(float);

private:
	// system.h:3261
	rw::audio::core::ITask * GetITaskFromNode(ListDNode *);

}

// system.h:667
extern const unsigned char COMMAND_ALIGNMENT = 4;

// system.h:3112
extern System * spInstance;

// system.h:476
struct rw::audio::core::System {
	// system.h:667
	extern const unsigned char COMMAND_ALIGNMENT = 4;

private:
	// system.h:3068
	rw::audio::core::StackAllocator * mpStackAllocator;

	// system.h:3071
	void (*)(const rw::audio::core::System *, const char *, const char *, const char *, int) mpAssertImplementation;

	// system.h:3106
	double mSystemTime;

	// system.h:3109
	ListDStack mExpelledVoiceList;

	// system.h:3112
	extern System * spInstance;

	// system.h:3115
	EA::Allocator::ICoreAllocator * mpAllocator;

	// system.h:3116
	void *(*)(unsigned int, unsigned int, unsigned int, const char *) mpPhysicalAlloc;

	// system.h:3117
	void (*)(void *) mpPhysicalFree;

	// system.h:3120
	char * mpCommandBuffer;

	// system.h:3123
	rw::audio::core::PlugIn * mpMasteringSubMix;

	// system.h:3126
	rw::audio::core::PlugInRegistry * mpPlugInRegistry;

	// system.h:3129
	rw::audio::core::DecoderRegistry * mpDecoderRegistry;

	// system.h:3132
	rw::audio::core::EncoderRegistry * mpEncoderRegistry;

	// system.h:3135
	rw::audio::core::Profiler * mpProfiler;

	// system.h:3138
	EA::Jobs::JobScheduler * mpJobScheduler;

	// system.h:3141
	bool (*)() mMutexIsLockedFn;

	// system.h:3142
	void (*)() mMutexLockFn;

	// system.h:3143
	void (*)() mMutexUnlockFn;

	// system.h:3150
	Mutex * mpExecuteCommandsMutex;

	// system.h:3151
	Mutex * mpMutex;

	// system.h:3152
	void * mpLockThreadId;

	// system.h:3153
	void * mpRwAudioCoreThreadId;

	// system.h:3155
	VoiceListNode * mpVoiceListNodes;

	// system.h:3156
	ListDStack mTimerList;

	// system.h:3157
	TimerManager mTimerManager;

	// system.h:3159
	rw::audio::core::Voice *[1024] mapVoiceExpulsionCandidates;

	// system.h:3160
	unsigned int muVoiceExpulsionCandidateCount;

	// system.h:3166
	bool (*)(const char *) mpAssertHandler;

	// system.h:3168
	unsigned char (*)() mGetCsisLibraryType;

	// system.h:3171
	unsigned int mCommandBufferSize;

	// system.h:3172
	unsigned int mCommandIndex;

	// system.h:3173
	unsigned int mCommandBufferHighWater;

	// system.h:3175
	float mSystemTimerPeriod;

	// system.h:3176
	float mSampleRate;

	// system.h:3182
	float mCpuFrequency;

	// system.h:3185
	float mCpuLoadLimit;

	// system.h:3189
	unsigned int mMixerCpuTicks;

	// system.h:3190
	unsigned int mCommandExecutionCpuTicks;

	// system.h:3191
	unsigned int mTimerExecutionCpuTicks;

	// system.h:3192
	unsigned int mLoadBalancerCpuTicks;

	// system.h:3193
	unsigned int mExpelVoicesCpuTicks;

	// system.h:3196
	unsigned int mCommandTimeStamp;

	// system.h:3199
	int volatile mRefCount;

	// system.h:3202
	int mThreadPriority;

	// system.h:3205
	unsigned int mThreadStackSize;

	// system.h:3208
	short unsigned int mNumActiveVoices;

	// system.h:3211
	short unsigned int mMaxActiveVoices;

	// system.h:3215
	unsigned char mCommandsExecuting;

	// system.h:3216
	unsigned char mMutexLockAttempted;

	// system.h:3219
	unsigned char mProcessor;

	// system.h:3221
	unsigned char[6] mDebugFeatures;

public:
	// system.h:591
	bool IsDebugFeatureEnabled(rw::audio::core::System::DEBUGFEATURE) const;

	// system.h:612
	void EnableDebugFeature(rw::audio::core::System::DEBUGFEATURE);

	// system.h:630
	void DisableDebugFeature(rw::audio::core::System::DEBUGFEATURE);

	// system.h:649
	void EnableAllDebugFeatures();

	// system.h:664
	void DisableAllDebugFeatures();

	// system.h:754
	System * CreateInstance(EA::Allocator::ICoreAllocator *, int);

	// system.h:793
	int GetCommandBufferHighWater() const;

	// system.h:835
	void SetJobScheduler(EA::Jobs::JobScheduler *);

	// system.h:856
	EA::Jobs::JobScheduler * GetJobScheduler() const;

	// system.h:885
	void SetThreadProcessor(int);

	// system.h:902
	int GetThreadProcessor() const;

	// system.h:965
	void SetThreadPriority(int);

	// system.h:987
	int GetThreadPriority() const;

	// system.h:1031
	void SetThreadStackSize(unsigned int);

	// system.h:1056
	unsigned int GetThreadStackSize() const;

	// system.h:1081
	void SetRwAudioCoreThreadId(void *);

	// system.h:1095
	void * GetRwAudioCoreThreadId() const;

	// system.h:1164
	void SetCpuLoadLimit(float);

	// system.h:1206
	void SetAssertHandler(bool (*)(const char *));

	// system.h:1240
	void Assert(const char *, const char *, const char *, int) const;

	// system.h:1288
	System * GetInstance();

	// system.h:1317
	void Release();

	// system.h:1361
	void RegisterStandardRunTime();

	// system.h:1467
	void SetMasteringSubMix(rw::audio::core::PlugIn *);

	// system.h:1493
	rw::audio::core::PlugIn * GetMasteringSubMix() const;

	// system.h:1518
	rw::audio::core::PlugInRegistry * GetPlugInRegistry();

	// system.h:1539
	rw::audio::core::DecoderRegistry * GetDecoderRegistry();

	// system.h:1560
	rw::audio::core::EncoderRegistry * GetEncoderRegistry();

	// system.h:1573
	rw::audio::core::Profiler * GetProfiler();

	// system.h:1637
	void Lock();

	// system.h:1650
	void Unlock();

	// system.h:1678
	bool IsLocked() const;

	// system.h:1854
	rw::audio::core::Error AddTimer(TimerHandle *, TimerHandle::TimerCallback, void *, const char *, rw::audio::core::TimerStage, rw::audio::core::TimerVisibility);

	// system.h:1897
	void RemoveTimer(TimerHandle *);

	// system.h:1966
	double GetTime() const;

	// system.h:2002
	unsigned int GetCommandTimeStamp() const;

	// system.h:2129
	bool IsCommandComplete(unsigned int) const;

	// system.h:2182
	float GetCpuTickMultiplier() const;

	// system.h:2236
	unsigned int GetOverheadCpuTicks() const;

	// system.h:2309
	unsigned int GetMixerCpuTicks() const;

	// system.h:2317
	void SetMixerCpuTicks(unsigned int);

	// system.h:2362
	unsigned int GetCommandExecutionCpuTicks() const;

	// system.h:2401
	unsigned int GetTimerExecutionCpuTicks() const;

	// system.h:2435
	unsigned int GetLoadBalancerCpuTicks() const;

	// system.h:2477
	void VectorToCsisMutex();

	// system.h:2480
	bool IsMutexVectoredToCsis() const;

	// system.h:2489
	void AdvanceTime();

	// system.h:2499
	void SetSampleRate(float);

	// system.h:2534
	float GetSampleRate() const;

	// system.h:2567
	Command * GetCommandSlot(int);

	// system.h:2596
	void ExecuteCommandsLock();

	// system.h:2597
	void ExecuteCommandsUnlock();

	// system.h:2600
	void AddRef();

	// system.h:2601
	void DecRef();

	// system.h:2602
	void ExecuteCommands();

	// system.h:2606
	void SetHandler(int (*)(Command *), void *);

	// system.h:2678
	void * Alloc(unsigned int, const char *, unsigned int, EA::Allocator::ICoreAllocator *);

	// system.h:2700
	void Free(void *, EA::Allocator::ICoreAllocator *);

	// system.h:2903
	void SetPhysicalAllocators(void *(*)(unsigned int, unsigned int, unsigned int, const char *), void (*)(void *));

	// system.h:2907
	rw::audio::core::StackAllocator * GetStackAllocator() const;

	// system.h:2929
	VoiceListNode * GetVoiceListNodes() const;

	// system.h:2937
	int GetNumActiveVoices() const;

	// system.h:2962
	void AddTimer(rw::audio::core::ITask *);

	// system.h:2977
	void RemoveTimer(rw::audio::core::ITask *);

	// system.h:2994
	float GetMixerCpu() const;

	// system.h:3002
	void SetMutexLockFn(void (*)());

	// system.h:3009
	void SetMutexUnlockFn(void (*)());

	// system.h:3016
	void SetMutexIsLockedFn(bool (*)());

private:
	// system.h:3034
	void * PhysicalAlloc(unsigned int, unsigned int, unsigned int, const char *);

	// system.h:3035
	void PhysicalFree(void *);

	// system.h:3036
	void * DefaultPhysicalAlloc(unsigned int, unsigned int, unsigned int, const char *);

	// system.h:3037
	void DefaultPhysicalFree(void *);

	// system.h:3039
	void InitStackAllocator();

	// system.h:3042
	void AssertImplementation(const rw::audio::core::System *, const char *, const char *, const char *, int);

	// system.h:3046
	void SetCpuFrequency(float);

	// system.h:3053
	float GetCpuFrequency() const;

	// system.h:3078
	void System(const rw::audio::core::System &);

	// system.h:3079
	System & operator=(const rw::audio::core::System &);

	// system.h:3080
	void System();

	// system.h:3081
	void ~System();

	// system.h:3084
	int ReleaseHandler(Command *);

	// system.h:3086
	int GetProcessorsCount() const;

	// system.h:3088
	int GetRefCount() const;

	// system.h:3093
	bool CommandBufferEmpty() const;

	// system.h:3101
	void UpdateExpellingVoices();

	// system.h:3102
	void RemoveVoiceFromExpulsionCandidateList(unsigned int);

	// system.h:3103
	void RemoveVoiceFromExpulsionCandidateList(rw::audio::core::Voice *);

}

// system.h:2816
extern void Delete<rw::audio::core::Decoder*>(rw::audio::core::Decoder *  pClass, EA::Allocator::ICoreAllocator *  pAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// system.h:2630
extern void HandlerGetThis<rw::audio::core::SndPlayer1_CgsStreamMod, rw::audio::core::SndPlayer1_CgsStreamMod::ModifyStartTimeCommand>(Command *  pCommand, SndPlayer1_CgsStreamMod **  ppThis, rw::audio::core::SndPlayer1_CgsStreamMod::ModifyStartTimeCommand **  ppThisCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// system.h:2617
extern void SetParamHandler<rw::audio::core::GinsuPlayer::PlayParams>(rw::audio::core::GinsuPlayer::PlayParams *  pParams, int (*)(Command *)  pHandler, void *  pThis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// system.h:2619
		Command * pCommand;

	}
}

// system.h:2630
extern void HandlerGetThis<rw::audio::core::SndPlayer1_CgsStreamMod, rw::audio::core::SndPlayer1_CgsStreamMod::PlayCommand>(Command *  pCommand, SndPlayer1_CgsStreamMod **  ppThis, rw::audio::core::SndPlayer1_CgsStreamMod::PlayCommand **  ppThisCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

