#include<stdio.h>
int main()
{
    int i=0,numbers[110],j;
    while(1)
    {
        scanf("%d",&numbers[i]);
        if(numbers[i]==0) break;
        i++;
    }
    printf("PERFECTION OUTPUT\n");
    for(j=0; j<i; j++)
    {
        int sum=0,k,l;
        for(k=1; k<numbers[j]; k++)
        {
            if(numbers[j]%k==0)
                sum=sum+k;
        }
        if(sum==numbers[j]) printf("%5d  PERFECT\n",numbers[j]);
        else if(sum<numbers[j]) printf("%5d  DEFICIENT\n",numbers[j]);
        else if(sum>numbers[j]) printf("%5d  ABUNDANT\n",numbers[j]);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
