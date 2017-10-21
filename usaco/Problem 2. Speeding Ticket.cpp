#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    ofstream fout ("speeding.out");
    ifstream fin ("speeding.in");
    int n,m;
    fin>>n>>m;
    int i,j,k,roadunit=1,temp,score;
    int road[101],bessie[101];
    for(i=0; i<n; i++)
    {
        fin>>j>>temp;
        while(j--)
        {
            road[roadunit++]=temp;
        }
    }
    roadunit=1;
    for(i=0; i<m; i++)
    {
        fin>>j>>temp;
        while(j--)
        {
            bessie[roadunit++]=temp;
        }
    }
    for(i=1; i<101; i++)
    {
        if(bessie[i]>road[i])
        {
            score=bessie[i]-road[i];
        }
    }
    fout<<score<<endl;

    return 0;
}
