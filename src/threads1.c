#include <stdio.h>
#include <pthread.h>
typedef struct __myargs{
    int a;
    int b;
}myarg_t;
void *mythread(void*args){
        myarg_t*m=(myarg_t *)arg;
        printf("%d %d\n",m->a,m->b);
        return NULL;
    }
int main (int args,char*argv[]){
    pthread_t p;
    int rc;
    myarg_t args;
    args.a=10;
    args.b=20;
    rc=pthread_create(&p,NULL,mythread,&args);
return 0;
}
