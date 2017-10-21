#include<stdio.h>
int main()
{
    int i=1;
    long long number;
    while(scanf("%lld",&number)==1)
    {
        if(number==0) printf("%4d. 0\n",i);
        else
        {
            int k,j=0;
            int div[50]= {100,10,100,100,100,10,100,100,100,10,100,100,100,10,100,100};
            long long divnum[50];
            while(number>0)
            {
                divnum[j]=number%div[j];
                number=number/div[j];
                j++;
            }
            printf("%4d.",i);
            for(k=j-1; k>=0; k--)
            {
                if(divnum[k]>0)
                {
                    printf(" %lld",divnum[k]);
                    if(k==0) break;
                    if(k%4==1) printf(" shata");
                    if(k%4==2) printf(" hajar");
                    if(k%4==3) printf(" lakh");
                }

                if(k==4 || k==8 ||k==12) printf(" kuti");
            }
            printf("\n");
        }
        i++;
    }
    return 0;
}
