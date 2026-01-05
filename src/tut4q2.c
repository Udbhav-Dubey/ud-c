//To insert an element at a given location of an array
#include <stdio.h>
int main (){
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int arr[100];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int ins;
    printf("enter the element to be inserted : ");
    scanf("%d",&ins);
    printf("enter where to insert");
    int loc;
    scanf("%d",&loc);
    for (int i=n;i>loc;i--){
        arr[i]=arr[i-1];
    }
    arr[loc]=ins;
    n++;
return 0;
}
