#include <stdio.h>
int main (){
	printf("enter three numbers\n");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	(a>b && a > c)? printf("%d is greatest\n",a):
		(b>a && b>c)? printf("%d is greatest\n",b):
		(c>a && c>b) ? printf("%d is greatest\n",c)
		: printf("all are equal") ;
		return 0;

}
