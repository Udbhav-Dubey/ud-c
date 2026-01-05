//C program to replace specific line in a text file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    FILE* fptr1=fopen("file16.txt","r");
    FILE* fptr2=fopen("file16.1.txt","w");
    if (fptr1==NULL||fptr2==NULL){
        return 0;
    }
    else {
        int lr;
        scanf("%d",&lr);
        char lined[1000];
        getchar();
        fgets(lined,1000,stdin);
        int l=1;
        char line [1000];
        while(fgets(line,sizeof(line),fptr1)){
            if (l==lr){
            fputs(lined,fptr2);
            }
            else {
            fputs(line,fptr2);
            }
            l++;
        }
    }
    fclose(fptr1);
    fclose(fptr2);
return 0;
}
