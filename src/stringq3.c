// C program to concatenate two strings
#include <stdio.h>
int main (){
    printf("to concatenate two strings\n");
    char str1[100];
    char str2[100];
    printf("now enter the first string\n");
    scanf("%[^\n]s",str1);
    getchar();
    printf("now enter the second string\n");
    scanf("%[^\n]s",str2);
    int i;
    for (i=0;str1[i]!='\0';i++){
        i++;
    }
    for (int j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    printf("new string is %s",str1);
    printf("\n");
    return 0;
}
