// contactmethods.h:900
void rw::physics::Contact::GenerateFromCollision(RigidBody *  ba, RigidBody *  bb, const const rw::math::vpu::Vector3 &  posa, const const rw::math::vpu::Vector3 &  posb, const const rw::math::vpu::Vector3 &  normal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// contactmethods.h:267
void rw::physics::Contact::GetStaticFriction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// contactmethods.h:292
void rw::physics::Contact::GetDynamicFriction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// contactmethods.h:317
void rw::physics::Contact::GetRestitution() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// contactmethods.h:143
void rw::physics::Contact::GetTag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// contactmethods.h:662
void rw::physics::Contact::GenerateFromCollision(RigidBody *  ba, RigidBody *  bb, const const rw::math::vpu::Vector3 &  posa, const const rw::math::vpu::Vector3 &  posb, const const rw::math::vpu::Vector3 &  normal, const float32_t  staticFriction, const float32_t  dynamicFriction, const float32_t  restitution, const uint32_t  tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// contactmethods.h:670
		vector_union * contact;

		// contactmethods.h:675
		float *[4] rbody_a;

		// contactmethods.h:676
		float *[4] rbody_b;

		// contactmethods.h:677
		float[4] dst_posa;

		// contactmethods.h:678
		float[4] dst_posb;

		// contactmethods.h:679
		float[4] dst_c_ri;

		// contactmethods.h:680
		float[4] rba_cpos;

		// contactmethods.h:681
		float[4] rbb_cpos;

		// contactmethods.h:682
		float[4] src_omga;

		// contactmethods.h:683
		float[4] src_omgb;

		// contactmethods.h:684
		float[4] vec_zero;

		// contactmethods.h:685
		float[4] bd_filtr;

		// contactmethods.h:686
		float[4] flag_rba;

		// contactmethods.h:694
		float[4] cposa_c1;

		// contactmethods.h:695
		float[4] cposb_c1;

		// contactmethods.h:696
		float[4] cnorm_c2;

		// contactmethods.h:697
		float[4] comga_c2;

		// contactmethods.h:698
		float[4] comgb_c2;

		// contactmethods.h:699
		float[4] dst_at_a;

		// contactmethods.h:700
		float[4] dst_at_b;

		// contactmethods.h:701
		float[4] ct_dsp_a;

		// contactmethods.h:702
		float[4] ct_dsp_b;

		// contactmethods.h:704
		float[4] cposa_c2;

		// contactmethods.h:705
		float[4] cposb_c2;

		// contactmethods.h:706
		float[4] cnorm_c1;

		// contactmethods.h:707
		float[4] comga_c1;

		// contactmethods.h:708
		float[4] comgb_c1;

		// contactmethods.h:713
		float[4] dst_at_3;

		// contactmethods.h:714
		float[4] ctx_dspl;

		// contactmethods.h:715
		float[4] splat_nx;

		// contactmethods.h:716
		float[4] dst_ri_x;

		// contactmethods.h:717
		float[4] dst_ri_z;

		// contactmethods.h:718
		float[4] nrm_at_3;

		// contactmethods.h:719
		float[4] splat_ny;

		// contactmethods.h:720
		float[4] splat_nz;

		// contactmethods.h:721
		float[4] dot_c_ri;

		// contactmethods.h:723
		float[4] tmp_at_1;

		// contactmethods.h:724
		float[4] dst_at_2;

		// contactmethods.h:725
		float[4] dst_at_1;

		// contactmethods.h:727
		float[4] nrm_at_1;

		// contactmethods.h:728
		float[4] nrm_at_2;

		// contactmethods.h:729
		float[4] flag_nrm;

		// contactmethods.h:730
		float[4] test_nrm;

		// contactmethods.h:731
		float[4] dst_c_at;

		// contactmethods.h:732
		float[4] nrm_c_at;

		// contactmethods.h:735
		float[4] estimate;

		// contactmethods.h:736
		float[4] cross_a1;

		// contactmethods.h:737
		float[4] cross_a2;

		// contactmethods.h:738
		float[4] dst_c_up;

		{
			// contactmethods.h:672
			uint64_t __dcbz128_offset;

			// contactmethods.h:672
			const void * __dcbz128_ptr;

		}
		{
			// contactmethods.h:673
			uint64_t __dcbz128_offset;

			// contactmethods.h:673
			const void * __dcbz128_ptr;

		}
	}
}

// contactmethods.h:564
void rw::physics::Contact::SetFriction(const float32_t  s, const float32_t  d) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// contactmethods.h:594
void rw::physics::Contact::SetRestitution(const float32_t  r) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// contactmethods.h:406
void rw::physics::Contact::SetTag(const uint32_t  tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

