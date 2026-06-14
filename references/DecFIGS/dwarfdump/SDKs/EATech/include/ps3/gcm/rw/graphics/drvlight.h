// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// Declaration
		struct Light {
			// drvlight.h:58
			enum Type {
				TYPE_NA = -1,
				TYPE_DIRECTIONAL = 0,
				TYPE_POINT = 1,
				TYPE_SPOT = 2,
				TYPE_AREA = 3,
				TYPE_HEMISPHERICAL = 4,
				TYPE_NUMTYPES = 5,
				TYPE_FORCEENUMSIZEINT = 2147483647,
			}

		}

	}

}

// drvlight.h:55
struct rw::graphics::Light {
private:
	// drvlight.h:83
	Vector3 m_position;

	// drvlight.h:84
	Vector3 m_direction;

	// drvlight.h:85
	RwRGBReal m_color;

	// drvlight.h:86
	rw::graphics::Light::Type m_type;

	// drvlight.h:87
	float32_t m_radius;

	// drvlight.h:88
	float32_t m_innerAngle;

	// drvlight.h:89
	float32_t m_outerAngle;

public:
	// drvlight.h:73
	ResourceDescriptor GetResourceDescriptor(rw::graphics::Light::Type);

	// drvlight.h:73
	uint32_t GetAlignment(rw::graphics::Light::Type);

	// drvlight.h:73
	uint32_t GetSize(rw::graphics::Light::Type);

	// drvlight.h:73
	Light * Initialize(void *, uint32_t, rw::graphics::Light::Type);

	// drvlight.h:73
	Light * Initialize(const Resource &, rw::graphics::Light::Type);

	// drvlight.h:73
	void Release();

	// drvlight.h:73
	void SetPosition(Vector3);

	// drvlight.h:73
	void SetDirection(Vector3);

	// drvlight.h:73
	void SetColor(const RwRGBReal &);

	// drvlight.h:73
	void SetRadius(float32_t);

	// drvlight.h:73
	void SetInnerConeAngle(float32_t);

	// drvlight.h:73
	void SetOuterConeAngle(float32_t);

	// drvlight.h:73
	rw::graphics::Light::Type GetType() const;

	// drvlight.h:73
	Vector3 GetPosition() const;

	// drvlight.h:73
	Vector3 GetDirection() const;

	// drvlight.h:73
	const RwRGBReal & GetColor() const;

	// drvlight.h:73
	float32_t GetRadius() const;

	// drvlight.h:73
	float32_t GetInnerConeAngle() const;

	// drvlight.h:73
	float32_t GetOuterConeAngle() const;

	// drvlight.h:73
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// drvlight.h:73
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// drvlight.h:73
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// drvlight.h:73
	void RegisterArenaReadCallbacks();

	// drvlight.h:73
	void RegisterArenaWriteCallbacks();

private:
	// drvlight.h:79
	void Light();

	// drvlight.h:80
	void Light(const Light &);

	// drvlight.h:81
	void ~Light();

}

