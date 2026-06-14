// CgsLogOutput.h:45
struct CgsDev::Log::LogOutput : public CgsDev::StrStreamBase {
public:
	void LogOutput(const LogOutput &);

	void LogOutput();

protected:
	// CgsLogOutput.h:69
	virtual void Append(const char *);

}

// CgsLogOutput.h:45
void CgsDev::Log::LogOutput::LogOutput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

