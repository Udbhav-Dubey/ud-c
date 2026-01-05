// 5. Implement dot operator and arrow operator for structures.
#include <stdio.h>
struct A {
int x;
float y;
}a;
int main (){
a.x=22;
struct A *ptr=&a;
ptr->y=12.22;
printf("%d %f",ptr->x,ptr->y);
return 0;
}
