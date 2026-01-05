//Practice  calloc(), realloc() and free()functions.
#include <stdio.h>
int main (){
    int *ptr=(int *)calloc(sizeof(int),7);
    for (int i=0;i<7;i++){
        *(ptr+i)+=5;
    }
    int *ptr=(int *)realloc(ptr,sizeof(int)*9);
    free(ptr);
    ptr=NULL;
return 0;
}
