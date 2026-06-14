// icoreallocator_interface.h:31
namespace EA {
	// config.h:14
	namespace Jobs {
		// Declaration
		struct Event {
			// event.h:28
			enum When {
				EVENT_WHEN_JOB_BEGIN = 0,
				EVENT_WHEN_JOB_END = 1,
				EVENT_WHEN_NUM = 2,
			}

			// event.h:35
			enum Type {
				EVENT_TYPE_NONE = 0,
				EVENT_TYPE_WRITE = 1,
				EVENT_TYPE_CALLBACK = 2,
				EVENT_TYPE_WRITE_PTR = 3,
			}

		}

	}

}

// event.h:23
struct EA::Jobs::Event {
private:
	// event.h:57
	EA::Jobs::Event::Type mType;

	// event.h:60
	union {
		// event.h:62
		struct {
			// event.h:63
			uint32_t mWriteValue;

			// event.h:64
			uint32_t * mWriteLocation;

		}

		// event.h:62
		struct {
			// event.h:63
			uint32_t mWriteValue;

			// event.h:64
			uint32_t * mWriteLocation;

		}


		// event.h:68
		struct {
			// event.h:69
			void * mWritePtrValue;

			// event.h:70
			void ** mWritePtrLocation;

		}

		// event.h:68
		struct {
			// event.h:69
			void * mWritePtrValue;

			// event.h:70
			void ** mWritePtrLocation;

		}


		// event.h:74
		struct {
			// event.h:75
			void (*)(void *) mCallback;

			// event.h:76
			void * mContext;

		}

		// event.h:74
		struct {
			// event.h:75
			void (*)(void *) mCallback;

			// event.h:76
			void * mContext;

		}


	}

	// event.h:81
	uint32_t * mDecrementerLocation;

public:
	// event.h:47
	void Event();

	// event.h:48
	void Event(EA::Jobs::Event::Type, uint32_t, uint32_t *, uint32_t *);

	// event.h:49
	void Event(EA::Jobs::Event::Type, void (void *) &, void *, uint32_t *);

	// event.h:50
	void Event(EA::Jobs::Event::Type, void *, void **, uint32_t *);

	// event.h:52
	void Run() const;

}

