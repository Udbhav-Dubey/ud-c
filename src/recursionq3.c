//C program to print even or odd numbers in given range using recursion
#include <stdio.h>
void printer(int begin,int end){
    if (begin >end){return ;}
    else {printf("%d ",begin);
        printer(begin+2,end);
    }
}
int main (){
    printf("please enter the number to begin and end with");
    int begin,end;
    scanf("%d%d",&begin,&end);
    printer(begin,end);    
return 0;
}
