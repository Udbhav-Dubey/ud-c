// C program to find perfect numbers between 1 to n
#include <stdio.h>
int main (){
	printf("please enter the number till you want to find perfect number\n");
	int n;
	scanf("%d",&n);
	for (int i=1;i<n;i++){
		int num = i;
		int sum =0;
		for (int j=1;j<i;j++){
			if (i%j==0){
				sum+=j;
			}
		}
		if (sum ==i){
			printf("%d ",i);
		}
	}
return 0;
}
