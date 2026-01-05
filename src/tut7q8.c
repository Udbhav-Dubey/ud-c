//Implement a simple union using a C program which contains an int, float and char arrayof 4 elements.
#include <stdio.h>
union A {
    int i;
    float f;
    char c;
    int arr [4];
};
int main (){
    union A a;
    a.i=11;
    printf("%d",a.i);
    a.f=2.2;
    printf("%f\n",a.f);
    a.c='c';
    printf("%c\n",a.c);
    a.arr[4]={1,2,2,4};
    for(int i=0;i<4;i++){
        printf("%d\n",a.arr[i]);
    }
return 0;
}
