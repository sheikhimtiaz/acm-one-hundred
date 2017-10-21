#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define pb(x) push_back(x)
#define pi 2*acos(0.0)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;

int  main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int i,sum=0,a,p,mini=150;
        for(i=0;i<num;i++)
        {
            scanf("%d%d",&a,&p);
            if(p<mini)
            {
                sum = sum + a*p;
                mini=p;
            }
            else
            {
                sum= sum + a*mini;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
