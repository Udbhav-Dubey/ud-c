// C program to compare two strings
#include <stdio.h>
#include <threads.h>
int main(){
    int equal=0;
    printf("to compare two strings\n");
    printf("input string 1 : ");
    char str1[256];
    fgets(str1,256,stdin);
    printf("input string 2 : ");
    char str2[256];
    fgets(str2, 256, stdin);
    for (int i=0;str1[i]!='\0';i++){
        if (str1[i]=='\n'){
            str1[i]='\0';
        }
    }
    for (int i=0;str2[i]!='\0';i++){
        if (str2[i]=='\n'){
            str2[i]='\0';
        }
    }
    for (int i =0;str1[i]!='\0' || str2[i]!='\0';i++){
        if (str1[i]!=str2[i]){
            equal =1 ;
        }
    }
    if (equal==1){
        printf("not equal\n");
    }
    if (equal==0) {
        printf("equal\n");
    }
    return 0;
}
