#include <stdio.h>
struct A {
    int a;
    float b;
}x;
int main (){
  x.a=10;
  x.b=2.2;
  struct A y=x;
  struct A z;
  z.b=x.b;
  printf("%d %f ",z.a,z.b);
return 0;
}
