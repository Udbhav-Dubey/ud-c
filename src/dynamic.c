#include <stdio.h>
#include <stdlib.h>
int main(){
    while (n--){
    int *ptr=(int *)malloc(5*sizeof(int));
    if (ptr==NULL){
        printf("Memory allocation failed");
        exit(0);
    }
    ptr=(int *)realloc(ptr,8*sizeof(int));
    if (ptr==NULL){
        printf("memory reallocation failed");
        exit(0);
    }
    for (int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=(int *)realloc(ptr,5 * sizeof(int));
    if (ptr==NULL){
        printf("memory reallocation failed");
        exit(0);
    }
    for (int i=0;i<5;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr=NULL;
return 0;
}
