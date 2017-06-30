#include <bits/stdc++.h>
typedef long long int llu;
using namespace std;
char str[5002];
int main()
{
    scanf("%s",str);
    while(str[0]!='0')
    {
        llu d=strlen(str);
        llu dp[d+1];
        for(llu j=0;j<=d+1;j++)
        {
            dp[j]=0;
        }
        llu i=1;
        dp[0]=1;
        while(i<d)
        {
        llu num=(str[i-1]-'0')*10;
        num+=str[i]-'0';
        if(str[i]-'0')
        {
            dp[i]=dp[i-1];
        }
        if(num>9&&num<27)
        {
            dp[i]+=dp[i-2<0?0:i-2];
        }
        i=i+1;
    }
        printf("%lld\n",dp[d-1]);
        scanf("%s",str);
    }
    return 0;
}
