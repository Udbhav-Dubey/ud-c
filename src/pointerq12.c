//C program to find length of a string
#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int *ptr=str;
    int count=0;
    fgets(str,100,stdin);
    while (*(str++)!='\0'){count++;}
    printf("%d",count);
return 0;
}
