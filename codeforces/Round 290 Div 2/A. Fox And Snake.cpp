#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main ()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int i,j,k,snake=1,dotline1=1,dotline2=1,d1count=0,d2count=0;
        for(i=0;i<n;i++)
        {
            if(snake)
            {
                for(j=0;j<m;j++)
                    printf("#");
                printf("\n");
                snake=0;
            }
            else if(dotline1)
            {
                for(j=0;j<m-1;j++)
                    printf(".");
                printf("#\n");
                snake=1;
                dotline1=0;
            }
            else if(dotline2)
            {
                printf("#");
                for(j=0;j<m-1;j++)
                    printf(".");
                printf("\n");
                snake=1;
                dotline1=1;
            }
        }
    }
    return 0;
}
