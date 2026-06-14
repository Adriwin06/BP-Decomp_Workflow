// JuiceMsgWriter.h:20
struct Juice::JuiceMsgWriter {
	int (*)(...) * _vptr.JuiceMsgWriter;

private:
	// JuiceMsgWriter.h:53
	JuiceMutex mWriterMutex;

	// JuiceMsgWriter.h:54
	char * mpBuffer;

	// JuiceMsgWriter.h:55
	char * mpHeader;

	// JuiceMsgWriter.h:56
	int mBuffSize;

	// JuiceMsgWriter.h:57
	unsigned int mMsgStart;

	// JuiceMsgWriter.h:58
	unsigned int mNewCommandLength;

	// JuiceMsgWriter.h:59
	unsigned int mMessageLength;

	// JuiceMsgWriter.h:60
	unsigned int mFillWarningThreshold;

	// JuiceMsgWriter.h:61
	unsigned int mDroppedDataSize;

	// JuiceMsgWriter.h:63
	bool mInitialized;

	// JuiceMsgWriter.h:64
	bool mRecordingMsg;

	// JuiceMsgWriter.h:65
	bool mBufferOverFilled;

	// JuiceMsgWriter.h:67
	Juice::Command mCurrentCommand;

	// JuiceMsgWriter.h:68
	Juice::Command mOverFillCommand;

public:
	void JuiceMsgWriter(const JuiceMsgWriter &);

	// JuiceMsgWriter.cpp:26
	void JuiceMsgWriter();

	// JuiceMsgWriter.cpp:35
	virtual void ~JuiceMsgWriter();

	// JuiceMsgWriter.cpp:47
	void InitWriter(char *, unsigned int, unsigned int);

	// JuiceMsgWriter.cpp:72
	void NewMsg(Juice::Command);

	// JuiceMsgWriter.cpp:106
	void EndMsg();

	// JuiceMsgWriter.cpp:182
	void PutInt(int);

	// JuiceMsgWriter.cpp:205
	void PutChar(char);

	// JuiceMsgWriter.cpp:225
	void PutFloat(float);

	// JuiceMsgWriter.cpp:261
	void PutString(const char *);

	// JuiceMsgWriter.cpp:303
	void PutBytes(unsigned int, const char *);

	// JuiceMsgWriter.cpp:327
	void PutRawBytes(unsigned int, const char *);

	// JuiceMsgWriter.cpp:352
	void PutMsg(const char *);

	// JuiceMsgWriter.cpp:391
	void PutArray(unsigned int, const int *);

	// JuiceMsgWriter.cpp:412
	void PutArray(unsigned int, const float *);

	// JuiceMsgWriter.cpp:434
	void PutArray(unsigned int, char *const*);

	// JuiceMsgWriter.cpp:456
	void ResetWriteBuffer();

	// JuiceMsgWriter.cpp:520
	void RollBackMessage();

	// JuiceMsgWriter.cpp:473
	void LockWriter();

	// JuiceMsgWriter.cpp:482
	void UnlockWriter();

	// JuiceMsgWriter.cpp:491
	char * GetDataWriteBuffer();

	// JuiceMsgWriter.cpp:172
	int GetSafeWriteMsgSize();

	// JuiceMsgWriter.cpp:500
	int WriteBufferRemaining();

	// JuiceMsgWriter.cpp:510
	int WriteBufferConsumed();

	// JuiceMsgWriter.h:47
	virtual void WriteCapacityWarning();

	// JuiceMsgWriter.cpp:162
	virtual void WriteDangerousSize(Juice::Command, unsigned int);

	// JuiceMsgWriter.cpp:149
	virtual void WriteCapacityExceeded(Juice::Command, unsigned int);

private:
	// JuiceMsgWriter.cpp:532
	void CapacityExceeded(unsigned int);

}

