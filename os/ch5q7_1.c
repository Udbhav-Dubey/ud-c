#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
void reopen_stdout(const char *path){
    int fd=open(path,O_WRONGLY|O_CREAT|O_TRUNC,0644);
    if (fd<0){
        perror("open");
        _exit(1);
    }
    if (fd!=STDOUT_FILENO){
        if (dup2(fd,STD_FILENO)<0){
            perror("dup2");
            _exit(1);
        }
        close(fd);
    }
}
