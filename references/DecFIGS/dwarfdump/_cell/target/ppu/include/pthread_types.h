// _built-in_
namespace std {
	// pthread_types.h:33
	typedef s_pthread_attr_t pthread_attr_t;

	// pthread_types.h:83
	typedef s_pthread_rwlock_t pthread_rwlock_t;

}

// pthread_types.h:24
struct std::s_pthread_attr_t {
	// pthread_types.h:25
	int schedpolicy;

	// pthread_types.h:26
	int sched_priority;

	// pthread_types.h:27
	int detachstate;

	// pthread_types.h:28
	int scope;

	// pthread_types.h:29
	int inheritsched;

	// pthread_types.h:30
	void * stackaddr;

	// pthread_types.h:31
	size_t stacksize;

	// pthread_types.h:32
	char * name;

}

// pthread_types.h:36
struct std::s_pthread_mutexattr_t {
	// pthread_types.h:37
	int protocol;

	// pthread_types.h:38
	int pshared;

	// pthread_types.h:39
	int type;

	// pthread_types.h:40
	int prioceiling;

}

// pthread_types.h:44
struct std::s_pthread_mutex_t {
	// pthread_types.h:41
	typedef s_pthread_mutexattr_t pthread_mutexattr_t;

	// pthread_types.h:45
	s_pthread_mutex_t::pthread_mutexattr_t attr;

	// pthread_types.h:46
	int type;

	// pthread_types.h:47
	int status;

	// pthread_types.h:48
	sys_mutex_t sys_mutex;

}

// pthread_types.h:52
struct std::s_pthread_condattr_t {
	// pthread_types.h:53
	long int rsvd0;

	// pthread_types.h:54
	int pshared;

}

// pthread_types.h:58
struct std::s_pthread_cond_t {
	// pthread_types.h:55
	typedef s_pthread_condattr_t pthread_condattr_t;

	// pthread_types.h:59
	s_pthread_cond_t::pthread_condattr_t attr;

	// pthread_types.h:60
	int status;

	// pthread_types.h:61
	sys_cond_t sys_cond;

	// pthread_types.h:62
	sys_mutex_t sys_mutex;

}

// pthread_types.h:69
struct std::s_pthread_rwlockattr_t {
	// pthread_types.h:70
	int type;

	// pthread_types.h:71
	int pshared;

}

// pthread_types.h:75
struct std::s_pthread_rwlock_t {
	// pthread_types.h:72
	typedef s_pthread_rwlockattr_t pthread_rwlockattr_t;

	// pthread_types.h:76
	s_pthread_rwlock_t::pthread_rwlockattr_t attr;

	// pthread_types.h:77
	int type;

	// pthread_types.h:49
	typedef s_pthread_mutex_t pthread_mutex_t;

	// pthread_types.h:78
	s_pthread_rwlock_t::pthread_mutex_t mutex;

	// pthread_types.h:63
	typedef s_pthread_cond_t pthread_cond_t;

	// pthread_types.h:79
	s_pthread_rwlock_t::pthread_cond_t read_cond;

	// pthread_types.h:80
	s_pthread_rwlock_t::pthread_cond_t write_cond;

	// pthread_types.h:81
	int blocked_writer;

	// pthread_types.h:82
	int state;

}

// pthread_types.h:86
struct std::timespec {
	// pthread_types.h:87
	long int tv_sec;

	// pthread_types.h:88
	long int tv_nsec;

}

// pthread_types.h:21
typedef std::pthread * pthread_t;

// pthread_types.h:97
using pthread_t;

// pthread_types.h:98
using std::pthread_attr_t;

// pthread_types.h:99
using std::s_pthread_rwlock_t::pthread_mutex_t;

// pthread_types.h:100
using std::s_pthread_mutex_t::pthread_mutexattr_t;

// pthread_types.h:101
using std::s_pthread_cond_t::pthread_condattr_t;

// pthread_types.h:102
using std::s_pthread_rwlock_t::pthread_cond_t;

// pthread_types.h:65
typedef int pthread_key_t;

// pthread_types.h:103
using pthread_key_t;

// pthread_types.h:66
typedef int pthread_once_t;

// pthread_types.h:104
using pthread_once_t;

// pthread_types.h:105
using std::s_pthread_rwlock_t::pthread_rwlockattr_t;

// pthread_types.h:106
using std::pthread_rwlock_t;

// pthread_types.h:107
using std::timespec;

