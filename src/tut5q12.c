#include <stdio.h>
void hanoi(int n,char a,char b,char c){
    if (n==1){printf("put disk 1 from %c to %c\n",a,c);return;}
    hanoi(n-1,a,c,b);
    printf("put disk %d from %c to % c\n",n,a,c);
    hanoi(n-1,b,a,c);
}
int main (){
int n;
printf("enter the number of disks : ");
scanf("%d",&n);
printf("\n solution to tower of hanoi with %d disk is",n);
hanoi(n,'A','B','C');
return 0;
}
