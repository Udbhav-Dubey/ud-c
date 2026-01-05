//To find greatest of 3 integers using two methods (a) if-else and (b) ternary operator.
#include <stdio.h>
int main (){
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1>n2 && n1 >n3){printf("%d is greeatest",n1);}
    else if (n2>n1 && n3>n2){printf("%d is greatest",n2);}
    else if (n3>n1 && n3 >n2){printf("%d is greatest",n3);}
    int max=   (n1>=n2 && n1 >= n3)?n1:(n2>=n1 && n2>=n3)?n2:n3;
    return 0;
}
