//Linear search for element
#include <stdio.h>
int main (){
    printf("please enter the size : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int el=-1;
    printf("enter the element to be searched\n");
    scanf("%d",&el);
    for (int i=0;i<n;i++){
        if (arr[i]==el){
            printf("element is at %d\n",i+1);
        }
    }
    
return 0;
}
