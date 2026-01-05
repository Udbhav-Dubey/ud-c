// C program to check whether a string is palindrome or not
#include <stdio.h>
int main(){
    int i=0;
    int flag=0;
    printf("C program to check whether a string is palindrome or not\n");
    char str1[1000];
    fgets(str1,1000,stdin);
    for(i=0;str1[i]!='\0';i++){
        if (str1[i]=='\n'){
            str1[i]='\0';
            break;
        }
    }
    int j=i/2;
    for (int k=0;k<=j;k++){
        i--;
        if (str1[k]!=str1[i]){
            flag=1;
        }
    }
    if (flag==1){printf("not a palindrome\n");}
    if (flag==0){printf("palindrome\n");}
    printf("\n");
    return 0;
}
