#include <bits/stdc++.h>

typedef long long int llu;
using namespace std;

llu price[1005];
llu val[1005];
int main()
{
	llu j,i,n,k,t;
	cin>>t;
	while(t--)
    {
        cin>>n>>k;
        for(i=0;i<k;i++)
        {
            cin>>price[i];
        }
        for(i=1;i<=k;i++)
        {
            llu min_value=INT_MAX;
            for(j=0;j<i;j++)
            {
                if(price[j]!=-1)
                {
                min_value=min(min_value,price[j]+val[i-j-1]);
                }
            }
            val[i]=min_value;
        }
        if(val[k]==INT_MAX)
            cout<<"-1"<<endl;
        else
        cout<<val[k]<<endl;
    }

	return 0;
}
