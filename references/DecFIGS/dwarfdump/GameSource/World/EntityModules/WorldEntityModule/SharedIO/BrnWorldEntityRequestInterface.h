// BrnWorldEntityRequestInterface.h:36
struct BrnWorld::WorldEntityIO::RequestInterface {
private:
	// BrnWorldEntityRequestInterface.h:62
	bool mbInvalidateCollisionWorld;

	// BrnWorldEntityRequestInterface.h:63
	bool mbValidateCollisionWorld;

public:
	// BrnWorldEntityRequestInterface.h:40
	void Construct();

	// BrnWorldEntityRequestInterface.h:43
	void Clear();

	// BrnWorldEntityRequestInterface.h:46
	void InvalidateCollisionWorld();

	// BrnWorldEntityRequestInterface.h:49
	void ValidateCollisionWorld();

	// BrnWorldEntityRequestInterface.h:52
	bool IsCollisionWorldInvalidateRequested() const;

	// BrnWorldEntityRequestInterface.h:55
	bool IsCollisionWorldValidateRequested() const;

	// BrnWorldEntityRequestInterface.h:58
	void Append(const RequestInterface *);

}

