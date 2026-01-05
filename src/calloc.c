#include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr=(int *)calloc(sizeof(int),5);
    if (ptr==NULL){
        printf("allocation failed");
        exit(0);
    }
    for (int i=0;i<5;i++){
        printf("%d",ptr[i]);
    }
return 0;
}
