// _built-in_
namespace std {
	// semaphore.h:31
	typedef s_sem sem_t;

	// semaphore.h:48
	extern int sem_init(std::sem_t *, int, unsigned int);

	// semaphore.h:49
	extern int sem_destroy(std::sem_t *);

	// semaphore.h:50
	extern int sem_wait(std::sem_t *);

	// semaphore.h:51
	extern int sem_trywait(std::sem_t *);

	// semaphore.h:52
	extern int sem_timedwait(std::sem_t *, const timespec *);

	// semaphore.h:53
	extern int sem_post(std::sem_t *);

	// semaphore.h:54
	extern int sem_getvalue(std::sem_t *, int *);

}

// semaphore.h:28
struct std::s_sem {
	// semaphore.h:29
	sys_semaphore_t sys_sem;

}

// semaphore.h:67
using std::sem_t;

// semaphore.h:68
using std::sem_init;

// semaphore.h:69
using std::sem_destroy;

// semaphore.h:70
using std::sem_wait;

// semaphore.h:71
using std::sem_trywait;

// semaphore.h:72
using std::sem_timedwait;

// semaphore.h:73
using std::sem_post;

// semaphore.h:74
using std::sem_getvalue;

