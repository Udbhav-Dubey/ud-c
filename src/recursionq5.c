//C program to find reverse of a number using recursion
#include <stdio.h>
#include <math.h>
int reverse(int number,int reverse){
  	if (number==0){
  	return result;
  	}	
      return reverse(number/10,result*10+number%10);
    }
}
int main (){
    printf("please enter the number to be reversed: ");
    int number;
    scanf("%d",&number);
    printf("%d is the output",reverse(number,0));
return 0;
}
