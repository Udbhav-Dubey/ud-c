// C program to remove all occurrences of a character from string
#include <stdio.h>
#include <string.h>
int main(){
    printf("C program to remove all occurrences of a character from string\n");
    char inp,i;
    int k[256]={0};
    char str[256];
    char str2[256];
    fgets(str,256,stdin);
    int length = strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    int l=0;
    printf("please input the character\n");
    scanf("%c",&inp);
    for ( int i=0;str[i]!='\0';i++){
        if (str[i]!=inp){
            str2[l]=str[i];
            l++;
        }
    }
    str[l]='\0';
    printf("%s",str2);
    return 0;
}
