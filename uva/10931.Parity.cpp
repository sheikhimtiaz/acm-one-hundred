#include<stdio.h>
int main()
{
    unsigned long long int I;
    while(scanf("%ulld",&I)==1)
    {
        if(I==0)
            break;
        else
        {
            int ar[90000];
            int number,i=0,j,sum=0;
            number=I;
            printf("The parity of ");
            while(number>0)
            {
                ar[i]=number%2;
                number=number/2;
                i++;
            }
            for(j=i-1;j>=0;j--)
            {
                printf("%d",ar[j]);
                sum=sum+ar[j];
            }
            printf(" is %d (mod 2).\n",sum);
        }
    }
    return 0;
}
