// config.h:124
namespace eastl {
	// iterator.h:505
	extern ptrdiff_t distance<const Attrib::Definition*>(const Definition *, const Definition *);

	// iterator.h:480
	extern ptrdiff_t distance_impl<const Attrib::Definition*>(const Definition *, const Definition *, random_access_iterator_tag);

	// iterator.h:567
	extern void advance<const Attrib::Definition*, int>(const Definition *&, int);

	// iterator.h:548
	extern void advance_impl<const Attrib::Definition*, int>(const Definition *&, int, random_access_iterator_tag);

	// iterator.h:505
	extern ptrdiff_t distance<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *, ExportManager::ExportPolicyPair *);

	// iterator.h:480
	extern ptrdiff_t distance_impl<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *, ExportManager::ExportPolicyPair *, random_access_iterator_tag);

	// iterator.h:567
	extern void advance<Attrib::ExportManager::ExportPolicyPair*, int>(ExportManager::ExportPolicyPair *&, int);

	// iterator.h:548
	extern void advance_impl<Attrib::ExportManager::ExportPolicyPair*, int>(ExportManager::ExportPolicyPair *&, int, random_access_iterator_tag);

	// iterator.h:505
	extern ptrdiff_t distance<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&> >(ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>, ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>);

	// iterator.h:466
	extern ptrdiff_t distance_impl<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&> >(ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>, ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>, input_iterator_tag);

	// iterator.h:505
	extern ptrdiff_t distance<eastl::ListIterator<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&> >(ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>, ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>);

	// iterator.h:466
	extern ptrdiff_t distance_impl<eastl::ListIterator<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&> >(ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>, ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>, input_iterator_tag);

}

