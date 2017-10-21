#include <sstream>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <complex>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <list>
#include <string.h>
#include <assert.h>
#include <time.h>

using namespace std;

int main ()
{
    int n,d;
    while(scanf("%d %d",&n,&d)!=EOF)
    {
        vector<int> a;
        int i,j,k,temp,fine,sum=0,m;
        for(i=0;i<n;i++)
        {
            scanf("%d",&temp);
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        scanf("%d",&m);
        if(m<=n)
        {
            for(i=0;i<m;i++)
            {
                sum=sum+a[i];
            }
            printf("%d\n",sum);
        }
        else
        {
            for(i=0;i<n;i++)
            {
                sum=sum+a[i];
            }
            fine=(m-n)*d;
            sum=sum-fine;
            printf("%d\n",sum);
        }
    }
    return 0;
}
