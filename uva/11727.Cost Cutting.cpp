#include<stdio.h>
int main()
{
    int tc,i;
    scanf("%d",&tc);
    for(i=1; i<=tc; i++)
    {
        int salary[3],temp=0,mx=0,j,k,mn=500000000,l,p;
        for(p=0;p<3;p++)
        {
            scanf("%d",&salary[p]);
        }
        for(j=0;j<3;j++)
        {
            if(salary[j]>mx) mx=salary[j];
        }
        for(k=0;k<3;k++)
        {
            if(salary[k]<mn) mn=salary[k];
        }
        for(l=0;l<3;l++)
        {
            if(salary[l]!=mx && salary[l]!=mn) temp=salary[l];
        }
        printf("Case %d: %d\n",i,temp);
    }
    return 0;
}
