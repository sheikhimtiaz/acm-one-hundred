#include<stdio.h>
#include<string.h>
int main()
{
    int grp;
    while(scanf("%d",&grp)==1)
    {
        if(grp==0) break;
        else
        {
            int len,i,j,k,grplen,last,first,cnt=0;
            char ar[200];
            scanf("%s",ar);
            len=strlen(ar);
            grplen=len/grp;
            last = grplen-1;
            first = 0;
            while(1)
            {
                if(cnt==len) break;
                for(i=last;i>=first;i--)
                {
                    printf("%c",ar[i]);
                    cnt++;
                }
                first=last+1;
                last=last+grplen;
            }
            printf("\n");
        }
    }
    return 0;
}
