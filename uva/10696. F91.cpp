#include<stdio.h>
int func(int a);
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        else
        {
            int x;
            x=func(n);
            printf("f91(%d) = %d\n",n,x);
        }
    }
    return 0;
}
int func(int a)
{
    int x,y;
    if(a>=101)
    {
        x=a-10;
        return x;
    }
    if(a<=100)
    {
        y=func(func(a+11));
        return y;
    }
}
