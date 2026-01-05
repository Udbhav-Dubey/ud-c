// C program to remove last occurrence of a character from the string
#include <stdio.h>
#include <string.h>
int main(){
    printf("C program to remove last occurrence of a character from the string\n");
    char str[1000];
    fgets(str,1000,stdin);
    int length = strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    char inp,i=0,k=-1;
    printf("input the character to be removed\n");
    scanf("%c",&inp);
    for (i=0;str[i]!='\0';i++){
        if (inp==str[i]){
            k=i;
        }}
    if (k!=-1){
        for (int j=k;str[j]!='\0';j++){
        str[j]=str[j+1];
        k++;}}
    printf("%s",str);
    return 0;
}
