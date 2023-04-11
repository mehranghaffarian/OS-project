#include <kernel/types.h>
#include <user/user.h>

int main(){
    printf("the getProcTick result is: %d\n", getProcTick(0));
    return 0;
}