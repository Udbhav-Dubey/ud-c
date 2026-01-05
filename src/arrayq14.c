// C program to delete duplicate elements from array
#include <stdio.h>
int main(){
    printf("please enter the index n of array\n");
    int n,count,k=0;
    scanf("%d",&n);
    int arr[n],freq[n],arr2[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=0;
    }
    for (int i=0;i<n;i++){
        count =0;
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                count ++;
            }
            freq[i]=count;
        }
    }
    freq[n]=0;
    for (int i=0;i<n;i++){
            if (freq[i]==0){
                arr2[i]=arr[i];
                    k++;
            }
        }
    k++;
    printf("k is %d\n",k);
    for (int i=0;i<k;i++){
        printf("%d      ",arr2[i]);
    }
    printf("\n");
    return 0;
}
