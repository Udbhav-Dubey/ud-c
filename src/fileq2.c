//C program to read a file and display its contents'
#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr = fopen("fileq1.txt","r");
    if (fptr==NULL){
            printf("no\n");
            return 0;
    }
    else {
        char data[200];
        while(fgets(data,200,fptr)){
        printf("%s",data);}
    }
return 0;
}
