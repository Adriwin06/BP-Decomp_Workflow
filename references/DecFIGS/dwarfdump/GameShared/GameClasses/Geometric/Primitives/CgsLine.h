// CgsLine.h:44
struct CgsGeometric::Line {
private:
	// CgsLine.h:70
	Vector3 mStart;

	// CgsLine.h:71
	Vector3 mEnd;

public:
	// CgsLine.h:50
	void Set(Vector3, Vector3);

	// CgsLine.h:54
	void SetStart(Vector3);

	// CgsLine.h:58
	void SetEnd(Vector3);

	// CgsLine.h:61
	Vector3 GetStart() const;

	// CgsLine.h:64
	Vector3 GetEnd() const;

	// CgsLine.h:67
	bool IsValid() const;

}

