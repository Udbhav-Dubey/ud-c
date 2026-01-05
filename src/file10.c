#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr = fopen("file9.txt","w");
    char ch;
    ch=getc(fptr);
    if (ch==EOF){
        if (feof(fptr)==EOF)
            printf("end of file");
        else printf("unable to read");
    }
    else printf("read character : %c",ch);
    fclose(fptr);
return 0;
}
