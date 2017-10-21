#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==0 && b==0) break;
        if(a>=1 && b>=1)
        {
            int i,j,k,cnt=0;
            for(i=a;i<=b;i++)
            {
                double temp,ini,d;
                temp=sqrt(i);
                ini=(int)temp;
                d=temp-ini;
                if(d==0) cnt++;
            }
            printf("%d\n",cnt);
        }
    }
    return 0;
}
