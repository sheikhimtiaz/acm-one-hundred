#include<stdio.h>
int main()
{
    int tc,i;
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        int n,j,l;
        scanf("%d",&n);
        int numcount[10]= {0,0,0,0,0,0,0,0,0,0};
        for(j=n;j>0;j--)
        {
            int temp,ts;
            ts=j;
            while(ts>0)
            {
                temp=ts%10;
                numcount[temp]++;
                ts=ts/10;
            }
        }
        for(l=0; l<10; l++)
        {
            printf("%d",numcount[l]);
            if(l!=9) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
