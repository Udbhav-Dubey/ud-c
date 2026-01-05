//Program to concatenate two strings using pointer
#include <stdio.h>
int main (){
    char str1[100],str2[100];
    char *s1=str1;
    char *s2=str2;
    printf("enter first string : ");
   fgets(str1,100,stdin);
    printf("enter second string : ");
    fgets(str2,100,stdin);
    while (*(++s1));
    while (*(s1++)= *(s2++));
    printf("concatendated string = %s",str1);
return 0;
}
