// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct DebugPrinter {
		// BrnDirectorModuleDebugPrinter.h:72
		struct DebugPrinterInfo {
			// BrnDirectorModuleDebugPrinter.h:74
			float32_t mfSize;

			// BrnDirectorModuleDebugPrinter.h:75
			float32_t mfLineSize;

			// BrnDirectorModuleDebugPrinter.h:76
			float32_t mfX;

			// BrnDirectorModuleDebugPrinter.h:77
			float32_t mfY;

			// BrnDirectorModuleDebugPrinter.h:78
			RGBA muColour;

			// BrnDirectorModuleDebugPrinter.h:79
			RGBA muActiveColour;

			// BrnDirectorModuleDebugPrinter.h:80
			RGBA muInactiveColour;

			// BrnDirectorModuleDebugPrinter.h:82
			CgsDev::DebugRender::Justification mJustification;

		}

	}

	// Declaration
	struct DebugLog {
		// BrnDirectorModuleDebugPrinter.h:176
		struct LogString {
			// BrnDirectorModuleDebugPrinter.h:177
			float32_t mfTimeLeft;

			// BrnDirectorModuleDebugPrinter.h:178
			RGBA mRGBA;

			// BrnDirectorModuleDebugPrinter.h:179
			char[64] macString;

		}

	}

}

// BrnDirectorModuleDebugPrinter.h:43
struct BrnDirector::DebugPrinter {
private:
	// BrnDirectorModuleDebugPrinter.h:119
	BrnDirector::DebugPrinter::DebugPrinterInfo mDebugPrinterInfo;

	// BrnDirectorModuleDebugPrinter.h:120
	bool mbEnabled;

public:
	// BrnDirectorModuleDebugPrinter.h:47
	void Construct();

	// BrnDirectorModuleDebugPrinter.h:51
	void Print(const char *);

	// BrnDirectorModuleDebugPrinter.h:56
	void Print(const char *, RGBA);

	// BrnDirectorModuleDebugPrinter.h:61
	void PrintName(const BrnDirector::Moment &, RGBA);

	// BrnDirectorModuleDebugPrinter.h:65
	void PrintActive(const char *);

	// BrnDirectorModuleDebugPrinter.h:69
	void PrintInactive(const char *);

	// BrnDirectorModuleDebugPrinter.h:89
	const BrnDirector::DebugPrinter::DebugPrinterInfo & GetDebugPrinterInfo() const;

	// BrnDirectorModuleDebugPrinter.h:93
	void SetDebugPrinterInfo(const BrnDirector::DebugPrinter::DebugPrinterInfo &);

	// BrnDirectorModuleDebugPrinter.h:98
	void SetEnabled();

	// BrnDirectorModuleDebugPrinter.h:101
	void SetDisabled();

private:
	// BrnDirectorModuleDebugPrinter.h:110
	void ActualPrint(const char *, RGBA);

	// BrnDirectorModuleDebugPrinter.h:115
	void ActualPrintName(const BrnDirector::Moment &, RGBA);

}

// BrnDirectorModuleDebugPrinter.h:128
struct BrnDirector::DebugLog {
private:
	// BrnDirectorModuleDebugPrinter.h:182
	float32_t mfStringDuration;

	// BrnDirectorModuleDebugPrinter.h:184
	ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t> mStringPool;

	// BrnDirectorModuleDebugPrinter.h:185
	Array<int32_t,20u> mStringIndices;

public:
	// BrnDirectorModuleDebugPrinter.h:132
	void Construct();

	// BrnDirectorModuleDebugPrinter.h:135
	void Clear();

	// BrnDirectorModuleDebugPrinter.h:139
	void Update(float32_t);

	// BrnDirectorModuleDebugPrinter.h:143
	void Print(BrnDirector::DebugPrinter &);

	// BrnDirectorModuleDebugPrinter.h:148
	void Append(const char *, RGBA);

	// BrnDirectorModuleDebugPrinter.h:153
	void AppendName(const BrnDirector::Moment &, RGBA);

private:
	// BrnDirectorModuleDebugPrinter.h:162
	void ActualAppend(const char *, RGBA);

	// BrnDirectorModuleDebugPrinter.h:167
	void ActualAppendName(const BrnDirector::Moment &, RGBA);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct DebugPrinter {
		// BrnDirectorModuleDebugPrinter.h:72
		struct DebugPrinterInfo {
			// BrnDirectorModuleDebugPrinter.h:74
			float32_t mfSize;

			// BrnDirectorModuleDebugPrinter.h:75
			float32_t mfLineSize;

			// BrnDirectorModuleDebugPrinter.h:76
			float32_t mfX;

			// BrnDirectorModuleDebugPrinter.h:77
			float32_t mfY;

			// BrnDirectorModuleDebugPrinter.h:78
			RGBA muColour;

			// BrnDirectorModuleDebugPrinter.h:79
			RGBA muActiveColour;

			// BrnDirectorModuleDebugPrinter.h:80
			RGBA muInactiveColour;

			// BrnDirectorModuleDebugPrinter.h:82
			CgsDev::DebugRender::Justification mJustification;

		}

	}

	// Declaration
	struct DebugLog {
		// BrnDirectorModuleDebugPrinter.h:176
		struct LogString {
			// BrnDirectorModuleDebugPrinter.h:177
			float32_t mfTimeLeft;

			// BrnDirectorModuleDebugPrinter.h:178
			RGBA mRGBA;

			// BrnDirectorModuleDebugPrinter.h:179
			char[64] macString;

		}

	}

}

