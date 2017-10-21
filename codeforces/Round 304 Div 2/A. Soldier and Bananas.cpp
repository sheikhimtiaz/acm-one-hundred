#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int  main()
{
    long long n,k,w;
    while(scanf("%lld %lld %lld",&k,&n,&w)!=EOF)
    {
        long long i,j,total=0,temp=0;
        for(i=1;i<=w;i++)
        {
            temp=i*k;
            total=total+temp;
        }
        if(total<=n)
        {
            printf("0\n");
            continue;
        }
        else
        {
            temp=total-n;
            printf("%lld\n",temp);
        }
    }
    return 0;
}
