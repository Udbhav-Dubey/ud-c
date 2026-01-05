#include <stdlib.h>
#include <stdio.h>
int main (){
    FILE* fptr;
    fptr = fopen("text1.txt","w");
    if (fptr==NULL){
        printf("the file is not opened");
    }
    else printf("the file is created successfully");
    return 0;
}
