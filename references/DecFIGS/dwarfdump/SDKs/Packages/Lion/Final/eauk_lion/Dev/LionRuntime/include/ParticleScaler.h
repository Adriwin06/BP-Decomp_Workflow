// ParticleScaler.h:26
struct cParticleScaler {
private:
	// ParticleScaler.h:39
	FP32 mScale;

public:
	// ParticleScaler.h:28
	void Init();

	// ParticleScaler.h:30
	void Update(FP32, const cTime &);

	// ParticleScaler.h:36
	FP32 GetScale() const;

}

