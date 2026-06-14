// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

}

// CgsStrStream.h:163
extern const char * KAC_INTEGER;

// CgsStrStream.h:164
extern const char * KAC_UNSIGNED;

// CgsStrStream.h:165
extern const char * KAC_HEX;

// CgsStrStream.h:166
extern const char * KAC_PADDED_HEX;

// CgsStrStream.h:167
extern const char * KAC_PADDED_HEX_NO_PREFIX;

// CgsStrStream.h:168
extern const char * KAC_FLOAT;

// CgsStrStream.h:169
extern const char * KAC_CHAR;

// CgsStrStream.h:170
extern const char * KAC_TRUE;

// CgsStrStream.h:171
extern const char * KAC_FALSE;

// CgsStrStream.h:172
extern const char * KAC_VECTOR2;

// CgsStrStream.h:173
extern const char * KAC_VECTOR3;

// CgsStrStream.h:174
extern const char * KAC_VECTOR4;

// CgsStrStream.h:175
extern const char * KAC_MATRIX33;

// CgsStrStream.h:176
extern const char * KAC_MATRIX44;

// CgsStrStream.h:177
extern const char * KAC_LF;

// CgsStrStream.h:179
extern const int32_t KI_FORMAT_BUFFER_SIZE;

// CgsStrStream.h:299
extern const char * KAC_SIMPLE_FLOAT;

// CgsStrStream.h:300
extern const char * KAC_SIMPLE_VECTOR2;

// CgsStrStream.h:301
extern const char * KAC_SIMPLE_VECTOR3;

// CgsStrStream.h:302
extern const char * KAC_SIMPLE_VECTOR4;

// CgsStrStream.h:303
extern const char * KAC_SIMPLE_MATRIX33;

// CgsStrStream.h:304
extern const char * KAC_SIMPLE_MATRIX44;

// CgsStrStream.h:306
extern const int32_t KI_BUFFER_SIZE = 256;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugGraph;

	struct DebugManager;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:759
		CgsDev::StrStreamBase & operator<<(Matrix44Affine);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugManager;

	struct VectorFont;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct PerfMonCpuHelper;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugGraph;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:759
		CgsDev::StrStreamBase & operator<<(Matrix44Affine);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

		// CgsStrStream.h:617
		CgsDev::StrStreamBase & operator<<(char);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugGraph;

	struct VectorFont;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

	}

	// Declaration
	struct SimpleStrStream {
	public:
		// CgsStrStream.h:487
		SimpleStrStream();

		// CgsStrStream.h:962
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:503
		char * GetBuffer();

		// CgsStrStream.h:969
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:1025
		CgsDev::StrStreamBase & operator<<(float32_t);

	private:
		// CgsStrStream.h:299
		extern const char * KAC_SIMPLE_FLOAT;

		// CgsStrStream.h:300
		extern const char * KAC_SIMPLE_VECTOR2;

		// CgsStrStream.h:301
		extern const char * KAC_SIMPLE_VECTOR3;

		// CgsStrStream.h:302
		extern const char * KAC_SIMPLE_VECTOR4;

		// CgsStrStream.h:303
		extern const char * KAC_SIMPLE_MATRIX33;

		// CgsStrStream.h:304
		extern const char * KAC_SIMPLE_MATRIX44;

		// CgsStrStream.h:306
		extern const int32_t KI_BUFFER_SIZE = 256;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

	}

	// Declaration
	struct SimpleStrStream {
	public:
		// CgsStrStream.h:487
		SimpleStrStream();

		// CgsStrStream.h:962
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:503
		char * GetBuffer();

		// CgsStrStream.h:969
		CgsDev::StrStreamBase & operator<<(int32_t);

	private:
		// CgsStrStream.h:299
		extern const char * KAC_SIMPLE_FLOAT;

		// CgsStrStream.h:300
		extern const char * KAC_SIMPLE_VECTOR2;

		// CgsStrStream.h:301
		extern const char * KAC_SIMPLE_VECTOR3;

		// CgsStrStream.h:302
		extern const char * KAC_SIMPLE_VECTOR4;

		// CgsStrStream.h:303
		extern const char * KAC_SIMPLE_MATRIX33;

		// CgsStrStream.h:304
		extern const char * KAC_SIMPLE_MATRIX44;

		// CgsStrStream.h:306
		extern const int32_t KI_BUFFER_SIZE = 256;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:617
		CgsDev::StrStreamBase & operator<<(char);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

	}

	// Declaration
	struct SimpleStrStream {
	public:
		// CgsStrStream.h:503
		char * GetBuffer();

		// CgsStrStream.h:962
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:487
		SimpleStrStream();

	private:
		// CgsStrStream.h:299
		extern const char * KAC_SIMPLE_FLOAT;

		// CgsStrStream.h:300
		extern const char * KAC_SIMPLE_VECTOR2;

		// CgsStrStream.h:301
		extern const char * KAC_SIMPLE_VECTOR3;

		// CgsStrStream.h:302
		extern const char * KAC_SIMPLE_VECTOR4;

		// CgsStrStream.h:303
		extern const char * KAC_SIMPLE_MATRIX33;

		// CgsStrStream.h:304
		extern const char * KAC_SIMPLE_MATRIX44;

		// CgsStrStream.h:306
		extern const int32_t KI_BUFFER_SIZE = 256;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	struct DebugGraph;

	struct PerfMonGpuMonitorData;

	struct PerfMonGpuInstance;

	struct PerfMonGpu;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// CgsStrStream.h:312
	namespace Log {
		struct LogFile;

	}

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

	struct CgsJuice;

	struct JuiceScriptInterface;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:708
		CgsDev::StrStreamBase & operator<<(Vector2);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct PerfMonCpuHelper;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct DebugRenderStreamReader;

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:708
		CgsDev::StrStreamBase & operator<<(Vector2);

		// CgsStrStream.h:728
		CgsDev::StrStreamBase & operator<<(Vector4);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct DebugRenderStreamReader;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugManager;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		StrStreamBase(const CgsDev::StrStreamBase &);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

		StrStream(const CgsDev::StrStream &);

	}

	struct DebugRenderStreamReader;

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

}

// CgsStrStream.h:193
void CgsDev::StrStream::StrStream(const const CgsDev::StrStream &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStrStream.h:70
void CgsDev::StrStreamBase::StrStreamBase(const const CgsDev::StrStreamBase &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStrStream.h:39
namespace CgsDev {
	struct PerfMonCpuInstance;

	struct DebugGraph;

	struct DebugManager;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	// Declaration
	struct JuiceScripting {
	public:
		virtual ~JuiceScripting();

	}

	struct CgsJuice;

	// Declaration
	struct JuiceScriptInterface {
	public:
		virtual ~JuiceScriptInterface();

	}

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuInstance;

	struct DebugGraph;

	struct DebugManager;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	// CgsStrStream.h:312
	namespace Log {
	}

	struct PerfMonCpuInstance;

	struct DebugGraph;

	struct DebugManager;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugRenderStreamReader;

	struct DebugGraph;

	struct VectorFont;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugGraph;

	struct DebugManager;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	// Declaration
	struct DebugComponent {
	public:
		DebugComponent();

	}

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

		// CgsStrStream.h:759
		CgsDev::StrStreamBase & operator<<(Matrix44Affine);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:728
		CgsDev::StrStreamBase & operator<<(Vector4);

		// CgsStrStream.h:617
		CgsDev::StrStreamBase & operator<<(char);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

	// Declaration
	struct SimpleStrStream {
	public:
		// CgsStrStream.h:487
		SimpleStrStream();

		// CgsStrStream.h:962
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:503
		char * GetBuffer();

	private:
		// CgsStrStream.h:299
		extern const char * KAC_SIMPLE_FLOAT;

		// CgsStrStream.h:300
		extern const char * KAC_SIMPLE_VECTOR2;

		// CgsStrStream.h:301
		extern const char * KAC_SIMPLE_VECTOR3;

		// CgsStrStream.h:302
		extern const char * KAC_SIMPLE_VECTOR4;

		// CgsStrStream.h:303
		extern const char * KAC_SIMPLE_MATRIX33;

		// CgsStrStream.h:304
		extern const char * KAC_SIMPLE_MATRIX44;

		// CgsStrStream.h:306
		extern const int32_t KI_BUFFER_SIZE = 256;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManager;

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:759
		CgsDev::StrStreamBase & operator<<(Matrix44Affine);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuInstance;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugManager;

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugGraph;

	struct DebugManager;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// CgsStrStream.h:312
	namespace Log {
		struct LogNull;

		struct LogOutput;

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct DebugRenderStreamReader;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	// Declaration
	struct DebugComponent {
	public:
		DebugComponent();

	}

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

}

// CgsStrStream.h:39
namespace CgsDev {
	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:617
		CgsDev::StrStreamBase & operator<<(char);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

		// CgsStrStream.h:759
		CgsDev::StrStreamBase & operator<<(Matrix44Affine);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:708
		CgsDev::StrStreamBase & operator<<(Vector2);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

	// Declaration
	struct SimpleStrStream {
	public:
		// CgsStrStream.h:487
		SimpleStrStream();

		// CgsStrStream.h:962
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:503
		char * GetBuffer();

		// CgsStrStream.h:969
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:976
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:1025
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:1018
		CgsDev::StrStreamBase & operator<<(bool);

	private:
		// CgsStrStream.h:299
		extern const char * KAC_SIMPLE_FLOAT;

		// CgsStrStream.h:300
		extern const char * KAC_SIMPLE_VECTOR2;

		// CgsStrStream.h:301
		extern const char * KAC_SIMPLE_VECTOR3;

		// CgsStrStream.h:302
		extern const char * KAC_SIMPLE_VECTOR4;

		// CgsStrStream.h:303
		extern const char * KAC_SIMPLE_MATRIX33;

		// CgsStrStream.h:304
		extern const char * KAC_SIMPLE_MATRIX44;

		// CgsStrStream.h:306
		extern const int32_t KI_BUFFER_SIZE = 256;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct DebugManager;

	struct DebugGraph;

	struct PerfMonGpuMonitorData;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	// Declaration
	struct DebugComponent {
	public:
		DebugComponent();

	}

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// CgsStrStream.h:312
	namespace Log {
		struct LogOutput;

		struct LogNull;

	}

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	// Declaration
	struct JuiceScripting {
	public:
		virtual ~JuiceScripting();

		JuiceScripting();

	}

	struct CgsJuice;

	// Declaration
	struct JuiceScriptInterface {
	public:
		JuiceScriptInterface();

		virtual ~JuiceScriptInterface();

	}

	// Declaration
	struct SimpleStrStream {
	public:
		// CgsStrStream.h:487
		SimpleStrStream();

	private:
		// CgsStrStream.h:299
		extern const char * KAC_SIMPLE_FLOAT;

		// CgsStrStream.h:300
		extern const char * KAC_SIMPLE_VECTOR2;

		// CgsStrStream.h:301
		extern const char * KAC_SIMPLE_VECTOR3;

		// CgsStrStream.h:302
		extern const char * KAC_SIMPLE_VECTOR4;

		// CgsStrStream.h:303
		extern const char * KAC_SIMPLE_MATRIX33;

		// CgsStrStream.h:304
		extern const char * KAC_SIMPLE_MATRIX44;

		// CgsStrStream.h:306
		extern const int32_t KI_BUFFER_SIZE = 256;

	}

}

// CgsStrStream.h:322
struct CgsDev::Log::LogNull : public CgsDev::StrStreamBase {
public:
	void LogNull(const LogNull &);

	void LogNull();

protected:
	// CgsStrStream.h:325
	virtual void Append(const char *);

}

// CgsStrStream.h:322
void CgsDev::Log::LogNull::LogNull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugGraph;

	struct DebugManager;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugManager;

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugRenderStreamReader;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugGraph;

	struct DebugManager;

	struct VectorFont;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

		// CgsStrStream.h:759
		CgsDev::StrStreamBase & operator<<(Matrix44Affine);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// CgsStrStream.h:312
	namespace Log {
	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// CgsStrStream.h:312
	namespace Log {
	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:312
	namespace Log {
		struct LogOutput;

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugGraph;

	struct DebugManager;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct PerfMonGpuMonitorData;

	struct PerfMonGpuInstance;

	struct PerfMonGpu;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentPerfMonCpu;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct PerfMonGpuPS3_Values;

	struct PerfMonGpuPS3_Buffer;

	struct DebugRenderStreamReader;

	// CgsStrStream.h:312
	namespace Log {
		struct LogFileBuffered;

		struct LogCombined;

		struct LogFile;

	}

	struct StrStreamBase;

	struct VectorFontStream;

	struct StrInStream;

	struct StrInStreamBase;

	struct SimpleStrStream;

	struct StrStream;

	void PerfMonCpu_HELPER_printspaces(int);

}

// CgsStrStream.h:405
struct CgsDev::StrInStream : public CgsDev::StrInStreamBase {
protected:
	// CgsStrStream.h:418
	const char * mpBuffer;

	// CgsStrStream.h:419
	const char * mpCurrentPos;

	// CgsStrStream.h:420
	uint32_t muBufferSize;

public:
	void StrInStream(const StrInStream &);

	// CgsStrStream.cpp:237
	void StrInStream(const char *, uint32_t);

	// CgsStrStream.cpp:252
	virtual void Reset();

protected:
	// CgsStrStream.cpp:266
	virtual const char * GetNextLine();

}

// CgsStrStream.h:339
struct CgsDev::StrInStreamBase {
	int (*)(...) * _vptr.StrInStreamBase;

public:
	void StrInStreamBase();

	void StrInStreamBase(const StrInStreamBase &);

	// CgsStrStream.h:866
	StrInStreamBase & operator>>(const char *&);

	// CgsStrStream.h:874
	StrInStreamBase & operator>>(int32_t &);

	// CgsStrStream.h:882
	StrInStreamBase & operator>>(uint32_t &);

	// CgsStrStream.h:890
	StrInStreamBase & operator>>(float32_t &);

	// CgsStrStream.h:898
	StrInStreamBase & operator>>(char &);

	// CgsStrStream.h:906
	StrInStreamBase & operator>>(void *&);

	// CgsStrStream.h:914
	StrInStreamBase & operator>>(int64_t &);

	// CgsStrStream.h:922
	StrInStreamBase & operator>>(uint64_t &);

	// CgsStrStream.h:930
	StrInStreamBase & operator>>(Vector3 &);

	// CgsStrStream.h:941
	StrInStreamBase & operator>>(Vector4 &);

	// CgsStrStream.h:382
	virtual void Reset();

protected:
	// CgsStrStream.h:387
	virtual const char * GetNextLine();

	// CgsStrStream.cpp:195
	virtual const char * GetNextWord(const char *, const char **, const char *);

}

// CgsStrStream.h:223
struct CgsDev::SimpleStrStream : public CgsDev::StrStreamBase {
private:
	// CgsStrStream.cpp:46
	extern const char * KAC_SIMPLE_FLOAT;

	// CgsStrStream.cpp:47
	extern const char * KAC_SIMPLE_VECTOR2;

	// CgsStrStream.cpp:48
	extern const char * KAC_SIMPLE_VECTOR3;

	// CgsStrStream.cpp:49
	extern const char * KAC_SIMPLE_VECTOR4;

	// CgsStrStream.cpp:50
	extern const char * KAC_SIMPLE_MATRIX33;

	// CgsStrStream.cpp:51
	extern const char * KAC_SIMPLE_MATRIX44;

	// CgsStrStream.h:306
	extern const int32_t KI_BUFFER_SIZE = 256;

	// CgsStrStream.h:308
	char[256] macCharBuffer;

public:
	void SimpleStrStream(const SimpleStrStream &);

	// CgsStrStream.h:487
	void SimpleStrStream();

	// CgsStrStream.cpp:160
	virtual void Reset();

	// CgsStrStream.h:503
	char * GetBuffer();

	// CgsStrStream.h:962
	CgsDev::StrStreamBase & operator<<(const char *);

	// CgsStrStream.h:969
	CgsDev::StrStreamBase & operator<<(int32_t);

	// CgsStrStream.h:976
	CgsDev::StrStreamBase & operator<<(uint32_t);

	// CgsStrStream.h:1025
	CgsDev::StrStreamBase & operator<<(float32_t);

	// CgsStrStream.h:983
	CgsDev::StrStreamBase & operator<<(char);

	// CgsStrStream.h:990
	CgsDev::StrStreamBase & operator<<(void *);

	// CgsStrStream.h:997
	CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

	// CgsStrStream.h:1004
	CgsDev::StrStreamBase & operator<<(int64_t);

	// CgsStrStream.h:1011
	CgsDev::StrStreamBase & operator<<(uint64_t);

	// CgsStrStream.h:1018
	CgsDev::StrStreamBase & operator<<(bool);

	// CgsStrStream.h:1040
	CgsDev::StrStreamBase & operator<<(Vector2);

	// CgsStrStream.h:1057
	CgsDev::StrStreamBase & operator<<(Vector3);

	// CgsStrStream.h:1074
	CgsDev::StrStreamBase & operator<<(Vector4);

	// CgsStrStream.h:1092
	CgsDev::StrStreamBase & operator<<(Matrix33);

	// CgsStrStream.h:1119
	CgsDev::StrStreamBase & operator<<(Matrix44Affine);

protected:
	// CgsStrStream.cpp:177
	virtual void Append(const char *);

}

// CgsStrStream.h:193
struct CgsDev::StrStream : public CgsDev::StrStreamBase {
protected:
	// CgsStrStream.h:210
	char * mpcCharBuffer;

	// CgsStrStream.h:211
	int32_t miBufferSize;

public:
	void StrStream(const StrStream &);

	// CgsStrStream.h:454
	void StrStream(char *, int32_t);

	// CgsStrStream.cpp:129
	virtual void Reset();

	// CgsStrStream.h:473
	char * GetBuffer();

protected:
	// CgsStrStream.cpp:145
	virtual void Append(const char *);

}

// CgsStrStream.h:70
struct CgsDev::StrStreamBase {
	int (*)(...) * _vptr.StrStreamBase;

protected:
	// CgsStrStream.h:159
	CgsDev::PrintMode meCurrentPrintMode;

private:
	// CgsStrStream.cpp:30
	extern const char * KAC_INTEGER;

	// CgsStrStream.cpp:31
	extern const char * KAC_UNSIGNED;

	// CgsStrStream.cpp:32
	extern const char * KAC_HEX;

	// CgsStrStream.cpp:33
	extern const char * KAC_PADDED_HEX;

	// CgsStrStream.cpp:34
	extern const char * KAC_PADDED_HEX_NO_PREFIX;

	// CgsStrStream.cpp:35
	extern const char * KAC_FLOAT;

	// CgsStrStream.cpp:36
	extern const char * KAC_CHAR;

	// CgsStrStream.cpp:37
	extern const char * KAC_TRUE;

	// CgsStrStream.cpp:38
	extern const char * KAC_FALSE;

	// CgsStrStream.cpp:39
	extern const char * KAC_VECTOR2;

	// CgsStrStream.cpp:40
	extern const char * KAC_VECTOR3;

	// CgsStrStream.cpp:41
	extern const char * KAC_VECTOR4;

	// CgsStrStream.cpp:42
	extern const char * KAC_MATRIX33;

	// CgsStrStream.cpp:43
	extern const char * KAC_MATRIX44;

	// CgsStrStream.cpp:44
	extern const char * KAC_LF;

	// CgsStrStream.cpp:53
	extern const int32_t KI_FORMAT_BUFFER_SIZE = 256;

public:
	void StrStreamBase(const StrStreamBase &);

	// CgsStrStream.h:438
	void StrStreamBase();

	// CgsStrStream.h:519
	CgsDev::StrStreamBase & operator<<(const char *);

	// CgsStrStream.h:534
	CgsDev::StrStreamBase & operator<<(int32_t);

	// CgsStrStream.h:559
	CgsDev::StrStreamBase & operator<<(uint32_t);

	// CgsStrStream.h:584
	CgsDev::StrStreamBase & operator<<(float32_t);

	// CgsStrStream.h:617
	CgsDev::StrStreamBase & operator<<(char);

	// CgsStrStream.h:625
	CgsDev::StrStreamBase & operator<<(void *);

	// CgsStrStream.h:635
	CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

	// CgsStrStream.h:643
	CgsDev::StrStreamBase & operator<<(int64_t);

	// CgsStrStream.h:668
	CgsDev::StrStreamBase & operator<<(uint64_t);

	// CgsStrStream.h:693
	CgsDev::StrStreamBase & operator<<(bool);

	// CgsStrStream.h:708
	CgsDev::StrStreamBase & operator<<(Vector2);

	// CgsStrStream.h:718
	CgsDev::StrStreamBase & operator<<(Vector3);

	// CgsStrStream.h:728
	CgsDev::StrStreamBase & operator<<(Vector4);

	// CgsStrStream.h:739
	CgsDev::StrStreamBase & operator<<(Matrix33);

	// CgsStrStream.h:759
	CgsDev::StrStreamBase & operator<<(Matrix44Affine);

	// CgsStrStream.cpp:113
	virtual void Reset();

	// CgsStrStream.h:786
	const char * endl();

protected:
	// CgsStrStream.cpp:91
	void AppendFormat(const char *, ...);

	// CgsStrStream.h:145
	virtual void Append(const char *);

	// CgsStrStream.h:793
	void Append64IntDecimal(int64_t);

	// CgsStrStream.h:812
	void Append64IntDecimal(uint64_t);

	// CgsStrStream.h:831
	void Append64IntHex(int64_t);

	// CgsStrStream.h:844
	void Append64IntHex(uint64_t);

}

// CgsStrStream.h:339
void CgsDev::StrInStreamBase::StrInStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	struct DebugComponent;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	struct DebugGraph;

	struct DebugManager;

	struct PerfMonCpuInstance;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// CgsStrStream.h:312
	namespace Log {
	}

}

// CgsStrStream.h:39
namespace CgsDev {
	struct PerfMonCpuInstance;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

	struct CgsJuice;

	struct JuiceScriptInterface;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct VectorFont;

	struct DebugGraph;

	struct DebugManager;

	struct PerfMonCpuInstance;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// CgsStrStream.h:312
	namespace Log {
		struct LogJuice;

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	struct DebugComponentJuice;

	struct CustomJuiceAssertHandler;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugManager;

	struct DebugGraph;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

		// CgsStrStream.h:473
		char * GetBuffer();

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	struct DebugManager;

	struct DebugGraph;

	struct PerfMonCpuInstance;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// CgsStrStream.h:312
	namespace Log {
	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	// CgsStrStream.h:312
	namespace Log {
	}

	struct DebugGraph;

	struct DebugManager;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:617
		CgsDev::StrStreamBase & operator<<(char);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct DebugManager;

	struct DebugGraph;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:759
		CgsDev::StrStreamBase & operator<<(Matrix44Affine);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// CgsStrStream.h:312
	namespace Log {
	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct DebugGraph;

	struct DebugManager;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct PerfMonCpuHelper;

	struct VectorFont;

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	public:
		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:718
		CgsDev::StrStreamBase & operator<<(Vector3);

		// CgsStrStream.h:728
		CgsDev::StrStreamBase & operator<<(Vector4);

		// CgsStrStream.h:584
		CgsDev::StrStreamBase & operator<<(float32_t);

		// CgsStrStream.h:759
		CgsDev::StrStreamBase & operator<<(Matrix44Affine);

		// CgsStrStream.h:693
		CgsDev::StrStreamBase & operator<<(bool);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	// CgsStrStream.h:312
	namespace Log {
	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:43
	enum PrintMode {
		E_PRINTMODE_DECIMAL = 0,
		E_PRINTMODE_HEX = 1,
		E_PRINTMODE_HEXONCE = 2,
	}

	struct StackUnpickBase;

	struct StackUnpickPS3;

	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	// CgsStrStream.h:312
	namespace Log {
		struct LogFileBuffered;

	}

	struct DebugManager;

	struct VectorFont;

	struct DebugGraph;

	struct DebugManagerConstructParameters;

	struct DebugComponent;

	struct DebugComponentMessageFilter;

	struct DebugInterface;

	struct DebugRenderStreamReader;

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:534
		CgsDev::StrStreamBase & operator<<(int32_t);

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

		// CgsStrStream.h:635
		CgsDev::StrStreamBase & operator<<(CgsDev::PrintMode);

		// CgsStrStream.h:625
		CgsDev::StrStreamBase & operator<<(void *);

		// CgsStrStream.h:668
		CgsDev::StrStreamBase & operator<<(uint64_t);

	protected:
		// CgsStrStream.h:812
		void Append64IntDecimal(uint64_t);

		// CgsStrStream.h:844
		void Append64IntHex(uint64_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

	struct JuiceConstructParams;

	struct JuiceExtension;

	struct JuiceScripting;

}

// CgsStrStream.h:39
namespace CgsDev {
	struct PerfMonCpuMonitorData;

	struct PerfMonCpuInstance;

	struct PerfMonCpu;

	struct PerfMonCpuHelper;

	// CgsStrStream.h:312
	namespace Log {
	}

	// Declaration
	struct StrStreamBase {
	public:
		// CgsStrStream.h:519
		CgsDev::StrStreamBase & operator<<(const char *);

		// CgsStrStream.h:438
		StrStreamBase();

		// CgsStrStream.h:559
		CgsDev::StrStreamBase & operator<<(uint32_t);

	private:
		// CgsStrStream.h:163
		extern const char * KAC_INTEGER;

		// CgsStrStream.h:164
		extern const char * KAC_UNSIGNED;

		// CgsStrStream.h:165
		extern const char * KAC_HEX;

		// CgsStrStream.h:166
		extern const char * KAC_PADDED_HEX;

		// CgsStrStream.h:167
		extern const char * KAC_PADDED_HEX_NO_PREFIX;

		// CgsStrStream.h:168
		extern const char * KAC_FLOAT;

		// CgsStrStream.h:169
		extern const char * KAC_CHAR;

		// CgsStrStream.h:170
		extern const char * KAC_TRUE;

		// CgsStrStream.h:171
		extern const char * KAC_FALSE;

		// CgsStrStream.h:172
		extern const char * KAC_VECTOR2;

		// CgsStrStream.h:173
		extern const char * KAC_VECTOR3;

		// CgsStrStream.h:174
		extern const char * KAC_VECTOR4;

		// CgsStrStream.h:175
		extern const char * KAC_MATRIX33;

		// CgsStrStream.h:176
		extern const char * KAC_MATRIX44;

		// CgsStrStream.h:177
		extern const char * KAC_LF;

		// CgsStrStream.h:179
		extern const int32_t KI_FORMAT_BUFFER_SIZE;

	}

	// Declaration
	struct StrStream {
	public:
		// CgsStrStream.h:454
		StrStream(char *, int32_t);

	}

}

