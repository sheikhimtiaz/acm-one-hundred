#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main()
{
    int x,y,z;
    double a,b,c,d,f,g,h;
    double e;
    scanf("%d", &x);
    for(y=1; y<=x; y++){
        scanf("%lf%lf", &a, &b);
        c=(pi/b);
        d=sin(c);
        e=(a*d)/(1+d);
        z=(int) e;
        h=(e*1.0)/z;
        if(h!=1)
           printf("Case %d: %.10lf\n",y, e);
        else
           printf("Case %d: %.0lf\n",y, e);
    }
    return 0;
}
