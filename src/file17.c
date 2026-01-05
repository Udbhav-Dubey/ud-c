#include <stdio.h>
#include <stdlib.h>
int main (){
        FILE* fptr;
        fptr=fopen("file17.txt","r");
        fseek(fptr,00,SEEK_END);
        printf("%ld",ftell(fptr));
return 0;
}
