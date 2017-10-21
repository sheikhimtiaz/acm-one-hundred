#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
long long GCD(long long i,long long j)
{
    if(j==0)
        return i;
    return  GCD(j,i%j);
}
int  main()
{
    int testcase,i=1;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int N1,D1,N2,D2;
        char c,sign;
        scanf("%d%c%c%c%d%c%c%c%d%c%c%c%d",&N1,&c,&c,&c,&D1,&c,&sign,&c,&N2,&c,&c,&c,&D2);
        if(sign=='+')
        {
            long long sum1=(N1*D2 + N2*D1),sum2=(D1*D2);
            printf("%lld/%lld =",sum1,sum2);
            long long gcd=GCD(sum1,sum2);
            sum1=sum1/gcd;
            sum2=sum2/gcd;
            printf("% lld/%lld\n",sum1,sum2);
        }
        if(sign=='-')
        {
            long long sum1=(N1*D2 - N2*D1),sum2=(D1*D2);
            printf("%lld/%lld =",sum1,sum2);
            long long gcd=GCD(sum1,sum2);
            sum1=sum1/gcd;
            sum2=sum2/gcd;
            printf("% lld/%lld\n",sum1,sum2);
        }
        if(sign=='*')
        {
            long long sum1=(N1*N2) ,sum2=(D1*D2);
            printf("%lld/%lld =",sum1,sum2);
            long long gcd=GCD(sum1,sum2);
            sum1=sum1/gcd;
            sum2=sum2/gcd;
            printf("% lld/%lld\n",sum1,sum2);
        }
        if(sign=='/')
        {
            long long sum1= (N1*D2),sum2=(N2*D1);
            printf("%lld/%lld =",sum1,sum2);
            long long gcd=GCD(sum1,sum2);
            sum1=sum1/gcd;
            sum2=sum2/gcd;
            printf("% lld/%lld\n",sum1,sum2);
        }
    }
    return 0;
}
