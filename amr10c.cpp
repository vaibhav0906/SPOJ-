#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

const int MAX = 1024;
const int LMT = 32;
const int LEN = 200;

int total;
int flag[MAX>>6], primes[LEN];

#define ifc(i) (flag[i>>6]&(1<<((i>>1)&31)))
#define isc(i) (flag[i>>6]|=(1<<((i>>1)&31)))

void sieve() {
	int i, j, k;
	total = 1;
	primes[0] = 2;
	for(i = 3; i < MAX; i+=2) {
		if(!ifc(i)) {
			primes[total++] = i;
			if(i < 32) for(j=i*i, k=i<<1; j < MAX; j+=k) isc(j);
		}
	}
}
int factor(int n)
{
    int i;
    int res=0,rt=(int) sqrt((double)n);
    for(i=0;primes[i]<=rt;i++)
    {
        if(n%primes[i]==0)
        {
            int cnt=0;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                cnt++;
            }
            rt=(int) sqrt((double)n);
            res=max(res,cnt);
        }

    }
    if(n>1&&1>res)res=1;
    return res;
}
int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",factor(n));
    }
    return 0;
}
