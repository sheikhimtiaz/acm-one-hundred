#include<stdio.h>
#include<string.h>
char ar[9000000];
int main()
{
    while(gets(ar))
    {
        int i,len1;
        len1=strlen(ar);
        for(i=0;i<len1;i++)
        {
            ar[i]=ar[i]-7;
        }
        puts(ar);
    }
    return 0;
}
