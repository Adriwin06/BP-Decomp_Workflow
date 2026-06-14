// CgsAxisAlignedBox4.h:45
struct CgsGeometric::AxisAlignedBox4 {
	// CgsAxisAlignedBox4.h:96
	extern const int32_t KI_4_AXIS_ALIGNED_BOXES_ALIGNMENT = 16;

private:
	// CgsAxisAlignedBox4.h:100
	Vector4 mAabbMinX;

	// CgsAxisAlignedBox4.h:101
	Vector4 mAabbMinY;

	// CgsAxisAlignedBox4.h:102
	Vector4 mAabbMinZ;

	// CgsAxisAlignedBox4.h:103
	Vector4 mAabbMaxX;

	// CgsAxisAlignedBox4.h:104
	Vector4 mAabbMaxY;

	// CgsAxisAlignedBox4.h:105
	Vector4 mAabbMaxZ;

	// CgsAxisAlignedBox4.h:106
	Mask4 mValidMasks;

public:
	// CgsAxisAlignedBox4.h:49
	void Construct();

	// CgsAxisAlignedBox4.h:62
	void FixUp();

	// CgsAxisAlignedBox4.h:68
	Vector4 GetMinX() const;

	// CgsAxisAlignedBox4.h:71
	Vector4 GetMinY() const;

	// CgsAxisAlignedBox4.h:74
	Vector4 GetMinZ() const;

	// CgsAxisAlignedBox4.h:77
	Vector4 GetMaxX() const;

	// CgsAxisAlignedBox4.h:80
	Vector4 GetMaxY() const;

	// CgsAxisAlignedBox4.h:83
	Vector4 GetMaxZ() const;

	// CgsAxisAlignedBox4.h:86
	Mask4 GetValidMasks() const;

	// CgsAxisAlignedBox4.h:93
	AxisAlignedBox GetAxisAlignedBox(int32_t) const;

}

// CgsAxisAlignedBox.h:24
namespace CgsGeometric {
	// CgsAxisAlignedBoxTests.cpp:75
	// Declaration
	extern const Mask4 TestAxisAlignedBoxAxisAlignedBox4(AxisAlignedBoxArg, AxisAlignedBox4Arg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAxisAlignedBox4.h:109
		typedef const AxisAlignedBox4 & AxisAlignedBox4Arg;

		// CgsAxisAlignedBoxTests.cpp:77
		using namespace rw::math::vpu;

	}

}

// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// CgsAxisAlignedBoxTests.cpp:75
	// Declaration
	extern const Mask4 TestAxisAlignedBoxAxisAlignedBox4(AxisAlignedBoxArg, AxisAlignedBox4Arg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAxisAlignedBox4.h:109
		typedef const AxisAlignedBox4 & AxisAlignedBox4Arg;

		// CgsAxisAlignedBoxTests.cpp:77
		using namespace rw::math::vpu;

	}

}

// CgsSphere.h:25
namespace CgsGeometric {
	// CgsAxisAlignedBoxTests.cpp:75
	// Declaration
	extern const Mask4 TestAxisAlignedBoxAxisAlignedBox4(AxisAlignedBoxArg, AxisAlignedBox4Arg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAxisAlignedBox4.h:109
		typedef const AxisAlignedBox4 & AxisAlignedBox4Arg;

		// CgsAxisAlignedBoxTests.cpp:77
		using namespace rw::math::vpu;

	}

}

