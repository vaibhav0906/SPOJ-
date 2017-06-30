#include <bits/stdc++.h>

using namespace std;

int T[6105][6105];
int result=0;
int longsub(string x,string y,int a)
{
    int i,j;
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=a;j++)
        {
            if(i==0||j==0)
            {
                T[i][j]=0;
            }
            else if(x[i-1]==y[j-1])
            {
                T[i][j]=T[i-1][j-1]+1;
            }
            else
            {
                T[i][j]=max(T[i-1][j],T[i][j-1]);
            }
        }
    }
    return T[a][a];
}
int main()
{
    int t;
    cin>>t;
    string x,y;
    getline(cin,x);
    while(t--)
    {
    getline(cin,x);
    int a=x.length();
    y=x;
    for(int i=0,j=y.size()-1;i<j;++i,--j)
    {
        char temp=y[i];
        y[i]=y[j];
        y[j]=temp;
    }
    cout<<(a-longsub(x,y,a))<<endl;
    flush(cout);
    }

    return 0;
}
