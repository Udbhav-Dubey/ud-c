#include <stdio.h>
#include <stdlib.h>
int main (){
    int buffer[3];
    FILE* fptr=fopen("file7.bin","rw");
    if(fptr==NULL){
        printf("not opening file");
    }
    fread(buffer,sizeof(int),3,fptr);
    for(int i=0;i<3;i++){
        printf("element %d : %d\n",i+1,buffer[i]);
    }
    fclose(fptr);
    return 0;
}
