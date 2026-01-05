// C Program to print the average of the given list of numbers
#include <stdio.h>
int main(){
    int n;
    printf("average of how many numbers : ");
    scanf("%d",&n);
    int avg [n];
    for (int i=0;i<n;i++){
        scanf("%d",&avg[i]);
    }
    printf("the average of ");
    for(int i=0;i<n;i++){
        printf("%d , ",avg[i]);
    }
    for(int i=0;i<n;i++){
        if (avg[i]==avg[0]){
            avg[i]=avg[i];
        }
        else {avg[i]+= avg[i-1];}
    }
    printf("is %d\n",(avg[n-1]/n));
    return 0;
}
