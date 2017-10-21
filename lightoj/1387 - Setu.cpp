#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int testcase,cs=1; scanf("%d",&testcase);
    while(testcase--)
    {
        int number,k,i,j,temp,result=0;
        string str;
        scanf("%d",&number);
        printf("Case %d:\n",cs++);
        for(i=0;i<number;i++)
        {
            cin>>str;
            if(str[0]=='d')
            {
                scanf("%d",&temp);
                result+=temp;
            }
            else
            {
                printf("%d\n",result);
            }
        }
    }
    return 0;
}
