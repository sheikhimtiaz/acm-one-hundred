#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int testcase,i;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++)
    {
        int num,temp,j,sum=0;
        scanf("%d",&num);
        for(j=0;j<num;j++)
        {
            scanf("%d",&temp);
            if(temp<0)
                continue;
            else
                sum+=temp;
        }
        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
