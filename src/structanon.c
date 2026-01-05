#include <stdio.h>
struct {
    int i;
    char c;
    float f;
}anon;
int main(){
    anon.c='c';
    anon.i=31;
    anon.f=412412.1321;
    printf("%d %f %c \n",anon.i,anon.f,anon.c);
    return 0;
}
