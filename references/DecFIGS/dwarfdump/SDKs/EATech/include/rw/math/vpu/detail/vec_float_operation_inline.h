// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisW>(VecFloatRef<VectorAxisW>, const float &);

			// vec_float_operation_inline.h:1812
			extern VecFloat operator/<VectorAxisW>(const float &, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:362
			extern bool operator><VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1720
			extern VecFloat operator/<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1720
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:530
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:530
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:954
			extern bool operator<=(VecFloat, const float &);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1033
			extern float & operator+=(float &, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1149
			extern VecFloat & operator*=(VecFloat &, const float &);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1516
			extern VecFloat operator-(const float &, VecFloat);

			// vec_float_operation_inline.h:38
			extern bool operator==(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:954
			extern bool operator<=(VecFloat, const float &);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:16
			extern bool operator==<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisW>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:151
			extern bool operator==(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:1040
			extern float & operator+=<VectorAxisY>(float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisW>(VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisZ, VectorAxisW>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisW, VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1056
			extern VecFloat & operator-=(VecFloat &, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:604
			extern bool operator<(const float &, VecFloat);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:932
			extern bool operator<=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:932
			extern bool operator<=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:932
			extern bool operator<=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:530
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1065
			extern VecFloat & operator-=<VectorAxisY>(VecFloat &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:467
			extern bool operator>(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:848
			extern bool operator<=<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1033
			extern float & operator+=(float &, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

			// vec_float_operation_inline.h:1056
			extern VecFloat & operator-=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:196
			extern bool operator!=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1040
			extern float & operator+=<VectorAxisX>(float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1040
			extern float & operator+=<VectorAxisY>(float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1040
			extern float & operator+=<VectorAxisZ>(float &, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:689
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisZ>(const float &, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisW>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, const float &);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisW, VectorAxisZ>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1376
			extern VecFloat operator+<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1376
			extern VecFloat operator+<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:552
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:394
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:552
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:394
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:214
			extern bool operator!=<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:625
			extern bool operator<(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:467
			extern bool operator>(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:1056
			extern VecFloat & operator-=(VecFloat &, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1494
			extern VecFloat operator-(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1263
			extern VecFloat operator+(VecFloat, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisW, VectorAxisY>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:711
			extern bool operator>=<VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:552
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:711
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:552
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:214
			extern bool operator!=<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1505
			extern VecFloat operator-(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:1337
			extern VecFloat operator+<VectorAxisX>(const rw::math::vpu::VecFloatRefIndex &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1359
			extern VecFloat operator+(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:1337
			extern VecFloat operator+<VectorAxisY>(const rw::math::vpu::VecFloatRefIndex &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1646
			extern VecFloat operator*(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:1327
			extern VecFloat operator+(const rw::math::vpu::VecFloatRefIndex &, VecFloat);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisW, VectorAxisY>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:424
			extern bool operator><VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:582
			extern bool operator< <VectorAxisZ>(const float &, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:424
			extern bool operator><VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:582
			extern bool operator< <VectorAxisW>(const float &, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:932
			extern bool operator<=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:932
			extern bool operator<=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1522
			extern VecFloat operator-<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1522
			extern VecFloat operator-<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1516
			extern VecFloat operator-(const float &, VecFloat);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisW>(const float &, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisW, VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:16
			extern bool operator==<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:16
			extern bool operator==<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisW, VectorAxisY>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:16
			extern bool operator==<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:214
			extern bool operator!=<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisW, VectorAxisY>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1494
			extern VecFloat operator-(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1327
			extern VecFloat operator+(const rw::math::vpu::VecFloatRefIndex &, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1450
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1450
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const rw::math::vpu::VecFloatRefIndex &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1797
			extern VecFloat operator/(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisW, VectorAxisY>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:214
			extern bool operator!=<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1494
			extern VecFloat operator-(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:552
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:394
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:394
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:552
			extern bool operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:711
			extern bool operator>=<VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:870
			extern bool operator<=<VectorAxisX>(VecFloatRef<VectorAxisX>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:870
			extern bool operator<=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:711
			extern bool operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1376
			extern VecFloat operator+<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1149
			extern VecFloat & operator*=(VecFloat &, const float &);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1159
			extern float & operator*=(float &, VecFloat);

			// vec_float_operation_inline.h:446
			extern bool operator>(const float &, VecFloat);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1516
			extern VecFloat operator-(const float &, VecFloat);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:530
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:530
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:530
			extern bool operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1554
			extern VecFloat operator*(VecFloat, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:604
			extern bool operator<(const float &, VecFloat);

			// vec_float_operation_inline.h:16
			extern bool operator==<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1056
			extern VecFloat & operator-=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:38
			extern bool operator==(VecFloat, VecFloat);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1033
			extern float & operator+=(float &, VecFloat);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1720
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1376
			extern VecFloat operator+<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1522
			extern VecFloat operator-<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1183
			extern VecFloat & operator/=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1085
			extern VecFloat & operator-=(VecFloat &, const float &);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1812
			extern VecFloat operator/<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1812
			extern VecFloat operator/<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:763
			extern bool operator>=(const float &, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:922
			extern bool operator<=(const float &, VecFloat);

			// vec_float_operation_inline.h:954
			extern bool operator<=(VecFloat, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:140
			extern bool operator==<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:140
			extern bool operator==<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1095
			extern float & operator-=(float &, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1812
			extern VecFloat operator/<VectorAxisZ>(const float &, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:362
			extern bool operator><VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:362
			extern bool operator><VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:362
			extern bool operator><VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:162
			extern bool operator==(VecFloat, const float &);

			// vec_float_operation_inline.h:1023
			extern VecFloat & operator+=(VecFloat &, const float &);

			// vec_float_operation_inline.h:46
			extern bool operator==<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1720
			extern VecFloat operator/<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1522
			extern VecFloat operator-<VectorAxisZ>(const float &, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1376
			extern VecFloat operator+<VectorAxisZ>(const float &, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:649
			extern bool operator>=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisW, VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:689
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:689
			extern bool operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisW, VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1522
			extern VecFloat operator-<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisW>(const float &, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1522
			extern VecFloat operator-<VectorAxisW>(const float &, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1183
			extern VecFloat & operator/=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:649
			extern bool operator>=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:649
			extern bool operator>=<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisY>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:741
			extern bool operator>=<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:582
			extern bool operator< <VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1522
			extern VecFloat operator-<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1159
			extern float & operator*=(float &, VecFloat);

			// vec_float_operation_inline.h:593
			extern bool operator<(const float &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1494
			extern VecFloat operator-(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1635
			extern VecFloat operator*(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1473
			extern VecFloat operator-(const rw::math::vpu::VecFloatRefIndex &, VecFloat);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:446
			extern bool operator>(const float &, VecFloat);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:424
			extern bool operator><VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:424
			extern bool operator><VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:343
			extern bool operator>(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:604
			extern bool operator<(const float &, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:520
			extern bool operator< <VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:679
			extern bool operator>=<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:563
			extern bool operator<(VecFloat, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:501
			extern bool operator<(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:679
			extern bool operator>=<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:679
			extern bool operator>=<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:954
			extern bool operator<=(VecFloat, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:446
			extern bool operator>(const float &, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:362
			extern bool operator><VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:362
			extern bool operator><VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1033
			extern float & operator+=(float &, VecFloat);

			// vec_float_operation_inline.h:582
			extern bool operator< <VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:741
			extern bool operator>=<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:362
			extern bool operator><VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:582
			extern bool operator< <VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:689
			extern bool operator>=<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:689
			extern bool operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:38
			extern bool operator==(VecFloat, VecFloat);

			// vec_float_operation_inline.h:162
			extern bool operator==(VecFloat, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1263
			extern VecFloat operator+(VecFloat, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:922
			extern bool operator<=(const float &, VecFloat);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1516
			extern VecFloat operator-(const float &, VecFloat);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:446
			extern bool operator>(const float &, VecFloat);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:38
			extern bool operator==(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:763
			extern bool operator>=(const float &, VecFloat);

			// vec_float_operation_inline.h:1033
			extern float & operator+=(float &, VecFloat);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1516
			extern VecFloat operator-(const float &, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1222
			extern float & operator/=(float &, VecFloat);

			// vec_float_operation_inline.h:604
			extern bool operator<(const float &, VecFloat);

			// vec_float_operation_inline.h:446
			extern bool operator>(const float &, VecFloat);

			// vec_float_operation_inline.h:922
			extern bool operator<=(const float &, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1159
			extern float & operator*=(float &, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1056
			extern VecFloat & operator-=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1554
			extern VecFloat operator*(VecFloat, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1646
			extern VecFloat operator*(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:456
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:151
			extern bool operator==(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisW>(VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:932
			extern bool operator<=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:773
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:932
			extern bool operator<=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisW>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisW>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisZ, VectorAxisW>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisZ, VectorAxisW>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1254
			extern VecFloat operator+<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisZ, VectorAxisW>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1812
			extern VecFloat operator/<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1812
			extern VecFloat operator/<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1817
			extern VecFloat operator/(const float &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:151
			extern bool operator==(const rw::math::vpu::VecFloatRefIndex &, const float &);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, const float &);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1149
			extern VecFloat & operator*=(VecFloat &, const float &);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:830
			extern bool operator<=(VecFloat, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:343
			extern bool operator>(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:501
			extern bool operator<(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:162
			extern bool operator==(VecFloat, const float &);

			// vec_float_operation_inline.h:1183
			extern VecFloat & operator/=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:954
			extern bool operator<=(VecFloat, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1033
			extern float & operator+=(float &, VecFloat);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisW>(VecFloatRef<VectorAxisW>, const float &);

			// vec_float_operation_inline.h:649
			extern bool operator>=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:649
			extern bool operator>=<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1316
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1428
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1033
			extern float & operator+=(float &, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:38
			extern bool operator==(VecFloat, VecFloat);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisZ>(const float &, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1554
			extern VecFloat operator*(VecFloat, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1812
			extern VecFloat operator/<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1812
			extern VecFloat operator/<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:214
			extern bool operator!=<VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1663
			extern VecFloat operator*<VectorAxisW>(const float &, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:1282
			extern VecFloat operator+<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1655
			extern VecFloat operator*(const float &, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:973
			extern VecFloat operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:636
			extern bool operator<(VecFloat, const float &);

			// vec_float_operation_inline.h:1348
			extern VecFloat operator+(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1494
			extern VecFloat operator-(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:954
			extern bool operator<=(VecFloat, const float &);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:649
			extern bool operator>=<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:649
			extern bool operator>=<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:808
			extern bool operator<=<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:649
			extern bool operator>=<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:965
			extern VecFloat operator-(VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:1370
			extern VecFloat operator+(const float &, VecFloat);

			// vec_float_operation_inline.h:1272
			extern VecFloat operator+(VecFloat, const float &);

			// vec_float_operation_inline.h:1516
			extern VecFloat operator-(const float &, VecFloat);

			// vec_float_operation_inline.h:1418
			extern VecFloat operator-(VecFloat, const float &);

			// vec_float_operation_inline.h:320
			extern bool operator!=(VecFloat, const float &);

			// vec_float_operation_inline.h:900
			extern bool operator<=<VectorAxisX>(const float &, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:900
			extern bool operator<=<VectorAxisY>(const float &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:900
			extern bool operator<=<VectorAxisZ>(const float &, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:922
			extern bool operator<=(const float &, VecFloat);

			// vec_float_operation_inline.h:478
			extern bool operator>(VecFloat, const float &);

			// vec_float_operation_inline.h:1563
			extern VecFloat operator*(VecFloat, const float &);

			// vec_float_operation_inline.h:446
			extern bool operator>(const float &, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:298
			extern bool operator!=<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:372
			extern bool operator><VectorAxisW>(VecFloatRef<VectorAxisW>, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1754
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1292
			extern VecFloat operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1806
			extern VecFloat operator/(const float &, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float_operation_inline.h:1686
			extern VecFloat operator/(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1694
			extern VecFloat operator/<VectorAxisZ>(VecFloat, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:689
			extern bool operator>=<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:795
			extern bool operator>=(VecFloat, const float &);

			// vec_float_operation_inline.h:1246
			extern VecFloat operator+(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1581
			extern VecFloat operator*<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX>, VecFloatRef<VectorAxisZ>);

			// vec_float_operation_inline.h:994
			extern VecFloat & operator+=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:671
			extern bool operator>=(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1392
			extern VecFloat operator-(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, VecFloat);

			// vec_float_operation_inline.h:1720
			extern VecFloat operator/<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloat);

			// vec_float_operation_inline.h:1537
			extern VecFloat operator*(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1056
			extern VecFloat & operator-=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1571
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, VecFloat);

			// vec_float_operation_inline.h:1065
			extern VecFloat & operator-=<VectorAxisY>(VecFloat &, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:679
			extern bool operator>=<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:354
			extern bool operator>(VecFloat, VecFloat);

			// vec_float_operation_inline.h:512
			extern bool operator<(VecFloat, VecFloat);

			// vec_float_operation_inline.h:1120
			extern VecFloat & operator*=(VecFloat &, VecFloat);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisX>(VecFloat, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1605
			extern VecFloat operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, const float &);

			// vec_float_operation_inline.h:490
			extern bool operator< <VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:1730
			extern VecFloat operator/<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisX>);

			// vec_float_operation_inline.h:332
			extern bool operator><VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1438
			extern VecFloat operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY>, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1400
			extern VecFloat operator-<VectorAxisY>(VecFloat, VecFloatRef<VectorAxisY>);

			// vec_float_operation_inline.h:1545
			extern VecFloat operator*<VectorAxisW>(VecFloat, VecFloatRef<VectorAxisW>);

			// vec_float_operation_inline.h:614
			extern bool operator< <VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1462
			extern VecFloat operator-<VectorAxisY>(VecFloatRef<VectorAxisY>, const float &);

			// vec_float_operation_inline.h:1712
			extern VecFloat operator/(VecFloat, const float &);

			// vec_float_operation_inline.h:1516
			extern VecFloat operator-(const float &, VecFloat);

		}

	}

}

