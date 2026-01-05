#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("file11.txt","r");
    char buffer[100];
    size_t bytesRead;
    if (!fptr){
        printf("Error opening file.\n");
        return 1;
    }
    while ((bytesRead=fread(buffer,1,sizeof(buffer)-1,fptr))>0){
        buffer[bytesRead]='\0';
        printf("%s\n",buffer);
    }
    fclose(fptr);
return 0;
}
