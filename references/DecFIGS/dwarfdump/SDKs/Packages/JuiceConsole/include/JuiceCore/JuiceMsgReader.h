// JuiceMsgReader.h:18
struct Juice::JuiceMsgReader {
	int (*)(...) * _vptr.JuiceMsgReader;

protected:
	// JuiceMsgReader.h:43
	char * mpBuffer;

	// JuiceMsgReader.h:44
	unsigned int mBufferSize;

	// JuiceMsgReader.h:45
	unsigned int mBufferFilledLength;

	// JuiceMsgReader.h:46
	unsigned int mBufferCursor;

	// JuiceMsgReader.h:47
	unsigned int mCommandLength;

	// JuiceMsgReader.h:48
	unsigned int mExpectedCommandLength;

	// JuiceMsgReader.h:49
	bool mInitialized;

public:
	void JuiceMsgReader(const JuiceMsgReader &);

	// JuiceMsgReader.cpp:245
	Juice::Command GetMsgID();

	// JuiceMsgReader.cpp:121
	unsigned int GetMsgLength();

	// JuiceMsgReader.cpp:136
	int GetInt();

	// JuiceMsgReader.cpp:157
	char GetChar();

	// JuiceMsgReader.cpp:172
	float GetFloat();

	// JuiceMsgReader.cpp:197
	char * GetString();

	// JuiceMsgReader.cpp:231
	char * GetNBytes(unsigned int);

	// JuiceMsgReader.cpp:215
	char * GetBytes(unsigned int &);

	// JuiceMsgReader.cpp:257
	char PeekChar();

	// JuiceMsgReader.cpp:91
	bool HasNBytes(unsigned int);

	// JuiceMsgReader.cpp:109
	bool HasUnprocessedMsg();

	// JuiceMsgReader.cpp:268
	void ResetReadBuffer();

	// JuiceMsgReader.h:34
	virtual void ReadEvent();

	// JuiceMsgReader.cpp:31
	virtual void ~JuiceMsgReader();

	// JuiceMsgReader.cpp:24
	void JuiceMsgReader();

	// JuiceMsgReader.cpp:42
	void InitReader(char *, unsigned int, unsigned int);

	// JuiceMsgReader.cpp:59
	void LoadData(unsigned int);

	// JuiceMsgReader.cpp:74
	void LoadData(const char *, unsigned int);

}

