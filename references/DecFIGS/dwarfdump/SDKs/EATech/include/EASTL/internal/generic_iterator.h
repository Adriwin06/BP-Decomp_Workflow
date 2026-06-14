// generic_iterator.h:49
struct eastl::generic_iterator<const Attrib::TypeDesc**,void> {
protected:
	// generic_iterator.h:51
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * mIterator;

public:
	// generic_iterator.h:63
	void generic_iterator();

	// generic_iterator.h:66
	void generic_iterator(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *const&);

	// generic_iterator.h:73
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & operator*() const;

	// generic_iterator.h:76
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * operator->() const;

	// generic_iterator.h:79
	generic_iterator<const Attrib::TypeDesc**,void> & operator++();

	// generic_iterator.h:82
	generic_iterator<const Attrib::TypeDesc**,void> operator++(int);

	// generic_iterator.h:85
	generic_iterator<const Attrib::TypeDesc**,void> & operator--();

	// generic_iterator.h:88
	generic_iterator<const Attrib::TypeDesc**,void> operator--(int);

	// generic_iterator.h:91
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & operator[](const ptrdiff_t &) const;

	// generic_iterator.h:94
	generic_iterator<const Attrib::TypeDesc**,void> & operator+=(const ptrdiff_t &);

	// generic_iterator.h:97
	generic_iterator<const Attrib::TypeDesc**,void> operator+(const ptrdiff_t &) const;

	// generic_iterator.h:100
	generic_iterator<const Attrib::TypeDesc**,void> & operator-=(const ptrdiff_t &);

	// generic_iterator.h:103
	generic_iterator<const Attrib::TypeDesc**,void> operator-(const ptrdiff_t &) const;

	// generic_iterator.h:106
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *const& base() const;

}

