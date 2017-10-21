#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main()
{
    int t,i;
    double r,por,area,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        x=4*r*r;
        y=pi*(r*r);
        area=x-y;
        area=area+.000000001;
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}
