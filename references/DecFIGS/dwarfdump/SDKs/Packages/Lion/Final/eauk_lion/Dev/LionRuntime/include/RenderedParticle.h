// RenderedParticle.h:16
struct RenderedParticle {
	// RenderedParticle.h:50
	Vector3Plus mPos;

	// RenderedParticle.h:51
	Vector3Plus mPos1;

	// RenderedParticle.h:52
	Vector3Plus mLocatorVel;

	// RenderedParticle.h:53
	Vector3Plus mvRotPlusFrame;

	// RenderedParticle.h:54
	Vector3Plus mvSizePlusNextFrame;

	// RenderedParticle.h:56
	Vector3Plus mvColour;

	// RenderedParticle.h:58
	Vector2 mvTimeScaleAndLifeScale;

public:
	// RenderedParticle.h:17
	void Scale(const RenderedParticle &, FP32);

	// RenderedParticle.h:33
	void Shrink(const RenderedParticle &, FP32);

}

