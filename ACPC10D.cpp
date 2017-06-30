#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cntr=0;
   while(1)
   {
         int row;
         cin>>row;

       if(row==0)return 0;

       int arr[row][3];
        cntr++;
        int i,j;

       for(i=1;i<=row;i++)
       {
           for(j=1;j<=3;j++)
           {
               cin>>arr[i][j];
           }
       }

       if(row==1){cout<<arr[1][2]<<endl;
        }
    else
    {
       arr[2][1]+=arr[1][2];
       arr[1][3]+=arr[1][2];
       arr[2][2]+=min(arr[2][1],min(arr[1][2],arr[1][3]));
       arr[2][3]+=min(arr[1][3],min(arr[1][2],arr[2][2]));
        for(i=3;i<=row;i++)
       {
           arr[i][1]+=min(arr[i-1][1],arr[i-1][2]);
           arr[i][2]+=min(min(min(arr[i-1][2],arr[i-1][3]),arr[i-1][1]),arr[i][1]);
           arr[i][3]+=min(min(arr[i][2],arr[i-1][2]),arr[i-1][3]);
       }

       cout<<cntr<<". "<<arr[row][2]<<endl;

    }
   }
    return 0;
}
