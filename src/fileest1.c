#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("fileest1.txt","r");
    if (fptr==NULL){printf("file not opened");}
    else {printf("file was opened");}
return 0;
}
