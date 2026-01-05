#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr = fopen("fileest.txt","w");
    if (fptr==NULL){
        printf("file not opened");
    }
    else {
        printf("the file is created successfully ");
        }
return 0;
}
