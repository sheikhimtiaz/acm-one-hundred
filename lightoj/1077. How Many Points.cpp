#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int n,testcase,i;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++)
    {
        long long x1,y1,x2,y2,gcd,down,j,mx,mn,result,dx,dy;
        scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
		dx = abs(x2 - x1);
		dy = abs(y2 - y1);
        if(dx == 0 and dy == 0)
        {
			printf("Case %d: 1\n",i+1);
			continue;
		}
		if(dx == 0)
        {
			printf("Case %d: %lld\n",i+1, dy+1 );
			continue;
		}
		if(dy == 0)
        {
			printf("Case %d: %lld\n",i+1, dx+1 );
			continue;
		}
		gcd = __gcd(dx, dy);
		down = dy / gcd;
		result = 1 + (dy / down);
        printf("Case %d: %lld\n",i+1,result);
    }
    return 0;
}
