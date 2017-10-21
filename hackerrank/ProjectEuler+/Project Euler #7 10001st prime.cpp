#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int prime[300000];
int pr[30000];

void sieve()
{
	int i,j,in=1;
	for(i=0;i<300000;i++)
		prime[i]=1;
	for(i=2;i<=500;i++)
		if(prime[i])
			for (j=i+i;j<300000;j+=i)
				prime[j]=0;
	for(i=2;i<300000;i++)
		if(prime[i])
			pr[in++]=i;
}

int main()
{
    sieve();
    int testcase,number;
    scanf("%d",&testcase);
    while(testcase--)
    {
        scanf("%d",&number);
        printf("%d\n",pr[number]);
    }
    return 0;
}
