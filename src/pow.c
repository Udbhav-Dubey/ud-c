#include <stdio.h>
#include <math.h>
int main (){
    int numb,numb2,ld,fd,hold,numb1,count=0;
    double hold1;
    printf("please enter the number\n");
    scanf("%d",&numb);
    numb2 = numb ;
    ld = numb % 10 ;
    while (numb > 10){
        numb = numb / 10;
        count ++ ;
    }
    printf("%d\n",count);

    fd = numb % 10 ;
    printf("the first and last digit is %d and %d\n",fd,ld);
    hold1 = pow(10,count);
     printf("%f\n",hold1);
    numb1 = numb2 - hold1;
    printf("%d\n",numb1);
    numb1 = numb1 - ld ;
    numb1 = numb1 / 10 ;
    printf("swapped is %d%d%d\n",ld,numb1,fd);

  return 0;
}
