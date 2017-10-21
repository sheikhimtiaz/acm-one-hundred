#include<stdio.h>
int summingdigit(int o);
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        else
        {
            int sd;
            sd=summingdigit(n);
            printf("%d\n",sd);
        }
    }
    return 0;
}
int summingdigit(int o)
{
    int x=0,temp=0;
    if(o>9)
    {
        while(o>9)
        {
            temp=o;
            int red=0,blue;
            while(temp>0)
            {
                blue=temp%10;
                red=red+blue;
                temp=temp/10;
            }
            o=red;
        }
    }
    x=o;
    return x;
}
