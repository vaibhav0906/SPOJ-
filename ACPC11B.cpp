#include <bits/stdc++.h>
typedef long long int llu;
using namespace std;

llu arr1[1002],arr2[1002];
int main()
{
    llu t;
    cin>>t;
    while(t--)
    {
        llu n,m;
        cin>>n;
        llu i,j;
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        llu dif=INT_MAX;
        llu minn;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr1[i]>=arr2[j])
                {
                    minn=arr1[i]-arr2[j];
                }
                else if(arr2[j]>arr1[i])
                {
                    minn=arr2[j]-arr1[i];
                }
                if(minn<dif)
                {
                    dif=minn;
                }
            }
        }
            cout<<dif<<endl;
    }

    return 0;
}
