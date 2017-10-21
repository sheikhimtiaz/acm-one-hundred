#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int testcase,i;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++)
    {
        long long j, ans=0, num, temp, k;
        scanf("%lld",&num);
        k=num;
        for(j=0;j<num;j++)
        {
            scanf("%lld",&temp);
            temp=temp*k;
            if(temp>ans) ans=temp;
            k--;
        }
        printf("Case %d: %lld\n",i+1,ans);
    }
    return 0;
}
