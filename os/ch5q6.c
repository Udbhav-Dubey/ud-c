#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main (){
    int fk=fork();
    if (fk==0){
        pid_t z=fork();
        if (z==0){
            printf("grandchild\n");
        }
        else {
        waitpid(z,NULL,0);
        printf("child\n");
        }
    }
    else {
        int x=waitpid(fk,NULL,0); //question what values takes as parameter ?
        printf("parent and wait is %d and fk is %d\n",x,fk);
    }
    return 0;
}
