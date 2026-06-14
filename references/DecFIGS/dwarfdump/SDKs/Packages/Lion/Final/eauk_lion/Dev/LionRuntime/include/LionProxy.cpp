// LionProxy.h:17
namespace LIONPROXY {
	// LionProxy.cpp:37
	extern void AppInit();

	// LionProxy.cpp:54
	extern void AppDeInit();

	// LionProxy.cpp:66
	extern U32 KeyCreate(void *);

	// LionProxy.cpp:90
	extern void KeyDelete(U32);

	// LionProxy.cpp:105
	extern void KeySet(U32, void *);

	// LionProxy.cpp:120
	extern U32 KeyFind(void *);

	// LionProxy.cpp:141
	extern void * KeyGetValue(U32);

	// LionProxy.cpp:24
	extern void *[1024] mKeys;

}

