#include <stdio.h>
int main (){
    int runs [3] =  { 97,91,35};
    for (int i=0; i < 3;i++){
        printf("the value of index %d is %d\n",i,runs[i]);
        printf("the address is %d\n",&runs [i]);
    }
    return 0 ;
}
