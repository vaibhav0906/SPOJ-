#include<iostream>
    #include<math.h>
    using namespace std;
    int main(){
    	int a=0,b=0,c=0;
    	cin>>a>>b>>c;
    	while(a!=0 || b!=0||c!=0){
    		if(b*b==a*c){
    			cout<<"GP "<<(c*c)/b<<"\n";
    		}
    		else{
    			cout<<"AP "<<(c*2)-b<<"\n";
    		}
    		cin>>a>>b>>c;
    	}
    }
