// C program to find maximum occurring character in a string
#include <stdio.h>
#include <string.h>
int main(){
    int occ[1000]={0};
    printf("C program to find maximum occurring character in a string\n");
    char str [1000];
    fgets(str, 1000, stdin);
    int length = strlen(str);
    if (str[length-1]=='\n'){
        str[length-1]='\0';
        length--;
    }
    for (int i=0; str[i]!='\0';i++){
        occ[(int)str[i]]++;
    }
    int max =0,k=0;
    for (int i=0;i<1000;i++){
        if (occ[i]>max){
            max = occ[i];
            k=i;
        }
        }
printf("maximum occuring character is %c with %d occuerence\n", k, max);
    return 0;
}
