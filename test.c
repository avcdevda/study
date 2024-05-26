#include<stdio.h>

int main(void)
{
    long long int n,dp[101][11]={0},sum=0;
    for(int i=1;i<10;i++)
    {
        dp[1][i]=1;
        dp[i][10]=0;
    }
    scanf("%lld",&n);
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<10;j++)
        {
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%100000000;
        }
    }

    for(int i=0;i<10;i++)
    {
        sum+=dp[n][i];
    }
    printf("%lld",sum%1000000000);

    return 0;
}


