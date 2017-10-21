#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <ctype.h>
#include <math.h>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int Distn[100005];
int ar[100005];
int main()
{
    int n,m,t,tc,i,j;
    while(scanf("%d %d",&n,&m)==2)
    {
        vector <int> NumArr;
        for(i=0;i<100005;i++)
        {
            ar[i]=0;
            Distn[i]=0;
        }
        int o=n;
        while(o>0)
        {
            scanf("%d",&t);
            NumArr.push_back(t);
            o--;
        }
        Distn[n-1]=1;
        int temp=NumArr[n-1];
        ar[temp]++;
        for(i=n-2;i>=0;i--)
        {
            temp=NumArr[i];
            if(ar[temp]==0)
            {
                ar[temp]++;
                Distn[i]=Distn[i+1]+1;
            }
            else
            {
                Distn[i]=Distn[i+1];
            }
        }
        while(m>0)
        {
            scanf("%d",&tc);
            printf("%d\n",Distn[tc-1]);
            m--;
        }
    }
	return 0;
}
