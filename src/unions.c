#include <stdio.h>
union A {
    int i;
    char c;
    float f;
};
int main (){
    union A a;
    a.i=10;
    printf("%d\n",a.i);
    a.c='c';
    printf("%c\n",a.c);
    a.f=203.21301;
    printf("%f\n",a.f);
    return 0;
}
