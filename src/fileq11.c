//C program to remove empty lines from a file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int is_empty_line(const char* line) {
    for (int i = 0; line[i] != '\0'; i++) {
        if (!isspace(line[i])) {
            return 0; 
        }
    }
    return 1; 
}
int main (){
    FILE *fptr1=fopen("fileq11.txt","r");
    FILE *fptr2=fopen("fileq11.1.txt","w");
    if (fptr1==NULL && fptr2==NULL){printf("no");exit(0);}
    else {
        char line [1000];
        while(fgets(line,sizeof(line),fptr1)){
            if (!is_empty_line(line)){
                fputs(line,fptr2);
            }
        }
        fclose(fptr1);
        fclose(fptr2);
    }
return 0;
}
