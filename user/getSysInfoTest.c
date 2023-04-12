#include <kernel/types.h>
#include <user/user.h>
#include <shared/info.h>

int main(){
struct sysInfo info;
int result = getSysInfo(&info);

if(result == 0){
printf("the sysInfo is as below:\nuptime: %d\ntootalram: %d\nfreeram: %d\nprocs: %d\n", info.uptime, info.totalram, info.freeram, info.procs);
}
else{
printf("get sysInfo failed :/\n");
}
return 0;
}