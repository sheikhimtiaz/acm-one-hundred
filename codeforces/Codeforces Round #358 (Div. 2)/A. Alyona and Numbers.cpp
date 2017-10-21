#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long n,m;
    cin>>n>>m;
    long long i,ans,toAdd,temp,anotherTemp,secondMulti;
    ans=0;
    for(i=1;i<5;i++)
    {
        toAdd=0;
        temp=5-i;
        if(n>=temp)
            toAdd++;
        anotherTemp=n-temp;
        anotherTemp/=5;
        toAdd+=anotherTemp;
        secondMulti=m/5;
        if(m%5>=i)
            secondMulti++;
        ans+=(toAdd*secondMulti);
    }
    n=n/5;
    m=m/5;
    ans+=(n*m);
    cout<<ans<<endl;
    return 0;
}
