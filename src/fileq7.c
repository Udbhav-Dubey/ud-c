//C program to merge two files to third file
#include <stdio.h>
#include <stdlib.h>
int main (){
FILE* fptr=fopen("fileq7.txt","w");
FILE* fptr1=fopen("fileq7.1.txt","r");
FILE* fptr2=fopen("fileq7.2.txt","r");
if (fptr1==NULL||fptr2==NULL){
    printf("no");
    return 0;
}
else {
    char ch;
    while((ch=fgetc(fptr1))!=EOF){
        fputc(ch,fptr);
    }
    while((ch=fgetc(fptr2))!=EOF){
        fputc(ch,fptr);
    }
    fclose(fptr);
    fclose(fptr1);
    fclose(fptr2);
}
return 0;
}
