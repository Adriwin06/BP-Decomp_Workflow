// unwind.h:46
typedef long long unsigned int _Unwind_Word;

// unwind.h:51
typedef unsigned int _Unwind_Ptr;

// unwind.h:59
typedef long long unsigned int _Unwind_Exception_Class;

// unwind.h:63
enum _Unwind_Reason_Code {
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

// unwind.h:86
typedef void (*)(_Unwind_Reason_Code, _Unwind_Exception *) _Unwind_Exception_Cleanup_Fn;

// unwind.h:89
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

// unwind.h:47
typedef long long int _Unwind_Sword;

// unwind.h:53
typedef unsigned int _Unwind_Internal_Ptr;

// unwind.h:103
typedef int _Unwind_Action;

