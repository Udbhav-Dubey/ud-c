#include <stdio.h>
#define true 1
#define false 0
#define bool int
bool a= true;
bool b=false ;

int main (){
    int n;
    printf("please enter the length of a array\n");
    scanf("%d",&n);
    int numb[n];
    int j;
    for(int i=0;i<n;i++){
        printf("value for index %d\n",i);
        scanf("%d",&numb[i]);

    } for (int i=0;i<=n/2;i++){
            if (numb[i]!=numb[n-1-i]){
                j=a;break;
            }
    }
     if (j==a){printf("not a palindrome\n");}
         else {printf(" palindrome\n");}

    return 0;
}
