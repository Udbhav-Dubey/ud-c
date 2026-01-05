#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr;
    fptr=fopen("file6.txt","a+");
    if (fptr==NULL){
        printf("not opened\n");
    }
    else {
        fputs("well thats not me \nif it werent for me you wouldnt be here",fptr);
        fclose(fptr);
    }
return 0;
}
