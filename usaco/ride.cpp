#include<stdio.h>
#include<string.h>

int main()
{
        char comet[500];
        char group[500];
        char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        int value[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
        int sum1[1000];
        int sum2[1000];
        int n1,n2,i,j,k,l;
        scanf("%s\n",comet);
        scanf("%s",group);
        n1=strlen(comet);
        n2=strlen(group);
        for(i=0;i<n1;i++)
        {
            for(j=0;j<27;j++)
            {
                if(comet[i]==alpha[j])
                {
                    sum1[i]=value[j];
                }
            }
        }
        for(i=0;i<n2;i++)
        {
            for(j=0;j<27;j++)
            {
                if(group[i]==alpha[j])
                {
                    sum2[i]=value[j];
                }
            }
        }
        for(i=0,k=1;i<n1;i++)
        {
            k=k*sum1[i];
        }
        for(i=0,l=1;i<n2;i++)
        {
            l=l*sum2[i];
        }
        if (k%47==l%47)
        {
            printf("\nGO.\n");
        }
        else
        {
            printf("\nSTAY.\n");
        }
    return 0;
}
