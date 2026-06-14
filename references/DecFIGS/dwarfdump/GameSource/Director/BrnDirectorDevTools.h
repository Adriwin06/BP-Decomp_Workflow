// BrnDirectorDevTools.h:46
struct BrnDirector::DirectorDevTools {
private:
	// BrnDirectorDevTools.h:89
	BrnDirector::DirectorModule * mpDirectorModule;

	// BrnDirectorDevTools.h:90
	int32_t miEditTakeGUID;

	// BrnDirectorDevTools.h:93
	extern DirectorDevTools * mpInstance;

public:
	// BrnDirectorDevTools.h:51
	void Construct(BrnDirector::DirectorModule *);

	// BrnDirectorDevTools.h:54
	bool Prepare();

	// BrnDirectorDevTools.h:58
	void Destruct();

	// BrnDirectorDevTools.h:63
	void Update(const BrnDirector::DirectorIO::InputBuffer *, const Camera &);

}

