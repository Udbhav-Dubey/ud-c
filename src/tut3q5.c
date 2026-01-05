//To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else
//(ii) ternary operator
#include <stdio.h> 
int main (){
    int n1;
    scanf("%d",&n1);
    if (n1%2==0){
        printf("even\n");
    }
    else {printf("odd\n");}
    if (n1>0){printf("+ve");}
    else {printf("-ve");}
    (n1%2==0)?printf("even\n"):printf("odd\n");
    (n1>0)?printf("+ve"):printf("-ve");
return 0;
}
