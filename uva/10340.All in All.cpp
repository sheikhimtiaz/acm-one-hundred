#include<stdio.h>
#include<string.h>
int main()
{
    char ar1[1039999],ar2[1039999];
    char c;
    while(scanf("%s %s",ar1,ar2)!=EOF)
    {
        int len1,len2,i=0,j=0,k,l,ssq=0;
        len1=strlen(ar1);
        len2=strlen(ar2);
        while(i<len1)
        {
            while(1)
            {
                if(j==len2) break;
                if(ar1[i]==ar2[j])
                {
                    ssq++;
                    i++;
                    j++;
                    break;
                }
                else
                {
                    j++;
                }
            }
            if(j==len2) break;
        }
        if(ssq==len1)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
        memset(ar1,'\0',sizeof(ar1));
        memset(ar2,'\0',sizeof(ar2));
    }
    return 0;
}
