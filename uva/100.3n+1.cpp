#include<stdio.h>
int threenplusone(int n)
{
    int x=0,y;
    y=n;
    x++;
    while(1)
    {
        if(n==1) break;
        if(n%2==0) n=n/2;
        else n=3*n+1;
        x++;
    }
    return x;
}
int main()
{
    int a,b,i,j,k,l,maxLength,currentLength,m,n;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(b<a)
        {
            m=b;
            n=a;
        }
        else
        {
            m=a;
            n=b;
        }
        maxLength=0;
        for(i=m;i<=n;i++)
        {
            currentLength=threenplusone(i);
            if(currentLength>maxLength)
                maxLength=currentLength;
        }

        printf("%d %d %d\n",a,b,maxLength);
    }
    return 0;
}
