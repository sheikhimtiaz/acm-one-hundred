#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define sz 1000000
using namespace std;
long long dp2[sz + 5];
long long dp5[sz + 5];

int main()
{
	int j,x,n,r,p,q,testcase;
	long long a,b,temp,two,five;
	dp2[1] = 0;
	dp5[1] = 0;
	for (int i = 2; i <= sz; i++)
    {
		j = i;
		temp = 0;
		while(j % 2 == 0) {
			temp++;
			j = j / 2;
		}
		dp2[i] = dp2[i-1] + temp;
		j = i;
		temp = 0;
		while(j % 5 == 0) {
			temp++;
			j = j / 5;
		}
		dp5[i] = dp5[i-1] + temp;
	}
	scanf("%d", &testcase);
	for (int cs = 1; cs <= testcase; cs++)
	{
		scanf("%d%d%d%d", &n,&r,&p,&q);
		two = (dp2[p] - dp2[p-1]) * q;
		five = (dp5[p] - dp5[p-1]) * q;
		two += (dp2[n] - dp2[n-r]);
		five += (dp5[n] - dp5[n-r]);
		two = two - dp2[r];
		five = five - dp5[r];
		a = min(two, five);
		printf("Case %d: %lld\n", cs, a);
	}
	return 0;
}
