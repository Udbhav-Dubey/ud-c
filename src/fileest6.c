#include <stdio.h>
#include <stdlib.h>
struct num{
    int n1,n2,n3;
}n;
int main (){
    FILE* fptr=fopen("fileest6.txt","wb");
    int flag=0;
    n.n1=5;
    n.n2=n.n1+2;
    n.n3=n.n1+3;
    flag=fwrite(&n,sizeof(struct num),1,fptr);
    if(!flag){
        printf("operation failed ");
    }
    else printf("worked");
    fclose(fptr);
    system("xdg-open fileest6.txt");
return 0;
}
