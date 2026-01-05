#include <stdio.h>
#define max 15
int main (){
    char str[max];
    fgets(str,12,stdin);
    printf("string is %s",str);
    return 0;
}
