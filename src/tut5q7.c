//HCF of two numbers using a separate function
#include <stdio.h>
int hcf(int n1,int n2){
    if (n2==0){return n1;}
    else return hcf(n2,n1%n2);
}
int main (){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("hcf of 2 numbers : %d",hcf(n1,n2));
return 0;
}
