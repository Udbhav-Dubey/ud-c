#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    char str[1000];
    FILE* fptr=fopen("file12.txt","w");
    if (fptr==NULL){
        printf("could not open the file");
        return 0;
    }
    for (int i=0;i<3;i++){
        fgets(str,1000,stdin);
        fprintf(fptr,"%s\n",str);
    }
return 0;
}
