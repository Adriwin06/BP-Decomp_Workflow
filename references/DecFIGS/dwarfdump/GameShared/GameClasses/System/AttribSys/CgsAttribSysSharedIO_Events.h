// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct RegisterVaultRequest;

		struct AttribSysRequestQueue<512>;

		struct AttribSysRequestInterface<512>;

	}

}

// CgsAttribSysSharedIO_Events.h:78
struct CgsAttribSys::AttribSysIO::RegisterVaultRequest : public Event {
private:
	// CgsAttribSysSharedIO_Events.h:106
	BaseEventReceiverQueue * mpUserReceiverQueue;

	// CgsAttribSysSharedIO_Events.h:107
	ResourceHandle mVaultResourceHandle;

	// CgsAttribSysSharedIO_Events.h:108
	int32_t miEventId;

	// CgsAttribSysSharedIO_Events.h:109
	CgsAttribSys::AttribSysIO::EAttribSysVaultType meVaultType;

public:
	// CgsAttribSysSharedIO_Events.h:87
	void Construct(BaseEventReceiverQueue *, ResourceHandle, int32_t, CgsAttribSys::AttribSysIO::EAttribSysVaultType);

	// CgsAttribSysSharedIO_Events.h:91
	BaseEventReceiverQueue * GetReceiverQueue();

	// CgsAttribSysSharedIO_Events.h:95
	ResourceHandle GetVaultResource() const;

	// CgsAttribSysSharedIO_Events.h:99
	int32_t GetEventId() const;

	// CgsAttribSysSharedIO_Events.h:103
	CgsAttribSys::AttribSysIO::EAttribSysVaultType GetVaultType() const;

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct RegisterVaultRequest;

		struct AttribSysRequestQueue<2048>;

		struct AttribSysRequestInterface<2048>;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct AttribSysRequestQueue<32768>;

		struct AttribSysRequestInterface<32768>;

		struct AttribSysRequestQueue<2048>;

		struct AttribSysRequestInterface<2048>;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct AttribSysRequestQueue<32768>;

		struct AttribSysRequestInterface<32768>;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct AttribSysRequestQueue<32768>;

		struct AttribSysRequestInterface<32768>;

		struct AttribSysRequestQueue<512>;

		struct AttribSysRequestInterface<512>;

		struct AttribSysRequestQueue<2048>;

		struct AttribSysRequestInterface<2048>;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct AttribSysRequestQueue<512>;

		struct AttribSysRequestInterface<512>;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct RegisterVaultRequest;

		struct VaultRegisteredResponse;

		struct RegisterSchemaRequest;

		struct UnregisterVaultRequest;

		struct VaultUnregisteredResponse;

		struct AttribSysRequestQueue<32768>;

		struct AttribSysRequestInterface<32768>;

		struct AttribSysRequestQueue<2048>;

		struct AttribSysRequestInterface<2048>;

		struct InputBuffer;

	}

}

// CgsAttribSysSharedIO_Events.h:123
struct CgsAttribSys::AttribSysIO::VaultRegisteredResponse : public Event {
private:
	// CgsAttribSysSharedIO_Events.h:136
	int32_t miEventId;

public:
	// CgsAttribSysSharedIO_Events.h:129
	void Construct(int32_t);

	// CgsAttribSysSharedIO_Events.h:133
	int32_t GetEventId() const;

}

// CgsAttribSysSharedIO_Events.h:150
struct CgsAttribSys::AttribSysIO::RegisterSchemaRequest : public Event {
private:
	// CgsAttribSysSharedIO_Events.h:179
	BaseEventReceiverQueue * mpUserReceiverQueue;

	// CgsAttribSysSharedIO_Events.h:180
	void * mpSchemaVltData;

	// CgsAttribSysSharedIO_Events.h:181
	int32_t miSchemaVltDataSize;

	// CgsAttribSysSharedIO_Events.h:182
	void * mpSchemaBinData;

	// CgsAttribSysSharedIO_Events.h:183
	int32_t miSchemaBinDataSize;

public:
	// CgsAttribSysSharedIO_Events.h:160
	void Construct(BaseEventReceiverQueue *, void *, int32_t, void *, int32_t);

	// CgsAttribSysSharedIO_Events.h:164
	BaseEventReceiverQueue * GetReceiverQueue();

	// CgsAttribSysSharedIO_Events.h:167
	void * GetSchemaVltData();

	// CgsAttribSysSharedIO_Events.h:170
	int32_t GetSchemaVltDataSize();

	// CgsAttribSysSharedIO_Events.h:173
	void * GetSchemaBinData();

	// CgsAttribSysSharedIO_Events.h:176
	int32_t GetSchemaBinDataSize();

}

// CgsAttribSysSharedIO_Events.h:218
struct CgsAttribSys::AttribSysIO::UnregisterVaultRequest : public Event {
private:
	// CgsAttribSysSharedIO_Events.h:242
	BaseEventReceiverQueue * mpUserReceiverQueue;

	// CgsAttribSysSharedIO_Events.h:243
	ResourceHandle mVaultResourceHandle;

	// CgsAttribSysSharedIO_Events.h:244
	int32_t miEventId;

public:
	// CgsAttribSysSharedIO_Events.h:226
	void Construct(BaseEventReceiverQueue *, ResourceHandle, int32_t);

	// CgsAttribSysSharedIO_Events.h:230
	BaseEventReceiverQueue * GetReceiverQueue();

	// CgsAttribSysSharedIO_Events.h:234
	int32_t GetEventId() const;

	// CgsAttribSysSharedIO_Events.h:238
	ResourceHandle GetVaultResource() const;

}

// CgsAttribSysSharedIO_Events.h:258
struct CgsAttribSys::AttribSysIO::VaultUnregisteredResponse : public Event {
private:
	// CgsAttribSysSharedIO_Events.h:271
	int32_t miEventId;

public:
	// CgsAttribSysSharedIO_Events.h:264
	void Construct(int32_t);

	// CgsAttribSysSharedIO_Events.h:268
	int32_t GetEventId() const;

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct RegisterVaultRequest;

		struct VaultRegisteredResponse;

		struct UnregisterVaultRequest;

		struct VaultUnregisteredResponse;

		struct AttribSysRequestQueue<32768>;

		struct AttribSysRequestInterface<32768>;

		struct AttribSysRequestQueue<2048>;

		struct AttribSysRequestInterface<2048>;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct AttribSysRequestQueue<2048>;

		struct AttribSysRequestInterface<2048>;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct RegisterVaultRequest;

		struct AttribSysRequestQueue<32768>;

		struct AttribSysRequestInterface<32768>;

		struct AttribSysRequestQueue<2048>;

		struct AttribSysRequestInterface<2048>;

	}

}

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysSharedIO_Events.h:62
		enum EAttribSysVaultType {
			E_VAULT_TYPE_RESIDENT = 0,
			E_VAULT_TYPE_STREAMED = 1,
		}

		struct RegisterVaultRequest;

		struct VaultRegisteredResponse;

		struct RegisterSchemaRequest;

		struct SchemaRegisteredResponse;

		struct UnregisterVaultRequest;

		struct VaultUnregisteredResponse;

		struct AttribSysRequestQueue<2048>;

		struct AttribSysRequestInterface<2048>;

		struct InputBuffer;

	}

}

// CgsAttribSysSharedIO_Events.h:197
struct CgsAttribSys::AttribSysIO::SchemaRegisteredResponse : public Event {
public:
	// CgsAttribSysSharedIO_Events.h:202
	void Construct();

}

