#include<stdio.h>
int main()
{
    int tc,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        int n,j,k,l,tmp;
        scanf("%d",&n);
        int player[50000];
        for(j=0;j<n;j++)
        {
            scanf("%d",&player[j]);
        }
        tmp=n/2;
        printf("Case %d: %d\n",i,player[tmp]);
    }
    return 0;
}
