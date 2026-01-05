#include  <stdio.h>
int number (int n){
    int x;
    if (x==1){return 0;}
        else {return number(x) + number (x-1);}

}
int main (){
    int x;
    printf("please the number\n");
    scanf("%d",&x);
    printf("sum till %d is %d\n",x,number(x));
    return 0;
}
