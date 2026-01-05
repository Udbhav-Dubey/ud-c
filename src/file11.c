#include <stdio.h>
#include <stdlib.h>
int main (){
    int flag=1;
    FILE* fptr=fopen("file11.txt","r");
    char buff[100];
    while(fgets(buff,sizeof(buff),fptr)){ 
    printf("%s",buff);}
    fclose(fptr);
return 0;
}
