#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("file13.txt","r");
    if (fptr==NULL){
        printf("failed to open");
    }
    char data[100];
    while(fscanf(fptr,"%*s  %s",data)==1){
        printf("%s\t",data);
    }
    return 0;
}
