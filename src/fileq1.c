//C program to create a file and write data into file
#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("fileq1.txt","w");
    if(fopen==NULL){
        printf("nahi khul rha\n");
        return 0;
    }
    else {
        fprintf(fptr,"what lovely day it is i am richhi banno\n");
        char data[100]="this is mark nicholas we will have an exciting competetion\n";
        fputs(data,fptr);   
        fclose(fptr);
    }
    system("cat fileq1.txt");
return 0;
}
