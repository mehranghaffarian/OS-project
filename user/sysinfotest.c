
#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/sysinfo.h"
#include "kernel/sysinfo.c"
#include "user/user.h"




int main(void ){
    struct sysinfo p;

    int result =sysinfo(&p);
    printf("uptime = %d\ntotlaram = %d\nfreeram = %d\nprocs = %d", p.uptime, p.totalram, p.freeram, p.procs);
    exit(result);
}

