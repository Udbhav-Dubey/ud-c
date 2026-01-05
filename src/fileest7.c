#include <stdio.h>
#include <stdlib.h>
struct num{int n1,n2,n3;}n;
int main (){
    FILE* fptr=fopen("fileest6.txt","rb");
    fread(&n,sizeof(struct num),1,fptr);
    printf("%d %d %d ",n.n1,n.n2,n.n3);
    fclose(fptr);
return 0;
}
