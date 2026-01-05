//C program to find and replace a word in file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    FILE* fptr1 = fopen("fileq12.txt","r");
    FILE* fptr2 = fopen("file15.1.txt","w");
    if (fptr1==NULL||fptr2==NULL){return 0;}
    else {
        char replace[1000];
        scanf("%s",replace);
        char find[1000];
        scanf("%s",find);
        char word[1000];
        while(fscanf(fptr1,"%s",word)==1){
            if (strcmp(word,find)==0){
                fprintf(fptr2,"%s",replace);
            }
            else {fprintf(fptr2,"%s ",word);}
        }
    }
    fclose (fptr1);
    fclose (fptr2);
return 0;
}
