#include <stdio.h>
int  fun(){
    static  int local_var=21;
    return  local_var;
}
int main(){
    printf("%d", fun());
return 0;
}
