//C program to count occurrences of all words in a file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("fileq12.txt","r");
    FILE* fptr1=fopen("fileq12.txt","r");
    if (fptr==NULL){
        printf("no");
        return 0;
    }
    else {
        char word[1000];
        while(fscanf(fptr,"%s",word)==1){
            int count =1;
            char word2[1000];
            while(fscanf(fptr1,"%s",word2)==1){
                if (strcmp(word,word2)==0){count++;}
        }
            printf("%s : %d\n",word,count);
    }
    }
    fclose(fptr);
    fclose(fptr1);
return 0;
}
