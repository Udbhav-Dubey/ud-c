#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr;
    char data[110]="you wanna lose small "
                "i wanna win big";
    fptr=fopen("file5.txt","w");
    if (fptr==NULL){
        printf("file is not opened");
    }
    else {printf("file is now opened\n");
    fputs(data,fptr);
    fputs("\n",fptr);
    fseek(fptr,-8,SEEK_END);
    fputs("\nlegacy\n",fptr);
    fclose(fptr);
    printf("data succrssfully written in file\n");
    printf("the file is now closed.");}
return 0;
}
