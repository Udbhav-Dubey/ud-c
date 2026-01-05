#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("fileest8.txt","r");
    fprintf(fptr,"what");
    char ch;
    ch=getc(fptr);
    if (ch==EOF){printf("end of file");}
    else printf("read character : %c",ch);
    fclose(fptr);
return 0;
}
