// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// cameraexternalbehaviour.h:230
		namespace cameraexternalbehaviour {
			// cameraexternalbehaviour.h:232
			const Attribute::Key BoostFieldOfView = [0, 0, 0, 0, 38, 140, 225, 30];

			// cameraexternalbehaviour.h:233
			const Attribute::Key BoostFieldOfViewZoom = 3777182697;

			// cameraexternalbehaviour.h:234
			const Attribute::Key DownAngle = 94332203;

			// cameraexternalbehaviour.h:235
			const Attribute::Key DriftYawSpring = 3591764648;

			// cameraexternalbehaviour.h:236
			const Attribute::Key FieldOfView = 1247677273;

			// cameraexternalbehaviour.h:237
			const Attribute::Key PitchSpring = 2017167387;

			// cameraexternalbehaviour.h:238
			const Attribute::Key PivotHeight = 1134622357;

			// cameraexternalbehaviour.h:239
			const Attribute::Key PivotLength = [0, 0, 0, 0, 60, 31, 10, 86];

			// cameraexternalbehaviour.h:240
			const Attribute::Key PivotZOffset = 3555319113;

			// cameraexternalbehaviour.h:241
			const Attribute::Key SlideXScale = 131542053;

			// cameraexternalbehaviour.h:242
			const Attribute::Key SlideYScale = 1754680543;

			// cameraexternalbehaviour.h:243
			const Attribute::Key SlideZOffsetMax = 1889139497;

			// cameraexternalbehaviour.h:244
			const Attribute::Key TiltAroundCar = 2597621633;

			// cameraexternalbehaviour.h:245
			const Attribute::Key TiltCameraScale = [0, 0, 0, 0, 130, 5, 160, 100];

			// cameraexternalbehaviour.h:246
			const Attribute::Key YawSpring = 2535560350;

			// cameraexternalbehaviour.h:247
			const Attribute::Key ZAndTiltCutoffSpeedMPH = [0, 0, 0, 0, 42, 215, 145, 25];

			// cameraexternalbehaviour.h:248
			const Attribute::Key ZDistanceScale = 241229877;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// cameraexternalbehaviour.h:226
		const Attribute::Key cameraexternalbehaviour = [0, 0, 0, 0, 196, 234, 60, 132];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// cameraexternalbehaviour.h:230
		namespace cameraexternalbehaviour {
			// cameraexternalbehaviour.h:232
			const Attribute::Key BoostFieldOfView = [0, 0, 0, 0, 38, 140, 225, 30];

			// cameraexternalbehaviour.h:233
			const Attribute::Key BoostFieldOfViewZoom = 3777182697;

			// cameraexternalbehaviour.h:234
			const Attribute::Key DownAngle = 94332203;

			// cameraexternalbehaviour.h:235
			const Attribute::Key DriftYawSpring = 3591764648;

			// cameraexternalbehaviour.h:236
			const Attribute::Key FieldOfView = 1247677273;

			// cameraexternalbehaviour.h:237
			const Attribute::Key PitchSpring = 2017167387;

			// cameraexternalbehaviour.h:238
			const Attribute::Key PivotHeight = 1134622357;

			// cameraexternalbehaviour.h:239
			const Attribute::Key PivotLength = [0, 0, 0, 0, 60, 31, 10, 86];

			// cameraexternalbehaviour.h:240
			const Attribute::Key PivotZOffset = 3555319113;

			// cameraexternalbehaviour.h:241
			const Attribute::Key SlideXScale = 131542053;

			// cameraexternalbehaviour.h:242
			const Attribute::Key SlideYScale = 1754680543;

			// cameraexternalbehaviour.h:243
			const Attribute::Key SlideZOffsetMax = 1889139497;

			// cameraexternalbehaviour.h:244
			const Attribute::Key TiltAroundCar = 2597621633;

			// cameraexternalbehaviour.h:245
			const Attribute::Key TiltCameraScale = [0, 0, 0, 0, 130, 5, 160, 100];

			// cameraexternalbehaviour.h:246
			const Attribute::Key YawSpring = 2535560350;

			// cameraexternalbehaviour.h:247
			const Attribute::Key ZAndTiltCutoffSpeedMPH = [0, 0, 0, 0, 42, 215, 145, 25];

			// cameraexternalbehaviour.h:248
			const Attribute::Key ZDistanceScale = 241229877;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// cameraexternalbehaviour.h:226
		const Attribute::Key cameraexternalbehaviour = [0, 0, 0, 0, 196, 234, 60, 132];

	}

}

// cameraexternalbehaviour.h:13
struct Attrib::Gen::cameraexternalbehaviour : Instance {
public:
	// cameraexternalbehaviour.h:15
	Attribute::Key ClassKey();

	// cameraexternalbehaviour.h:17
	void * operator new(size_t);

	// cameraexternalbehaviour.h:17
	void operator delete(void *, size_t);

	// cameraexternalbehaviour.h:17
	void * operator new(size_t, void *);

	// cameraexternalbehaviour.h:17
	void operator delete(void *, void *);

	// cameraexternalbehaviour.h:18
	void cameraexternalbehaviour(const Attrib::Collection *, uint32_t);

	// cameraexternalbehaviour.h:19
	void cameraexternalbehaviour(const cameraexternalbehaviour &);

	// cameraexternalbehaviour.h:20
	void cameraexternalbehaviour(const Attrib::Instance &);

	// cameraexternalbehaviour.h:21
	void cameraexternalbehaviour(const Attrib::RefSpec &, uint32_t);

	// cameraexternalbehaviour.h:22
	void cameraexternalbehaviour(Attribute::Key, uint32_t);

	// cameraexternalbehaviour.h:23
	void ~cameraexternalbehaviour();

	// cameraexternalbehaviour.h:25
	Attribute::Key GetClass() const;

	// cameraexternalbehaviour.h:27
	Instance & GetBase();

	// cameraexternalbehaviour.h:28
	const Attrib::Instance & GetBase() const;

	// cameraexternalbehaviour.h:30
	void Modify(Attribute::Key, unsigned int);

	// cameraexternalbehaviour.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// cameraexternalbehaviour.h:32
	void Change(const Attrib::Collection *);

	// cameraexternalbehaviour.h:33
	void Change(const Attrib::RefSpec &);

	// cameraexternalbehaviour.h:34
	void Change(Attribute::Key);

	// cameraexternalbehaviour.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// cameraexternalbehaviour.h:36
	void ChangeWithDefault(Attribute::Key);

	// cameraexternalbehaviour.h:38
	const cameraexternalbehaviour & operator=(const cameraexternalbehaviour &);

	// cameraexternalbehaviour.h:39
	const cameraexternalbehaviour & operator=(const Attrib::Instance &);

	// cameraexternalbehaviour.h:40
	bool operator==(const cameraexternalbehaviour &) const;

	// cameraexternalbehaviour.h:41
	bool operator==(const Attrib::Instance &) const;

	// cameraexternalbehaviour.h:42
	bool operator!=(const cameraexternalbehaviour &) const;

	// cameraexternalbehaviour.h:43
	bool operator!=(const Attrib::Instance &) const;

	// cameraexternalbehaviour.h:73
	bool BoostFieldOfView(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:74
	bool BoostFieldOfView(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & BoostFieldOfView() const;

	// cameraexternalbehaviour.h:76
	bool Set_BoostFieldOfView(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:80
	bool BoostFieldOfViewZoom(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:81
	bool BoostFieldOfViewZoom(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & BoostFieldOfViewZoom() const;

	// cameraexternalbehaviour.h:83
	bool Set_BoostFieldOfViewZoom(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:87
	bool DownAngle(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:88
	bool DownAngle(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & DownAngle() const;

	// cameraexternalbehaviour.h:90
	bool Set_DownAngle(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:94
	bool DriftYawSpring(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:95
	bool DriftYawSpring(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & DriftYawSpring() const;

	// cameraexternalbehaviour.h:97
	bool Set_DriftYawSpring(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:101
	bool FieldOfView(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:102
	bool FieldOfView(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:103
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & FieldOfView() const;

	// cameraexternalbehaviour.h:104
	bool Set_FieldOfView(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:108
	bool PitchSpring(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:109
	bool PitchSpring(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PitchSpring() const;

	// cameraexternalbehaviour.h:111
	bool Set_PitchSpring(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:115
	bool PivotHeight(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:116
	bool PivotHeight(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:117
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PivotHeight() const;

	// cameraexternalbehaviour.h:118
	bool Set_PivotHeight(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:122
	bool PivotLength(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:123
	bool PivotLength(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:124
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PivotLength() const;

	// cameraexternalbehaviour.h:125
	bool Set_PivotLength(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:129
	bool PivotZOffset(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:130
	bool PivotZOffset(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:131
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PivotZOffset() const;

	// cameraexternalbehaviour.h:132
	bool Set_PivotZOffset(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:136
	bool SlideXScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:137
	bool SlideXScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:138
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SlideXScale() const;

	// cameraexternalbehaviour.h:139
	bool Set_SlideXScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:143
	bool SlideYScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:144
	bool SlideYScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:145
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SlideYScale() const;

	// cameraexternalbehaviour.h:146
	bool Set_SlideYScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:150
	bool SlideZOffsetMax(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:151
	bool SlideZOffsetMax(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:152
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SlideZOffsetMax() const;

	// cameraexternalbehaviour.h:153
	bool Set_SlideZOffsetMax(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:157
	bool TiltAroundCar(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:158
	bool TiltAroundCar(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:159
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & TiltAroundCar() const;

	// cameraexternalbehaviour.h:160
	bool Set_TiltAroundCar(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:164
	bool TiltCameraScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:165
	bool TiltCameraScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:166
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & TiltCameraScale() const;

	// cameraexternalbehaviour.h:167
	bool Set_TiltCameraScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:171
	bool YawSpring(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:172
	bool YawSpring(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:173
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & YawSpring() const;

	// cameraexternalbehaviour.h:174
	bool Set_YawSpring(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:178
	bool ZAndTiltCutoffSpeedMPH(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:179
	bool ZAndTiltCutoffSpeedMPH(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:180
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & ZAndTiltCutoffSpeedMPH() const;

	// cameraexternalbehaviour.h:181
	bool Set_ZAndTiltCutoffSpeedMPH(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameraexternalbehaviour.h:185
	bool ZDistanceScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameraexternalbehaviour.h:186
	bool ZDistanceScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameraexternalbehaviour.h:187
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & ZDistanceScale() const;

	// cameraexternalbehaviour.h:188
	bool Set_ZDistanceScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// cameraexternalbehaviour.h:215
	unsigned int GetLayoutSize();

	// cameraexternalbehaviour.h:218
	cameraexternalbehaviour & ConvertFromInstance(Instance &);

	// cameraexternalbehaviour.h:219
	const cameraexternalbehaviour & ConvertFromInstance(const Attrib::Instance &);

}

