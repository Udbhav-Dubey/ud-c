#include <stdio.h>
typedef struct{
    int a;
} str1;
typedef struct{
    int b;
}str2;
int main(){
    str1 var1={10};
    str2 var2={312};
    printf("%d %d \n",var1.a,var2.b);
    return 0;
}
