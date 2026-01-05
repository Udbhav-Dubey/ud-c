// C program to replace last occurrence of a character in a string
#include <string.h>
#include <stdio.h>
int main(){
    char r,rw;
    printf("C program to replace last occurrence of a character in a string\n");
    char str[1000];
    fgets(str,1000,stdin);
    int length =strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    printf("enter the character to be replaced\n");
    scanf("%c",&r);
    getchar();
    printf("enter the character to be replaced with\n");
    scanf("%c",&rw);
    for (int i=length;i>=0;i--){
        if (str[i]==r){
            str[i]=rw;
            break;
        }
    }
    printf("%s\n",str);
    return 0;
}
