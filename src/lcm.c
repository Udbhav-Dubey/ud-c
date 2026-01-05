// C program to print all prime numbers between 1 to n
#include <stdio.h>
int main (){
int i,j,prime,n;
printf("write the number till we want to find prime\n");
scanf("%d",&n);
for (i=2;i<=n;i++){
prime=1;
for (j=2;j<=i/2;j++){
if (i%j==0){
prime =0 ;
break;
}
}
if (prime==1){
printf("%d\n",i);}
}
return 0;
}
