// C program to convert string to lowercase
#include <stdio.h>
int main(){
    printf("C program to convert lowercase string to uppercase\n");
    char str[256];
    fgets(str, 256, stdin);
    for (int i=0;str[i]!='\0';i++){
    if (str[i]=='\n'){
        str[i]='\0';
    }}
    for (int i=0;str[i]!='\0';i++){
        if ('A'<=str[i]&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }

    printf("%s",str);
    printf("\n");
    return 0;
}
