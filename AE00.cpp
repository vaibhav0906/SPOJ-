#include <iostream>
#include <stdio.h>

using namespace std;
int factor(int a)
{
    int i,j;
    int c=0;

    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c=c+1;
        }
    }
    if(c%2==0){
        return c/2;
    }
    else
    {
        return c/2+1;
    }

}
int main()
{

    int a,x=0;
    scanf("%d",&a);
    while(a!=0)
    {
        x=x+factor(a);
        a=a-1;
    }
    printf("%d\n",x);
    return 0;
}
