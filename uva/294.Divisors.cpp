#include<stdio.h>
#include<math.h>
long long thefunction(long long n);
int main()
{
    int tc,i;
    scanf("%d",&tc);
    while(tc--)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long l,m,n,nofd,number,numberofdivisor=0;
        if(a>b)
        {
            n=a;
            m=b;
        }
        else
        {
            m=a;
            n=b;
        }
        number=m;
        while(number<=n)
        {

            nofd=thefunction(number);
            if(numberofdivisor<nofd)
            {
                numberofdivisor=nofd;
                l=number;
            }
            number++;
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,l,numberofdivisor);
    }
    return 0;
}
long long thefunction(long long n)
{
    long long i=1,cnt=0;
    long long rootnum=sqrt(n);
    while(i<=rootnum)
    {
        if(n%i==0)
        {
            cnt+=2;
        }
        i++;
    }
    if(rootnum*rootnum==n)
        cnt--;
    return cnt;
}
