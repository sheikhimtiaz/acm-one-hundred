#include<stdio.h>
#include<string.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        int j=0,score=0,cnt=0,sum=0,len,l;
        char ar[100];
        scanf("%s",ar);
        len=strlen(ar);
        while(j<len)
        {
            while(1)
            {
                if(score>0)
                {
                    score=0;
                    break;
                }
                if(ar[j]=='o' ||ar[j]=='O')
                {
                    cnt++;
                    score++;
                    sum=sum+cnt;
                }
                else
                {
                    cnt=0;
                    break;
                }
            }
            j++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
