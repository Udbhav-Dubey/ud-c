/*WAP for the following
U N
U N I V
U N I V E R
U N I V E R S I
U N I V E R S I T Y
U N I V E R S I
U N I V E R
U N I V
U N*/
#include <stdio.h>
#include <string.h>
int main (){
    char str[]="U N I V E R S I T Y";
    int l=strlen(str);
    for (int i=2;i<l;i+=2){
        for (int j=0;j<i;j++){
            printf("%c",str[j]);
            if (j!=i-1)printf(" ");
        }
        printf("\n"); 
    for (int i=l-2;i>=2;i++){
        for (int j=0;j<i;j++){
            printf("%c",str[j]);
            if (j!=i-1)printf(" ");
        }
        printf("\n");
    }
        return 0;
    }
