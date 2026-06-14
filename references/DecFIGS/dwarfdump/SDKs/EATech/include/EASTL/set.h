// set.h:74
struct eastl::set<Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator> : public rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true> {
public:
	// set.h:185
	void set(const AttribSysPackageAllocator &);

	// set.h:193
	void set(const less<Attrib::TypeDesc> &, const AttribSysPackageAllocator &);

	// set.h:201
	void set(const set<Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator> &);

	// set.h:219
	eastl_size_t erase(const TypeDesc &);

	// set.h:234
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> erase(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>);

	// set.h:244
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> erase(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>, eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>);

	// set.h:254
	eastl_size_t count(const TypeDesc &) const;

	// set.h:264
	eastl::pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&> > equal_range(const TypeDesc &);

	// set.h:283
	eastl::pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&> > equal_range(const TypeDesc &) const;

}

