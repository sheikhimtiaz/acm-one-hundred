#include<stdio.h>
#include<string.h>
int main()
{
    int tc,balance=0,k,i,j;
    char act1[10]="donate";
    char act2[10]="report";
    char test1[20],test2[20];
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        balance=0;
        printf("Case %d:\n",i+1);
        int baal,j;
        scanf("%d",&baal);
        for(j=0; j<baal; j++)
        {
            scanf("%s",test1);
            if(strcmp(test1,act1)==0)
            {
                scanf("%d",&k);
                balance=balance+k;
            }
            if(strcmp(test1,act2)==0)
            {
                printf("%d\n",balance);
            }
        }
    }
    return 0;
}
