#include <stdio.h>
#include <stdlib.h>
int main (){
    char data [100];
    FILE* fptr=fopen("fileest2.txt","r");
    if (fptr==NULL){
        printf("file doesnt exist\n");
    }
    else {
        printf("file is now opened\n");
    }
    while (fgets(data,100,fptr)!=NULL){
        printf("%s",data);
    }
    fclose (fptr);
return 0;
}
