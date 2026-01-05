//C program to replace all occurrences of a character in a string
#include <stdio.h>
#include <string.h>
int main(){
    char r;
    char rw;
    printf("C program to replace all occurrences of a character in a string\n");
    char str[1000];
    fgets(str,1000,stdin);
    int length=strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    printf("enter the character to replace\n");
    scanf("%c",&r);
    getchar();
    printf("enter the character to replace with\n");
    scanf("%c",&rw);
    for (int i=0;str[i]!='\0';i++){
        if (str[i]==r){
            str[i]=rw;
        }
    }
    printf("%s\n",str);
    return 0;
}
