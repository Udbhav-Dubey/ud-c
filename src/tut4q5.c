//Binary search for an element
#include <stdio.h>
int main (){
    int arr[100];
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int el;
    printf("enter the element to be searched\n");
    scanf("%d",&el);
    // first we gotta sort it;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j+1]=arr[j];
                arr[j+1]=temp;
            }
        }
    }
    // bubble
    int right=0,left=n-1;
    while(left<=right){
    int mid=right+(left-right)/2;
    if (arr[mid]==el){printf("found at %d",mid);break;}
    else if (arr[mid]>el){right=mid-1;}
    else {left=mid+1;}
    }
return 0;
}
