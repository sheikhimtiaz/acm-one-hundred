#include<stdio.h>
int main()
{
    int i,tc;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        char webs[10][500];
        int relvence[10];
        int j,k,l,mx=0;
        for(j=0;j<10;j++)
        {
            scanf("%s",webs[j]);
            scanf("%d",&relvence[j]);
        }
        for(k=0;k<10;k++)
        {
            if(relvence[k]>mx)
                mx=relvence[k];
        }
        printf("Case #%d:\n",i);
        for(l=0;l<10;l++)
        {
            if(relvence[l]==mx)
                printf("%s\n",webs[l]);
        }
    }
    return 0;
}
