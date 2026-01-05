#include <stdio.h>
#include <math.h>
int main (){
    double x;
    double result;
    scanf("%lf",&x);
    result = sin(x);
    printf("sin(%lf) = %lf",x,result);
    return 0;
}
