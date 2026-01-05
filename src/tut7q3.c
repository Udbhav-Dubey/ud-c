//WAP to initialize structures, copy one structure whole another and also just a few variables of one structure into another.
#include <stdio.h>
struct A {
    int a1;
    float a2;
}a;
struct B{
    int b1;
    float b2;
}b;
int main (){
    struct A a={10,2.2}; 
    b.b1=a.a1;
    b.b2=a.a2;
    struct B bb;
    bb=b;
return 0;
}
