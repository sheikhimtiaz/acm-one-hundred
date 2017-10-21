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
        long long a,b,temp;
        scanf("%lld%lld",&a,&b);
        temp=a*b;

        printf("%lld\n",temp);
    }
    return 0;
}
