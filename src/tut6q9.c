//WAP to copy one string to another string with and without using the string handling function.
#include <stdio.h>
#include <string.h>
int main (){
    char s1[1000];
    fgets(s1,1000,stdin);
    for (int i=0;s[i]!='\0';i++){
        if (s[i]=='\n'){
            s[i]='\0';
            break;
        }
    }
    char s2[1000];
    int j;
    for (j=0;str[j]!='\0';j++){
        s2[j]=s1[j];
    }
    s2[j]='\0';
return 0;
}
