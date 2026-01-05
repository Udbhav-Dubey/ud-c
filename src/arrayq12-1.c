//C program to print all unique elements in array
#include <stdio.h>
int main(){
    int n,count=1;
    printf("please enter the length of array\n");
    scanf("%d",&n);
    int arr[n],freq[n];
    printf("please enter the values in the arrays\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-7890;
    }
    printf("the array is \n");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if (freq[i]!=0){
            freq[i]=count;
        }
    }
    printf("the unique elements are \n");
    for (int i=0;i<n;i++){
        if (freq[i] == 1){
            printf("%d  ",arr[i]);
        }
    }
    printf("\n");
return 0;
}
