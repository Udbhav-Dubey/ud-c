#include <stdio.h>
int main (){
    FILE* fptr=fopen("file18.txt","r");
    if (!fptr){
        printf("file opening failed \n");
        return 1;
    }
    char ch;
    while ((ch=fgetc(fptr))!=EOF){
        printf("%c",ch);
    }
    fclose(fptr);
return 0;
}
