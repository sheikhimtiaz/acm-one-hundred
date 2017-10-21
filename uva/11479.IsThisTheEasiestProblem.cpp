#include<stdio.h>
int main()
{
    int i,tc;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        long long int x,y,z;
        scanf("%lld %lld %lld",&x,&y,&z);
        if(x<=0 || y<=0 || z<=0)
            printf("Case %d: Invalid\n",i);
        else if(x+y<=z || x+z<=y || y+z<=x)
            printf("Case %d: Invalid\n",i);
        else
        {
            if(x==y && y==z) printf("Case %d: Equilateral\n",i);
            else if(x==y || y==z || x==z) printf("Case %d: Isosceles\n",i);
            else if(x!=y && y!=z && z!=x) printf("Case %d: Scalene\n",i);
        }
    }
    return 0;
}
