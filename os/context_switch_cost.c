#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <sched.h>
int main (){
    int p1[2],p2[2];
    pipe(p1);
    pipe(p2);
    cpu_set_t set;
    CPU_ZERO(&set);
    CPU_SET(0,&set);
    sched_setaffinity(0,sizeof(set),&set);
    return 0;
}
