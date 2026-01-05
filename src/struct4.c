#include <stdio.h>
    struct A {
        int x;
   }a,b;
void increment(struct A a,struct A*b){
    a.x++;
    b->x++;
}
int main (){
    a.x=19;
    b.x=68;
    increment(a,&b);
    printf("a.x : %d  \tb.x : %d",a.x,b.x);
return 0;
}
