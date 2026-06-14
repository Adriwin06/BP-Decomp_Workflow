// LionPerfMon.h:32
struct LionPerfMon {
	// LionPerfMon.h:38
	int miLionRender;

	// LionPerfMon.h:39
	int miParticleEmitterBlend;

	// LionPerfMon.h:40
	int miParticleEmitterUpdate;

	// LionPerfMon.h:41
	int miParticleEmitterGenerate;

	// LionPerfMon.h:42
	int miParticleEmitterParticleBuild;

	// LionPerfMon.h:43
	int miSimulateMatrixParticles;

	// LionPerfMon.h:44
	int miSimulateVectorParticles;

	// LionPerfMon.h:45
	int miSimulateLocalParticles;

	// LionPerfMon.h:46
	int miEmitterRender;

	// LionPerfMon.h:47
	int miEmitterCubeRender;

	// LionPerfMon.h:49
	int miBaseColourVarianceBehaviour;

	// LionPerfMon.h:50
	int miColourStepsBehaviour;

	// LionPerfMon.h:51
	int miWaveRgbBehaviour;

	// LionPerfMon.h:52
	int miWaveBehaviour;

	// LionPerfMon.h:53
	int miAlphaFadeBehaviour;

	// LionPerfMon.h:54
	int miRotationBehaviour;

	// LionPerfMon.h:55
	int miSizeBehaviour;

	// LionPerfMon.h:56
	int miDragBehaviour;

	// LionPerfMon.h:57
	int miMultiFrameBehaviour;

	// LionPerfMon.h:58
	int miParticleBehaviourRADIAL;

	// LionPerfMon.h:59
	int miParticleBehaviourOFFSETROT;

	// LionPerfMon.h:61
	int miRandomSeedBuild;

	// LionPerfMon.h:62
	int miRandomSeedUpdate;

public:
	// LionPerfMon.h:36
	void Construct();

}

// _built-in_
namespace :: {
	// LionPerfMon.h:65
	extern LionPerfMon gLionPerfMon;

}

// LionPerfMon.h:65
extern LionPerfMon gLionPerfMon;

