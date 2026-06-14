// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// gameplaysurface.h:102
		namespace gameplaysurface {
			// gameplaysurface.h:104
			const Attribute::Key IsWater = 2228758912;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// gameplaysurface.h:98
		const Attribute::Key gameplaysurface = [0, 0, 0, 0, 42, 129, 115, 179];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// gameplaysurface.h:102
		namespace gameplaysurface {
			// gameplaysurface.h:104
			const Attribute::Key IsWater = 2228758912;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// gameplaysurface.h:98
		const Attribute::Key gameplaysurface = [0, 0, 0, 0, 42, 129, 115, 179];

	}

}

// gameplaysurface.h:13
struct Attrib::Gen::gameplaysurface : Instance {
public:
	// gameplaysurface.h:15
	Attribute::Key ClassKey();

	// gameplaysurface.h:17
	void * operator new(size_t);

	// gameplaysurface.h:17
	void operator delete(void *, size_t);

	// gameplaysurface.h:17
	void * operator new(size_t, void *);

	// gameplaysurface.h:17
	void operator delete(void *, void *);

	// gameplaysurface.h:18
	void gameplaysurface(const Attrib::Collection *, uint32_t);

	// gameplaysurface.h:19
	void gameplaysurface(const gameplaysurface &);

	// gameplaysurface.h:20
	void gameplaysurface(const Attrib::Instance &);

	// gameplaysurface.h:21
	void gameplaysurface(const Attrib::RefSpec &, uint32_t);

	// gameplaysurface.h:22
	void gameplaysurface(Attribute::Key, uint32_t);

	// gameplaysurface.h:23
	void ~gameplaysurface();

	// gameplaysurface.h:25
	Attribute::Key GetClass() const;

	// gameplaysurface.h:27
	Instance & GetBase();

	// gameplaysurface.h:28
	const Attrib::Instance & GetBase() const;

	// gameplaysurface.h:30
	void Modify(Attribute::Key, unsigned int);

	// gameplaysurface.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// gameplaysurface.h:32
	void Change(const Attrib::Collection *);

	// gameplaysurface.h:33
	void Change(const Attrib::RefSpec &);

	// gameplaysurface.h:34
	void Change(Attribute::Key);

	// gameplaysurface.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// gameplaysurface.h:36
	void ChangeWithDefault(Attribute::Key);

	// gameplaysurface.h:38
	const gameplaysurface & operator=(const gameplaysurface &);

	// gameplaysurface.h:39
	const gameplaysurface & operator=(const Attrib::Instance &);

	// gameplaysurface.h:40
	bool operator==(const gameplaysurface &) const;

	// gameplaysurface.h:41
	bool operator==(const Attrib::Instance &) const;

	// gameplaysurface.h:42
	bool operator!=(const gameplaysurface &) const;

	// gameplaysurface.h:43
	bool operator!=(const Attrib::Instance &) const;

	// gameplaysurface.h:73
	bool IsWater(Attrib::TAttrib<EA::Reflection::Bool> &) const;

	// gameplaysurface.h:74
	bool IsWater(Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &) const;

	// gameplaysurface.h:75
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool & IsWater() const;

	// gameplaysurface.h:76
	bool Set_IsWater(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &);

private:
	// gameplaysurface.h:87
	unsigned int GetLayoutSize();

	// gameplaysurface.h:90
	gameplaysurface & ConvertFromInstance(Instance &);

	// gameplaysurface.h:91
	const gameplaysurface & ConvertFromInstance(const Attrib::Instance &);

}

