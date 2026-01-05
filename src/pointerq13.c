//C program to copy one string to another string
#include <stdio.h>
#include <string.h>
int main (){
    char str1[1000];
    char str2[1000];
    char *ptr1=str1;
    char *ptr2=str2;
    fgets(str1,1000,stdin);
    for (int i=0;str1[i]!='\0';i++){
        if (str1[i]=='\n'){
            str1[i]='\0';
        }
    }
    for (int i=0;str1[i]!='\0';i++){
        *(ptr2+i)= *(ptr1+i);
    }
     for (int i=0;str2[i]!='\0';i++){
        if (str2[i]=='\n'){
            str2[i]='\0';
        }
    }
    printf("%s",str2);
return 0;
}
