
#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/sysinfo.h"
#include "kernel/sysinfo.c"
#include "user/user.h"

int main(void)
{
    struct procInfo p;
    (&p)->pid = 2;
    (&p)->WaitingTime = -1;

    int result = getProcInfo(&p);

    if (result == 0)
    {
        printf("WaitingTime: %d, TurnAroundTime: %d, BurstTime: %d\n", (&p)->WaitingTime, (&p)->TurnAroundTime, (&p)->BurstTime);
    }
    else
    {
        printf("could not get the process info /:");
    }

    exit(result);
}