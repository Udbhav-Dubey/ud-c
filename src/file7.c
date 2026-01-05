#include <stdio.h>
#include <stdlib.h>
struct threeNum{
    int n1,n2,n3;
}num;
int main (){
    int n=1;
    FILE* fptr;
    fptr=fopen("file7.bin","wb");
    int flag=0;
    num.n1=n;
    num.n2=5*n;
    num.n3=5*n+2;
    flag=fwrite(&num,sizeof(struct threeNum),1,fptr);
    if (!flag)
        printf("operation failed ");
    else printf("worked");
    fclose (fptr);
return 0;
}
