// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// Declaration
		struct TrailSegmentCollection {
			// BrnTrailDataStructures.h:93
			struct TrailSegment {
				// BrnTrailDataStructures.h:95
				Vector3Plus mPosition;

				// BrnTrailDataStructures.h:96
				Vector3Plus mTangent;

			}

		}

		// BrnTrailDataStructures.h:33
		const int32_t knMaxTrailSize = 16;

	}

}

// BrnTrailDataStructures.h:40
struct BrnParticle::Native::TrailSegmentCollection {
private:
	// BrnTrailDataStructures.h:99
	BrnParticle::Native::TrailSegmentCollection::TrailSegment[16] maSegments;

public:
	// BrnTrailDataStructures.h:46
	void WriteSegmentPosition(Vector3, int32_t);

	// BrnTrailDataStructures.h:50
	Vector3 ReadSegmentPosition(int32_t) const;

	// BrnTrailDataStructures.h:55
	void WriteSegmentTangent(Vector3, int32_t);

	// BrnTrailDataStructures.h:59
	Vector3 ReadSegmentTangent(int32_t) const;

	// BrnTrailDataStructures.h:64
	void WriteSegmentTime(VecFloat, int32_t);

	// BrnTrailDataStructures.h:68
	VecFloat ReadSegmentTime(int32_t) const;

	// BrnTrailDataStructures.h:73
	void WriteSegmentStrength(VecFloat, int32_t);

	// BrnTrailDataStructures.h:77
	VecFloat ReadSegmentStrength(int32_t) const;

	// BrnTrailDataStructures.h:83
	void CopySegmentFromCollection(int32_t, const TrailSegmentCollection *, int32_t);

	// BrnTrailDataStructures.h:88
	void CopyTangentToSegmentFromSegment(int32_t, int32_t);

}

// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnTrailDataStructures.h:33
		const int32_t knMaxTrailSize = 16;

	}

}

