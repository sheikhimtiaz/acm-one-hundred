#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main ()
{
    int NC,Case=1;
    while(scanf("%d",&NC)==1)
    {
        if(NC==0) break;
        map<int,int>mymap;
        vector<int> G[100];
        int x,y,Assign=1,temp1,temp2;
        for(int i=0;i<NC;i++)
        {
            scanf("%d%d",&x,&y);
            if(mymap.find(x)==mymap.end())
            {
                mymap[x]=Assign;
                Assign++;
            }
            if(mymap.find(y)==mymap.end())
            {
                mymap[y]=Assign;
                Assign++;
            }
            temp1=mymap[x];
            temp2=mymap[y];
            G[temp1].push_back(temp2);
            G[temp2].push_back(temp1);
        }
        while(scanf("%d%d",&x,&y)==2)
        {
            if(x==0 && y==0) break;
            int x1=x,y1=y;
            queue<int> Q;
            int visited[100]= {0},level[100];
            temp1=mymap[x];
            visited[temp1]=1;
            level[temp1]=0;
            int last,Count=0;
            Q.push(temp1);
            while(!Q.empty())
            {
                int u=Q.front();
                for(int i=0; i<G[u].size(); i++)
                {
                    int v=G[u][i];
                    if(!visited[v])
                    {
                        level[v]=level[u]+1;
                        if(level[v]<=y)
                            Count++;
                        visited[v]=1;
                        Q.push(v);
                    }
                }
                Q.pop();
            }
            int nodeC=Assign-Count-2;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",Case++,nodeC,x1,y);
        }
    }
    return 0;
}
