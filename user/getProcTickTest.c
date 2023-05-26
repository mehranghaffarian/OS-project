
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"




int main(void ){
    int ticks;
    int pid;
    pid = 1;
    ticks = getProcTick(pid);
    printf("ticks for pid= %d is %d",pid,ticks);
    exit(0);
}