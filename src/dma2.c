#include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr=(int *)malloc(sizeof(int)*5);
    if (ptr=NULL){printf("no");}
    ptr=(int *)realloc(ptr,sizeof(int)*8);

return 0;
}
