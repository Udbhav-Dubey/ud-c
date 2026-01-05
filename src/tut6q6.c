//WAP to pass and return an array out of a function.
#include <stdio.h>
int adder(int *arr,n){
    for (int i=0;i<5;i++){
        arr[i]+=5;
    }
    return arr;
}
int main (){
    int arr[5]={1,2,3,4,5};
    adder(arr,5);
return 0;
}
