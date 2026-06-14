// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// junkyardlocators.h:102
		namespace junkyardlocators {
			// junkyardlocators.h:104
			const Attribute::Key LocatorData = [0, 0, 0, 0, 251, 1, 224, 165];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// junkyardlocators.h:98
		const Attribute::Key junkyardlocators = 3466188195;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// junkyardlocators.h:102
		namespace junkyardlocators {
			// junkyardlocators.h:104
			const Attribute::Key LocatorData = [0, 0, 0, 0, 251, 1, 224, 165];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// junkyardlocators.h:98
		const Attribute::Key junkyardlocators = 3466188195;

	}

}

// junkyardlocators.h:13
struct Attrib::Gen::junkyardlocators : Instance {
public:
	// junkyardlocators.h:15
	Attribute::Key ClassKey();

	// junkyardlocators.h:17
	void * operator new(size_t);

	// junkyardlocators.h:17
	void operator delete(void *, size_t);

	// junkyardlocators.h:17
	void * operator new(size_t, void *);

	// junkyardlocators.h:17
	void operator delete(void *, void *);

	// junkyardlocators.h:18
	void junkyardlocators(const Attrib::Collection *, uint32_t);

	// junkyardlocators.h:19
	void junkyardlocators(const junkyardlocators &);

	// junkyardlocators.h:20
	void junkyardlocators(const Attrib::Instance &);

	// junkyardlocators.h:21
	void junkyardlocators(const Attrib::RefSpec &, uint32_t);

	// junkyardlocators.h:22
	void junkyardlocators(Attribute::Key, uint32_t);

	// junkyardlocators.h:23
	void ~junkyardlocators();

	// junkyardlocators.h:25
	Attribute::Key GetClass() const;

	// junkyardlocators.h:27
	Instance & GetBase();

	// junkyardlocators.h:28
	const Attrib::Instance & GetBase() const;

	// junkyardlocators.h:30
	void Modify(Attribute::Key, unsigned int);

	// junkyardlocators.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// junkyardlocators.h:32
	void Change(const Attrib::Collection *);

	// junkyardlocators.h:33
	void Change(const Attrib::RefSpec &);

	// junkyardlocators.h:34
	void Change(Attribute::Key);

	// junkyardlocators.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// junkyardlocators.h:36
	void ChangeWithDefault(Attribute::Key);

	// junkyardlocators.h:38
	const junkyardlocators & operator=(const junkyardlocators &);

	// junkyardlocators.h:39
	const junkyardlocators & operator=(const Attrib::Instance &);

	// junkyardlocators.h:40
	bool operator==(const junkyardlocators &) const;

	// junkyardlocators.h:41
	bool operator==(const Attrib::Instance &) const;

	// junkyardlocators.h:42
	bool operator!=(const junkyardlocators &) const;

	// junkyardlocators.h:43
	bool operator!=(const Attrib::Instance &) const;

	// junkyardlocators.h:73
	bool LocatorData(Attrib::TAttrib<const char*> &) const;

	// junkyardlocators.h:74
	bool LocatorData(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// junkyardlocators.h:75
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & LocatorData() const;

	// junkyardlocators.h:76
	bool Set_LocatorData(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

private:
	// junkyardlocators.h:87
	unsigned int GetLayoutSize();

	// junkyardlocators.h:90
	junkyardlocators & ConvertFromInstance(Instance &);

	// junkyardlocators.h:91
	const junkyardlocators & ConvertFromInstance(const Attrib::Instance &);

}

