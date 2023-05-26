//#include "types.h"
//#include "param.h"
//#include "memlayout.h"
//#include "riscv.h"
//#include "spinlock.h"
//#include "proc.h"
//#include "defs.h"
//
//
//int
//sysinfo(struct sysinfo *info) {
//    struct sysinfo t;
//    if(!info){
//        return -1;
//    }
//    struct proc *p = myproc();
//    acquire(&p->lock);
//    t.uptime = ticks / 10;
//    release(&p->lock);
//    t.freeram = freeram();
//    t.procs = procs();
//    t.totalram = PHYSTOP - KERNBASE;
//
//    if(copyout(p->pagetable, (uint64)info, (char *)&t, sizeof(t)) < 0)
//        return -1;
//    return 0;
//}