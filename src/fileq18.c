#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("fileq18.txt","r+");
    if (fptr==NULL){
        return 0;
    }
    else {
        char ch;
        long pos=0;
        while((ch=fgetc(fptr))!=EOF){
             pos=ftell(fptr);
            if (ch >='a' && ch <='z'){
                ch=ch-32;
            }
            else if (ch>='A'&&ch<='Z'){
                ch=ch+32;
            }
            else continue;
        
        fseek(fptr,pos-1,SEEK_SET);
        fputc(ch,fptr);
    }}
    fclose (fptr);
return 0;
}
