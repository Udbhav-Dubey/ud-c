int lengthOfLIS(int* nums, int numsSize) {
    int* dp=(int*)malloc(sizeof(int)*numsSize);
    for (int i=0;i<numsSize;i++){
        dp[i]=1;
    }
    int maxy=0;
    for (int i=1;i<numsSize;i++){
        for (int j=0;j<i;j++){
            if (nums[i]>nums[j]){
            dp[i]=(dp[j]+1>dp[i])?dp[j]+1:dp[i];
            }
        }
        maxy=(maxy>dp[i])?maxy:dp[i];
    }
    free(dp);
    return maxy;
}
