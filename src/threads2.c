 void *mythread(void *arg) {
 myarg_t *m = (myarg_t *) arg;
 printf("%d %d\n", m->a, m->b);
 myret_t r; // ALLOCATED ON STACK: BAD!
 r.x = 1;
 r.y = 2;
 return (void *) &r;
 }
void *mythread(void *arg) {
int m = (int) arg;
printf("%d\n", m);
return (void *) (arg + 1);
}
int main(int argc, char *argv[]) {
pthread_t p;
int rc, m;
Pthread_create(&p, NULL, mythread, (void *) 100);
Pthread_join(p, (void **) &m);
printf("returned %d\n", m);
return 0;
}
