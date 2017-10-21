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
    int num,ans,temp;
    while(scanf("%d",&num)!=EOF)
    {
        ans=0;
        while(num>0)
        {
            temp=num%2;
            if(temp==1) ans++;
            num=num/2;
        }
        printf("%d\n",ans);
    }
    return 0;
}
