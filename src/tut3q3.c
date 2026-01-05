//To implement calculator (+,-/,*,% ) using switch statement
#include <stdio.h>
int main(){
    char ch;
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    switch(ch){
    case '+':
        printf("%d",n1+n2);
    break;
    case '-':
        printf("%d",n1-n2);
    break;
    case '*':
        printf("%d",n1*n2);
    break;
    case '/':
        printf("%d",n1/n2);
    break;
    }
return 0;
}
