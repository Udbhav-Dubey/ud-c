// C program to toggle case of each character in a string
#include <stdio.h>
int main (){
printf("C program to toggle case of each character in a string\n");
char str[256];
fgets(str,256,stdin);
for (int i=0;str[i]!='\0';i++){
    if (str[i]=='\n'){
        str[i]='\0';
    }}
for (int i=0;str[i]!='\0';i++){
    if ('a'<=str[i]&&str[i]<='z'){
        str[i]=str[i]-32;
    }
    else if ('A'<=str[i]&&str[i]<='Z'){
        str[i]=str[i]+32;
    }
}
printf("%s",str);
printf("\n");

return 0;
}
