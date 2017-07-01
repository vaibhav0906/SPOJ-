#include <bits/stdc++.h>
typedef long long int lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    lint t;
    cin>>t;
    while(t--)
    {
        int n,tot;
        cin>>n>>tot;
        lint arr[n];
        memset(arr,0,sizeof(arr));
        for(lint i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        lint sum=0,cnt=0,mxcnt=0,start=0;
        lint cost=INT_MAX;
        for(lint i=0;i<n;i++)
        {
            sum+=arr[i];
            cnt=cnt+1;
            if(cnt>mxcnt&&sum<=tot||cnt==mxcnt&&sum<cost)
            {
                mxcnt=cnt;
                cost=sum;
            }
            while(sum>tot)
            {
                sum=sum-arr[start];
                cnt--;
                start++;
            }
            if(cnt>mxcnt&&sum<=tot||cnt==mxcnt&&sum<cost)
            {
                mxcnt=cnt;
                cost=sum;
            }

        }

        cout<<cost<<" "<<mxcnt<<endl;
    }
    return 0;
}
