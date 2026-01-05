#include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr=(int *)calloc(sizeof(int),5);
    if(ptr==NULL){printf("fails\n");}
    for (int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    ptr=NULL;
return 0;
}
