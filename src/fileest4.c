#include <stdio.h>
#include <stdlib.h>
int main (){
    char data [100]="you are one crazy racoon\nthey call me the slim shady ";
    FILE* fptr=fopen("fileest4.txt","w");
    if (fptr==NULL){
        printf("file is not opened");
    }
    else {
        fputs(data,fptr);
        fputs("\n",fptr);    
        fseek(fptr,-8,SEEK_END);
        fputs("\nthe monster\n",fptr);
        fclose(fptr);
        system("xdg-open fileest4.txt");
    }
return 0;
}
