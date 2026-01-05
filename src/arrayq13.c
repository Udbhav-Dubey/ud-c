// C program count total duplicate elements in array
#include <stdio.h>
int main(){
    int n,count=0;
    printf("please enter the length of array\n");
    scanf("%d",&n);
    int arr[n],count1[n],arr3[n],temp,freq=0;
    printf("please enter the values in the arrays\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is \n");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for (int i=0;i<n;i++){
        count=0;
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                count ++ ;
            }
        }
        count1[i]=count ;
    }
    printf("\n");
    for (int i=0;i<n;i++){
        printf("%d  ",count1[i]);
    }
    for (int i=0;i<n;i++){
        if (count1[i]>0){
            freq ++;
        }
    }
    printf("\nnumber of duplicates in the array is %d",freq);
    printf("\n");
return 0;
}
