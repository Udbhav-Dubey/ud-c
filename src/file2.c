#include <stdio.h>
#include <stdlib.h>
int main (){
FILE* fptr ;
fptr=fopen("text1.txt","r");
if (fptr==NULL){
    printf("file is not opened ");
}
else {printf("file was opened");}
return 0;
}
