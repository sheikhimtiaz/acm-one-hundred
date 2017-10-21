#include<stdio.h>
#include<string.h>

int GCD(int i,int j);

int main(void)
{
    int N;
    int G[505][505];
    memset(G,0,sizeof(G));
    while(scanf("%d",&N)==1)
    {
        if(N==0) break;

        else if(1<N && N<501)
        {
            int res=0,i,j;
            for(i=1; i<N; i++)
            {
                for(j=i+1; j<=N; j++)
                {
                    if(G[i][j]==0)
                        G[i][j]=GCD(i,j);
                    res+=G[i][j];
                }
            }
            printf("%d\n",res);
        }
    }
}
int GCD(int i,int j)
{
    if(j==0)
        return i;
    return  GCD(j,i%j);
}
