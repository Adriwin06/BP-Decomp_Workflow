// cxxabi.h:553
using __cxxabiv1;

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

}

// cxxabi.h:326
struct __cxxabiv1::__base_class_type_info {
	// cxxabi.h:328
	const __cxxabiv1::__class_type_info * __base_type;

	// cxxabi.h:329
	long int __offset_flags;

public:
	// cxxabi.h:341
	bool __is_virtual_p() const;

	// cxxabi.h:345
	bool __is_public_p() const;

	// cxxabi.h:349
	ptrdiff_t __offset() const;

}

// cxxabi.h:489
struct __cxxabiv1::__vmi_class_type_info : public __cxxabiv1::__class_type_info {
	// cxxabi.h:491
	unsigned int __flags;

	// cxxabi.h:492
	unsigned int __base_count;

	// cxxabi.h:497
	__base_class_type_info[1] __base_info;

public:
	// cxxabi.h:500
	void __vmi_class_type_info(const char *, int);

	// tinfo.cc:189
	virtual void ~__vmi_class_type_info();

protected:
	// tinfo.cc:405
	virtual bool __do_dyncast(ptrdiff_t, __cxxabiv1::__class_type_info::__sub_kind, const __cxxabiv1::__class_type_info *, const void *, const __cxxabiv1::__class_type_info *, const void *, __cxxabiv1::__class_type_info::__dyncast_result &) const;

	// tinfo.cc:298
	virtual __cxxabiv1::__class_type_info::__sub_kind __do_find_public_src(ptrdiff_t, const void *, const __cxxabiv1::__class_type_info *, const void *) const;

	// tinfo.cc:617
	virtual bool __do_upcast(const __cxxabiv1::__class_type_info *, const void *, __cxxabiv1::__class_type_info::__upcast_result &) const;

}

// cxxabi.h:453
struct __cxxabiv1::__si_class_type_info : public __cxxabiv1::__class_type_info {
	// cxxabi.h:455
	const __cxxabiv1::__class_type_info * __base_type;

public:
	// cxxabi.h:458
	void __si_class_type_info(const char *, const __cxxabiv1::__class_type_info *);

	// tinfo.cc:185
	virtual void ~__si_class_type_info();

protected:
	// cxxabi.h:465
	void __si_class_type_info(const __si_class_type_info &);

	// cxxabi.h:468
	__si_class_type_info & operator=(const __si_class_type_info &);

	// tinfo.cc:365
	virtual bool __do_dyncast(ptrdiff_t, __cxxabiv1::__class_type_info::__sub_kind, const __cxxabiv1::__class_type_info *, const void *, const __cxxabiv1::__class_type_info *, const void *, __cxxabiv1::__class_type_info::__dyncast_result &) const;

	// tinfo.cc:287
	virtual __cxxabiv1::__class_type_info::__sub_kind __do_find_public_src(ptrdiff_t, const void *, const __cxxabiv1::__class_type_info *, const void *) const;

	// tinfo.cc:607
	virtual bool __do_upcast(const __cxxabiv1::__class_type_info *, const void *, __cxxabiv1::__class_type_info::__upcast_result &) const;

}

// cxxabi.h:360
struct __cxxabiv1::__class_type_info : public std::type_info {
public:
	void __class_type_info(const __cxxabiv1::__class_type_info &);

	__class_type_info & operator=(const __cxxabiv1::__class_type_info &);

	// cxxabi.h:363
	void __class_type_info(const char *);

	// tinfo.cc:181
	virtual void ~__class_type_info();

protected:
	// tinfo.cc:246
	virtual bool __do_upcast(const __cxxabiv1::__class_type_info *, void **) const;

	// tinfo.cc:234
	virtual bool __do_catch(const std::type_info *, void **, unsigned int) const;

public:
	// tinfo.cc:593
	virtual bool __do_upcast(const __cxxabiv1::__class_type_info *, const void *, __cxxabiv1::__class_type_info::__upcast_result &) const;

	// tinfo.cc:261
	__cxxabiv1::__class_type_info::__sub_kind __find_public_src(ptrdiff_t, const void *, const __cxxabiv1::__class_type_info *, const void *) const;

	// tinfo.cc:339
	virtual bool __do_dyncast(ptrdiff_t, __cxxabiv1::__class_type_info::__sub_kind, const __cxxabiv1::__class_type_info *, const void *, const __cxxabiv1::__class_type_info *, const void *, __cxxabiv1::__class_type_info::__dyncast_result &) const;

	// tinfo.cc:275
	virtual __cxxabiv1::__class_type_info::__sub_kind __do_find_public_src(ptrdiff_t, const void *, const __cxxabiv1::__class_type_info *, const void *) const;

}

