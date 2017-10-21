#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char ar[50];
    while(scanf("%s",ar)!=EOF)
    {
        int len,sum=0,i,cnt=0,root,j;
        len=strlen(ar);
        for(i=0;i<len;i++)
        {
            if(ar[i]>='a' && ar[i]<='z')
                ar[i]=ar[i]-96;
            else if(ar[i]>='A' && ar[i]<='Z')
                ar[i]=ar[i]-64+26;
            sum=sum+ar[i];
        }
        root=sqrt(sum);
        for(j=1;j<=root;j++)
        {
            if(sum%j==0)
                cnt++;
        }
        if(cnt==1) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
