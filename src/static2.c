#include <stdio.h>
void fun(int n){
    static int depth =0;
    if (n==0 || depth >10) return ;
    printf("%d ",n);
    depth ++;
    fun(n-1);
}
int main (){
fun(-1);
return 0;
}
