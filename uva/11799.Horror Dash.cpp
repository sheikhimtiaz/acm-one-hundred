#include<stdio.h>
int main()
{
    int tc,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        int ar,j=0,temp=0;
        char c,k;
        while(1)
        {
            scanf("%d%c",&ar,&c);
            if(ar>temp) temp=ar;
            if(c=='\n') break;
            j++;
        }

        printf("Case %d: %d\n",i,temp);
    }
    return 0;
}
