#ifndef _SCTP_LOCK_EMPTY_H_
#define _SCTP_LOCK_EMPTY_H_
/* Empty lock stubs for userspace SCTP */
#define SCTP_INP_INFO_LOCK_INIT()
#define SCTP_INP_INFO_LOCK_DESTROY()
#define SCTP_INP_INFO_RLOCK()
#define SCTP_INP_INFO_RUNLOCK()
#define SCTP_INP_INFO_WLOCK()
#define SCTP_INP_INFO_WUNLOCK()
#define SCTP_INP_INFO_LOCK_ASSERT()
#define SCTP_INP_INFO_WLOCK_ASSERT()

#define SCTP_INP_LOCK_INIT(_inp)
#define SCTP_INP_LOCK_DESTROY(_inp)
#define SCTP_INP_RLOCK(_inp)
#define SCTP_INP_RUNLOCK(_inp)
#define SCTP_INP_WLOCK(_inp)
#define SCTP_INP_WUNLOCK(_inp)
#define SCTP_INP_LOCK_ASSERT(_inp)
#define SCTP_INP_WLOCK_ASSERT(_inp)

#define SCTP_TCB_LOCK_INIT(_tcb)
#define SCTP_TCB_LOCK_DESTROY(_tcb)
#define SCTP_TCB_LOCK(_tcb)
#define SCTP_TCB_TRYLOCK(_tcb) 1
#define SCTP_TCB_UNLOCK(_tcb)
#define SCTP_TCB_LOCK_ASSERT(_tcb)

#define SCTP_STATLOG_INIT_LOCK()
#define SCTP_STATLOG_LOCK()
#define SCTP_STATLOG_UNLOCK()

#define SCTP_ITERATOR_LOCK_INIT()
#define SCTP_ITERATOR_LOCK_DESTROY()
#define SCTP_ITERATOR_LOCK()
#define SCTP_ITERATOR_UNLOCK()

#define SCTP_WQ_ADDR_INIT()
#define SCTP_WQ_ADDR_DESTROY()
#define SCTP_WQ_ADDR_LOCK()
#define SCTP_WQ_ADDR_UNLOCK()
#define SCTP_WQ_ADDR_LOCK_ASSERT()

#define SCTP_ZONE_INIT_LOCK()
#define SCTP_ZONE_LOCK()
#define SCTP_ZONE_UNLOCK()
#endif
