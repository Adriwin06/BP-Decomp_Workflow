// texture2d.h:45
struct renderengine::Texture2D : public Texture {
public:
	// texture2d.h:48
	ResourceDescriptor GetResourceDescriptor(const renderengine::Texture::Parameters &);

	// texture2d.h:49
	Texture2D * Initialize(const Resource &, const renderengine::Texture::Parameters &);

	// texture2d.h:50
	void Destruct(Texture2D *);

	// texture2d.h:51
	void GetParameters(renderengine::Texture::Parameters &) const;

	// texture2d.h:55
	bool Lock(uint32_t, uint32_t, renderengine::Texture::Locked &);

protected:
	// texture2d.h:59
	void Texture2D();

	// texture2d.h:60
	void Texture2D(const Texture2D &);

	// texture2d.h:61
	void ~Texture2D();

}

