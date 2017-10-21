#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,c,ans,tempMin,tempMax,one,two;
    cin>>n>>a>>b>>c;
    if(n!=0 && n%4==0)
    {
        printf("0\n");
        return 0;
    }
    long long pureN=4-n%4;
    if(pureN%2==0)
    {
        one=a*pureN;
        two=(long long)((b*pureN)/2);
    }
    if(pureN==1)
    {
        one=a*pureN;
        two=c*3;
    }
    if(pureN==3)
    {
        one=a*pureN;
        two=(long long) ((c*pureN)/3);
    }
    ans=min(one,two);

    cout<<ans<<endl;
}
