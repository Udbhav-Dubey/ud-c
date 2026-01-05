#include <stdio.h>
int main (){
area (int l);
printf("%d\n",area);
return 0;
}
int area (int l){
    int area;
    printf("please enter the side of the triangle\n");
    scanf("%d",&l);
    area = l * l ;
    return area;
}
