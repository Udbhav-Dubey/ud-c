//C program to count characters, words and lines in a text file
#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE* fptr=fopen("fileq8.txt","r");
    if (fptr==NULL){
        printf("no");
        return 0;
    }
    else {
        int character=0;
        int line =0;
        int word=0;
        char ch;
        while((ch=fgetc(fptr))!=EOF){
            if (ch=='\n'){line++;}
            if (ch==' ' ||ch== '\n'||ch=='\t'){word++;}
            character++;
        }
        fclose(fptr);
    printf("character : %d\n",character);
    printf("line : %d\n",line);
    printf("word : %d\n",word);
    }

    return 0;
}
