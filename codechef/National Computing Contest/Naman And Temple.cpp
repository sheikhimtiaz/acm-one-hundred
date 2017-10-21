#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int numbers;
        scanf("%d",&numbers);
        int i,j,k,temp,ans=0,prev;
        scanf("%d",&prev);
        for(i=1;i<numbers;i++)
        {
            scanf("%d",&temp);
            ans+= (temp - prev);
            prev=temp;
        }
        printf("%d\n",ans);
    }
    return 0;
}
