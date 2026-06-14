// synchronization.h:170
struct mutex_attr {
	// synchronization.h:171
	sys_protocol_t attr_protocol;

	// synchronization.h:172
	sys_recursive_t attr_recursive;

	// synchronization.h:173
	sys_process_shared_t attr_pshared;

	// synchronization.h:175
	sys_adaptive_t attr_adaptive;

	// synchronization.h:176
	sys_ipc_key_t key;

	// synchronization.h:177
	int flags;

	// synchronization.h:178
	uint32_t pad;

	// synchronization.h:179
	char[8] name;

}

// synchronization.h:180
typedef mutex_attr sys_mutex_attribute_t;

// synchronization.h:245
int sys_mutex_create(sys_mutex_t *  mutex_id, sys_mutex_attribute_t *  attr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// synchronization.h:247
		uint64_t p1;

		// synchronization.h:247
		uint64_t p2;

		// synchronization.h:247
		uint64_t p3;

		// synchronization.h:247
		uint64_t p4;

		// synchronization.h:247
		uint64_t p5;

		// synchronization.h:247
		uint64_t p6;

		// synchronization.h:247
		uint64_t p7;

		// synchronization.h:247
		uint64_t p8;

		// synchronization.h:247
		uint64_t n;

	}
}

// synchronization.h:255
int sys_mutex_destroy(sys_mutex_t  mutex_id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// synchronization.h:257
		uint64_t p1;

		// synchronization.h:257
		uint64_t p2;

		// synchronization.h:257
		uint64_t p3;

		// synchronization.h:257
		uint64_t p4;

		// synchronization.h:257
		uint64_t p5;

		// synchronization.h:257
		uint64_t p6;

		// synchronization.h:257
		uint64_t p7;

		// synchronization.h:257
		uint64_t p8;

		// synchronization.h:257
		uint64_t n;

	}
}

// synchronization.h:285
int sys_mutex_unlock(sys_mutex_t  mutex_id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// synchronization.h:287
		uint64_t p1;

		// synchronization.h:287
		uint64_t p2;

		// synchronization.h:287
		uint64_t p3;

		// synchronization.h:287
		uint64_t p4;

		// synchronization.h:287
		uint64_t p5;

		// synchronization.h:287
		uint64_t p6;

		// synchronization.h:287
		uint64_t p7;

		// synchronization.h:287
		uint64_t p8;

		// synchronization.h:287
		uint64_t n;

	}
}

// synchronization.h:265
int sys_mutex_lock(sys_mutex_t  mutex_id, usecond_t  timeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// synchronization.h:267
		uint64_t p1;

		// synchronization.h:267
		uint64_t p2;

		// synchronization.h:267
		uint64_t p3;

		// synchronization.h:267
		uint64_t p4;

		// synchronization.h:267
		uint64_t p5;

		// synchronization.h:267
		uint64_t p6;

		// synchronization.h:267
		uint64_t p7;

		// synchronization.h:267
		uint64_t p8;

		// synchronization.h:267
		uint64_t n;

	}
}

// synchronization.h:246
int sys_mutex_create(sys_mutex_t *  mutex_id, sys_mutex_attribute_t *  attr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// synchronization.h:247
	uint64_t p1;

	// synchronization.h:247
	uint64_t p2;

	// synchronization.h:247
	uint64_t p3;

	// synchronization.h:247
	uint64_t p4;

	// synchronization.h:247
	uint64_t p5;

	// synchronization.h:247
	uint64_t p6;

	// synchronization.h:247
	uint64_t p7;

	// synchronization.h:247
	uint64_t p8;

	// synchronization.h:247
	uint64_t n;

}

// synchronization.h:256
int sys_mutex_destroy(sys_mutex_t  mutex_id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// synchronization.h:257
	uint64_t p1;

	// synchronization.h:257
	uint64_t p2;

	// synchronization.h:257
	uint64_t p3;

	// synchronization.h:257
	uint64_t p4;

	// synchronization.h:257
	uint64_t p5;

	// synchronization.h:257
	uint64_t p6;

	// synchronization.h:257
	uint64_t p7;

	// synchronization.h:257
	uint64_t p8;

	// synchronization.h:257
	uint64_t n;

}

// synchronization.h:276
int sys_mutex_trylock(sys_mutex_t  mutex_id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// synchronization.h:277
	uint64_t p1;

	// synchronization.h:277
	uint64_t p2;

	// synchronization.h:277
	uint64_t p3;

	// synchronization.h:277
	uint64_t p4;

	// synchronization.h:277
	uint64_t p5;

	// synchronization.h:277
	uint64_t p6;

	// synchronization.h:277
	uint64_t p7;

	// synchronization.h:277
	uint64_t p8;

	// synchronization.h:277
	uint64_t n;

}

// synchronization.h:266
int sys_mutex_lock(sys_mutex_t  mutex_id, usecond_t  timeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// synchronization.h:267
	uint64_t p1;

	// synchronization.h:267
	uint64_t p2;

	// synchronization.h:267
	uint64_t p3;

	// synchronization.h:267
	uint64_t p4;

	// synchronization.h:267
	uint64_t p5;

	// synchronization.h:267
	uint64_t p6;

	// synchronization.h:267
	uint64_t p7;

	// synchronization.h:267
	uint64_t p8;

	// synchronization.h:267
	uint64_t n;

}

// synchronization.h:286
int sys_mutex_unlock(sys_mutex_t  mutex_id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// synchronization.h:287
	uint64_t p1;

	// synchronization.h:287
	uint64_t p2;

	// synchronization.h:287
	uint64_t p3;

	// synchronization.h:287
	uint64_t p4;

	// synchronization.h:287
	uint64_t p5;

	// synchronization.h:287
	uint64_t p6;

	// synchronization.h:287
	uint64_t p7;

	// synchronization.h:287
	uint64_t p8;

	// synchronization.h:287
	uint64_t n;

}

// synchronization.h:485
struct sys_lwmutex_lock_info_t {
	// synchronization.h:486
	uint32_t volatile owner;

	// synchronization.h:487
	uint32_t volatile waiter;

}

// synchronization.h:490
union sys_lwmutex_variable_t {
	// synchronization.h:491
	sys_lwmutex_lock_info_t info;

	// synchronization.h:492
	uint64_t volatile all_info;

}
// synchronization.h:495
struct sys_lwmutex {
	// synchronization.h:496
	sys_lwmutex_variable_t lock_var;

	// synchronization.h:497
	uint32_t attribute;

	// synchronization.h:498
	uint32_t recursive_count;

	// synchronization.h:499
	_sys_sleep_queue_t sleep_queue;

	// synchronization.h:500
	uint32_t pad;

}

// synchronization.h:501
typedef sys_lwmutex sys_lwmutex_t;

// synchronization.h:479
struct lwmutex_attr {
	// synchronization.h:480
	sys_protocol_t attr_protocol;

	// synchronization.h:481
	sys_recursive_t attr_recursive;

	// synchronization.h:482
	char[8] name;

}

// synchronization.h:483
typedef lwmutex_attr sys_lwmutex_attribute_t;

// synchronization.h:488
struct {
	// synchronization.h:486
	uint32_t volatile owner;

	// synchronization.h:487
	uint32_t volatile waiter;

}

// synchronization.h:488
typedef structure  sys_lwmutex_lock_info_t;

// synchronization.h:493
union {
	// synchronization.h:491
	sys_lwmutex_lock_info_t info;

	// synchronization.h:492
	uint64_t volatile all_info;

}
// synchronization.h:493
typedef union  sys_lwmutex_variable_t;

