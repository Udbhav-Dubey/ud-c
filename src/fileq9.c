//C program to remove a word from text file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    FILE* fptr=fopen("file9q.txt","r");
    FILE* fptr1=fopen("newfile9q.txt","w");
    if (fptr==NULL){
        printf("no");
        exit(0);
    }
    else {
        char w[100];
        scanf("%s",w);
        char word[1000];
        while(fscanf(fptr,"%s",word)==1){
        if (strcmp(word,w)!=0){
            fprintf(fptr1,"%s",word);
        }
        fclose(fptr1);
        fclose(fptr);
    }}
return 0;
}
