//C program to print source code of itself as output
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("fileq17.c","r");
    if (fptr==NULL){return 0;}
    else {
        char data[10000];
        while(fgets(data,sizeof(1000),fptr)){
        printf("%s",data);
    }}
    return 0;
}
