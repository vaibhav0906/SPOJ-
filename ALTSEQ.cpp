#include <bits/stdc++.h>

typedef long long int llu;
using namespace std;

llu f[5005],arr[5005];
int main()
{
    llu n;
    cin>>n;
    llu i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        f[i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(((arr[j]>0&&arr[i]<0)&&-1*arr[i]>arr[j])|| ((arr[j]<0&&arr[i]>0)&&-1*arr[j]<arr[i]))
            {
                f[i]=max(f[i],f[j]+1);
            }
        }
    }
    llu maxx=1;
    for(i=1;i<n;i++)
    {
        if(f[i]>maxx)
            maxx=f[i];
    }
    cout<<maxx<<endl;
    return 0;
}
