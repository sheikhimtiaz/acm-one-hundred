#include<stdio.h>
#include<string.h>
#include<ctype.h>
int onedigit(int o);

int main()
{
    char name1[30],name2[30];
    while(gets(name1))
    {
        char c;
        gets(name2);
        int i,j,k,l,len1,len2;
        len1=strlen(name1);
        len2=strlen(name2);
        int s1=0,s2=0;
        int sum1=0,sum2=0;
        for(i=0; i<len1; i++)
        {
            if(isalpha(name1[i]))
            {
                if(isupper(name1[i]))
                    sum1=sum1+name1[i]+1-'A';
                else
                    sum1=sum1+name1[i]+1-'a';
            }
        }
        for(j=0; j<len2; j++)
        {
            if(isalpha(name2[j]))
            {
                if(isupper(name2[j]))
                    sum2=sum2+name2[j]+1-'A';
                else
                    sum2=sum2+name2[j]+1-'a';
            }
        }
        s1=onedigit(sum1);
        s2=onedigit(sum2);
        int temp;
        double m,n,per;
        if(s1>s2)
        {
            temp=s1;
            s1=s2;
            s2=temp;
        }
        m=(double)s1;
        n=(double)s2;
        per=(m*100)/n;
        printf("%.2lf %%\n",per);
    }
    return 0;
}
int onedigit(int o)
{
    int x=0,temp=0;
    if(o>9)
    {

        while(o>9)
        {
            temp=o;
            int red=0,blue;
            while(temp>0)
            {
                blue=temp%10;
                red=red+blue;
                temp=temp/10;
            }
            o=red;
        }
    }
    x=o;
    return x;
}
