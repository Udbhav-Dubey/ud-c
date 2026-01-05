#include <stdio.h>
double average (double a,double b,double c);
int main (){
    double a,b,c;
    printf("please enter the number\n a\n b\n c\n respectfully\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("the average of %f,%f,%f is %f\n",a,b,c,average(a,b,c));
    return 0;
}
double average (double a,double b,double c){
    double result ;
    result = (a+b+c)/3;
    return result ;
}
