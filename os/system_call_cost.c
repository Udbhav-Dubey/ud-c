#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
int main (){
    struct timeval start,end;
    int interations=1e6;
    char buf[1];
    gettimeofday(&start,NULL);
    for (int i=0;i<interations;i++){
        read(0,buf,0);
    }
    gettimeofday(&end,NULL);
    long seconds=end.tv_sec-start.tv_sec;
    long useconds=end.tv_usec-start.tv_usec;
    double total_time=seconds+useconds/1e6;
    double avg=total_time/interations;
    printf("Average system call cost : %.9f seconds\n",avg);
    return 0;
}
