#include<stdio.h>
#define min(a,b) a<b?a:b


int main(void)
{

    int dp[1000001]={0,0,1,1},n;
    scanf("%d",&n);
    for(int i=4;i<=n;i++)
    {
        if(i%6==0)
        {
            dp[i]=min(min(dp[i/3]+1,dp[i/2]+1),dp[i-1]+1);
        }
        else if(i%3==0)
        {
            dp[i]=min(dp[i/3]+1,dp[i-1]+1);
        }
        else if(i%2==0)
        {
            dp[i]=min(dp[i/2]+1,dp[i-1]+1);
        }
        else dp[i]=dp[i-1]+1;
        

    }
    printf("%d",dp[n]);
    return 0;
}
