#include <stdio.h>
double faren (double c);
int main (){
    double c;
    printf("please enter the temp in celcius\n");
    scanf("%lf",&c);
    printf("%lf°C ---> %lf F\n",c,faren(c));
    return 0;
}
double faren (double c){
    return (c * 9/5) + 32 ;
}
