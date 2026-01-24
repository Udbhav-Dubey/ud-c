#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main (){
    if (fork()){
        wait(NULL);
        printf("goodbye\n");
    }
    else {
        printf("hello\n");
    }
    return 0;
}
