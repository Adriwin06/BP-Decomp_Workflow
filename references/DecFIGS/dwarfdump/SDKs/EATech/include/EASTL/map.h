// map.h:65
struct eastl::map<Attrib::EditSpecifier,Attrib::EditRecord,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator> : public rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true> {
public:
	// map.h:199
	void map(const AttribSysPackageAllocator &);

	// map.h:204
	void map(const less<Attrib::EditSpecifier> &, const AttribSysPackageAllocator &);

	// map.h:209
	void map(const map<Attrib::EditSpecifier,Attrib::EditRecord,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator> &);

	// map.h:221
	eastl::pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool> insert(const EditSpecifier &);

	// map.h:229
	eastl_size_t erase(const EditSpecifier &);

	// map.h:244
	eastl_size_t count(const EditSpecifier &) const;

	// map.h:254
	eastl::pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> > equal_range(const EditSpecifier &);

	// map.h:273
	eastl::pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> > equal_range(const EditSpecifier &) const;

	// map.h:287
	EditRecord & operator[](const EditSpecifier &);

}

