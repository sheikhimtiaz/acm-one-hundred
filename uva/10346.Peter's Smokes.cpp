#include<stdio.h>
int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)==2)
    {
        int sum=0,rem,remsum=0,div=n;
        Level:
        while(n>0)
        {
           rem=n%k;
           remsum=remsum+rem;
           div=div+n/k;
           n=n/k;
        }
        if(remsum>=k)
        {
            n=remsum;
            remsum=0;
            goto Level;
        }
        printf("%d\n",div);
    }
    return 0;
}
