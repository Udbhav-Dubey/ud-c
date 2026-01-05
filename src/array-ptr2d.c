#include <stdio.h>
#define N 3
void fun(int arr[][N],int M){
    int i,j;
    for(int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            printf("%d  ",arr[i][j]);
        }
    printf("\n");
    }
}

int main(){
    int M=2;
    int arr[2][3]={5,13,51,32,64,31};
    fun(arr,M);
    return 0;
}
