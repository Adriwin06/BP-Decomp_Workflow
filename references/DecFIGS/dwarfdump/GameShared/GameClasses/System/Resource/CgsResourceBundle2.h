// CgsResourceBundle2.h:156
extern const uint32_t KU_SIZE_MASK = 268435455;

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct BundleV2 {
		// CgsResourceBundle2.h:63
		struct ResourceEntry {
			// CgsResourceBundle2.h:92
			ID mResourceId;

			// CgsResourceBundle2.h:93
			uint64_t muImportHash;

			// CgsResourceBundle2.h:94
			uint32_t[3] mauUncompressedSizeAndAlignment;

			// CgsResourceBundle2.h:95
			uint32_t[3] mauSizeAndAlignmentOnDisk;

			// CgsResourceBundle2.h:96
			uint32_t[3] mauDiskOffset;

			// CgsResourceBundle2.h:97
			uint32_t muImportOffset;

			// CgsResourceBundle2.h:98
			uint32_t muResourceTypeId;

			// CgsResourceBundle2.h:99
			uint16_t muImportCount;

			// CgsResourceBundle2.h:100
			uint8_t muFlags;

			// CgsResourceBundle2.h:101
			uint8_t muStreamIndex;

		public:
			// CgsResourceBundle2.h:66
			void EndianSwap();

			// CgsResourceBundle2.h:69
			void SetDiskSizeDescriptor(uint32_t, uint32_t, uint32_t);

			// CgsResourceBundle2.h:72
			void SetUncompressedSizeDescriptor(uint32_t, uint32_t, uint32_t);

			// CgsResourceBundle2.h:75
			uint32_t GetDiskSize(uint32_t) const;

			// CgsResourceBundle2.h:78
			uint32_t GetDiskAlignment(uint32_t) const;

			// CgsResourceBundle2.h:81
			uint32_t GetUncompressedSize(uint32_t) const;

			// CgsResourceBundle2.h:84
			uint32_t GetUncompresssedAlignment(uint32_t) const;

			// CgsResourceBundle2.h:87
			void GetDiskResourceDescriptor(Entry::ResourceDescriptor *) const;

			// CgsResourceBundle2.h:90
			void GetUncompresssedResourceDescriptor(Entry::ResourceDescriptor *) const;

		}

		// CgsResourceBundle2.h:106
		struct ImportEntry {
			// CgsResourceBundle2.h:111
			ID mResourceId;

			// CgsResourceBundle2.h:112
			uint32_t muOffset;

		public:
			// CgsResourceBundle2.h:109
			void EndianSwap();

		}

	}

}

// CgsResourceBundle2.h:41
struct CgsResource::BundleV2 {
	// CgsResourceBundle2.h:153
	extern const uint32_t KU_VERSION = 2;

	// CgsResourceBundle2.h:154
	extern const uint32_t KU_MAINMEM_OPTIMISATION_ALIGNMENT = 16;

	// CgsResourceBundle2.h:155
	extern const uint32_t KU_GRAPHICSMEM_OPTIMISATION_ALIGNMENT = 128;

	// CgsResourceBundle2.h:156
	extern const uint32_t KU_SIZE_MASK = 268435455;

	// CgsResourceBundle2.h:157
	extern const uint32_t KU_ALIGNMENT_MASK = 4026531840;

	// CgsResourceBundle2.h:159
	char[4] macMagicNumber;

	// CgsResourceBundle2.h:160
	uint32_t muVersion;

	// CgsResourceBundle2.h:161
	uint32_t muPlatform;

	// CgsResourceBundle2.h:162
	uint32_t muDebugDataOffset;

	// CgsResourceBundle2.h:163
	uint32_t muResourceEntriesCount;

	// CgsResourceBundle2.h:164
	uint32_t muResourceEntriesOffset;

	// CgsResourceBundle2.h:165
	uint32_t[3] mauResourceDataOffset;

	// CgsResourceBundle2.h:166
	uint32_t muFlags;

public:
	// CgsResourceBundle2.h:139
	bool IsFlagSet(uint32_t) const;

	// CgsResourceBundle2.h:142
	bool IsCompressed() const;

	// CgsResourceBundle2.h:145
	bool IsMainMemOptimised() const;

	// CgsResourceBundle2.h:148
	bool IsGraphicsMemOptimised() const;

	// CgsResourceBundle2.h:151
	bool ContainsDebugData() const;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct BundleV2 {
		// CgsResourceBundle2.h:63
		struct ResourceEntry {
			// CgsResourceBundle2.h:92
			ID mResourceId;

			// CgsResourceBundle2.h:93
			uint64_t muImportHash;

			// CgsResourceBundle2.h:94
			uint32_t[3] mauUncompressedSizeAndAlignment;

			// CgsResourceBundle2.h:95
			uint32_t[3] mauSizeAndAlignmentOnDisk;

			// CgsResourceBundle2.h:96
			uint32_t[3] mauDiskOffset;

			// CgsResourceBundle2.h:97
			uint32_t muImportOffset;

			// CgsResourceBundle2.h:98
			uint32_t muResourceTypeId;

			// CgsResourceBundle2.h:99
			uint16_t muImportCount;

			// CgsResourceBundle2.h:100
			uint8_t muFlags;

			// CgsResourceBundle2.h:101
			uint8_t muStreamIndex;

		public:
			// CgsResourceBundle2.h:66
			void EndianSwap();

			// CgsResourceBundle2.h:69
			void SetDiskSizeDescriptor(uint32_t, uint32_t, uint32_t);

			// CgsResourceBundle2.h:72
			void SetUncompressedSizeDescriptor(uint32_t, uint32_t, uint32_t);

			// CgsResourceBundle2.h:75
			uint32_t GetDiskSize(uint32_t) const;

			// CgsResourceBundle2.h:78
			uint32_t GetDiskAlignment(uint32_t) const;

			// CgsResourceBundle2.h:81
			uint32_t GetUncompressedSize(uint32_t) const;

			// CgsResourceBundle2.h:84
			uint32_t GetUncompresssedAlignment(uint32_t) const;

			// CgsResourceBundle2.h:87
			void GetDiskResourceDescriptor(Entry::ResourceDescriptor *) const;

			// CgsResourceBundle2.h:90
			void GetUncompresssedResourceDescriptor(Entry::ResourceDescriptor *) const;

		}

		// CgsResourceBundle2.h:106
		struct ImportEntry {
			// CgsResourceBundle2.h:111
			ID mResourceId;

			// CgsResourceBundle2.h:112
			uint32_t muOffset;

		public:
			// CgsResourceBundle2.h:109
			void EndianSwap();

		}

	}

}

// CgsResourceBundle2.h:153
extern const uint32_t KU_VERSION = 2;

