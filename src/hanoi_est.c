#include <stdio.h>
void hanoi(int n,char a ,char b ,char c){
        if (n==1){printf("well move disk 1 from %c to %c\n",a,c);return ;}
        hanoi(n-1,a,c,b);
        printf("well move disk %d from %c to %c \n",n,a,c);
        hanoi(n-1,b,a,c);
}
int main (){
    printf("how many plates do you have \n");
    int n;
    scanf("%d",&n);
    printf("well instructions for %d disks are : \n",n);
    hanoi(n,'A','B','C');
return 0;
}
