//C program to count frequency of each character in a string
#include <stdio.h>
#include <string.h>
int main(){
    printf("C program to count frequency of each character in a string\n");
    char str[256];
    fgets(str,256,stdin);
    int length =strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    int freq[256]={0};
    for (int i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;
    }
    for (int i=0;i<256;i++){
        if(freq[i]>0){
        printf("%c : %d\n",i,freq[i]);
    }}
    return 0;
}
