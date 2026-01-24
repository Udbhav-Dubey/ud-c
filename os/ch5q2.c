#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
int main (){
    int fd=open("ch5q2.txt",O_WRONLY|O_CREAT|O_TRUNC,0644);
    if (fork()){
       const char *datac="child"; 
       int n=write(fd,datac,strlen(datac)); 
    }
    else {
        const char *datap="parent";
        int n=write(fd,datap,strlen(datap));
    }
    return 0;
}
