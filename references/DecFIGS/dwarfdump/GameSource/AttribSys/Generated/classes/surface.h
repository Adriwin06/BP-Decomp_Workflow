// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// surface.h:142
		namespace surface {
			// surface.h:144
			const Attribute::Key AudioSurface = [0, 0, 0, 0, 226, 133, 81, 145];

			// surface.h:145
			const Attribute::Key DebugRenderColor = 2592239108;

			// surface.h:146
			const Attribute::Key GameplaySurface = 1971522969;

			// surface.h:147
			const Attribute::Key PhysicsSurface = 2668969618;

			// surface.h:148
			const Attribute::Key RumbleSurface = 3321253868;

			// surface.h:149
			const Attribute::Key VisualFXSurface = 1831267061;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// surface.h:138
		const Attribute::Key surface = 2016857936;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// surface.h:142
		namespace surface {
			// surface.h:144
			const Attribute::Key AudioSurface = [0, 0, 0, 0, 226, 133, 81, 145];

			// surface.h:145
			const Attribute::Key DebugRenderColor = 2592239108;

			// surface.h:146
			const Attribute::Key GameplaySurface = 1971522969;

			// surface.h:147
			const Attribute::Key PhysicsSurface = 2668969618;

			// surface.h:148
			const Attribute::Key RumbleSurface = 3321253868;

			// surface.h:149
			const Attribute::Key VisualFXSurface = 1831267061;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// surface.h:138
		const Attribute::Key surface = 2016857936;

	}

}

// surface.h:13
struct Attrib::Gen::surface : Instance {
public:
	// surface.h:15
	Attribute::Key ClassKey();

	// surface.h:17
	void * operator new(size_t);

	// surface.h:17
	void operator delete(void *, size_t);

	// surface.h:17
	void * operator new(size_t, void *);

	// surface.h:17
	void operator delete(void *, void *);

	// surface.h:18
	void surface(const Attrib::Collection *, uint32_t);

	// surface.h:19
	void surface(const surface &);

	// surface.h:20
	void surface(const Attrib::Instance &);

	// surface.h:21
	void surface(const Attrib::RefSpec &, uint32_t);

	// surface.h:22
	void surface(Attribute::Key, uint32_t);

	// surface.h:23
	void ~surface();

	// surface.h:25
	Attribute::Key GetClass() const;

	// surface.h:27
	Instance & GetBase();

	// surface.h:28
	const Attrib::Instance & GetBase() const;

	// surface.h:30
	void Modify(Attribute::Key, unsigned int);

	// surface.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// surface.h:32
	void Change(const Attrib::Collection *);

	// surface.h:33
	void Change(const Attrib::RefSpec &);

	// surface.h:34
	void Change(Attribute::Key);

	// surface.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// surface.h:36
	void ChangeWithDefault(Attribute::Key);

	// surface.h:38
	const surface & operator=(const surface &);

	// surface.h:39
	const surface & operator=(const Attrib::Instance &);

	// surface.h:40
	bool operator==(const surface &) const;

	// surface.h:41
	bool operator==(const Attrib::Instance &) const;

	// surface.h:42
	bool operator!=(const surface &) const;

	// surface.h:43
	bool operator!=(const Attrib::Instance &) const;

	// surface.h:73
	bool AudioSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:74
	bool AudioSurface(RefSpec &) const;

	// surface.h:75
	const Attrib::RefSpec & AudioSurface() const;

	// surface.h:76
	bool Set_AudioSurface(const Attrib::RefSpec &);

	// surface.h:80
	bool DebugRenderColor(Attrib::TAttrib<rw::math::vpu::Vector4> &) const;

	// surface.h:81
	bool DebugRenderColor(Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &) const;

	// surface.h:82
	const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 & DebugRenderColor() const;

	// surface.h:83
	bool Set_DebugRenderColor(const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &);

	// surface.h:87
	bool GameplaySurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:88
	bool GameplaySurface(RefSpec &) const;

	// surface.h:89
	const Attrib::RefSpec & GameplaySurface() const;

	// surface.h:90
	bool Set_GameplaySurface(const Attrib::RefSpec &);

	// surface.h:94
	bool PhysicsSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:95
	bool PhysicsSurface(RefSpec &) const;

	// surface.h:96
	const Attrib::RefSpec & PhysicsSurface() const;

	// surface.h:97
	bool Set_PhysicsSurface(const Attrib::RefSpec &);

	// surface.h:101
	bool RumbleSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:102
	bool RumbleSurface(RefSpec &) const;

	// surface.h:103
	const Attrib::RefSpec & RumbleSurface() const;

	// surface.h:104
	bool Set_RumbleSurface(const Attrib::RefSpec &);

	// surface.h:108
	bool VisualFXSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:109
	bool VisualFXSurface(RefSpec &) const;

	// surface.h:110
	const Attrib::RefSpec & VisualFXSurface() const;

	// surface.h:111
	bool Set_VisualFXSurface(const Attrib::RefSpec &);

private:
	// surface.h:127
	unsigned int GetLayoutSize();

	// surface.h:130
	surface & ConvertFromInstance(Instance &);

	// surface.h:131
	const surface & ConvertFromInstance(const Attrib::Instance &);

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct surface {
			// surface.h:118
			struct _LayoutStruct {
				// attribuserinclude.h:129
				typedef Vector4 Vector4;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// surface.h:142
		namespace surface {
			// surface.h:144
			const Attribute::Key AudioSurface = [0, 0, 0, 0, 226, 133, 81, 145];

			// surface.h:145
			const Attribute::Key DebugRenderColor = 2592239108;

			// surface.h:146
			const Attribute::Key GameplaySurface = 1971522969;

			// surface.h:147
			const Attribute::Key PhysicsSurface = 2668969618;

			// surface.h:148
			const Attribute::Key RumbleSurface = 3321253868;

			// surface.h:149
			const Attribute::Key VisualFXSurface = 1831267061;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// surface.h:138
		const Attribute::Key surface = 2016857936;

	}

}

// surface.h:13
struct Attrib::Gen::surface : Instance {
public:
	// surface.h:15
	Attribute::Key ClassKey();

	// surface.h:17
	void * operator new(size_t);

	// surface.h:17
	void operator delete(void *, size_t);

	// surface.h:17
	void * operator new(size_t, void *);

	// surface.h:17
	void operator delete(void *, void *);

	// surface.h:18
	void surface(const Attrib::Collection *, uint32_t);

	// surface.h:19
	void surface(const surface &);

	// surface.h:20
	void surface(const Attrib::Instance &);

	// surface.h:21
	void surface(const Attrib::RefSpec &, uint32_t);

	// surface.h:22
	void surface(Attribute::Key, uint32_t);

	// surface.h:23
	void ~surface();

	// surface.h:25
	Attribute::Key GetClass() const;

	// surface.h:27
	Instance & GetBase();

	// surface.h:28
	const Attrib::Instance & GetBase() const;

	// surface.h:30
	void Modify(Attribute::Key, unsigned int);

	// surface.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// surface.h:32
	void Change(const Attrib::Collection *);

	// surface.h:33
	void Change(const Attrib::RefSpec &);

	// surface.h:34
	void Change(Attribute::Key);

	// surface.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// surface.h:36
	void ChangeWithDefault(Attribute::Key);

	// surface.h:38
	const surface & operator=(const surface &);

	// surface.h:39
	const surface & operator=(const Attrib::Instance &);

	// surface.h:40
	bool operator==(const surface &) const;

	// surface.h:41
	bool operator==(const Attrib::Instance &) const;

	// surface.h:42
	bool operator!=(const surface &) const;

	// surface.h:43
	bool operator!=(const Attrib::Instance &) const;

	// surface.h:73
	bool AudioSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:74
	bool AudioSurface(RefSpec &) const;

	// surface.h:75
	const Attrib::RefSpec & AudioSurface() const;

	// surface.h:76
	bool Set_AudioSurface(const Attrib::RefSpec &);

	// surface.h:80
	bool DebugRenderColor(Attrib::TAttrib<rw::math::vpu::Vector4> &) const;

	// surface.h:81
	bool DebugRenderColor(Attrib::Gen::surface::_LayoutStruct::Vector4 &) const;

	// surface.h:82
	const Attrib::Gen::surface::_LayoutStruct::Vector4 & DebugRenderColor() const;

	// surface.h:83
	bool Set_DebugRenderColor(const Attrib::Gen::surface::_LayoutStruct::Vector4 &);

	// surface.h:87
	bool GameplaySurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:88
	bool GameplaySurface(RefSpec &) const;

	// surface.h:89
	const Attrib::RefSpec & GameplaySurface() const;

	// surface.h:90
	bool Set_GameplaySurface(const Attrib::RefSpec &);

	// surface.h:94
	bool PhysicsSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:95
	bool PhysicsSurface(RefSpec &) const;

	// surface.h:96
	const Attrib::RefSpec & PhysicsSurface() const;

	// surface.h:97
	bool Set_PhysicsSurface(const Attrib::RefSpec &);

	// surface.h:101
	bool RumbleSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:102
	bool RumbleSurface(RefSpec &) const;

	// surface.h:103
	const Attrib::RefSpec & RumbleSurface() const;

	// surface.h:104
	bool Set_RumbleSurface(const Attrib::RefSpec &);

	// surface.h:108
	bool VisualFXSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surface.h:109
	bool VisualFXSurface(RefSpec &) const;

	// surface.h:110
	const Attrib::RefSpec & VisualFXSurface() const;

	// surface.h:111
	bool Set_VisualFXSurface(const Attrib::RefSpec &);

private:
	// surface.h:127
	unsigned int GetLayoutSize();

	// surface.h:130
	surface & ConvertFromInstance(Instance &);

	// surface.h:131
	const surface & ConvertFromInstance(const Attrib::Instance &);

}

