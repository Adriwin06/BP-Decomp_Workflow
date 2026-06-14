// CgsObject.h:42
struct CgsSound::Playback::Object {
	int (*)(...) * _vptr.Object;

private:
	// CgsObject.h:85
	uint32_t mu32RefCount;

public:
	Object & operator=(const Object &);

	void Object(const Object &);

	// CgsObject.h:94
	void Object();

	// CgsObject.h:102
	virtual void ~Object();

	// CgsObject.h:108
	void Acquire();

	// CgsObject.h:115
	void Release();

	// CgsObject.h:82
	virtual void DoDispose();

}

