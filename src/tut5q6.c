//Display first n prime numbers.
#include <stdio.h>
int prime(int i,int c){
    if (i==2){return 1;}
    if (c*c>i){return 1;}
    if (i%c==0){return 0;}
    else return prime(i,c+1);
    
}
int main (){
    printf("enter the digit : ");
    int n;
    scanf("%d",&n);
    for (int i=2;i<n;i++){
        int val=prime(i,2);
        if (val!=0){printf("%d ",i);}
    }
return 0;
}
