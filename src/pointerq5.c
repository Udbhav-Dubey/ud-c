//C program to copy one array to another using pointers
#include <stdio.h>
int main (){
    int arr1[5],arr2[5];
    int *ptr1=arr1;
    int *ptr2=arr2;
    for (int i=0;i<5;i++){
        scanf("%d",ptr1 + i);
    }
    for (int i=0;i<5;i++){
        *(ptr2 + i )= *(ptr1 + i);
    }
    for (int i=0;i<5;i++){
        printf(" %d ", *(ptr2+i));
    }
return 0;
}
