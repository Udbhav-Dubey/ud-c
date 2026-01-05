// C program to search all occurrences of a character in a string
#include <stdio.h>
#include <string.h>
int main(){
    printf("C program to search all occurrences of a character in a string\n");
    char str[1000];
    fgets(str,1000,stdin);
    int length = strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    printf("please enter the character\n");
    char c ;
    scanf(" %c",&c);
    int occ[length];
    int flag =0;
    int j,k=0;
    for (j=0;str[j]!='\0';j++){
        if (str[j]==c){
            flag =1;
            occ[k]=j;
        k++;
        }
    }
    if (flag==0){
        printf("not in the string\n");
    }
    if (flag>0){
        printf("at the following indexs:\n");
        for (int z=0;z<k;z++){
            printf("%d\n",occ[z]);
        }
    }
    return 0;
}
