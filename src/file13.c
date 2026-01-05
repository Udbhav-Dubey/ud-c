#include <stdio.h>
#include <string.h>
int main (){
    FILE* ptr=fopen("file13.txt","r");
    if (ptr==NULL){
        printf("failed to open\n");
        return 0;
    }
    char buf[100];
    while (fscanf(ptr,"%*s %*s %s ",buf)==1){
        printf("%s\t",buf);
    }
return 0;
}
