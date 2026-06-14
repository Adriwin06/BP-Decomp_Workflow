// _built-in_
namespace __cxxabiv1 {
	// Declaration
	struct __class_type_info {
		// cxxabi.h:373
		enum __sub_kind {
			__unknown = 0,
			__not_contained = 1,
			__contained_ambig = 2,
			__contained_virtual_mask = 1,
			__contained_public_mask = 2,
			__contained_mask = 4,
			__contained_private = 4,
			__contained_public = 6,
		}

		// tinfo.cc:195
		struct __upcast_result {
			// tinfo.cc:196
			const void * dst_ptr;

			// tinfo.cc:197
			__cxxabiv1::__class_type_info::__sub_kind part2dst;

			// tinfo.cc:198
			int src_details;

			// tinfo.cc:199
			const __cxxabiv1::__class_type_info * base_type;

		public:
			// tinfo.cc:203
			__upcast_result(int);

		}

		// tinfo.cc:211
		struct __dyncast_result {
			// tinfo.cc:212
			const void * dst_ptr;

			// tinfo.cc:213
			__cxxabiv1::__class_type_info::__sub_kind whole2dst;

			// tinfo.cc:214
			__cxxabiv1::__class_type_info::__sub_kind whole2src;

			// tinfo.cc:215
			__cxxabiv1::__class_type_info::__sub_kind dst2src;

			// tinfo.cc:216
			int whole_details;

		public:
			// tinfo.cc:218
			__dyncast_result(int);

		protected:
			// tinfo.cc:225
			__dyncast_result(const __cxxabiv1::__class_type_info::__dyncast_result &);

			// tinfo.cc:228
			__cxxabiv1::__class_type_info::__dyncast_result & operator=(const __cxxabiv1::__class_type_info::__dyncast_result &);

		}

	}

	// tinfo.cc:706
	extern void * __dynamic_cast(const void *, const __cxxabiv1::__class_type_info *, const __cxxabiv1::__class_type_info *, ptrdiff_t);

}

namespace {
	// tinfo.cc:92
	using namespace std;

	// tinfo.cc:93
	using namespace __cxxabiv1;

	// tinfo.cc:121
	extern const vtable_prefix * adjust_pointer<<unnamed>::vtable_prefix>(const void *, int);

	// tinfo.cc:121
	extern const void * adjust_pointer<void>(const void *, int);

	// tinfo.cc:155
	extern bool contained_public_p(__cxxabiv1::__class_type_info::__sub_kind);

	// tinfo.cc:165
	extern bool contained_nonvirtual_p(__cxxabiv1::__class_type_info::__sub_kind);

	// tinfo.cc:130
	extern const void * convert_to_base(const void *, bool, ptrdiff_t);

	// tinfo.cc:121
	extern const ptrdiff_t * adjust_pointer<std::ptrdiff_t>(const void *, int);

	// tinfo.cc:143
	extern bool contained_p(__cxxabiv1::__class_type_info::__sub_kind);

	// tinfo.cc:151
	extern bool virtual_p(__cxxabiv1::__class_type_info::__sub_kind);

	// tinfo.cc:147
	extern bool public_p(__cxxabiv1::__class_type_info::__sub_kind);

	// tinfo.cc:172
	const __cxxabiv1::__class_type_info *const nonvirtual_base_type;

}

// tinfo.cc:90
/* using namespace {self.name}; */

// tinfo.cc:98
struct vtable_prefix {
	// tinfo.cc:100
	ptrdiff_t whole_object;

	// tinfo.cc:108
	const __cxxabiv1::__class_type_info * whole_type;

	// tinfo.cc:116
	const void * origin;

}

