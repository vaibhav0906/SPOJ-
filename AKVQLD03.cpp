#include <bits/stdc++.h>

using namespace std;
int tree[4000002];
int arr[1000002];


int build(int index,int start,int end)
{
   if(start == end)
   {
      tree[index] = arr[start];
      return arr[start];
   }
      int mid = (start+end)/2;
      build(2*index+1,start,mid);
      build(2*index+2,mid+1,end);


      tree[index] = tree[2*index+1]+ tree[2*index+2];
      return tree[index];
}

int query(int index,int start,int end,int l,int r)
{
   int result;
   result=INT_MIN;

   if(r<start || end<l)
      return result;
   if(l<=start && end<=r)
      return tree[index];

   int mid = (start+end)/2;
   if (l > mid)
         return query(2*index+2, mid+1, end, l, r);
   if (r <= mid)
         return query(2*index+1, start, mid, l, r);

   int left = query(2*index+1,start,mid,l,r);
   int right = query(2*index+2,mid+1,end,l,r);

   result = left+ right;
   return result;
}
int updateval(int index,int start,int end,int idx,int value)
{
    if(start == end)
    {
        arr[start]+=value;
        tree[index] = arr[start];
        return arr[start];
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx && idx <= mid)
        {
            updateval(2*index+1, start, mid, idx, value);
        }
        else
        {
            updateval(2*index+2, mid+1, end, idx, value);
        }
        tree[index] = tree[2*index+1] + tree[2*index+2];
    }
}

int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int i;
        for(i=0;i<A;i++)
    {
        arr[i]=0;
    }
    build(0,0,A-1);
    while(B--)
    {
        int x,y;
        char str[6];
        scanf("%s %d %d",str,&x,&y);
        if(str[0]=='a')
        {
            updateval(0,0,A-1,x-1,y);
        }
        else
        {
            printf("%d\n",query(0,0,A-1,x-1,y-1));
        }
    }
    return 0;
}
