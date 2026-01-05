#include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr=(int *)malloc(5 * sizeof(int));
    ptr=(int *)realloc(ptr,10*sizeof(int));
    if (ptr==NULL){
        printf("realloc failed");
            exit(0);
    }
    for (int i=0;i<10;i++){
     printf("%d\n",ptr[i]);   
    }
return 0;
}
