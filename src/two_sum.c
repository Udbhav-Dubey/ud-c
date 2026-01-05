// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
#include <stdio.h>
int main(){
    printf("please tell index of array\n");
    int n,target,p1,p2;
    scanf("%d",&n);
    printf("please tell the elments of array\n");
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("now tell the target\n");
    scanf("%d",&target);
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (nums[i]+nums[j]==target){
                p1=i;
                p2=j;
            }

        }
    }
    printf("the two values are %d,%d\n",p1,p2);
    return 0;
}
