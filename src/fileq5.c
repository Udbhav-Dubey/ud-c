//C program to compare two files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    FILE* fptr1=fopen("fileq5.1.txt","r");
    FILE* fptr2=fopen("fileq5.2.txt","r");
    if (fptr1==NULL || fptr2==NULL){
        printf("no");
        exit(0);
    }
    else {
        char word1[100];
        char word2[100];
        int pos=0;
        int wrong=0;
        while (fscanf(fptr1,"%s",word1)==1&&(fscanf(fptr2,"%s",word2)==1)){
            pos++;
            if(strcmp(word1,word2)!=0){
            printf("alag alag hain %d \n",pos);
            wrong=1;
            }
        }
        if (fscanf(fptr1,"%s",word1)==1 || fscanf(fptr2,"%s",word2)==1){
            printf("files are of diffrent length");
            wrong=1;
        }
        if (wrong==0){printf("files are identical\n");}
    }
return 0;
}
