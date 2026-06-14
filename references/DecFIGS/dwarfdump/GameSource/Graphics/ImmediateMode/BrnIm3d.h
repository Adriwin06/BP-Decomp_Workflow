// BrnIm3d.h:50
struct BrnGraphics::Im3dSkyDome : public CgsGraphics::Im3dBase<BrnGraphics::Im3dSkyDomeVertex> {
private:
	// BrnIm3d.h:101
	ProgramVariableHandle[16] maStateHandles;

	// BrnIm3d.h:103
	const SamplerState * mpCloudsSamplerState;

public:
	void Im3dSkyDome(const Im3dSkyDome &);

	void Im3dSkyDome();

	// BrnIm3d.h:56
	void Construct(rw::IResourceAllocator *);

	// BrnIm3d.h:75
	void SetConstants(Vector3Plus, Vector3, Vector4, Vector4, Vector4, Vector3, const Texture *, const Texture *, Vector4, Vector4, Vector4, Vector4, Vector4, Vector4, Vector4, Vector4);

}

// BrnIm3d.h:50
void BrnGraphics::Im3dSkyDome::Im3dSkyDome() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

