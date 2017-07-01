#include <bits/stdc++.h>

typedef long long int llu;

using namespace std;

llu arr[20002];

int main()
{
    llu t;
    cin>>t;
    while(t--)
    {
        llu n,k;
        cin>>n>>k;
        llu i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
       llu  minn=arr[k-1]-arr[0];
        for(i=1;i<n-k+1;i++)
        {
            if((arr[k+i-1]-arr[i])<minn)
            {
                minn=arr[k+i-1]-arr[i];
            }
        }
            cout<<minn<<endl;
    }
    return 0;
}
