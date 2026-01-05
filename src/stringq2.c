// C program to copy one string to another string
#include <stdio.h>
int main(){
    int i;
    printf("C program to copy one string to another string\n");
    char str1[100];
    char str2[100];
    scanf("%[^\n]s",str1);
    for (i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("original : %s\n",str1);
    printf("new one  : %s \n",str2);
    return 0;
}
