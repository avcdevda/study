#include<stdio.h>

int main(void)
{
    int n,dp[1002]={0,1,2};
    scanf("%d",&n);
    for(int i=3;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }
    printf("%d",dp[n]);

    return 0;
}