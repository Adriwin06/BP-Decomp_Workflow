// gthr-lv2.c:7
typedef void (*)(void *) dtor_t;

// gthr-lv2.c:13
struct {
	// gthr-lv2.c:11
	char inuse;

	// gthr-lv2.c:12
	dtor_t dtor;

}

// gthr-lv2.c:13
typedef structure  tls_ctrl_t;

// gthr-lv2.c:28
struct tls_data_entry {
	// gthr-lv2.c:29
	tls_data_entry * next;

	// gthr-lv2.c:30
	sys_ppu_thread_t id;

	// gthr-lv2.c:31
	void *[4] data;

}

// gthr-lv2.c:34
struct _tls_data_list {
	// gthr-lv2.c:35
	tls_data_entry * next;

}

// gthr-lv2.c:50
extern void __gthr_lv2_once_ctor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:220
extern int __gthr_lv2_mutex_destroy(__gthread_mutex_t *  mutex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:59
extern void __gthr_lv2_once_dtor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:230
extern int __gthr_lv2_mutex_lock(__gthread_mutex_t *  mutex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:240
extern int __gthr_lv2_mutex_unlock(__gthread_mutex_t *  mutex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:116
extern int __gthr_lv2_key_delete(__gthread_key_t  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:66
extern int __gthr_lv2_once(__gthread_once_t *  once, void (*)()  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:93
extern int __gthr_lv2_key_create(__gthread_key_t *  key, void (*)(void *)  dtor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// gthr-lv2.c:94
	int ret;

}

// gthr-lv2.c:86
void init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:133
extern void * __gthr_lv2_getspecific(__gthread_key_t  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// gthr-lv2.c:134
	void * data;

	// gthr-lv2.c:135
	tls_data_entry * p;

	// gthr-lv2.c:136
	sys_ppu_thread_t thr;

}

// gthr-lv2.c:160
extern int __gthr_lv2_setspecific(__gthread_key_t  key, const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// gthr-lv2.c:161
	int ret;

	// gthr-lv2.c:162
	tls_data_entry * p;

	// gthr-lv2.c:163
	sys_ppu_thread_t thr;

}

// gthr-lv2.c:203
extern __gthread_mutex_t __gthr_lv2_init_malloc_lock0() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:212
extern void __gthr_lv2_mutex_init_function(__gthread_mutex_t *  mutex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr-lv2.c:15
tls_ctrl_t[4] tls_ctrl;

// gthr-lv2.c:17
int nextkey;

// gthr-lv2.c:19
__gthread_once_t key_once;

// gthr-lv2.c:20
__gthread_mutex_t key_mutex;

// gthr-lv2.c:22
__gthread_mutexattr_t key_mutex_attr;

// gthr-lv2.c:36
_tls_data_list tls_data_list;

// gthr-lv2.c:38
__gthread_mutexattr_t _Mutex_attr;

// gthr-lv2.c:44
__gthread_mutex_t once_mutex;

// gthr-lv2.c:45
__gthread_once_t x_once;

// gthr-lv2.c:199
__gthread_mutex_t _malloc_lock_obj;

