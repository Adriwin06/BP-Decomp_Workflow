// CgsMaterialAnimation.h:139
struct MaterialAnimationFactory {
private:
	// CgsMaterialAnimation.h:153
	SmoothLoopAnimation mSmoothLoopShader;

	// CgsMaterialAnimation.h:154
	SteppedLoopAnimation mSteppedLoopShader;

	// CgsMaterialAnimation.h:155
	SteppedGridLoopAnimation mSteppedGridLoopShader;

public:
	// CgsMaterialAnimation.h:142
	MaterialAnimationFactory & Instance();

	// CgsMaterialAnimation.h:149
	ICPUShader * Create(float32_t, float32_t, float32_t);

private:
	// CgsMaterialAnimation.h:157
	MaterialAnimationFactory();

}

// CgsMaterialAnimation.h:56
struct SmoothLoopAnimation : public UVOffsetAnimationShader {
public:
	SmoothLoopAnimation();

	SmoothLoopAnimation(const SmoothLoopAnimation &);

protected:
	// CgsMaterialAnimation.h:59
	virtual void OnCalculateOffset(const CgsGraphics::MaterialAssembly *, float32_t, Vector4 &) const;

}

// CgsMaterialAnimation.h:76
struct SteppedLoopAnimation : public UVOffsetAnimationShader {
public:
	SteppedLoopAnimation();

	SteppedLoopAnimation(const SteppedLoopAnimation &);

protected:
	// CgsMaterialAnimation.h:79
	virtual void OnCalculateOffset(const CgsGraphics::MaterialAssembly *, float32_t, Vector4 &) const;

}

// CgsMaterialAnimation.h:103
struct SteppedGridLoopAnimation : public UVOffsetAnimationShader {
public:
	SteppedGridLoopAnimation();

	SteppedGridLoopAnimation(const SteppedGridLoopAnimation &);

protected:
	// CgsMaterialAnimation.h:106
	virtual void OnCalculateOffset(const CgsGraphics::MaterialAssembly *, float32_t, Vector4 &) const;

private:
	// CgsMaterialAnimation.h:127
	float32_t StepFunction(float32_t, float32_t, float32_t) const;

}

// CgsMaterialAnimation.h:25
struct UVOffsetAnimationShader : public ICPUShader {
public:
	UVOffsetAnimationShader();

	UVOffsetAnimationShader(const UVOffsetAnimationShader &);

	// CgsMaterialAnimation.h:28
	virtual uint32_t GetNumConstantInstances() const;

	// CgsMaterialAnimation.h:33
	virtual void Execute(float32_t, const CgsGraphics::MaterialAssembly *, MaterialTechnique *) const;

protected:
	// CgsMaterialAnimation.h:44
	virtual void OnAttach(const CgsGraphics::MaterialAssembly *);

	// CgsMaterialAnimation.h:47
	virtual void OnCalculateOffset(const CgsGraphics::MaterialAssembly *, float32_t, Vector4 &) const;

}

// CgsMaterialAnimation.h:56
void SmoothLoopAnimation::SmoothLoopAnimation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialAnimation.h:25
void UVOffsetAnimationShader::UVOffsetAnimationShader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialAnimation.h:76
void SteppedLoopAnimation::SteppedLoopAnimation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialAnimation.h:103
void SteppedGridLoopAnimation::SteppedGridLoopAnimation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// _built-in_
namespace :: {
	// CgsMaterialAnimation.h:14
	const uint32_t MATERIAL_VERTEX_SHADER_CONSTANT_NAME_HASH;

	// CgsMaterialAnimation.h:16
	const char * MATERIAL_ANIMATION_LENGTH;

	// CgsMaterialAnimation.h:17
	const char * MATERIAL_ANIMATION_STEPS_U;

	// CgsMaterialAnimation.h:18
	const char * MATERIAL_ANIMATION_STEPS_V;

}

