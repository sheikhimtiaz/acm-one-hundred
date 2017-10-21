#include<stdio.h>
int numpalcheck(unsigned long long int n);
int power(int a,int b);
int main()
{
    int tc,i;
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        int loopcount=0;
        unsigned long long int number;
        scanf("%ulld",&number);
        while(1)
        {
            if(numpalcheck(number)==0)
            {
                printf("%d %ulld\n",loopcount,number);
                break;
            }
            else
            {
                int mlt=1;
                int tmp=number,j=1,digit=0,reversenum=0;
                while(1)
                {
                    if(tmp/j==0) break;
                    if(tmp/j>0) digit++;
                    j=j*10;
                }
                j=power(10,(digit-1));
                for(; j>0; j=j/10 )
                {
                    reversenum=reversenum+(tmp/j)*mlt;
                    tmp=tmp%j;
                    mlt=mlt*10;
                }
                number=number+reversenum;
            }
            loopcount++;
        }
    }
    return 0;
}
int numpalcheck(unsigned long long int n)
{
    int i,j=1,digit=0,tmp=n,ar=0,palcnt=0;
    int number[5000];
    while(1)
    {
        if(tmp/j==0) break;
        if(tmp/j>0) digit++;
        j=j*10;
    }
    for(i=power(10,digit-1); i>0; i=i/10)
    {
        number[ar]=tmp/i;
        tmp=tmp%i;
        ar++;
    }
    for(i=0; i<ar/2; i++)
    {
        if(number[i]!=number[ar-i-1])
            palcnt++;
    }
    return palcnt;
}
int power(int a,int b)
{
    int i,mlt=1;
    for(i=1;i<=b;i++)
    {
        mlt=mlt*a;
    }
    return mlt;
}
