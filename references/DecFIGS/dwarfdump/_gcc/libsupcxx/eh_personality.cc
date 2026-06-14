// eh_personality.cc:36
using namespace __cxxabiv1;

// eh_personality.cc:42
struct lsda_header_info {
	// eh_personality.cc:43
	_Unwind_Ptr Start;

	// eh_personality.cc:44
	_Unwind_Ptr LPStart;

	// eh_personality.cc:45
	_Unwind_Ptr ttype_base;

	// eh_personality.cc:46
	const unsigned char * TType;

	// eh_personality.cc:47
	const unsigned char * action_table;

	// eh_personality.cc:48
	unsigned char ttype_encoding;

	// eh_personality.cc:49
	unsigned char call_site_encoding;

}

// eh_personality.cc:54
const unsigned char * parse_lsda_header(_Unwind_Context *  context, const unsigned char *  p, lsda_header_info *  info) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_personality.cc:56
		_Unwind_Word tmp;

		// eh_personality.cc:57
		unsigned char lpstart_encoding;

	}
	read_encoded_value(/* parameters */);
}

// eh_personality.cc:88
const std::type_info * get_ttype_entry(lsda_header_info *  info, _Unwind_Word  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_personality.cc:90
		_Unwind_Ptr ptr;

		size_of_encoded_value(/* parameters */);
	}
}

// eh_personality.cc:107
bool get_adjusted_ptr(const std::type_info *  catch_type, const std::type_info *  throw_type, void **  thrown_ptr_p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_personality.cc:109
		void * thrown_ptr;

	}
}

// eh_personality.cc:131
bool check_exception_spec(lsda_header_info *  info, const std::type_info *  throw_type, void *  thrown_ptr, _Unwind_Sword  filter_value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_personality.cc:133
		const unsigned char * e;

	}
	{
		// eh_personality.cc:137
		const std::type_info * catch_type;

		// eh_personality.cc:138
		_Unwind_Word tmp;

	}
}

// eh_personality.cc:457
extern void __cxa_call_unexpected(void *  exc_obj_in) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_personality.cc:459
		_Unwind_Exception * exc_obj;

		// eh_personality.cc:467
		struct end_catch_protect {
		public:
			end_catch_protect(const end_catch_protect &);

			// eh_personality.cc:468
			end_catch_protect() {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			}

			// eh_personality.cc:469
			~end_catch_protect() {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			}

		}

		// eh_personality.cc:470
		end_catch_protect end_catch_protect_obj;

		// eh_personality.cc:472
		lsda_header_info info;

		// eh_personality.cc:473
		__cxa_exception * xh;

		// eh_personality.cc:474
		const unsigned char * xh_lsda;

		// eh_personality.cc:475
		_Unwind_Sword xh_switch_value;

		// eh_personality.cc:476
		__cxa_exception::terminate_handler xh_terminate_handler;

	}
}

// eh_personality.cc:162
bool empty_exception_spec(lsda_header_info *  info, _Unwind_Sword  filter_value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eh_personality.cc:164
		const unsigned char * e;

		// eh_personality.cc:165
		_Unwind_Word tmp;

	}
}

// eh_personality.cc:185
extern _Unwind_Reason_Code __gxx_personality_v0(int  version, _Unwind_Action  actions, _Unwind_Exception_Class  exception_class, _Unwind_Exception *  ue_header, _Unwind_Context *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// eh_personality.cc:412
install_context:
	// eh_personality.cc:296
found_something:
	// eh_personality.cc:388
do_something:
	{
		// eh_personality.cc:187
		__cxa_exception * xh;

		// eh_personality.cc:189
		enum found_handler_type {
			found_nothing = 0,
			found_terminate = 1,
			found_cleanup = 2,
			found_handler = 3,
		}

		// eh_personality.cc:195
		found_handler_type found_type;

		// eh_personality.cc:197
		lsda_header_info info;

		// eh_personality.cc:198
		const unsigned char * language_specific_data;

		// eh_personality.cc:199
		const unsigned char * action_record;

		// eh_personality.cc:200
		const unsigned char * p;

		// eh_personality.cc:201
		_Unwind_Ptr landing_pad;

		// eh_personality.cc:201
		_Unwind_Ptr ip;

		// eh_personality.cc:202
		int handler_switch_value;

		// eh_personality.cc:203
		void * thrown_ptr;

	}
	__cxxabiv1::__get_exception_header_from_ue(/* parameters */);
	{
		// eh_personality.cc:267
		_Unwind_Ptr cs_start;

		// eh_personality.cc:267
		_Unwind_Ptr cs_len;

		// eh_personality.cc:267
		_Unwind_Ptr cs_lp;

		// eh_personality.cc:268
		_Unwind_Word cs_action;

		read_encoded_value(/* parameters */);
		read_encoded_value(/* parameters */);
		read_encoded_value(/* parameters */);
	}
	{
		// eh_personality.cc:314
		_Unwind_Sword ar_filter;

		// eh_personality.cc:314
		_Unwind_Sword ar_disp;

		// eh_personality.cc:315
		const std::type_info * throw_type;

		// eh_personality.cc:315
		const std::type_info * catch_type;

		// eh_personality.cc:316
		bool saw_cleanup;

		// eh_personality.cc:317
		bool saw_handler;

	}
	empty_exception_spec(/* parameters */);
}

