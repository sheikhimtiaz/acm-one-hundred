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
        int i;
        long long ans,part1=1,part2=1;
        for(i=0;i<num;i++)
        {
            part1 = part1*27;
            part2 = part2*7;
            ans=part1-part2;
            ans=ans%1000000007;
            part1 = part1%1000000007;
            part2 = part2%1000000007;
        }
        if(ans<0) ans=ans+1000000007;
        cout<<ans<<endl;
    }
    return 0;
}
