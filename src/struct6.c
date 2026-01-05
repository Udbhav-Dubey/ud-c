#include <stdio.h>
struct child{
int x;
char c;
};
struct parent{
int a;
struct child b;
};
int main (){
    struct parent p={25,195,'A'};
    printf("p.a=%d\n",p.a);
    printf("p.b.x=%d\n",p.b.x);
    printf("p.b.c=%c\n",p.b.c);
return 0;
}
