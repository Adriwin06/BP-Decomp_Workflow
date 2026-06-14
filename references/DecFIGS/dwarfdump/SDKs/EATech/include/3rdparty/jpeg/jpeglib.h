// jpeglib.h:75
typedef JSAMPLE * JSAMPROW;

// jpeglib.h:76
typedef JSAMPROW * JSAMPARRAY;

// jpeglib.h:79
typedef JCOEF[64] JBLOCK;

// jpeglib.h:80
typedef JBLOCK * JBLOCKROW;

// jpeglib.h:81
typedef JBLOCKROW * JBLOCKARRAY;

// jpeglib.h:92
struct JQUANT_TBL {
	// jpeglib.h:97
	UINT16[64] quantval;

	// jpeglib.h:103
	boolean sent_table;

}

// jpeglib.h:109
struct JHUFF_TBL {
	// jpeglib.h:111
	UINT8[17] bits;

	// jpeglib.h:113
	UINT8[256] huffval;

	// jpeglib.h:119
	boolean sent_table;

}

// jpeglib.h:125
struct jpeg_component_info {
	// jpeglib.h:129
	int component_id;

	// jpeglib.h:130
	int component_index;

	// jpeglib.h:131
	int h_samp_factor;

	// jpeglib.h:132
	int v_samp_factor;

	// jpeglib.h:133
	int quant_tbl_no;

	// jpeglib.h:138
	int dc_tbl_no;

	// jpeglib.h:139
	int ac_tbl_no;

	// jpeglib.h:148
	JDIMENSION width_in_blocks;

	// jpeglib.h:149
	JDIMENSION height_in_blocks;

	// jpeglib.h:156
	int DCT_scaled_size;

	// jpeglib.h:163
	JDIMENSION downsampled_width;

	// jpeglib.h:164
	JDIMENSION downsampled_height;

	// jpeglib.h:169
	boolean component_needed;

	// jpeglib.h:173
	int MCU_width;

	// jpeglib.h:174
	int MCU_height;

	// jpeglib.h:175
	int MCU_blocks;

	// jpeglib.h:176
	int MCU_sample_width;

	// jpeglib.h:177
	int last_col_width;

	// jpeglib.h:178
	int last_row_height;

	// jpeglib.h:184
	JQUANT_TBL * quant_table;

	// jpeglib.h:187
	void * dct_table;

}

// jpeglib.h:193
struct jpeg_scan_info {
	// jpeglib.h:194
	int comps_in_scan;

	// jpeglib.h:195
	int[4] component_index;

	// jpeglib.h:196
	int Ss;

	// jpeglib.h:196
	int Se;

	// jpeglib.h:197
	int Ah;

	// jpeglib.h:197
	int Al;

}

// jpeglib.h:203
enum J_COLOR_SPACE {
	JCS_UNKNOWN = 0,
	JCS_GRAYSCALE = 1,
	JCS_RGB = 2,
	JCS_YCbCr = 3,
	JCS_CMYK = 4,
	JCS_YCCK = 5,
	JCS_YV12 = 6,
}

// jpeglib.h:217
enum J_DCT_METHOD {
	JDCT_ISLOW = 0,
	JDCT_IFAST = 1,
	JDCT_FLOAT = 2,
}

// jpeglib.h:252
struct jpeg_common_struct {
	// jpeglib.h:253
	jpeg_error_mgr * err;

	// jpeglib.h:253
	jpeg_memory_mgr * mem;

	// jpeglib.h:253
	jpeg_progress_mgr * progress;

	// jpeglib.h:253
	boolean is_decompressor;

	// jpeglib.h:253
	int global_state;

}

// jpeglib.h:656
struct jpeg_error_mgr {
	// jpeglib.h:658
	void (*)(j_common_ptr) error_exit;

	// jpeglib.h:660
	void (*)(j_common_ptr, int) emit_message;

	// jpeglib.h:662
	void (*)(j_common_ptr) output_message;

	// jpeglib.h:664
	void (*)(j_common_ptr, char *) format_message;

	// jpeglib.h:667
	void (*)(j_common_ptr) reset_error_mgr;

	// jpeglib.h:672
	int msg_code;

	// jpeglib.h:677
	// jpeglib.h:674
	union {
		// jpeglib.h:675
		int[8] i;

		// jpeglib.h:676
		char[80] s;

	}
 msg_parm;

	// jpeglib.h:681
	int trace_level;

	// jpeglib.h:689
	long int num_warnings;

	// jpeglib.h:701
	const char *const* jpeg_message_table;

	// jpeglib.h:702
	int last_jpeg_message;

	// jpeglib.h:706
	const char *const* addon_message_table;

	// jpeglib.h:707
	int first_addon_message;

	// jpeglib.h:708
	int last_addon_message;

}

// jpeglib.h:769
struct jpeg_memory_mgr {
	// jpeglib.h:771
	void *(*)(j_common_ptr, int, size_t) alloc_small;

	// jpeglib.h:773
	void *(*)(j_common_ptr, int, size_t) alloc_large;

	// jpeglib.h:775
	JSAMPARRAY (*)(j_common_ptr, int, JDIMENSION, JDIMENSION) alloc_sarray;

	// jpeglib.h:778
	JBLOCKARRAY (*)(j_common_ptr, int, JDIMENSION, JDIMENSION) alloc_barray;

	// jpeglib.h:781
	jvirt_sarray_ptr (*)(j_common_ptr, int, boolean, JDIMENSION, JDIMENSION, JDIMENSION) request_virt_sarray;

	// jpeglib.h:787
	jvirt_barray_ptr (*)(j_common_ptr, int, boolean, JDIMENSION, JDIMENSION, JDIMENSION) request_virt_barray;

	// jpeglib.h:793
	void (*)(j_common_ptr) realize_virt_arrays;

	// jpeglib.h:794
	JSAMPARRAY (*)(j_common_ptr, jvirt_sarray_ptr, JDIMENSION, JDIMENSION, boolean) access_virt_sarray;

	// jpeglib.h:799
	JBLOCKARRAY (*)(j_common_ptr, jvirt_barray_ptr, JDIMENSION, JDIMENSION, boolean) access_virt_barray;

	// jpeglib.h:804
	void (*)(j_common_ptr, int) free_pool;

	// jpeglib.h:805
	void (*)(j_common_ptr) self_destruct;

	// jpeglib.h:812
	long int max_memory_to_use;

}

// jpeglib.h:714
struct jpeg_progress_mgr {
	// jpeglib.h:715
	void (*)(j_common_ptr) progress_monitor;

	// jpeglib.h:717
	long int pass_counter;

	// jpeglib.h:718
	long int pass_limit;

	// jpeglib.h:719
	int completed_passes;

	// jpeglib.h:720
	int total_passes;

}

// jpeglib.h:260
typedef jpeg_common_struct * j_common_ptr;

// jpeglib.h:261
typedef jpeg_compress_struct * j_compress_ptr;

// jpeglib.h:267
struct jpeg_compress_struct {
	// jpeglib.h:268
	jpeg_error_mgr * err;

	// jpeglib.h:268
	jpeg_memory_mgr * mem;

	// jpeglib.h:268
	jpeg_progress_mgr * progress;

	// jpeglib.h:268
	boolean is_decompressor;

	// jpeglib.h:268
	int global_state;

	// jpeglib.h:271
	jpeg_destination_mgr * dest;

	// jpeglib.h:278
	JDIMENSION image_width;

	// jpeglib.h:279
	JDIMENSION image_height;

	// jpeglib.h:280
	int input_components;

	// jpeglib.h:281
	J_COLOR_SPACE in_color_space;

	// jpeglib.h:283
	double input_gamma;

	// jpeglib.h:293
	int data_precision;

	// jpeglib.h:295
	int num_components;

	// jpeglib.h:296
	J_COLOR_SPACE jpeg_color_space;

	// jpeglib.h:298
	jpeg_component_info * comp_info;

	// jpeglib.h:301
	JQUANT_TBL *[4] quant_tbl_ptrs;

	// jpeglib.h:304
	JHUFF_TBL *[4] dc_huff_tbl_ptrs;

	// jpeglib.h:305
	JHUFF_TBL *[4] ac_huff_tbl_ptrs;

	// jpeglib.h:308
	UINT8[16] arith_dc_L;

	// jpeglib.h:309
	UINT8[16] arith_dc_U;

	// jpeglib.h:310
	UINT8[16] arith_ac_K;

	// jpeglib.h:312
	int num_scans;

	// jpeglib.h:313
	const jpeg_scan_info * scan_info;

	// jpeglib.h:319
	boolean raw_data_in;

	// jpeglib.h:320
	boolean arith_code;

	// jpeglib.h:321
	boolean optimize_coding;

	// jpeglib.h:322
	boolean CCIR601_sampling;

	// jpeglib.h:323
	int smoothing_factor;

	// jpeglib.h:324
	J_DCT_METHOD dct_method;

	// jpeglib.h:331
	unsigned int restart_interval;

	// jpeglib.h:332
	int restart_in_rows;

	// jpeglib.h:336
	boolean write_JFIF_header;

	// jpeglib.h:341
	UINT8 density_unit;

	// jpeglib.h:342
	UINT16 X_density;

	// jpeglib.h:343
	UINT16 Y_density;

	// jpeglib.h:344
	boolean write_Adobe_marker;

	// jpeglib.h:351
	JDIMENSION next_scanline;

	// jpeglib.h:360
	boolean progressive_mode;

	// jpeglib.h:361
	int max_h_samp_factor;

	// jpeglib.h:362
	int max_v_samp_factor;

	// jpeglib.h:364
	JDIMENSION total_iMCU_rows;

	// jpeglib.h:375
	int comps_in_scan;

	// jpeglib.h:376
	jpeg_component_info *[4] cur_comp_info;

	// jpeglib.h:379
	JDIMENSION MCUs_per_row;

	// jpeglib.h:380
	JDIMENSION MCU_rows_in_scan;

	// jpeglib.h:382
	int blocks_in_MCU;

	// jpeglib.h:383
	int[10] MCU_membership;

	// jpeglib.h:387
	int Ss;

	// jpeglib.h:387
	int Se;

	// jpeglib.h:387
	int Ah;

	// jpeglib.h:387
	int Al;

	// jpeglib.h:392
	jpeg_comp_master * master;

	// jpeglib.h:393
	jpeg_c_main_controller * main;

	// jpeglib.h:394
	jpeg_c_prep_controller * prep;

	// jpeglib.h:395
	jpeg_c_coef_controller * coef;

	// jpeglib.h:396
	jpeg_marker_writer * marker;

	// jpeglib.h:397
	jpeg_color_converter * cconvert;

	// jpeglib.h:398
	jpeg_downsampler * downsample;

	// jpeglib.h:399
	jpeg_forward_dct * fdct;

	// jpeglib.h:400
	jpeg_entropy_encoder * entropy;

	// jpeglib.h:405
	boolean emit_dht;

}

// jpeglib.h:726
struct jpeg_destination_mgr {
	// jpeglib.h:727
	JOCTET * next_output_byte;

	// jpeglib.h:728
	size_t free_in_buffer;

	// jpeglib.h:730
	void (*)(j_compress_ptr) init_destination;

	// jpeglib.h:731
	boolean (*)(j_compress_ptr) empty_output_buffer;

	// jpeglib.h:732
	void (*)(j_compress_ptr) term_destination;

}

// jpeglib.h:765
typedef jvirt_sarray_control * jvirt_sarray_ptr;

// jpeglib.h:766
typedef jvirt_barray_control * jvirt_barray_ptr;

