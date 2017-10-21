#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int test,p;
long i,n,b;
double f[1000010];

int main()
{
    scanf("%d",&test);
    for(i=1;i<=1000000;i++)
    {
        f[i]=log((i))+f[i-1];
    }
    for(p=1;p<=test;p++)
    {
        scanf("%ld%ld",&n,&b);
        printf("Case %d: %ld\n",p,(long)(f[n]/(f[b]-f[b-1]))+1);
    }
    return 0;
}
