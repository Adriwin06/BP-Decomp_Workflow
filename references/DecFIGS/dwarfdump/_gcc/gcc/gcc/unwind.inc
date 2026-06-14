// unwind.inc:290
extern void _Unwind_DeleteException(_Unwind_Exception *  exc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// unwind.inc:300
extern _Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn  trace, void *  trace_argument) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind.inc:301
	_Unwind_Context context;

	// unwind.inc:302
	_Unwind_Reason_Code code;

	{
		// unwind.inc:308
		_Unwind_FrameState fs;

	}
}

// unwind.inc:149
_Unwind_Reason_Code _Unwind_ForcedUnwind_Phase2(_Unwind_Exception *  exc, _Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind.inc:150
	_Unwind_Stop_Fn stop;

	// unwind.inc:151
	void * stop_argument;

	// unwind.inc:152
	_Unwind_Reason_Code code;

	// unwind.inc:152
	_Unwind_Reason_Code stop_code;

	{
		// unwind.inc:156
		_Unwind_FrameState fs;

		// unwind.inc:157
		int action;

	}
}

// unwind.inc:201
extern _Unwind_Reason_Code _Unwind_ForcedUnwind(_Unwind_Exception *  exc, _Unwind_Stop_Fn  stop, void *  stop_argument) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind.inc:202
	_Unwind_Context this_context;

	// unwind.inc:202
	_Unwind_Context cur_context;

	// unwind.inc:203
	_Unwind_Reason_Code code;

	{
		// unwind.inc:215
		long int offset;

		// unwind.inc:215
		void * handler;

	}
}

// unwind.inc:44
_Unwind_Reason_Code _Unwind_RaiseException_Phase2(_Unwind_Exception *  exc, _Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind.inc:45
	_Unwind_Reason_Code code;

	{
		// unwind.inc:49
		_Unwind_FrameState fs;

		// unwind.inc:50
		int match_handler;

	}
}

// unwind.inc:224
extern void _Unwind_Resume(_Unwind_Exception *  exc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind.inc:225
	_Unwind_Context this_context;

	// unwind.inc:225
	_Unwind_Context cur_context;

	// unwind.inc:226
	_Unwind_Reason_Code code;

	{
		// unwind.inc:241
		long int offset;

		// unwind.inc:241
		void * handler;

	}
}

// unwind.inc:88
extern _Unwind_Reason_Code _Unwind_RaiseException(_Unwind_Exception *  exc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind.inc:89
	_Unwind_Context this_context;

	// unwind.inc:89
	_Unwind_Context cur_context;

	// unwind.inc:90
	_Unwind_Reason_Code code;

	{
		// unwind.inc:100
		_Unwind_FrameState fs;

	}
	{
		// unwind.inc:140
		long int offset;

		// unwind.inc:140
		void * handler;

	}
}

// unwind.inc:250
extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow(_Unwind_Exception *  exc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// unwind.inc:251
	_Unwind_Context this_context;

	// unwind.inc:251
	_Unwind_Context cur_context;

	// unwind.inc:252
	_Unwind_Reason_Code code;

	{
		// unwind.inc:281
		long int offset;

		// unwind.inc:281
		void * handler;

	}
}

