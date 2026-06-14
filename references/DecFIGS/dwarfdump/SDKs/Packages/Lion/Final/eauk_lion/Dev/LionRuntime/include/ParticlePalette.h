// ParticlePalette.h:24
struct cParticlePalette {
	// ParticlePalette.h:36
	U32 mColourCount;

	// ParticlePalette.h:37
	cColour8 * mpColours;

public:
	// ParticlePalette.h:26
	void Init();

	// ParticlePalette.h:27
	void DeInit();

	// ParticlePalette.h:29
	cColour8 GetColour(FP32) const;

	// ParticlePalette.h:34
	void Build(const cParticleBehaviour *);

}

