// C program to find first occurrence of a word in a string
#include <stdio.h>
#include <string.h>
int main (){
    int flag =0;
    printf("C program to find first occurrence of a word in a string\n");
    char str[1000];
    char str2[1000];
    fgets(str,1000,stdin);
    int length = strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    printf("please enter the word to be checked\n");
    int length2 = strlen(str2);
    if (str2[length2-1]=='\n'){
        str2[length2-1]='\0';
        length2--;
    }
    int j;
    for (int i=0;str[i]!='\0';i++){
        if (str[i]==str2[0]){
            for (j=0;str2[j]!='\0';j++){
                if (str[i+j]!=str2[j]){
                    break;
                }
            }
            if (str2[j]=='\0'){  // match found
                flag = i+1;
                break;
            }
        }

    }
    if (flag!=0){
        printf("word %s is at %d ",str2,flag);
    }
    else {
        printf("not found\n");
    }
    return 0;
}
