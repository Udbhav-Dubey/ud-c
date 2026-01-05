//C program to append data into a file
#include <stdio.h>
#include <stdlib.h>
int main (){
FILE* fptr=fopen("fileq4.txt","a");
if (fptr==NULL){
    printf("no\n");
return 0;
}
else{
char data [100]="Learning C programming at Codeforwin is simple and easy.";
fputs(data,fptr);
}
return 0;
}
