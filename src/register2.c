#include <stdio.h>
int main (){
    int i=19;
    register int* a=&i;
    printf("%d",*a);
     
return 0;
}
