// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// physicssurface.h:118
		namespace physicssurface {
			// physicssurface.h:120
			const Attribute::Key Grip = [0, 0, 0, 0, 191, 242, 228, 107];

			// physicssurface.h:121
			const Attribute::Key LinearDrag = [0, 0, 0, 0, 184, 148, 50, 69];

			// physicssurface.h:122
			const Attribute::Key Roughness = 3996388736;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// physicssurface.h:114
		const Attribute::Key physicssurface = [0, 0, 0, 0, 44, 72, 83, 55];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// physicssurface.h:118
		namespace physicssurface {
			// physicssurface.h:120
			const Attribute::Key Grip = [0, 0, 0, 0, 191, 242, 228, 107];

			// physicssurface.h:121
			const Attribute::Key LinearDrag = [0, 0, 0, 0, 184, 148, 50, 69];

			// physicssurface.h:122
			const Attribute::Key Roughness = 3996388736;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// physicssurface.h:114
		const Attribute::Key physicssurface = [0, 0, 0, 0, 44, 72, 83, 55];

	}

}

// physicssurface.h:13
struct Attrib::Gen::physicssurface : Instance {
public:
	// physicssurface.h:15
	Attribute::Key ClassKey();

	// physicssurface.h:17
	void * operator new(size_t);

	// physicssurface.h:17
	void operator delete(void *, size_t);

	// physicssurface.h:17
	void * operator new(size_t, void *);

	// physicssurface.h:17
	void operator delete(void *, void *);

	// physicssurface.h:18
	void physicssurface(const Attrib::Collection *, uint32_t);

	// physicssurface.h:19
	void physicssurface(const physicssurface &);

	// physicssurface.h:20
	void physicssurface(const Attrib::Instance &);

	// physicssurface.h:21
	void physicssurface(const Attrib::RefSpec &, uint32_t);

	// physicssurface.h:22
	void physicssurface(Attribute::Key, uint32_t);

	// physicssurface.h:23
	void ~physicssurface();

	// physicssurface.h:25
	Attribute::Key GetClass() const;

	// physicssurface.h:27
	Instance & GetBase();

	// physicssurface.h:28
	const Attrib::Instance & GetBase() const;

	// physicssurface.h:30
	void Modify(Attribute::Key, unsigned int);

	// physicssurface.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// physicssurface.h:32
	void Change(const Attrib::Collection *);

	// physicssurface.h:33
	void Change(const Attrib::RefSpec &);

	// physicssurface.h:34
	void Change(Attribute::Key);

	// physicssurface.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// physicssurface.h:36
	void ChangeWithDefault(Attribute::Key);

	// physicssurface.h:38
	const physicssurface & operator=(const physicssurface &);

	// physicssurface.h:39
	const physicssurface & operator=(const Attrib::Instance &);

	// physicssurface.h:40
	bool operator==(const physicssurface &) const;

	// physicssurface.h:41
	bool operator==(const Attrib::Instance &) const;

	// physicssurface.h:42
	bool operator!=(const physicssurface &) const;

	// physicssurface.h:43
	bool operator!=(const Attrib::Instance &) const;

	// physicssurface.h:73
	bool Grip(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicssurface.h:74
	bool Grip(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicssurface.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Grip() const;

	// physicssurface.h:76
	bool Set_Grip(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicssurface.h:80
	bool LinearDrag(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicssurface.h:81
	bool LinearDrag(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicssurface.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & LinearDrag() const;

	// physicssurface.h:83
	bool Set_LinearDrag(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicssurface.h:87
	bool Roughness(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicssurface.h:88
	bool Roughness(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicssurface.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Roughness() const;

	// physicssurface.h:90
	bool Set_Roughness(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// physicssurface.h:103
	unsigned int GetLayoutSize();

	// physicssurface.h:106
	physicssurface & ConvertFromInstance(Instance &);

	// physicssurface.h:107
	const physicssurface & ConvertFromInstance(const Attrib::Instance &);

}

