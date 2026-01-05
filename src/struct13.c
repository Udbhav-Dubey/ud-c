//6. Pass and return structure into other functions besides main().
#include <stdio.h>
struct A {
int x ;
float y;
}a;
void increment(int *ptr1,float *ptr2){
    *ptr1->x++;
    *ptr2->y++;
}
int main (){
    struct A *ptr=&a;
    increment(&a,ptr);
return 0;
}
