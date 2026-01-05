#include <stdio.h>
#include <stdlib.h>
int main (){
FILE* fptr=fopen("fileest5.txt","a+");
if (fptr==NULL){
        printf("not opened\n");
}
else {
    fputs("well thats not me \nif it werent for me you wouldnt be here",fptr);
    fclose(fptr);
    system("xdg-open fileest5.txt");
}
return 0;
}
