#include<stdio.h>
#include<string.h>
int main()
{
    char a[1002];
    int i,sum;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"0")==0)
            break;

        sum=0;
        for(i=0; a[i]!='\0'; i++)
        {
            sum=sum*10+a[i]-48;
            if(sum<11)
            {
                i++;
                sum=sum*10+a[i]-48;
            }

            if(sum>10)
                sum=sum%11;
        }

        if(sum==0)
            printf("%s is a multiple of 11.\n",a);
        else
            printf("%s is not a multiple of 11.\n",a);

    }
    return 0;
}
