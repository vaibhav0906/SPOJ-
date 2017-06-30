#include <bits/stdc++.h>
#include <string>
using namespace std;
int StringToInteger(string NumberAsString)
{
	int NumberAsInteger=0;
	for (int i = 0; i < NumberAsString.size(); i++)
		NumberAsInteger = NumberAsInteger * 10 + (NumberAsString[i] - '0');
 
	return NumberAsInteger;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string str1,op1,str3,op2,str5;
    cin>>str1>>op1>>str3>>op2>>str5;
    int flag=0;
    if(str1.find("machula")!=std::string::npos)
    {
        flag=1;
    }
    else if(str3.find("machula")!=std::string::npos)
    {
        flag=3;
    }
    else if(str5.find("machula")!=std::string::npos)
    {
        flag=5;
    }
    int x,y,ans;
    if(flag==1)
    {
    x= StringToInteger(str3);
    y= StringToInteger(str5);
    ans=y-x;
    cout<<ans<<" + "<<x<<" = "<<y<<endl;
    }
    if(flag==3)
    {
     x= StringToInteger(str1);
    y= StringToInteger(str5);
 
    ans=y-x;
    cout<<x<<" + "<<ans<<" = "<<y<<endl;
    }
    if(flag==5)
    {
       x= StringToInteger(str1);
    y= StringToInteger(str3);
    ans=y+x;
    cout<<x<<" + "<<y<<" = "<<ans<<endl;
    }
    }
    return 0;
}