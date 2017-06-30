#include <bits/stdc++.h>

using namespace std;
char a[100002];
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    string ans;
    for(i=0;i<2*n;i+=2)
    {
        int vis[4]={1,1,1,1};
            vis[a[i]-'A']=0;
            vis[a[i+1]-'A']=0;
            int p1=-1,p2=-1;
            for(int j=0;j<4;j++)
            {
                if(vis[j]==1)
                {
                    if(p1==-1)
                        p1=j;
                    else
                        p2=j;
                }
            }
            ans+=p1+'A';
            ans+=p2+'A';
            if(ans[i]==ans[i-1])
            {
                swap(ans[i],ans[i+1]);
            }
    }
    cout<<ans<<endl;
    return 0;
}
