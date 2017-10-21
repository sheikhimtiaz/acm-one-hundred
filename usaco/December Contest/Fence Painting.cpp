#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        if(b<c  ||  d<a )
        {
            printf("%d\n",(b-a)+(d-c));
        }
        else if(a<c)
        {
            if(b<d)
            {
                printf("%d\n",d-a);
            }
            else
            {
                printf("%d\n",b-a);
            }
        }
        else
        {
            if(b<d)
            {
                printf("%d\n",d-c);
            }
            else
            {
                printf("%d\n",b-c);
            }
        }
    }
    return 0;
}
