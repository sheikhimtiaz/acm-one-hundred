#include<stdio.h>
#include<math.h>
int main()
{
    int n,j=1,i;
    while(scanf("%d",&n)==1 && n>=0)
    {
        if(n==0 || n==1) printf("Case %d: 0\n",j);
        for(i=0;i<15;i++)
        {
            if(pow(2,i)<n && n<=pow(2,i+1))
                printf("Case %d: %d\n",j,i+1);
        }
        j++;
    }
    return 0;
}
