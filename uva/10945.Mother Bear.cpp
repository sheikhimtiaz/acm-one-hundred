#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[90000];
    while(gets(str))
    {
        if(strcmp(str,"DONE")==0) break;
        else
        {
            char tst[90000];
            int len1,len2,i,j=0,k,cnt=0;
            len1=strlen(str);
            for(i=0;i<len1;i++)
            {
                if(isalpha(str[i]))
                {
                    if(isupper(str[i]))
                    {
                        tst[j]=str[i]+32;
                        j++;
                    }
                    else {
                    tst[j]=str[i];
                    j++;}
                }
            }
            len2=strlen(tst);
            for(k=0;k<len2/2;k++)
            {
                if(tst[k]!=tst[len2-1-k])
                    cnt++;
            }
            if(cnt==0) printf("You won't be eaten!\n");
            else printf("Uh oh..\n");
            memset(tst,'\0',90000);
        }
    }
    return 0;
}
