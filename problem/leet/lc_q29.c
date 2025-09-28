#include <stdio.h>
int divide(int dividend, int divisor) {
	int checkn=0;
    	int checkd=0;
	long long a = dividend;
	long long b = divisor;
	if (a<0){a=-a;checkn=-1;}
	if (b<0){b=-b;checkd=-1;}
    int count =0;
    while (a>0 && a>= b){
        a=a-b;
        count ++;
    }
    if ((checkn == 0 && checkd == 0) || (checkn==-1 && checkd==-1)){return count;}
    else return -count;
}
int main (){
    int n,d;
    scanf("%d",&n);
    scanf("%d",&d);
    printf("%d\n",divide(n,d));
return 0;
}
