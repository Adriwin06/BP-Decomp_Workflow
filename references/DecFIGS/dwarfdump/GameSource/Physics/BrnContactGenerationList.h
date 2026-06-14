// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// Declaration
	struct ContactGenList {
		// BrnContactGenerationList.h:41
		struct ContactGenEntry {
			// BrnContactGenerationList.h:43
			VolumeInstanceId mIdA;

			// BrnContactGenerationList.h:44
			VolumeInstanceId mIdB;

			// BrnContactGenerationList.h:45
			uint8_t mIdAVolInstOffset;

			// BrnContactGenerationList.h:46
			uint8_t mIdBVolInstOffset;

		}

	}

}

// BrnContactGenerationList.h:37
struct BrnPhysics::ContactGenList : public IOBuffer {
private:
	// BrnContactGenerationList.h:94
	extern const int32_t miMaxEntries = 128;

	// BrnContactGenerationList.h:95
	BrnPhysics::ContactGenList::ContactGenEntry[128] maEntries;

	// BrnContactGenerationList.h:96
	int32_t miNumEntries;

public:
	// BrnContactGenerationList.h:50
	void Construct();

	// BrnContactGenerationList.h:58
	void AddEntry(VolumeInstanceId, VolumeInstanceId, uint8_t, uint8_t);

	// BrnContactGenerationList.h:73
	void AddEntry(EntityId, EntityId, uint8_t, uint8_t);

	// BrnContactGenerationList.h:84
	int32_t GetNumEntries();

	// BrnContactGenerationList.h:88
	const BrnPhysics::ContactGenList::ContactGenEntry & GetEntry(int32_t);

}

// BrnContactGenerationList.h:94
extern const int32_t miMaxEntries = 128;

