//C program to remove specific line from a file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    FILE* fptr1=fopen("fileq10.txt","r");
    FILE* fptr2=fopen("fileq10.1.txt","w");
    if (fptr1==NULL||fptr2==NULL){
        printf("no");
        exit(0);
    }
    else {
        int lr;
        scanf("%d",&lr);
        char line [1000];
        int l=1;
        while(fgets(line,sizeof(line),fptr1)){
            if (l!=lr){
            fputs(line,fptr2);
            }
            l++;
        }
    }
    fclose(fptr1);
    fclose(fptr2);
return 0;
}
