#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main ()
{
    int testcase,cs=1; scanf("%d",&testcase);
    while(testcase--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a*a==(b*b + c*c) || b*b==(a*a + c*c) || c*c==(a*a + b*b))
            printf("Case %d: yes\n",cs++);
        else
            printf("Case %d: no\n",cs++);
    }
    return 0;
}
