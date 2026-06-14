// config.h:124
namespace eastl {
}

// config.h:799
typedef uint32_t eastl_size_t;

// config.h:124
namespace eastl {
	struct integral_constant<bool,false>;

	struct integral_constant<bool,true>;

	struct ListNodeBase;

	struct rbtree_node_base;

	struct binary_function<Attrib::TypeDesc,Attrib::TypeDesc,bool>;

	struct less<Attrib::TypeDesc>;

	struct rb_base<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,eastl::use_self<Attrib::TypeDesc>,true,eastl::rbtree<Attrib::TypeDesc, Attrib::TypeDesc, eastl::less<Attrib::TypeDesc>, CgsAttribSys::AttribSysPackageAllocator, eastl::use_self<Attrib::TypeDesc>, false, true> >;

	struct use_self<Attrib::TypeDesc>;

	struct rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>;

	struct pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool>;

	struct rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>;

	struct rbtree_node<Attrib::TypeDesc>;

	struct reverse_iterator<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&> >;

	struct set<Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator>;

	struct pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&> >;

	struct VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>;

	struct vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>;

	struct reverse_iterator<const Attrib::TypeDesc**>;

	struct reverse_iterator<const Attrib::TypeDesc* const*>;

	struct ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>;

	struct ListNode<const Attrib::Collection*>;

	struct list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>;

	struct ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>;

	struct ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>;

	struct reverse_iterator<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&> >;

	struct reverse_iterator<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&> >;

	struct ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>;

	struct ListNode<const Attrib::Class*>;

	struct list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>;

	struct ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>;

	struct ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>;

	struct reverse_iterator<eastl::ListIterator<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&> >;

	struct reverse_iterator<eastl::ListIterator<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&> >;

	struct rbtree_iterator<Attrib::TypeDesc,Attrib::TypeDesc*,Attrib::TypeDesc&>;

	struct binary_function<Attrib::EditSpecifier,Attrib::EditSpecifier,bool>;

	struct less<Attrib::EditSpecifier>;

	struct rb_base<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,eastl::rbtree<Attrib::EditSpecifier, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::less<Attrib::EditSpecifier>, CgsAttribSys::AttribSysPackageAllocator, eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >, true, true> >;

	struct use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >;

	struct rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>;

	struct pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool>;

	struct rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>;

	struct pair<const Attrib::EditSpecifier,Attrib::EditRecord>;

	struct rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >;

	struct rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>;

	struct reverse_iterator<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> >;

	struct reverse_iterator<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> >;

	struct map<Attrib::EditSpecifier,Attrib::EditRecord,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator>;

	struct pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> >;

	struct pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> >;

	struct generic_iterator<const Attrib::TypeDesc**,void>;

}

