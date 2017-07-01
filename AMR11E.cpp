#include <bits/stdc++.h>

using namespace std;
typedef long long int llu;
llu arr[1002]={0};
llu ans[2671]={0};
int main()
{

    llu t,n,j,i;
    for(i=2;i<2671;i++)
    {
        if(ans[i]==0)
        {
            for( j=2*i;j<2671;j=j+i)
            {
                ans[j]++;
            }
        }
    }
    for(i=29,j=0;i<2671,j<1002;i++)
    {
        if(ans[i]>=3)
        {
            arr[j++]=i;
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<arr[n-1]<<endl;
    }

    return 0;
}
