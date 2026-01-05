// C program to remove all repeated characters in a string
#include <stdio.h>
#include <string.h>
int main(){
    printf("C program to remove all repeated characters in a string\n");
    char str[1000];
    char str2[1000];
     int occ[256]={0};
    fgets(str,1000,stdin);
    int length = strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    for (int i=0;str[i]!='\0';i++){
        occ[(int)str[i]]++;
    }
    int index=0;
    for (int i=0;str[i]!='\0';i++){
        if (occ[(int)str[i]]==1){
            str2[index++]=str[i];
        }
    }
    str2[index]='\0';
    printf("%s\n",str2);
    return 0;
}
