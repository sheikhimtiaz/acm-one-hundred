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
#define MAX 1000000000100
using namespace std;

int  main()
{
    long long n;
    while(cin>>n)
    {
        if(n<4)
        {
            cout<<n<<endl;
            continue;
        }
        long long temp,i=1,rootn,divsize,j,roottemp,k,anscount;
        vector<long long> divisor;
        rootn=sqrt(n);
        while(i<=rootn)
        {
            if(n%i==0)
            {
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
            i++;
        }
        sort(divisor.begin(),divisor.end());
        divsize=divisor.size();
        for(j=divsize-1;j>=0;j--)
        {
            anscount=0;
            temp=divisor[j];
            roottemp=sqrt(temp);
            for(k=2;k<=roottemp;k++)
            {
                if(temp%(k*k)==0) anscount++;
            }
            if(!anscount)
            {
                cout<<temp<<endl;
                break;
            }
        }
    }
    return 0;
}
