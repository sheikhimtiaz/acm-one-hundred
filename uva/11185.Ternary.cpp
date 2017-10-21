#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0) break;
        if(n==0) printf("0\n");
        else
        {
            int i=0,j;
            int ternary[50];
            while(n>0)
            {
                ternary[i]=n%3;
                i++;
                n=n/3;
            }
            for(j=i-1;j>=0;j--)
            {
                printf("%d",ternary[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
