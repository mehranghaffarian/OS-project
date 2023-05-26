
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"




int main(void ){

    changePolicy();
    printf("Policy changed! ^_^ \n" );
    exit(0);
}