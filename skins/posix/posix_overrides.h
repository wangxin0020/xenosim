#ifndef PSE51_OVERRIDE_LIBC_DEFINES_H
#define PSE51_OVERRIDE_LIBC_DEFINES_H

#include <errno.h>
#include <pthread.h>
#include <sched.h>
#include <semaphore.h>
#include <signal.h>
#include <time.h>
#include <limits.h>
#include <fcntl.h>

#undef pthread_cleanup_push
#undef pthread_cleanup_pop
#undef PTHREAD_STACK_MIN
#undef PTHREAD_DESTRUCTOR_ITERATIONS
#undef PTHREAD_KEYS_MAX
#undef PTHREAD_CREATE_JOINABLE
#undef PTHREAD_CREATE_DETACHED
#undef PTHREAD_INHERIT_SCHED
#undef PTHREAD_EXPLICIT_SCHED
#undef PTHREAD_SCOPE_SYSTEM
#undef PTHREAD_SCOPE_PROCESS
#undef PTHREAD_CANCEL_ENABLE
#undef PTHREAD_CANCEL_DISABLE
#undef PTHREAD_CANCEL_DEFERRED
#undef PTHREAD_CANCEL_ASYNCHRONOUS
#undef PTHREAD_CANCELED
#undef PTHREAD_ONCE_INIT
#undef SCHED_FIFO
#undef SCHED_RR
#undef SCHED_OTHER
#undef SEM_VALUE_MAX
#undef SEM_FAILED
#undef errno
#undef sigemptyset
#undef sigfillset
#undef sigaddset
#undef sigdelset
#undef sigismember
#undef sigaction
#undef sigqueue
#undef SIGRTMIN
#undef SIGRTMAX
#undef TIMER_ABSTIME

#define pthread_attr_t pse51_attr_t
#define pthread_t pse51_thread_t
#define pthread_mutexattr_t pse51_mutexattr_t
#define pthread_condattr_t pse51_condattr_t
#define pthread_key_t pse51_key_t
#define pthread_once_t pse51_once_t
#define mqd_t pse51_mqd_t

#define pthread_attr_init pse51_threadattr_init
#define pthread_attr_destroy pse51_threadattr_destroy
#define pthread_attr_getdetachstate pse51_threadattr_getdetachstate
#define pthread_attr_setdetachstate pse51_threadattr_setdetachstate
#define pthread_attr_getstackaddr pse51_threadattr_getstackaddr
#define pthread_attr_setstackaddr pse51_threadattr_setstackaddr
#define pthread_attr_getstacksize pse51_threadattr_getstacksize
#define pthread_attr_setstacksize pse51_threadattr_setstacksize
#define pthread_attr_getinheritsched pse51_threadattr_getinheritsched
#define pthread_attr_setinheritsched pse51_threadattr_setinheritsched
#define pthread_attr_getschedpolicy pse51_threadattr_getschedpolicy
#define pthread_attr_setschedpolicy pse51_threadattr_setschedpolicy
#define pthread_attr_getschedparam pse51_threadattr_getschedparam
#define pthread_attr_setschedparam pse51_threadattr_setschedparam
#define pthread_attr_getscope pse51_threadattr_getscope
#define pthread_attr_setscope pse51_threadattr_setscope
#define pthread_attr_getname_np pse51_threadattr_getname_np
#define pthread_attr_setname_np pse51_threadattr_setname_np
#define pthread_attr_getfp_np pse51_threadattr_getfp_np
#define pthread_attr_setfp_np pse51_threadattr_setfp_np
#define pthread_attr_setaffinity_np pse51_threadattr_setaffinity_np
#define pthread_attr_getaffinity_np pse51_threadattr_getaffinity_np
#define pthread_create pse51_thread_create
#define pthread_detach pse51_thread_detach
#define pthread_equal pse51_thread_equal
#define pthread_exit pse51_thread_exit
#define pthread_join pse51_thread_join
#define pthread_self pse51_thread_self
#define pthread_getschedparam pse51_thread_getschedparam
#define pthread_setschedparam pse51_thread_setschedparam
#define pthread_mutexattr_init pse51_mutexattr_init
#define pthread_mutexattr_destroy pse51_mutexattr_destroy
#define pthread_mutexattr_gettype pse51_mutexattr_gettype
#define pthread_mutexattr_settype pse51_mutexattr_settype
#define pthread_mutexattr_getprotocol pse51_mutexattr_getprotocol
#define pthread_mutexattr_setprotocol pse51_mutexattr_setprotocol
#define pthread_mutex_init pse51_mutex_init
#define pthread_mutex_destroy pse51_mutex_destroy
#define pthread_mutex_trylock pse51_mutex_trylock
#define pthread_mutex_lock pse51_mutex_lock
#define pthread_mutex_timedlock pse51_mutex_timedlock
#define pthread_mutex_unlock pse51_mutex_unlock
#define pthread_mutex_getprioceiling pse51_mutex_getprioceiling
#define pthread_mutex_setprioceiling pse51_mutex_setprioceiling
#define pthread_condattr_init pse51_condattr_init
#define pthread_condattr_destroy pse51_condattr_destroy
#define pthread_condattr_getclock pse51_condattr_getclock
#define pthread_condattr_setclock pse51_condattr_setclock
#define pthread_cond_init pse51_cond_init
#define pthread_cond_destroy pse51_cond_destroy
#define pthread_cond_wait pse51_cond_wait
#define pthread_cond_signal pse51_cond_signal
#define pthread_cond_timedwait pse51_cond_timedwait
#define pthread_cond_broadcast pse51_cond_broadcast
#define sem_destroy pse51_sem_destroy
#define sem_post pse51_sem_post
#define sem_trywait pse51_sem_trywait
#define sem_wait pse51_sem_wait
#define sem_timedwait pse51_sem_timedwait
#define sem_getvalue pse51_sem_getvalue
#define sem_open pse51_sem_open
#define sem_close pse51_sem_close
#define sem_unlink pse51_sem_unlink
#define pthread_cancel pse51_cancel
#define pthread_cleanup_pop pse51_cleanup_pop
#define pthread_setcancelstate pse51_setcancelstate
#define pthread_setcanceltype pse51_setcanceltype
#define pthread_testcancel pse51_testcancel
#define pthread_kill pse51_kill
#define pthread_sigmask pse51_thread_sigmask
#define signal pse51_signal
#define sigpending pse51_sigpending
#define sigwait pse51_sigwait
#define sigtimedwait pse51_sigtimedwait
#define sigwaitinfo pse51_sigwaitinfo
#define sigqueue pse51_sigqueue
#define pthread_key_create pse51_key_create
#define pthread_key_delete pse51_key_delete
#define pthread_getspecific pse51_getspecific
#define pthread_setspecific pse51_setspecific
#define pthread_once pse51_once
#define clock_getres pse51_clock_getres
#define clock_gettime pse51_clock_gettime
#define clock_settime pse51_clock_settime
#define clock_nanosleep pse51_clock_nanosleep
#define timer_create pse51_timer_create
#define timer_delete pse51_timer_delete
#define timer_settime pse51_timer_settime
#define timer_gettime pse51_timer_gettime
#define timer_getoverrun pse51_timer_getoverrun
#define mq_attr pse51_mq_attr
#define mq_getattr pse51_mq_getattr
#define mq_setattr pse51_mq_setattr
#define mq_send pse51_mq_send
#define mq_close pse51_mq_close
#define mq_receive pse51_mq_receive
#define mq_timedreceive pse51_mq_timedreceive
#define mq_timedsend pse51_mq_timedsend
#define mq_open pse51_mq_open
#define mq_unlink pse51_mq_unlink
#define mq_notify pse51_mq_notify
#define shm_open pse51_shm_open
#define shm_unlink pse51_shm_unlink
#define mmap pse51_mmap
#define munmap pse51_munmap
#define ftruncate pse51_ftruncate

#endif /*PSE51_OVERRIDE_LIBC_DEFINES_H*/
