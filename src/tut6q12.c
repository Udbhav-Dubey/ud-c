//12. Count vowels in a given string.
#include <stdio.h>
#include <string.h>
int main (){
    char str[1000];
    fgets(str,1000,stdin);
    int length=strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    int count=0;
    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='a' || str[i]=='A' || str[i]=='e'||str[i]=='E'||str[i]=='I'||str[i]=='i'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            count ++;
        }
    }
    printf("%d",count);
return 0;
}
