// CgsStrStream.h:39
namespace CgsDev {
	// CgsWarnings.h:106
	namespace WarningSystem {
		// CgsWarnings.h:110
		const int32_t KI_WARNINGMAXVARGSSTRINGLENGTH = 8192;

		// CgsWarnings.h:120
		namespace Discipline {
			// CgsWarnings.h:125
			const DisciplineType NONE;

			// CgsWarnings.h:126
			const DisciplineType ALL = 4294967295;

			// CgsWarnings.h:129
			const DisciplineType ART_1 = 1;

			// CgsWarnings.h:130
			const DisciplineType ART_2 = 2;

			// CgsWarnings.h:131
			const DisciplineType ART_3 = 4;

			// CgsWarnings.h:132
			const DisciplineType ART_4 = 8;

			// CgsWarnings.h:133
			const DisciplineType ART_5 = 16;

			// CgsWarnings.h:134
			const DisciplineType ART_6 = 32;

			// CgsWarnings.h:135
			const DisciplineType ART_7 = 64;

			// CgsWarnings.h:136
			const DisciplineType ART_8 = 128;

			// CgsWarnings.h:137
			const DisciplineType ART_9 = 256;

			// CgsWarnings.h:138
			const DisciplineType ART_FRONTEND = 512;

			// CgsWarnings.h:139
			const DisciplineType ART_WORLD = 1024;

			// CgsWarnings.h:140
			const DisciplineType ART_CHARACTER = 2048;

			// CgsWarnings.h:141
			const DisciplineType ART_VEHICLE = 4096;

			// CgsWarnings.h:142
			const DisciplineType ART_LIGHTING = 8192;

			// CgsWarnings.h:143
			const DisciplineType ART_COLLISION = 16384;

			// CgsWarnings.h:144
			const DisciplineType ART_OBJECTS = 32768;

			// CgsWarnings.h:147
			const DisciplineType OTHER_1 = 65536;

			// CgsWarnings.h:148
			const DisciplineType OTHER_2 = 131072;

			// CgsWarnings.h:149
			const DisciplineType OTHER_3 = 262144;

			// CgsWarnings.h:150
			const DisciplineType OTHER_4 = 524288;

			// CgsWarnings.h:151
			const DisciplineType OTHER_5 = 1048576;

			// CgsWarnings.h:152
			const DisciplineType OTHER_6 = 2097152;

			// CgsWarnings.h:153
			const DisciplineType OTHER_7 = 4194304;

			// CgsWarnings.h:154
			const DisciplineType OTHER_8 = 8388608;

			// CgsWarnings.h:155
			const DisciplineType OTHER_9 = 16777216;

			// CgsWarnings.h:156
			const DisciplineType OTHER_10 = 33554432;

			// CgsWarnings.h:157
			const DisciplineType OTHER_11 = 67108864;

			// CgsWarnings.h:158
			const DisciplineType OTHER_12 = 134217728;

			// CgsWarnings.h:159
			const DisciplineType OTHER_13 = 268435456;

			// CgsWarnings.h:162
			const DisciplineType DESIGN_LEVEL = 536870912;

			// CgsWarnings.h:163
			const DisciplineType DESIGN_SCRIPTING = 1073741824;

			// CgsWarnings.h:166
			const DisciplineType SOUND_DESIGN = 2147483648;

			// CgsWarnings.h:169
			const DisciplineType SOUND_ALL = 2147483648;

			// CgsWarnings.h:170
			const DisciplineType DESIGN_ALL = 1610612736;

			// CgsWarnings.h:171
			const DisciplineType ART_ALL = 65535;

		}

	}

}

// CgsWarnings.h:122
typedef uint32_t DisciplineType;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsWarnings.h:106
	namespace WarningSystem {
		// CgsWarningManager.cpp:58
		// Declaration
		extern void ShowWarningMessage(DisciplineType, const char *, const char *, int) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsWarnings.h:122
			typedef uint32_t DisciplineType;

		}

		// CgsWarnings.h:110
		const int32_t KI_WARNINGMAXVARGSSTRINGLENGTH = 8192;

		// CgsWarnings.h:120
		namespace Discipline {
			// CgsWarnings.h:125
			const DisciplineType NONE;

			// CgsWarnings.h:126
			const DisciplineType ALL = 4294967295;

			// CgsWarnings.h:129
			const DisciplineType ART_1 = 1;

			// CgsWarnings.h:130
			const DisciplineType ART_2 = 2;

			// CgsWarnings.h:131
			const DisciplineType ART_3 = 4;

			// CgsWarnings.h:132
			const DisciplineType ART_4 = 8;

			// CgsWarnings.h:133
			const DisciplineType ART_5 = 16;

			// CgsWarnings.h:134
			const DisciplineType ART_6 = 32;

			// CgsWarnings.h:135
			const DisciplineType ART_7 = 64;

			// CgsWarnings.h:136
			const DisciplineType ART_8 = 128;

			// CgsWarnings.h:137
			const DisciplineType ART_9 = 256;

			// CgsWarnings.h:138
			const DisciplineType ART_FRONTEND = 512;

			// CgsWarnings.h:139
			const DisciplineType ART_WORLD = 1024;

			// CgsWarnings.h:140
			const DisciplineType ART_CHARACTER = 2048;

			// CgsWarnings.h:141
			const DisciplineType ART_VEHICLE = 4096;

			// CgsWarnings.h:142
			const DisciplineType ART_LIGHTING = 8192;

			// CgsWarnings.h:143
			const DisciplineType ART_COLLISION = 16384;

			// CgsWarnings.h:144
			const DisciplineType ART_OBJECTS = 32768;

			// CgsWarnings.h:147
			const DisciplineType OTHER_1 = 65536;

			// CgsWarnings.h:148
			const DisciplineType OTHER_2 = 131072;

			// CgsWarnings.h:149
			const DisciplineType OTHER_3 = 262144;

			// CgsWarnings.h:150
			const DisciplineType OTHER_4 = 524288;

			// CgsWarnings.h:151
			const DisciplineType OTHER_5 = 1048576;

			// CgsWarnings.h:152
			const DisciplineType OTHER_6 = 2097152;

			// CgsWarnings.h:153
			const DisciplineType OTHER_7 = 4194304;

			// CgsWarnings.h:154
			const DisciplineType OTHER_8 = 8388608;

			// CgsWarnings.h:155
			const DisciplineType OTHER_9 = 16777216;

			// CgsWarnings.h:156
			const DisciplineType OTHER_10 = 33554432;

			// CgsWarnings.h:157
			const DisciplineType OTHER_11 = 67108864;

			// CgsWarnings.h:158
			const DisciplineType OTHER_12 = 134217728;

			// CgsWarnings.h:159
			const DisciplineType OTHER_13 = 268435456;

			// CgsWarnings.h:162
			const DisciplineType DESIGN_LEVEL = 536870912;

			// CgsWarnings.h:163
			const DisciplineType DESIGN_SCRIPTING = 1073741824;

			// CgsWarnings.h:166
			const DisciplineType SOUND_DESIGN = 2147483648;

			// CgsWarnings.h:169
			const DisciplineType SOUND_ALL = 2147483648;

			// CgsWarnings.h:170
			const DisciplineType DESIGN_ALL = 1610612736;

			// CgsWarnings.h:171
			const DisciplineType ART_ALL = 65535;

		}

	}

}

