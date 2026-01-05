//Implement dot operator and arrow operator for structures.
#include <stdio.h>
struct A {
    int z;
    int y;
};
int main (){
    struct A a;
    struct A *ptr=&a;
    ptr->z=10;
    ptr->y=12;
return 0;
}
