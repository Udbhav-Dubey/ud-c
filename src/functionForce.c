#include <stdio.h>
float force (double mass);
int main () {
    double mass ;
    printf("please enter the mass\n");
    scanf("%lf",&mass);
    printf("the force of attraction on mass %f by earth is %lf\n",mass,force(mass));
    return 0;

}
float force (double mass){
    return mass * 9.8;
}
