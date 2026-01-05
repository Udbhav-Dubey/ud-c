#include <stdio.h>
int main (){
	printf("enter the year to find its leap yearaity : ");
	int leap;
	scanf("%d",&leap);
	(leap%4==0)?(leap%100!=0)? printf("leap year\n")
		: (leap%400==0)? printf("leap year\n")
		: printf("not a leap year\n")
		:printf("not a leap year");
		
return 0;
}
