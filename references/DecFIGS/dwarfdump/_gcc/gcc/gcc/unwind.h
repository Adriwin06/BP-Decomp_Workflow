// unwind.h:46
typedef long long unsigned int _Unwind_Word;

// unwind.h:47
typedef long long int _Unwind_Sword;

// unwind.h:51
typedef unsigned int _Unwind_Ptr;

// unwind.h:53
typedef unsigned int _Unwind_Internal_Ptr;

// unwind.h:59
typedef long long unsigned int _Unwind_Exception_Class;

// unwind.h:64
enum {
	_URC_NO_REASON = 0,
	_URC_FOREIGN_EXCEPTION_CAUGHT = 1,
	_URC_FATAL_PHASE2_ERROR = 2,
	_URC_FATAL_PHASE1_ERROR = 3,
	_URC_NORMAL_STOP = 4,
	_URC_END_OF_STACK = 5,
	_URC_HANDLER_FOUND = 6,
	_URC_INSTALL_CONTEXT = 7,
	_URC_CONTINUE_UNWIND = 8,
}

// unwind.h:74
typedef enumeration  _Unwind_Reason_Code;

// unwind.h:86
typedef void (*)(_Unwind_Reason_Code, _Unwind_Exception *) _Unwind_Exception_Cleanup_Fn;

// unwind.h:83
struct _Unwind_Exception {
	// unwind.h:90
	_Unwind_Exception_Class exception_class;

	// unwind.h:91
	_Unwind_Exception_Cleanup_Fn exception_cleanup;

	// unwind.h:92
	_Unwind_Word private_1;

	// unwind.h:93
	_Unwind_Word private_2;

}

// unwind.h:103
typedef int _Unwind_Action;

// unwind.h:124
typedef _Unwind_Reason_Code (*)(int, _Unwind_Action, _Unwind_Exception_Class, _Unwind_Exception *, _Unwind_Context *, void *) _Unwind_Stop_Fn;

// unwind.h:115
struct _Unwind_Context {
	// unwind-dw2.c:68
	void *[146] reg;

	// unwind-dw2.c:69
	void * cfa;

	// unwind-dw2.c:70
	void * ra;

	// unwind-dw2.c:71
	void * lsda;

	// unwind-dw2.c:72
	dwarf_eh_bases bases;

	// unwind-dw2.c:73
	_Unwind_Word args_size;

}

// unwind.h:145
typedef _Unwind_Reason_Code (*)(_Unwind_Context *, void *) _Unwind_Trace_Fn;

// unwind.h:184
typedef _Unwind_Reason_Code (*)(int, _Unwind_Action, _Unwind_Exception_Class, _Unwind_Exception *, _Unwind_Context *) _Unwind_Personality_Fn;

