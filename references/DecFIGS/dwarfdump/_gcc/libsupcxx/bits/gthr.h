// gthr.h:45
typedef long int __gthread_once_t;

// gthr.h:46
typedef sys_lwmutex_t __gthread_mutex_t;

// gthr.h:103
int __gthread_mutex_lock(__gthread_mutex_t *  mutex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr.h:109
int __gthread_mutex_unlock(__gthread_mutex_t *  mutex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr.h:67
int __gthread_once(__gthread_once_t *  once, void (*)()  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr.h:44
typedef int __gthread_key_t;

// gthr.h:73
int __gthread_key_create(__gthread_key_t *  key, void (*)(void *)  dtor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr.h:85
void * __gthread_getspecific(__gthread_key_t  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// gthr.h:91
int __gthread_setspecific(__gthread_key_t  key, const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

