#include <stdio.h>
int main(){
    union {
        int i;
        char c;
        float f;
    }anon;
    anon.i=31;
    printf("%d\n",anon.i);
    anon.f=65.2654;
    printf("%f\n",anon.f);
    anon.c='c';
    printf("%c\n",anon.c);
    return 0;
}
