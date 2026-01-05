//C program to copy contents from one file to another
#include <stdlib.h>
#include <stdio.h>
int main (){
    FILE* fptr1=fopen("fileq5.1.txt","r");
    FILE* fptr2=fopen("fileq6.txt","w");
    if (fptr1==NULL || fptr2==NULL){printf("no\n");exit(0);}
    else {
        char ch;
        while((ch=fgetc(fptr1))!=EOF){
            fputc(ch,fptr2);
    }
        fclose(fptr2);
        fclose(fptr1);
        }

return 0;
}
