#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr;
    fptr=fopen("file9.txt","w");
    char ch;
    ch=getc(fptr);
    if (ch==EOF){printf("end of file ");}
    else printf("Read character :  %c ",ch);
    fclose(fptr);
    return 0;
}
