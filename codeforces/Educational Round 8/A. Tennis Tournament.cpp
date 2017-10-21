#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    long long n,b,p;
    cin>> n >> b >> p;
        long long ans=0,temp,i,j,k,ans2;
        ans2=n*p;
        while(n>1)
        {
            if(n%2==1)
            {
                ans+=n/2;
                n=n/2 +1;
            }
            else
            {
                ans+=n/2;
                n=n/2;
            }
        }
        ans=ans*( 2*b + 1);
        cout<< ans<<" "<<ans2<<endl;

    return 0;
}
