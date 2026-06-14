// AptMatrix.h:49
struct AptMatrix {
	// AptMatrix.h:64
	float a;

	// AptMatrix.h:64
	float b;

	// AptMatrix.h:64
	float c;

	// AptMatrix.h:64
	float d;

	// AptMatrix.h:65
	float tx;

	// AptMatrix.h:65
	float ty;

public:
	// AptMatrix.h:50
	void AptMatrixCopy(const AptMatrix *);

	// AptMatrix.h:67
	void * operator new(size_t);

	// AptMatrix.h:67
	void operator delete(void *, size_t);

	// AptMatrix.h:67
	void * operator new [](size_t);

	// AptMatrix.h:67
	void operator delete [](void *);

}

