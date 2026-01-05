// C program to remove all repeated characters in a string
#include <stdio.h>
#include <string.h>
int main(){
    printf("C program to remove all repeated characters in a string\n");
    char str[1000];
    // int occ[1000]={0};
    fgets(str,1000,stdin);
    int length = strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    for (int i=0;str[i]!='\0';i++){
        for (int j=i+1;str[j]!='\0';j++){
            if (str[i]==str[j]){
                for (int k =j;str[k]!='\0';k++){
                    str[k]=str[k+1];
                }
            }
        }
    }
            printf("%s\n",str);
    return 0;
}
