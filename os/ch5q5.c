#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main (){
    int fk=fork();
    if (fk==0){
        int z=fork();
        if (z==0){
            printf("grandchild\n");
        }
        else {
        wait(NULL);
        printf("child\n");
        }
    }
    else {
        int x=wait(NULL); //question what values takes as parameter ?
        printf("parent and wait is %d and fk is %d\n",x,fk);
    }
    return 0;
}
