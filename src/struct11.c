//Implement nested structures. Think about any real world application of nested
//structures.
#include <stdio.h>
struct child {
    float b;
    char c;
};
struct parent {
    int x;
    struct child e;
}p;
int main (){
  p.x=10;
  p.e.b=11.1;
  p.e.c='c';
  printf("%d %f %c",p.x,p.e.b,p.e.c);
return 0;
}
