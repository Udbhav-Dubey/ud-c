#include <stdio.h>
float avrg (int a,int b,int *sum , float *average){
    *sum =  a + b ;
    *average = *sum / 2 ;
}
int main (){
    int a,b,sum;
    float average ;
    printf("please enter the 2 numbers\n");
    scanf("%d%d",&a,&b);
    avrg(a,b,&sum,&average);
    printf("the sum : %d\n the average : %f\n",sum,average);
    return 0;
}
