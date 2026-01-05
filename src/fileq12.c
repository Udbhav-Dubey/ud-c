//C program to find occurrence of a word in file and count them also
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("fileq12.txt","r");
    if (fptr==NULL){return 0;}
    else {
        int count=0;
        char target[1000];
        scanf("%s",target);
        char word[1000];
        int i=1;
        while(fscanf(fptr,"%s",word)==1){
	i++;
        if(strcmp(target,word)==0){
            printf("occured at %d\n",i);
            count ++;
        }
        }
        printf("count is %d",count);
    }
return 0;
}
