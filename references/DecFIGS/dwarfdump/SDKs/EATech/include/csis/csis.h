// csis.h:27
namespace Csis {
}

// csis.h:27
namespace Csis {
	// csis.h:49
	enum Result {
		RESULT_OK = 0,
		RESULT_ERR_MEM = -1,
		RESULT_ERR_ALLOCATE = -2,
		RESULT_ERR_HANDLEEXPIRED = -3,
		RESULT_ERR_UNUSED = -4,
		RESULT_ERR_NOTFOUND = -5,
		RESULT_ERR_UNINITIALIZED = -6,
		RESULT_ERR_ILLEGALOP = -7,
	}

	struct InterfaceId;

	union Parameter {
	}
	struct ClassHandle;

	struct FunctionClient;

	struct ClassConstructorClient;

	struct Class;

	struct ClassDestructorClient;

	struct ClassData;

}

// csis.h:95
struct Csis::InterfaceId {
	// csis.h:96
	const char * pString;

	// csis.h:115
	short int systemCrc;

	// csis.h:133
	short int interfaceCrc;

}

// csis.h:137
union Csis::Parameter {
	// csis.h:138
	int iVal;

	// csis.h:139
	float fVal;

}
// csis.h:331
struct Csis::ClassHandle {
private:
	// csis.h:379
	int padTo64Bit1;

	// csis.h:381
	void * mpPrivate;

	// csis.h:383
	int mKey;

	// csis.h:385
	int padTo64Bit2;

public:
	// csis.h:333
	void ClassHandle();

	// csis.h:344
	void ClassHandle(const InterfaceId *);

	// csis.h:358
	Csis::Result Set(const InterfaceId *);

	// csis.h:359
	Csis::Result SetFast(const InterfaceId *);

	// csis.h:370
	Csis::Result Valid();

	// csis.h:372
	void * operator new(size_t);

	// csis.h:373
	void operator delete(void *);

private:
	// csis.h:391
	void ClassHandle(const ClassHandle &);

	// csis.h:392
	ClassHandle & operator=(const ClassHandle &);

}

// csis.h:495
struct Csis::FunctionClient {
	// csis.h:496
	void *[2] reserved;

	// csis.h:498
	int[2] padTo64Bit1;

	// csis.h:502
	int padTo64Bit2;

	// csis.h:504
	void (*)(Parameter *, void *) pClientFunc;

	// csis.h:507
	int padTo64Bit3;

	// csis.h:509
	void * pClientData;

}

// csis.h:520
struct Csis::ClassConstructorClient {
	// csis.h:521
	void *[2] reserved;

	// csis.h:523
	int[2] padTo64Bit1;

	// csis.h:527
	int padTo64Bit2;

	// csis.h:529
	void (*)(Csis::Class *, Parameter *, void *) pClientFunc;

	// csis.h:532
	int padTo64Bit3;

	// csis.h:534
	void * pClientData;

}

// csis.h:545
struct Csis::ClassDestructorClient {
	// csis.h:546
	void *[2] reserved;

	// csis.h:548
	int[2] padTo64Bit1;

	// csis.h:552
	int padTo64Bit2;

	// csis.h:554
	void (*)(Csis::Class *, void *) pClientFunc;

	// csis.h:557
	int padTo64Bit3;

	// csis.h:559
	void * pClientData;

}

// csis.h:1008
struct Csis::Class {
public:
	// csis.h:1013
	Csis::Result CreateInstance(ClassHandle *, void *, Csis::Class **);

	// csis.h:1015
	Csis::Result CreateInstanceFast(ClassHandle *, void *, Csis::Class **);

	// csis.h:1019
	Csis::Result Release();

	// csis.h:1020
	Csis::Result ReleaseFast();

	// csis.h:1024
	Csis::Result SetMemberData(void *);

	// csis.h:1025
	Csis::Result SetMemberDataFast(void *);

	// csis.h:1037
	Csis::Result GetRefCount(int *);

	// csis.h:1039
	Csis::Result AddRef();

	// csis.h:1040
	Csis::Result DecRef();

	// csis.h:1043
	Csis::Result SubscribeConstructor(ClassHandle *, ClassConstructorClient *);

	// csis.h:1045
	Csis::Result SubscribeConstructorFast(ClassHandle *, ClassConstructorClient *);

	// csis.h:1048
	Csis::Result UnsubscribeConstructor(ClassHandle *, ClassConstructorClient *);

	// csis.h:1050
	Csis::Result UnsubscribeConstructorFast(ClassHandle *, ClassConstructorClient *);

	// csis.h:1052
	Csis::Result SubscribeDestructor(ClassDestructorClient *);

	// csis.h:1053
	Csis::Result SubscribeDestructorFast(ClassDestructorClient *);

	// csis.h:1055
	Csis::Result UnsubscribeDestructor(ClassDestructorClient *);

	// csis.h:1056
	Csis::Result UnsubscribeDestructorFast(ClassDestructorClient *);

	// csis.h:1058
	// Declaration
	Csis::Result SubscribeMemberData(MemberDataClient *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// csis.h:510
		typedef FunctionClient MemberDataClient;

	}

	// csis.h:1059
	Csis::Result SubscribeMemberDataFast(MemberDataClient *);

	// csis.h:1061
	Csis::Result UnsubscribeMemberData(MemberDataClient *);

	// csis.h:1062
	Csis::Result UnsubscribeMemberDataFast(MemberDataClient *);

	// csis.h:1091
	Csis::Result GetClassName(const char **);

private:
	// csis.h:1103
	void Class();

	// csis.h:1104
	void ~Class();

	// csis.h:1108
	void Class(const Class &);

	// csis.h:1109
	Class & operator=(const Class &);

}

