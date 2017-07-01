#include <bits/stdc++.h>

using namespace std;

char pattern[10]={'A','L','L','I','Z','Z','W','E','L','L'};
char grid[105][105];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,1,0,1,-1,1,0,-1};
bool visited[105][105];
int r,c;
bool isingrid(int i,int j)
{
    if(i>=0&&i<r&&j>=0&&j<c)
        return true;
    else
        return false;
}
string dfs(int i,int j,int sm)
{
    string s;
    visited[i][j]=1;
    if(sm==9)
        return "YES";
    else
    {
        int t;
        for(t=0;t<9;t++)
        {
            if(isingrid(dx[t]+i,dy[t]+j)&&grid[i+dx[t]][j+dy[t]]==pattern[sm+1]&&!visited[i+dx[t]][j+dy[t]])
            {
                visited[i+dx[t]][j+dy[t]]=1;
                s=dfs(i+dx[t],j+dy[t],sm+1);
                if(s=="YES")
                {
                    return s;
                    visited[i+dx[t]][j+dy[t]]=0;
                }
            }
        }
    }
    visited[i][j]=0;
    return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>r>>c;
        int i,j;
        for(i=0;i<r;i++)
        {
            cin>>grid[i];
        }
        memset(visited,0,sizeof(visited));

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(grid[i][j]=='A'&&dfs(i,j,0)=="YES")
                    flag=1;
            }
            if(flag)
                break;
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
   return 0;
}
