#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int solve(char* s,int* memo,int n,int i){
    if (i==n){return 1;}
    if (s[i]=='0'){return 0;}
    if (memo[i]!=-1){return memo[i];}
    int ways=solve(s,memo,n,i+1);
    if (i+1<n&&(s[i]=='1'||(s[i]=='2'&&s[i+1]<='6'))){
        ways+=solve(s,memo,n,i+2);
    }
    return memo[i]=ways;
}
int numDecodings(char* s) {
    int n=strlen(s);
    int* memo=(int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        memo[i]=-1;
    }
    int res=solve(s,memo,n,0);
    free(memo);
    return res;
}
