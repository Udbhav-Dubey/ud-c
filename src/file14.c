#include <stdio.h>
#include <stdlib.h>
struct threeNum{int n1,n2,n3;}num;
int main (){
    FILE *fptr=fopen("file14.bin","rb");
    if (fptr==NULL){
        printf("not opening");
        exit(1);
    }
    for (int n=1;n<5;n++){
        fread(&num,sizeof(struct threeNum),1,fptr);
        printf("n1: %d\tn2: %d\tn3 : %d\n",num.n1,num.n2,num.n3);
    }
    fclose(fptr);
return 0;
}
