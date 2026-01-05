//How would you swap two structures?
#include <stdio.h>
struct A {
    int xa;
    float yb;
};
struct B {
    int xb;
    float yb;
};
void swap (struct A *a,struct B *b){
    struct A temp = *a;
    *a=*b;
    *b=*temp;
}
int main (){
    struct A a={10,2.2};
    struct B b={20,1.1};
    swap(&a,&b);   
return 0;
}
