#include<stdio.h>

int main(void)
{
    long long int n,dp[100]={1,1,2,3,5};
    scanf("%lld",&n);
    for(int i=3;i<n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    printf("%lld",dp[n-1]);
    return 0;
}
