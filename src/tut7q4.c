//Implement nested structures. Think about any real world application of nested
//structures.
#include <stdio.h>
struct A {
    int a1;
    struct B {
        int b1;
    }b;
};
int main (){
struct A a;
a.b.b1=11;
a.a1=22;
return 0;
}

