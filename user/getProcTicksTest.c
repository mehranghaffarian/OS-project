#include <kernel/types.h>
#include <user/user.h>

int main(){
int result = getProcTick(1);

if(result != -1){
    printf("the getProcTick result is: %d\n", result);
}
else{
    printf("the getProcTick failed :/\n");
}
return 0;
}