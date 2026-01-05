// C program to remove first occurrence of a character from string
#include <stdio.h>
#include <string.h>
int main(){
    printf("C program to remove first occurrence of a character from string\n");
    char str[1000];
    fgets(str,1000,stdin);
    int length = strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    char inp,i=0;
    printf("input the character to be removed\n");
    scanf("%c",&inp);
    for (i=0;str[i]!='\0';i++){
        if (inp==str[i]){
            break;
        }
    }
    for (int j=i+1;str[j]!='\0';j++){
        str[i]=str[j];
        i++;
    }
    printf("%s",str);
    return 0;
}
