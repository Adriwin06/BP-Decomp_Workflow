// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// physicsvehiclehandling.h:158
		namespace physicsvehiclehandling {
			// physicsvehiclehandling.h:160
			const Attribute::Key PhysicsVehicleBaseAttribs = [0, 0, 0, 0, 175, 186, 206, 223];

			// physicsvehiclehandling.h:161
			const Attribute::Key PhysicsVehicleBodyRollAttribs = [0, 0, 0, 0, 40, 27, 154, 50];

			// physicsvehiclehandling.h:162
			const Attribute::Key PhysicsVehicleBoostAttribs = 2255794068;

			// physicsvehiclehandling.h:163
			const Attribute::Key PhysicsVehicleCollisionAttribs = 1594976127;

			// physicsvehiclehandling.h:164
			const Attribute::Key PhysicsVehicleDriftAttribs = [0, 0, 0, 0, 177, 105, 236, 62];

			// physicsvehiclehandling.h:165
			const Attribute::Key PhysicsVehicleEngineAttribs = [0, 0, 0, 0, 247, 207, 140, 147];

			// physicsvehiclehandling.h:166
			const Attribute::Key PhysicsVehicleSteeringAttribs = [0, 0, 0, 0, 200, 175, 114, 159];

			// physicsvehiclehandling.h:167
			const Attribute::Key PhysicsVehicleSuspensionAttribs = 1360331405;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// physicsvehiclehandling.h:154
		const Attribute::Key physicsvehiclehandling = [0, 0, 0, 0, 123, 80, 46, 237];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// physicsvehiclehandling.h:158
		namespace physicsvehiclehandling {
			// physicsvehiclehandling.h:160
			const Attribute::Key PhysicsVehicleBaseAttribs = [0, 0, 0, 0, 175, 186, 206, 223];

			// physicsvehiclehandling.h:161
			const Attribute::Key PhysicsVehicleBodyRollAttribs = [0, 0, 0, 0, 40, 27, 154, 50];

			// physicsvehiclehandling.h:162
			const Attribute::Key PhysicsVehicleBoostAttribs = 2255794068;

			// physicsvehiclehandling.h:163
			const Attribute::Key PhysicsVehicleCollisionAttribs = 1594976127;

			// physicsvehiclehandling.h:164
			const Attribute::Key PhysicsVehicleDriftAttribs = [0, 0, 0, 0, 177, 105, 236, 62];

			// physicsvehiclehandling.h:165
			const Attribute::Key PhysicsVehicleEngineAttribs = [0, 0, 0, 0, 247, 207, 140, 147];

			// physicsvehiclehandling.h:166
			const Attribute::Key PhysicsVehicleSteeringAttribs = [0, 0, 0, 0, 200, 175, 114, 159];

			// physicsvehiclehandling.h:167
			const Attribute::Key PhysicsVehicleSuspensionAttribs = 1360331405;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// physicsvehiclehandling.h:154
		const Attribute::Key physicsvehiclehandling = [0, 0, 0, 0, 123, 80, 46, 237];

	}

}

// physicsvehiclehandling.h:13
struct Attrib::Gen::physicsvehiclehandling : Instance {
public:
	// physicsvehiclehandling.h:15
	Attribute::Key ClassKey();

	// physicsvehiclehandling.h:17
	void * operator new(size_t);

	// physicsvehiclehandling.h:17
	void operator delete(void *, size_t);

	// physicsvehiclehandling.h:17
	void * operator new(size_t, void *);

	// physicsvehiclehandling.h:17
	void operator delete(void *, void *);

	// physicsvehiclehandling.h:18
	void physicsvehiclehandling(const Attrib::Collection *, uint32_t);

	// physicsvehiclehandling.h:19
	void physicsvehiclehandling(const physicsvehiclehandling &);

	// physicsvehiclehandling.h:20
	void physicsvehiclehandling(const Attrib::Instance &);

	// physicsvehiclehandling.h:21
	void physicsvehiclehandling(const Attrib::RefSpec &, uint32_t);

	// physicsvehiclehandling.h:22
	void physicsvehiclehandling(Attribute::Key, uint32_t);

	// physicsvehiclehandling.h:23
	void ~physicsvehiclehandling();

	// physicsvehiclehandling.h:25
	Attribute::Key GetClass() const;

	// physicsvehiclehandling.h:27
	Instance & GetBase();

	// physicsvehiclehandling.h:28
	const Attrib::Instance & GetBase() const;

	// physicsvehiclehandling.h:30
	void Modify(Attribute::Key, unsigned int);

	// physicsvehiclehandling.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// physicsvehiclehandling.h:32
	void Change(const Attrib::Collection *);

	// physicsvehiclehandling.h:33
	void Change(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:34
	void Change(Attribute::Key);

	// physicsvehiclehandling.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:36
	void ChangeWithDefault(Attribute::Key);

	// physicsvehiclehandling.h:38
	const physicsvehiclehandling & operator=(const physicsvehiclehandling &);

	// physicsvehiclehandling.h:39
	const physicsvehiclehandling & operator=(const Attrib::Instance &);

	// physicsvehiclehandling.h:40
	bool operator==(const physicsvehiclehandling &) const;

	// physicsvehiclehandling.h:41
	bool operator==(const Attrib::Instance &) const;

	// physicsvehiclehandling.h:42
	bool operator!=(const physicsvehiclehandling &) const;

	// physicsvehiclehandling.h:43
	bool operator!=(const Attrib::Instance &) const;

	// physicsvehiclehandling.h:73
	bool PhysicsVehicleBaseAttribs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// physicsvehiclehandling.h:74
	bool PhysicsVehicleBaseAttribs(RefSpec &) const;

	// physicsvehiclehandling.h:75
	const Attrib::RefSpec & PhysicsVehicleBaseAttribs() const;

	// physicsvehiclehandling.h:76
	bool Set_PhysicsVehicleBaseAttribs(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:80
	bool PhysicsVehicleBodyRollAttribs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// physicsvehiclehandling.h:81
	bool PhysicsVehicleBodyRollAttribs(RefSpec &) const;

	// physicsvehiclehandling.h:82
	const Attrib::RefSpec & PhysicsVehicleBodyRollAttribs() const;

	// physicsvehiclehandling.h:83
	bool Set_PhysicsVehicleBodyRollAttribs(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:87
	bool PhysicsVehicleBoostAttribs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// physicsvehiclehandling.h:88
	bool PhysicsVehicleBoostAttribs(RefSpec &) const;

	// physicsvehiclehandling.h:89
	const Attrib::RefSpec & PhysicsVehicleBoostAttribs() const;

	// physicsvehiclehandling.h:90
	bool Set_PhysicsVehicleBoostAttribs(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:94
	bool PhysicsVehicleCollisionAttribs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// physicsvehiclehandling.h:95
	bool PhysicsVehicleCollisionAttribs(RefSpec &) const;

	// physicsvehiclehandling.h:96
	const Attrib::RefSpec & PhysicsVehicleCollisionAttribs() const;

	// physicsvehiclehandling.h:97
	bool Set_PhysicsVehicleCollisionAttribs(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:101
	bool PhysicsVehicleDriftAttribs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// physicsvehiclehandling.h:102
	bool PhysicsVehicleDriftAttribs(RefSpec &) const;

	// physicsvehiclehandling.h:103
	const Attrib::RefSpec & PhysicsVehicleDriftAttribs() const;

	// physicsvehiclehandling.h:104
	bool Set_PhysicsVehicleDriftAttribs(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:108
	bool PhysicsVehicleEngineAttribs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// physicsvehiclehandling.h:109
	bool PhysicsVehicleEngineAttribs(RefSpec &) const;

	// physicsvehiclehandling.h:110
	const Attrib::RefSpec & PhysicsVehicleEngineAttribs() const;

	// physicsvehiclehandling.h:111
	bool Set_PhysicsVehicleEngineAttribs(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:115
	bool PhysicsVehicleSteeringAttribs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// physicsvehiclehandling.h:116
	bool PhysicsVehicleSteeringAttribs(RefSpec &) const;

	// physicsvehiclehandling.h:117
	const Attrib::RefSpec & PhysicsVehicleSteeringAttribs() const;

	// physicsvehiclehandling.h:118
	bool Set_PhysicsVehicleSteeringAttribs(const Attrib::RefSpec &);

	// physicsvehiclehandling.h:122
	bool PhysicsVehicleSuspensionAttribs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// physicsvehiclehandling.h:123
	bool PhysicsVehicleSuspensionAttribs(RefSpec &) const;

	// physicsvehiclehandling.h:124
	const Attrib::RefSpec & PhysicsVehicleSuspensionAttribs() const;

	// physicsvehiclehandling.h:125
	bool Set_PhysicsVehicleSuspensionAttribs(const Attrib::RefSpec &);

private:
	// physicsvehiclehandling.h:143
	unsigned int GetLayoutSize();

	// physicsvehiclehandling.h:146
	physicsvehiclehandling & ConvertFromInstance(Instance &);

	// physicsvehiclehandling.h:147
	const physicsvehiclehandling & ConvertFromInstance(const Attrib::Instance &);

}

