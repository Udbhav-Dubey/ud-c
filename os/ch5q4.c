#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main (){
    int fk=fork();
    char *args[2];
    args[0]="/bin/ls";
    args[1]=NULL;
    char *argvs[]={"ls",NULL};
    if (fk==0){
        execv(args[0],args); // argumetns in array
        execl("/bin/ls","ls",NULL); // arguments passed one by one
        execlp("ls","ls",NULL); // searches path 
        execvp("ls",argvs); // vector and path search very common
       char *env[]={"MYVAR=hello",NULL};
        execle("/bin/ls","ls",NULL,env); // rare controls enviorments
        //execvpe("ls",argvs,env);
    }
    else {
        wait(NULL);
    }
    return 0;
}
