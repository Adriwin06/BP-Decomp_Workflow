// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// debug.h:361
		namespace debug {
			// debugcriticalsection.h:26
			namespace detail {
				struct DebugCriticalSection;

				// debugcriticalsection.h:32
				const int HOST_CRITICAL_SECTION_SIZE = 32;

			}

		}

	}

}

// debugcriticalsection.h:39
struct rw::core::debug::detail::DebugCriticalSection {
private:
	// debugcriticalsection.h:59
	int32_t mValid;

	// debugcriticalsection.h:63
	char[32] mData;

public:
	// debugcriticalsection.h:41
	void DebugCriticalSection();

	// debugcriticalsection.h:42
	void ~DebugCriticalSection();

	// debugcriticalsection.h:49
	void Create();

	// debugcriticalsection.h:50
	void Destroy();

	// debugcriticalsection.h:54
	void Enter();

	// debugcriticalsection.h:55
	void Leave();

}

