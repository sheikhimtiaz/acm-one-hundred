#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007
using namespace std;

int main ()
{
    long long n,x,m,t,z;
    scanf("%lld",&t);
    while(t--)
    {
        long long i,j;
        scanf("%lld%lld",&n,&m);
        char a[n][m];
        long long horsum[n];
        for(i=0;i<n;i++)
        {
            horsum[i]=0;
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                horsum[i]=(horsum[i]*2+(a[i][j]-48))%modu;
            }
        }
        sort(horsum,horsum+n);
        int flag =0;
        for(i=0;i<(n-1);i++)
        {
            if(horsum[i]==horsum[i+1])
                flag++;
        }
        if(flag==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
