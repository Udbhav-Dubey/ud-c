//C program to find Armstrong numbers between 1 to n
#include <stdio.h>
#include <math.h>
int main (){
	printf("enter the number till you want to find armstrong number : ");
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
	int sum =0;
		int num =i;
	int digits = (int)log10(num)+1;
	while (num >0){
		int last_digit=num%10;
		sum += ceil(pow(last_digit,digits));
		num = num/10;
	}
	if (sum == i ){
		printf("%d ",i);
	}
	}
return 0;
}
