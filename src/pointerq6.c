//C program to swap two arrays using pointers
#include <stdio.h>
int main (){
    int arr1[5],arr2[5];
    int *ptr1=arr1;
    int *ptr2=arr2;
    for (int i=0;i<5;i++){
        scanf("%d",ptr1 + i);
    }
    for (int i=0;i<5;i++){
        scanf("%d",ptr2 + i);
    }
    for (int i=0;i<5;i++){
        int temp = *(ptr1 + i);
        *(ptr1 + i)= *(ptr2 + i);
        *(ptr2 + i)= temp;
    }
     for (int i=0;i<5;i++){
        printf(" %d ",*(ptr1 + i));
    }
    for (int i=0;i<5;i++){
        printf(" %d ",*(ptr2 + i));
    }

return 0;
}
