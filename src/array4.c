#include <stdio.h>
int main (){
    int runs [4] = {40,30,48,98};
    int *j = &runs[0];
    for (int i=0;i<4;i++);
    printf("the sum of %d and %d is %d \n",runs[i],runs[i+1],*j + *j+1);
    return 0;
}
