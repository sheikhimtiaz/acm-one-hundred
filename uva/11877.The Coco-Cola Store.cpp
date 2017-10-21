#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        else
        {
            int sum=0,rem,remsum=0,div=0;
            Level:
            while(n>0)
            {
                rem=n%3;
                remsum=remsum+rem;
                div=div+n/3;
                n=n/3;
            }
            if(remsum>=3)
            {
                n=remsum;
                remsum=0;
                goto Level;
            }
            if(remsum==2)
            {
                n=remsum+1;
                remsum=0;
                goto Level;
            }
            printf("%d\n",div);
        }
    }
    return 0;
}
