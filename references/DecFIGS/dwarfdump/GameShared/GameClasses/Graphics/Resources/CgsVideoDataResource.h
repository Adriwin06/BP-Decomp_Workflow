// CgsLuaState.h:37
namespace CgsResource {
	// Declaration
	struct VideoDataResource {
		// CgsVideoDataResource.h:48
		enum EVideoLanguage {
			E_VIDEOLANGUAGE_ENGLISH = 0,
			E_VIDEOLANGUAGE_FRENCH = 1,
			E_VIDEOLANGUAGE_ITALIAN = 2,
			E_VIDEOLANGUAGE_GERMAN = 3,
			E_VIDEOLANGUAGE_SPANISH = 4,
			E_VIDEOLANGUAGE_JAPANESE = 5,
			E_VIDEOLANGUAGE_COUNT = 6,
		}

		// CgsVideoDataResource.h:63
		struct VideoFile {
		private:
			// CgsVideoDataResource.h:100
			const char * mpcName;

			// CgsVideoDataResource.h:102
			bool[6] mabAvailableLanguages;

		public:
			// CgsVideoDataResource.h:85
			const char * GetName() const;

			// CgsVideoDataResource.h:89
			bool IsLocalisedSoundAvailable(CgsResource::VideoDataResource::EVideoLanguage) const;

			// CgsVideoDataResource.h:92
			uint32_t GetSoundStreamCount() const;

			// CgsVideoDataResource.h:95
			void FixUp();

		}

	}

}

// CgsVideoDataResource.h:44
struct CgsResource::VideoDataResource {
private:
	// CgsVideoDataResource.h:128
	CgsResource::VideoDataResource::VideoFile[6] maVideoFiles;

public:
	// CgsVideoDataResource.h:115
	void FixUp();

	// CgsVideoDataResource.h:118
	uint32_t GetSizeOfResource() const;

	// CgsVideoDataResource.h:122
	CgsResource::VideoDataResource::VideoFile * GetVideoFile(CgsResource::VideoDataResource::EVideoLanguage);

}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct VideoDataResource {
		// CgsVideoDataResource.h:48
		enum EVideoLanguage {
			E_VIDEOLANGUAGE_ENGLISH = 0,
			E_VIDEOLANGUAGE_FRENCH = 1,
			E_VIDEOLANGUAGE_ITALIAN = 2,
			E_VIDEOLANGUAGE_GERMAN = 3,
			E_VIDEOLANGUAGE_SPANISH = 4,
			E_VIDEOLANGUAGE_JAPANESE = 5,
			E_VIDEOLANGUAGE_COUNT = 6,
		}

		// CgsVideoDataResource.h:63
		struct VideoFile {
		private:
			// CgsVideoDataResource.h:100
			const char * mpcName;

			// CgsVideoDataResource.h:102
			bool[6] mabAvailableLanguages;

		public:
			// CgsVideoDataResource.h:85
			const char * GetName() const;

			// CgsVideoDataResource.h:89
			bool IsLocalisedSoundAvailable(CgsResource::VideoDataResource::EVideoLanguage) const;

			// CgsVideoDataResource.h:92
			uint32_t GetSoundStreamCount() const;

			// CgsVideoDataResource.h:95
			void FixUp();

		}

	}

}

// programbuffer.h:24
namespace CgsResource {
	// Declaration
	struct VideoDataResource {
		// CgsVideoDataResource.h:48
		enum EVideoLanguage {
			E_VIDEOLANGUAGE_ENGLISH = 0,
			E_VIDEOLANGUAGE_FRENCH = 1,
			E_VIDEOLANGUAGE_ITALIAN = 2,
			E_VIDEOLANGUAGE_GERMAN = 3,
			E_VIDEOLANGUAGE_SPANISH = 4,
			E_VIDEOLANGUAGE_JAPANESE = 5,
			E_VIDEOLANGUAGE_COUNT = 6,
		}

		// CgsVideoDataResource.h:63
		struct VideoFile {
		private:
			// CgsVideoDataResource.h:100
			const char * mpcName;

			// CgsVideoDataResource.h:102
			bool[6] mabAvailableLanguages;

		public:
			// CgsVideoDataResource.h:85
			const char * GetName() const;

			// CgsVideoDataResource.h:89
			bool IsLocalisedSoundAvailable(CgsResource::VideoDataResource::EVideoLanguage) const;

			// CgsVideoDataResource.h:92
			uint32_t GetSoundStreamCount() const;

			// CgsVideoDataResource.h:95
			void FixUp();

		}

	}

}

// CgsVideoDataResource.h:139
void CgsResource::VideoDataResourceType::VideoDataResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct VideoDataResource {
		// CgsVideoDataResource.h:48
		enum EVideoLanguage {
			E_VIDEOLANGUAGE_ENGLISH = 0,
			E_VIDEOLANGUAGE_FRENCH = 1,
			E_VIDEOLANGUAGE_ITALIAN = 2,
			E_VIDEOLANGUAGE_GERMAN = 3,
			E_VIDEOLANGUAGE_SPANISH = 4,
			E_VIDEOLANGUAGE_JAPANESE = 5,
			E_VIDEOLANGUAGE_COUNT = 6,
		}

		// CgsVideoDataResource.h:63
		struct VideoFile {
		private:
			// CgsVideoDataResource.h:100
			const char * mpcName;

			// CgsVideoDataResource.h:102
			bool[6] mabAvailableLanguages;

		public:
			// CgsVideoDataResource.h:85
			const char * GetName() const;

			// CgsVideoDataResource.h:89
			bool IsLocalisedSoundAvailable(CgsResource::VideoDataResource::EVideoLanguage) const;

			// CgsVideoDataResource.h:92
			uint32_t GetSoundStreamCount() const;

			// CgsVideoDataResource.h:95
			void FixUp();

		}

	}

}

// CgsVideoDataResource.h:139
struct CgsResource::VideoDataResourceType : public CgsResource::Type {
public:
	// CgsVideoDataResource.cpp:60
	virtual uint32_t GetTypeID() const;

	// CgsVideoDataResource.cpp:79
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsVideoDataResource.cpp:207
	virtual void FixUp(void *, const Resource &) const;

}

