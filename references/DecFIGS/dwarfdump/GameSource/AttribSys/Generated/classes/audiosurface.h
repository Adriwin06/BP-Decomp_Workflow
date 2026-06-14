// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// audiosurface.h:174
		namespace audiosurface {
			// audiosurface.h:176
			const Attribute::Key CrashMaterial = [0, 0, 0, 0, 182, 47, 98, 42];

			// audiosurface.h:177
			const Attribute::Key EnvelopeAttackTime = [0, 0, 0, 0, 91, 56, 109, 226];

			// audiosurface.h:178
			const Attribute::Key EnvelopeDecayTime = 1805467779;

			// audiosurface.h:179
			const Attribute::Key EnvelopeVolume = 3051643514;

			// audiosurface.h:180
			const Attribute::Key mRoadnoiseLoop = [0, 0, 0, 0, 82, 182, 35, 43];

			// audiosurface.h:181
			const Attribute::Key mScrapingLoop = 4017269343;

			// audiosurface.h:182
			const Attribute::Key mTranisitionOff = [0, 0, 0, 0, 204, 92, 50, 66];

			// audiosurface.h:183
			const Attribute::Key mTranisitionOn = [0, 0, 0, 0, 132, 110, 31, 127];

			// audiosurface.h:184
			const Attribute::Key SoftLanding = 3694415946;

			// audiosurface.h:185
			const Attribute::Key SurfaceLoopVolume = [0, 0, 0, 0, 17, 177, 149, 45];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// audiosurface.h:170
		const Attribute::Key audiosurface = 594563281;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// audiosurface.h:174
		namespace audiosurface {
			// audiosurface.h:176
			const Attribute::Key CrashMaterial = [0, 0, 0, 0, 182, 47, 98, 42];

			// audiosurface.h:177
			const Attribute::Key EnvelopeAttackTime = [0, 0, 0, 0, 91, 56, 109, 226];

			// audiosurface.h:178
			const Attribute::Key EnvelopeDecayTime = 1805467779;

			// audiosurface.h:179
			const Attribute::Key EnvelopeVolume = 3051643514;

			// audiosurface.h:180
			const Attribute::Key mRoadnoiseLoop = [0, 0, 0, 0, 82, 182, 35, 43];

			// audiosurface.h:181
			const Attribute::Key mScrapingLoop = 4017269343;

			// audiosurface.h:182
			const Attribute::Key mTranisitionOff = [0, 0, 0, 0, 204, 92, 50, 66];

			// audiosurface.h:183
			const Attribute::Key mTranisitionOn = [0, 0, 0, 0, 132, 110, 31, 127];

			// audiosurface.h:184
			const Attribute::Key SoftLanding = 3694415946;

			// audiosurface.h:185
			const Attribute::Key SurfaceLoopVolume = [0, 0, 0, 0, 17, 177, 149, 45];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// audiosurface.h:170
		const Attribute::Key audiosurface = 594563281;

	}

}

// audiosurface.h:13
struct Attrib::Gen::audiosurface : Instance {
public:
	// audiosurface.h:15
	Attribute::Key ClassKey();

	// audiosurface.h:17
	void * operator new(size_t);

	// audiosurface.h:17
	void operator delete(void *, size_t);

	// audiosurface.h:17
	void * operator new(size_t, void *);

	// audiosurface.h:17
	void operator delete(void *, void *);

	// audiosurface.h:18
	void audiosurface(const Attrib::Collection *, uint32_t);

	// audiosurface.h:19
	void audiosurface(const audiosurface &);

	// audiosurface.h:20
	void audiosurface(const Attrib::Instance &);

	// audiosurface.h:21
	void audiosurface(const Attrib::RefSpec &, uint32_t);

	// audiosurface.h:22
	void audiosurface(Attribute::Key, uint32_t);

	// audiosurface.h:23
	void ~audiosurface();

	// audiosurface.h:25
	Attribute::Key GetClass() const;

	// audiosurface.h:27
	Instance & GetBase();

	// audiosurface.h:28
	const Attrib::Instance & GetBase() const;

	// audiosurface.h:30
	void Modify(Attribute::Key, unsigned int);

	// audiosurface.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// audiosurface.h:32
	void Change(const Attrib::Collection *);

	// audiosurface.h:33
	void Change(const Attrib::RefSpec &);

	// audiosurface.h:34
	void Change(Attribute::Key);

	// audiosurface.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// audiosurface.h:36
	void ChangeWithDefault(Attribute::Key);

	// audiosurface.h:38
	const audiosurface & operator=(const audiosurface &);

	// audiosurface.h:39
	const audiosurface & operator=(const Attrib::Instance &);

	// audiosurface.h:40
	bool operator==(const audiosurface &) const;

	// audiosurface.h:41
	bool operator==(const Attrib::Instance &) const;

	// audiosurface.h:42
	bool operator!=(const audiosurface &) const;

	// audiosurface.h:43
	bool operator!=(const Attrib::Instance &) const;

	// audiosurface.h:73
	bool CrashMaterial(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// audiosurface.h:74
	bool CrashMaterial(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// audiosurface.h:75
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & CrashMaterial() const;

	// audiosurface.h:76
	bool Set_CrashMaterial(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// audiosurface.h:80
	bool EnvelopeAttackTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// audiosurface.h:81
	bool EnvelopeAttackTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// audiosurface.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & EnvelopeAttackTime() const;

	// audiosurface.h:83
	bool Set_EnvelopeAttackTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// audiosurface.h:87
	bool EnvelopeDecayTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// audiosurface.h:88
	bool EnvelopeDecayTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// audiosurface.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & EnvelopeDecayTime() const;

	// audiosurface.h:90
	bool Set_EnvelopeDecayTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// audiosurface.h:94
	bool EnvelopeVolume(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// audiosurface.h:95
	bool EnvelopeVolume(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// audiosurface.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & EnvelopeVolume() const;

	// audiosurface.h:97
	bool Set_EnvelopeVolume(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// audiosurface.h:101
	bool mRoadnoiseLoop(Attrib::TAttrib<EA::Reflection::Int16> &) const;

	// audiosurface.h:102
	bool mRoadnoiseLoop(Attrib::Gen::sampletags::_LayoutStruct::Int16 &) const;

	// audiosurface.h:103
	const Attrib::Gen::sampletags::_LayoutStruct::Int16 & mRoadnoiseLoop() const;

	// audiosurface.h:104
	bool Set_mRoadnoiseLoop(const Attrib::Gen::sampletags::_LayoutStruct::Int16 &);

	// audiosurface.h:108
	bool mScrapingLoop(Attrib::TAttrib<EA::Reflection::Int16> &) const;

	// audiosurface.h:109
	bool mScrapingLoop(Attrib::Gen::sampletags::_LayoutStruct::Int16 &) const;

	// audiosurface.h:110
	const Attrib::Gen::sampletags::_LayoutStruct::Int16 & mScrapingLoop() const;

	// audiosurface.h:111
	bool Set_mScrapingLoop(const Attrib::Gen::sampletags::_LayoutStruct::Int16 &);

	// audiosurface.h:115
	bool mTranisitionOff(Attrib::TAttrib<EA::Reflection::Int16> &) const;

	// audiosurface.h:116
	bool mTranisitionOff(Attrib::Gen::sampletags::_LayoutStruct::Int16 &) const;

	// audiosurface.h:117
	const Attrib::Gen::sampletags::_LayoutStruct::Int16 & mTranisitionOff() const;

	// audiosurface.h:118
	bool Set_mTranisitionOff(const Attrib::Gen::sampletags::_LayoutStruct::Int16 &);

	// audiosurface.h:122
	bool mTranisitionOn(Attrib::TAttrib<EA::Reflection::Int16> &) const;

	// audiosurface.h:123
	bool mTranisitionOn(Attrib::Gen::sampletags::_LayoutStruct::Int16 &) const;

	// audiosurface.h:124
	const Attrib::Gen::sampletags::_LayoutStruct::Int16 & mTranisitionOn() const;

	// audiosurface.h:125
	bool Set_mTranisitionOn(const Attrib::Gen::sampletags::_LayoutStruct::Int16 &);

	// audiosurface.h:129
	bool SoftLanding(Attrib::TAttrib<EA::Reflection::Bool> &) const;

	// audiosurface.h:130
	bool SoftLanding(Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &) const;

	// audiosurface.h:131
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool & SoftLanding() const;

	// audiosurface.h:132
	bool Set_SoftLanding(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &);

	// audiosurface.h:136
	bool SurfaceLoopVolume(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// audiosurface.h:137
	bool SurfaceLoopVolume(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// audiosurface.h:138
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SurfaceLoopVolume() const;

	// audiosurface.h:139
	bool Set_SurfaceLoopVolume(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// audiosurface.h:159
	unsigned int GetLayoutSize();

	// audiosurface.h:162
	audiosurface & ConvertFromInstance(Instance &);

	// audiosurface.h:163
	const audiosurface & ConvertFromInstance(const Attrib::Instance &);

}

