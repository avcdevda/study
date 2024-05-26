#include<stdio.h>

int main(void)
{

    int dp[12]={1,2,4};
    int n,t;
    scanf("%d",&t);

    for(int i=3;i<11;i++)
    {
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("%d\n",dp[n-1]);
    }

    return 0;
}