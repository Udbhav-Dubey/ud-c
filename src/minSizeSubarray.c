#include <stdio.h>
#include <limits.h>
int minSubArrayLen(int target, int* nums, int numsSize) {
    int count =0,result=0,right=0,left=0,j=0,minLength=INT_MAX;
    for (int i=0;i<numsSize;i++){
        result +=nums[i];
        right =i;
        while (result>=target){
            int length = right- left +1;
		if (length<minLength){
            minLength=length;
            }
        result -=nums[left];
        left++;
        }   
    }
        return (minLength==INT_MAX)?0:minLength;
}


int main (){
    printf("please enter the target value : ");
    int tar;
    scanf("%d",&tar);
    printf("please enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("please enter the values of arrays \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the minimum size is %d\n",minSubArrayLen(tar,arr,n));
return 0;
}
